// System includes
#include <windows.h>
#include <ole2.h>
//#include <strsafe.h>
#include "comutil.h"
// Project includes
#include "CDispatchedSelectionItemPattern.h" 
#include "..\\CUiAutomationElement.h" 

CDispatchedSelectionItemPattern::CDispatchedSelectionItemPattern(IUIAutomationSelectionItemPattern * pPatt) : m_cRef(1), m_ptinfo(NULL), m_pPattern(pPatt){}

CDispatchedSelectionItemPattern::~CDispatchedSelectionItemPattern()
{
	m_pPattern->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CDispatchedSelectionItemPattern::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedSelectionItemPattern, riid))
	{
		*ppv = static_cast<IDispatchedSelectionItemPattern *>(this);
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
CDispatchedSelectionItemPattern::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CDispatchedSelectionItemPattern::Release()
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
CDispatchedSelectionItemPattern::GetTypeInfoCount(UINT *pctinfo)
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
CDispatchedSelectionItemPattern::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedSelectionItemPattern, 0);
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
CDispatchedSelectionItemPattern::LoadTypeInfo(ITypeInfo **pptinfo,
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
CDispatchedSelectionItemPattern::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedSelectionItemPattern, 0);
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
CDispatchedSelectionItemPattern::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedSelectionItemPattern, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomationSelectionItemPattern

IFACEMETHODIMP 
CDispatchedSelectionItemPattern::Select(void){
	HRESULT hr = m_pPattern->Select();
	return hr;
}

IFACEMETHODIMP 
CDispatchedSelectionItemPattern::AddToSelection(void){
	HRESULT hr = m_pPattern->AddToSelection();
	return hr;
}

IFACEMETHODIMP 
CDispatchedSelectionItemPattern::RemoveFromSelection(void){
	HRESULT hr = m_pPattern->RemoveFromSelection();
	return hr;
}

// IUIAutomationSelectionItemPattern properties
IFACEMETHODIMP 
CDispatchedSelectionItemPattern::get_CurrentIsSelected(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CurrentIsSelected(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedSelectionItemPattern::get_CurrentSelectionContainer(IDispatchedUiAutomationElement **retVal){
	IUIAutomationElement * tmp;
	HRESULT hr = m_pPattern->get_CurrentSelectionContainer(&tmp);
	if (SUCCEEDED(hr) && tmp != NULL)
		*retVal = new UiAutomationElement(tmp);
	return hr;
}

IFACEMETHODIMP 
CDispatchedSelectionItemPattern::get_CachedIsSelected(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CachedIsSelected(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedSelectionItemPattern::get_CachedSelectionContainer(IDispatchedUiAutomationElement **retVal){
	IUIAutomationElement * tmp;
	HRESULT hr = m_pPattern->get_CachedSelectionContainer(&tmp);
	if (SUCCEEDED(hr) && tmp != NULL)
		*retVal = new UiAutomationElement(tmp);
	return hr;
}

#pragma endregion /* IUIAutomationSelectionItemPattern */