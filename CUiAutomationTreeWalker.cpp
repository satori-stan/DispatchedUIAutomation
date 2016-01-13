// System includes
#include <windows.h>
#include <ole2.h>
//#include <strsafe.h>
//#include <vector>
#include "comutil.h"
// Project includes
#include "CUiAutomationTreeWalker.h" 
#include "CUiAutomationElement.h" 

//#include "CUiAutomationCondition.h" 
#include "Conditions\\CUiAutomationPropertyCondition.h" 
#include "Conditions\\CUiAutomationAndCondition.h" 
#include "Conditions\\CUiAutomationOrCondition.h" 
#include "Conditions\\CUiAutomationBoolCondition.h" 
#include "Conditions\\CUiAutomationNotCondition.h" 

CUiAutomationTreeWalker::CUiAutomationTreeWalker(IUIAutomationTreeWalker * tw) : m_cRef(1), m_ptinfo(NULL), m_pTreeWalker(tw){}

CUiAutomationTreeWalker::~CUiAutomationTreeWalker()
{
	m_pTreeWalker->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CUiAutomationTreeWalker::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedUiAutomationTreeWalker, riid))
	{
		*ppv = static_cast<IDispatchedUiAutomationTreeWalker *>(this);
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
CUiAutomationTreeWalker::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CUiAutomationTreeWalker::Release()
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
CUiAutomationTreeWalker::GetTypeInfoCount(UINT *pctinfo)
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
CUiAutomationTreeWalker::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationTreeWalker, 0);
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
CUiAutomationTreeWalker::LoadTypeInfo(ITypeInfo **pptinfo,
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
CUiAutomationTreeWalker::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationTreeWalker, 0);
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
CUiAutomationTreeWalker::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationTreeWalker, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region 	IUIAutomationTreeWalker

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetParentElement(IDispatchedUiAutomationElement *element, IDispatchedUiAutomationElement **parent){
	IUIAutomationElement * tmp = NULL;
	HRESULT hr = m_pTreeWalker->GetParentElement(((UiAutomationElement*)element)->m_pElement, &tmp);

	if (SUCCEEDED(hr) && tmp != NULL){
		*parent = new UiAutomationElement(tmp);
		return S_OK;
	}
	else if (SUCCEEDED(hr)){
		return S_FALSE;
	}
	else {
		return hr;
	}
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetFirstChildElement(IDispatchedUiAutomationElement *element, IDispatchedUiAutomationElement **first){
	IUIAutomationElement * tmp = NULL;
	HRESULT hr = m_pTreeWalker->GetFirstChildElement(((UiAutomationElement*)element)->m_pElement, &tmp);
	
	if (SUCCEEDED(hr) && tmp != NULL){
		*first = new UiAutomationElement(tmp);
		return S_OK;
	}
	else if (SUCCEEDED(hr)){
		return S_FALSE;
	}
	else {
		return hr;
	}
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetLastChildElement(IDispatchedUiAutomationElement *element, IDispatchedUiAutomationElement **last){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetNextSiblingElement(IDispatchedUiAutomationElement *element, IDispatchedUiAutomationElement **next){
	IUIAutomationElement * tmp = NULL;
	HRESULT hr = m_pTreeWalker->GetNextSiblingElement(((UiAutomationElement*)element)->m_pElement, &tmp);

	if (SUCCEEDED(hr) && tmp != NULL){
		*next = new UiAutomationElement(tmp);
		return S_OK;
	}
	else if (SUCCEEDED(hr)){
		return S_FALSE;
	}
	else {
		return hr;
	}
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetPreviousSiblingElement(IDispatchedUiAutomationElement *element, IDispatchedUiAutomationElement **previous){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::NormalizeElement(IDispatchedUiAutomationElement *element, IDispatchedUiAutomationElement **normalized){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetParentElementBuildCache(IUIAutomationElement *element, IUIAutomationCacheRequest *cacheRequest, IUIAutomationElement **parent){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetFirstChildElementBuildCache(IUIAutomationElement *element, IUIAutomationCacheRequest *cacheRequest, IUIAutomationElement **first){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetLastChildElementBuildCache(IUIAutomationElement *element, IUIAutomationCacheRequest *cacheRequest, IUIAutomationElement **last){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetNextSiblingElementBuildCache(IUIAutomationElement *element, IUIAutomationCacheRequest *cacheRequest, IUIAutomationElement **next){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::GetPreviousSiblingElementBuildCache(IUIAutomationElement *element, IUIAutomationCacheRequest *cacheRequest, IUIAutomationElement **previous){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::NormalizeElementBuildCache(IUIAutomationElement *element, IUIAutomationCacheRequest *cacheRequest, IUIAutomationElement **normalized){
	return E_PENDING;
}

IFACEMETHODIMP 
CUiAutomationTreeWalker::get_Condition(IDispatchedUiAutomationCondition **condition){
	return E_PENDING;
}

#pragma endregion /* IUIAutomationTreeWalker */
