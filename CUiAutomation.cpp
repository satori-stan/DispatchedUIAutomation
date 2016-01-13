// -------------------------------------------------------------
// CUiAutomation.cpp
//
// Implementation of the IDispatch compatible version of the
// UiAutomation class
//
// Copyright (c) 2015 Trabajos de Diseño e Ingeniería S.A. de C.V.
//
// This source is subject to the Microsoft Public License.
// See http://www.microsoft.com/en-us/openness/resources/licenses.aspx#MPL.
// All other rights reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
// EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND / OR FITNESS FOR A PARTICULAR PURPOSE.
// -------------------------------------------------------------

// System includes
#include <windows.h>
#include <ole2.h>
#include <strsafe.h>
#include <vector>
#include "comutil.h"
// Project includes
#include "CUiAutomation.h" 
#include "CUiAutomationElement.h" 
#include "CUiAutomationTreeWalker.h" 

#include "CMouseControl.h" 

//#include "CUiAutomationCondition.h" 
#include "Conditions/CUiAutomationPropertyCondition.h" 
#include "Conditions\\CUiAutomationAndCondition.h" 
#include "Conditions\\CUiAutomationOrCondition.h" 
#include "Conditions\\CUiAutomationBoolCondition.h" 
#include "Conditions\\CUiAutomationNotCondition.h" 

UiAutomation::UiAutomation() : m_cRef(1), m_ptinfo(NULL), m_pAutomation(NULL), m_pMouse(NULL)
{
	// Initialize COM and create the main Automation object
	CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);

	HRESULT hr = CoCreateInstance(__uuidof(CUIAutomation), NULL,
		CLSCTX_INPROC_SERVER, __uuidof(IUIAutomation),
		(void**)&m_pAutomation);

	if (FAILED(hr))
		throw 1;
}

UiAutomation::~UiAutomation()
{
	m_pMouse->Release();
	m_pAutomation->Release();
	CoUninitialize();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
UiAutomation::QueryInterface(REFIID riid, void **ppv)
{
	HRESULT hr = S_OK;

	if (IsEqualIID(IID_IUnknown, riid))
	{
		*ppv = static_cast<IUnknown *>(this);
	}
	else if (IsEqualIID(IID_IDispatch, riid)) // For implementing IDispatch
	{
		*ppv = static_cast<IDispatch *>(this);
	}
	else if (IsEqualIID(IID_IDispatchedUiAutomation, riid))
	{
		*ppv = static_cast<IDispatchedUiAutomation *>(this);
	}
	else
	{
		hr = E_NOINTERFACE;
		*ppv = NULL;
	}

	if (*ppv)
	{
		AddRef();
	}

	return hr;
}

// Increase the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
UiAutomation::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
UiAutomation::Release()
{
	ULONG cRef = InterlockedDecrement(&m_cRef);
	if (0 == cRef)
	{
		delete this;
	}

	return cRef;
}

#pragma endregion /* IUnknown */

#pragma region IDispatch

// This method retrieves the number of type information interfaces that an 
// object provides, either 0 or 1. If the object provides type information, 
// this *pctinfo is 1; otherwise the *pctinfo is 0.
IFACEMETHODIMP 
UiAutomation::GetTypeInfoCount(UINT *pctinfo)
{
	if (pctinfo == NULL)
	{
		return E_POINTER;
	}
	*pctinfo = 1;
	return S_OK;
}

// This method retrieves the type information for an object.
IFACEMETHODIMP 
UiAutomation::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
{
	HRESULT hr = S_OK;
	*pptinfo = NULL;

	if (itinfo != 0)
	{
		return ResultFromScode(DISP_E_BADINDEX);
	}

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomation, 0);
	}

	if (SUCCEEDED(hr))
	{
		// AddRef and return pointer to cached typeinfo.
		m_ptinfo->AddRef();
		*pptinfo = m_ptinfo;
	}

	return hr;
}

// Helper function to load the type info.
HRESULT 
UiAutomation::LoadTypeInfo(ITypeInfo **pptinfo,
	const CLSID& libid,
	const CLSID& iid,
	LCID lcid)
{
	HRESULT hr;
	LPTYPELIB ptlib = NULL;
	LPTYPEINFO ptinfo = NULL;

	*pptinfo = NULL;

	// Load the type library.
	hr = LoadRegTypeLib(libid, 1, 0, lcid, &ptlib);
	if (SUCCEEDED(hr))
	{
		// Get type information for interface of the object.
		hr = ptlib->GetTypeInfoOfGuid(iid, &ptinfo);
		if (SUCCEEDED(hr))
		{
			*pptinfo = ptinfo;
		}

		ptlib->Release();
	}

	return hr;
}

// Maps a single member and an optional set of argument names to a 
// corresponding set of integer DISPIDs, which can be used on subsequent 
// calls to IDispatch::Invoke. The dispatch function DispGetIDsOfNames 
// provides a standard implementation of GetIDsOfNames.
IFACEMETHODIMP 
UiAutomation::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomation, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispGetIDsOfNames(m_ptinfo, rgszNames, cNames, rgdispid);
	}

	return hr;
}

// Provides access to properties and methods exposed by an object. The 
// dispatch function DispInvoke Function provides a standard implementation 
// of IDispatch::Invoke.
IFACEMETHODIMP 
UiAutomation::Invoke(DISPID dispidMember,
	REFIID riid,
	LCID lcid,
	WORD wFlags,
	DISPPARAMS *pdispParams,
	VARIANT *pvarResult,
	EXCEPINFO *pExcepInfo,
	UINT *puArgErr)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomation, 0);
	}

	// TODO: Improve error reporting 
	// http://www.drdobbs.com/idispatch-automation-for-com-components/184416392
	// http://stackoverflow.com/questions/172942/implementation-of-isupporterrorinfo-what-does-it-mean
	// TODO: Learn to handle variants
	// http://thrysoee.dk/InsideCOM+/ch05b.htm
	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomation

#pragma region Properties

STDMETHODIMP 
UiAutomation::get_ControlViewWalker(IDispatchedUiAutomationTreeWalker **walker){
	IUIAutomationTreeWalker * tw;
	HRESULT hr = m_pAutomation->get_ControlViewWalker(&tw);

	if (SUCCEEDED(hr))
		*walker = new CUiAutomationTreeWalker(tw);

	if (*walker == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::get_ContentViewWalker(IDispatchedUiAutomationTreeWalker **walker){
	IUIAutomationTreeWalker * tw;
	HRESULT hr = m_pAutomation->get_ContentViewWalker(&tw);

	if (SUCCEEDED(hr))
		*walker = new CUiAutomationTreeWalker(tw);

	if (*walker == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::get_RawViewWalker(IDispatchedUiAutomationTreeWalker **walker){
	IUIAutomationTreeWalker * tw;
	HRESULT hr = m_pAutomation->get_RawViewWalker(&tw);

	if (SUCCEEDED(hr))
		*walker = new CUiAutomationTreeWalker(tw);

	if (*walker == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP
UiAutomation::ConvertUnknownContitionToDispatchCondition(IUIAutomationCondition * condition, IDispatchedUiAutomationCondition ** newCondition){
	if (IUIAutomationAndCondition * c1 = dynamic_cast<IUIAutomationAndCondition *>(condition)){
		*newCondition = new CUiAutomationAndCondition(c1);
	}
	else if (IUIAutomationOrCondition * c2 = dynamic_cast<IUIAutomationOrCondition *>(condition)){
		*newCondition = new CUiAutomationOrCondition(c2);
	}
	else if (IUIAutomationBoolCondition * c3 = dynamic_cast<IUIAutomationBoolCondition *>(condition)){
		*newCondition = new CUiAutomationBoolCondition(c3);
	}
	else if (IUIAutomationNotCondition * c4 = dynamic_cast<IUIAutomationNotCondition *>(condition)){
		*newCondition = new CUiAutomationNotCondition(IID_IUIAutomationNotCondition, c4);
	}
	else if (IUIAutomationPropertyCondition * c5 = dynamic_cast<IUIAutomationPropertyCondition *>(condition)){
		*newCondition = new CUiAutomationPropertyCondition(c5);
	}
	else
	{
		return E_FAIL;
	}
	if (*newCondition == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return S_OK;
	}
}

STDMETHODIMP 
UiAutomation::get_RawViewCondition(IDispatchedUiAutomationCondition **cond){
	IUIAutomationCondition * c;
	HRESULT hr = m_pAutomation->get_RawViewCondition(&c);

	if (SUCCEEDED(hr))
	{
		// TODO: Wrap in try catch? It fails but there is inherently no condition to a raw view...
		return ConvertUnknownContitionToDispatchCondition(c, cond);
	}

	return hr;
}

STDMETHODIMP 
UiAutomation::get_ControlViewCondition(IDispatchedUiAutomationCondition **cond){
	IUIAutomationCondition * c;
	HRESULT hr = m_pAutomation->get_ControlViewCondition(&c);

	if (SUCCEEDED(hr))
	{
		return ConvertUnknownContitionToDispatchCondition(c, cond);
	}

	return hr;
}

STDMETHODIMP 
UiAutomation::get_ContentViewCondition(IDispatchedUiAutomationCondition **cond){
	IUIAutomationCondition * c;
	HRESULT hr = m_pAutomation->get_ContentViewCondition(&c);

	if (SUCCEEDED(hr))
	{
		return ConvertUnknownContitionToDispatchCondition(c, cond);
	}

	return hr;
}

STDMETHODIMP 
UiAutomation::get_ProxyFactoryMapping(IUIAutomationProxyFactoryMapping **proxy){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::get_ReservedNotSupportedValue(IUnknown **unk){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::get_ReservedMixedAttributeValue(IUnknown **unk){
	return E_PENDING;
}

#pragma endregion /* Properties */

#pragma region Methods

STDMETHODIMP 
UiAutomation::CompareElements(IDispatchedUiAutomationElement * el1, IDispatchedUiAutomationElement * el2, BOOL * areSame){
	HRESULT hr = m_pAutomation->CompareElements(((UiAutomationElement*)el1)->m_pElement, ((UiAutomationElement*)el2)->m_pElement, areSame);
	return hr;
}

STDMETHODIMP 
UiAutomation::CompareRuntimeIds(SAFEARRAY * a1, SAFEARRAY * a2, BOOL * areSame){
	// XXX: Might have to sanitize array first
	return m_pAutomation->CompareRuntimeIds(a1, a2, areSame);
}

STDMETHODIMP 
UiAutomation::GetRootElement(IDispatchedUiAutomationElement ** root){
	// Get the object from base
	IUIAutomationElement * tmp;
	HRESULT hr = m_pAutomation->GetRootElement(&tmp);

	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*root = new UiAutomationElement(tmp);
	if (*root == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}
/*
static BOOL CALLBACK EnumWindowsProc(
	__in  HWND hWnd,
	__in  LPARAM lParam
	) {

	if (!hWnd)
		return TRUE;

	if (!::IsWindowVisible(hWnd))
		return TRUE;

	// Repurpose the parameter
	std::vector<HWND>* data = reinterpret_cast<std::vector<HWND>*>(lParam);
	data->push_back(hWnd);
	//PopAll
	return TRUE;
}

STDMETHODIMP 
UiAutomation::ElementFromWindow(BSTR wName, IDispatchedUiAutomationElement ** el){
	HRESULT hr;
	//int iTmp;
	//HWND h = (HWND)(LONG_PTR)lParam;
	BSTR sTmp;
	BOOL bIsMatch = FALSE;
	std::vector<HWND> data;
	// Our callback will return the window handles
	EnumWindows(&EnumWindowsProc, reinterpret_cast<LPARAM>(&data));

	IUIAutomationElement * tmp = NULL;

	for (std::vector<HWND>::iterator it = data.begin(); it != data.end(); ++it) {
		hr = m_pAutomation->ElementFromHandle(*it, &tmp);
		if (SUCCEEDED(hr)){
			//BSTR sTmp = ::SysAllocString(L"Some text");
			hr = tmp->get_CurrentName(&sTmp);
			if (SUCCEEDED(hr) && wName && lstrcmpW(sTmp, wName) == 0){
				bIsMatch = TRUE;
			}
			::SysFreeString(sTmp);
		}

		if (bIsMatch){
			break;
		}
	}

	std::vector<HWND>().swap(data);

	if (!bIsMatch){
		tmp->Release();
		return S_FALSE;
	}

	*el = new UiAutomationElement(tmp);

	return hr;
}
*/

STDMETHODIMP
UiAutomation::ElementFromHandle(ULONG hwnd, IDispatchedUiAutomationElement ** el){
	IUIAutomationElement * tmp;
	HRESULT hr = m_pAutomation->ElementFromHandle((HWND)hwnd, &tmp);
	
	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*el = new UiAutomationElement(tmp);
	if (*el == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::ElementFromPoint(POINT, IUIAutomationElement **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::GetFocusedElement(IDispatchedUiAutomationElement ** el){
	// Get the object from base
	IUIAutomationElement * tmp;
	HRESULT hr = m_pAutomation->GetFocusedElement(&tmp);

	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*el = new UiAutomationElement(tmp);

	if (*el == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::GetRootElementBuildCache(IUIAutomationCacheRequest *, IUIAutomationElement **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::ElementFromHandleBuildCache(UIA_HWND, IUIAutomationCacheRequest *, IUIAutomationElement **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::ElementFromPointBuildCache(POINT, IUIAutomationCacheRequest *, IUIAutomationElement **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::GetFocusedElementBuildCache(IUIAutomationCacheRequest *, IUIAutomationElement **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateTreeWalker(IDispatchedUiAutomationCondition * condition, IDispatchedUiAutomationTreeWalker ** treeWalker){
	IUIAutomationCondition * c;
	IUIAutomationTreeWalker * tw;
	HRESULT hr = condition->GetBase(&c);
	
	if (SUCCEEDED(hr))
	{
		hr = m_pAutomation->CreateTreeWalker(c, &tw);
		if (FAILED(hr))
			return hr;

		if (tw == NULL)
			return E_POINTER;

		*treeWalker = new CUiAutomationTreeWalker(tw);
	}

	if (*treeWalker == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::CreateCacheRequest(IUIAutomationCacheRequest **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateTrueCondition(IDispatchedUiAutomationBoolCondition ** newCondition){
	IUIAutomationBoolCondition * tmp;
	HRESULT hr = m_pAutomation->CreateTrueCondition((IUIAutomationCondition **)&tmp);

	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*newCondition = new CUiAutomationBoolCondition(tmp);

	if (*newCondition == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::CreateFalseCondition(IDispatchedUiAutomationBoolCondition ** newCondition){
	IUIAutomationBoolCondition * tmp;
	HRESULT hr = m_pAutomation->CreateFalseCondition((IUIAutomationCondition **)&tmp);

	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*newCondition = new CUiAutomationBoolCondition(tmp);

	if (*newCondition == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::CreatePropertyCondition(PROPERTYID propertyId, VARIANT value, IDispatchedUiAutomationCondition ** newCondition){
	IUIAutomationPropertyCondition * tmp;
	HRESULT hr = m_pAutomation->CreatePropertyCondition(propertyId, value, (IUIAutomationCondition **)&tmp);

	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*newCondition = new CUiAutomationPropertyCondition(tmp);
	if (*newCondition == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::CreatePropertyConditionEx(PROPERTYID propertyId, VARIANT value, PropertyConditionFlags flags, IDispatchedUiAutomationCondition ** newCondition){
	IUIAutomationPropertyCondition * tmp;
	HRESULT hr = m_pAutomation->CreatePropertyConditionEx(propertyId, value, flags, (IUIAutomationCondition **)&tmp);

	if (FAILED(hr))
		return hr;

	if (tmp == NULL)
		return E_POINTER;

	*newCondition = new CUiAutomationPropertyCondition(tmp);

	if (*newCondition == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return hr;
	}
}

STDMETHODIMP 
UiAutomation::CreateAndCondition(IDispatchedUiAutomationCondition * condition1, IDispatchedUiAutomationCondition * condition2, IDispatchedUiAutomationCondition ** newCondition){
	HRESULT hr;
	IUIAutomationCondition * c1;
	IUIAutomationCondition * c2;
	IUIAutomationAndCondition * tmp;

	hr = condition1->GetBase(&c1);

	if (FAILED(hr))
		return hr;

	hr = condition2->GetBase(&c2);

	if (FAILED(hr))
		return hr;

	hr = m_pAutomation->CreateAndCondition(c1, c2, (IUIAutomationCondition **)&tmp);

	if (SUCCEEDED(hr) && tmp != NULL){
		*newCondition = new CUiAutomationAndCondition(tmp);
		if (*newCondition == NULL)
		{
			return E_POINTER;
		}
		else
		{
			return hr;
		}
	}
	else if (SUCCEEDED(hr)){
		return S_FALSE;
	}
	else {
		return hr;
	}

}

STDMETHODIMP 
UiAutomation::CreateAndConditionFromArray(SAFEARRAY *, IDispatchedUiAutomationCondition **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateAndConditionFromNativeArray(IUIAutomationCondition **, int, IUIAutomationCondition **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateOrCondition(IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateOrConditionFromArray(SAFEARRAY *, IDispatchedUiAutomationCondition **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateOrConditionFromNativeArray(IUIAutomationCondition **, int, IUIAutomationCondition **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateNotCondition(IDispatchedUiAutomationCondition * condition, IDispatchedUiAutomationCondition ** newCondition){
	HRESULT hr;
	IID * refId = (IID *)malloc(sizeof(IID));
	IUIAutomationCondition * pBase;
	IUIAutomationCondition * pNot;

	if (SUCCEEDED(condition->GetBaseType(refId)) && SUCCEEDED(condition->GetBase(&pBase)))
	{
		hr = m_pAutomation->CreateNotCondition(pBase, &pNot);
		if (SUCCEEDED(hr))
		{
			*newCondition = new CUiAutomationNotCondition(*refId, (IUIAutomationNotCondition *)pNot);
			if (*newCondition == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return S_OK;
			}
		}
		else 
		{
			return hr;
		}
	}
	else
	{
		return E_FAIL;
	}
}

STDMETHODIMP 
UiAutomation::AddAutomationEventHandler(EVENTID, IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::RemoveAutomationEventHandler(EVENTID, IUIAutomationElement *, IUIAutomationEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::AddPropertyChangedEventHandlerNativeArray(IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationPropertyChangedEventHandler *, PROPERTYID *, int){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::AddPropertyChangedEventHandler(IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationPropertyChangedEventHandler *, SAFEARRAY *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::RemovePropertyChangedEventHandler(IUIAutomationElement *, IUIAutomationPropertyChangedEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::AddStructureChangedEventHandler(IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationStructureChangedEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::RemoveStructureChangedEventHandler(IUIAutomationElement *, IUIAutomationStructureChangedEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::AddFocusChangedEventHandler(IUIAutomationCacheRequest *, IUIAutomationFocusChangedEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::RemoveFocusChangedEventHandler(IUIAutomationFocusChangedEventHandler *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::RemoveAllEventHandlers(void){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::IntNativeArrayToSafeArray(int *, int, SAFEARRAY **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::IntSafeArrayToNativeArray(SAFEARRAY *, int **, int *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::RectToVariant(RECT, VARIANT *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::VariantToRect(VARIANT, RECT *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::SafeArrayToRectNativeArray(SAFEARRAY *, RECT **, int *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CreateProxyFactoryEntry(IUIAutomationProxyFactory *, IUIAutomationProxyFactoryEntry **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::GetPropertyProgrammaticName(PROPERTYID, BSTR *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::GetPatternProgrammaticName(PATTERNID, BSTR *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::PollForPotentialSupportedPatterns(IUIAutomationElement *, SAFEARRAY **, SAFEARRAY **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::PollForPotentialSupportedProperties(IUIAutomationElement *, SAFEARRAY * *, SAFEARRAY * *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::CheckNotSupported(VARIANT, BOOL *){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::ElementFromIAccessible(IAccessible *, int, IUIAutomationElement **){
	return E_PENDING;
}

STDMETHODIMP 
UiAutomation::ElementFromIAccessibleBuildCache(IAccessible *, int, IUIAutomationCacheRequest *, IUIAutomationElement **){
	return E_PENDING;
}

#pragma endregion /* Methods */

#pragma endregion /* IUIAutomation */

STDMETHODIMP 
UiAutomation::get_Mouse(IDispatchedMouseControl ** controller){
	// TODO: Improve result
	if (m_pMouse == NULL){
		m_pMouse = new CMouseControl();
	}
	m_pMouse->AddRef();
	*controller = m_pMouse;
	if (*controller == NULL)
	{
		return E_POINTER;
	}
	else
	{
		return S_OK;
	}
}

/*
STDMETHODIMP 
UiAutomation::get_Nothing(VARIANT *retVal){
	V_VT(retVal) = VT_DISPATCH;
	V_DISPATCH(retVal) = NULL;
	return S_OK;
}
*/