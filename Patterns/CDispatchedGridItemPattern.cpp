// System includes
#include <windows.h>
#include <ole2.h>
//#include <strsafe.h>
//#include <vector>
#include "comutil.h"
// Project includes
#include "CDispatchedGridItemPattern.h" 
#include "..\\CUiAutomationElement.h" 

CDispatchedGridItemPattern::CDispatchedGridItemPattern(IUIAutomationGridItemPattern * pPatt) : m_cRef(1), m_ptinfo(NULL), m_pPattern(pPatt){}

CDispatchedGridItemPattern::~CDispatchedGridItemPattern()
{
	m_pPattern->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CDispatchedGridItemPattern::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedGridItemPattern, riid))
	{
		*ppv = static_cast<IDispatchedGridItemPattern *>(this);
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
CDispatchedGridItemPattern::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CDispatchedGridItemPattern::Release()
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
CDispatchedGridItemPattern::GetTypeInfoCount(UINT *pctinfo)
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
CDispatchedGridItemPattern::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedGridItemPattern, 0);
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
CDispatchedGridItemPattern::LoadTypeInfo(ITypeInfo **pptinfo,
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
CDispatchedGridItemPattern::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedGridItemPattern, 0);
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
CDispatchedGridItemPattern::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedGridItemPattern, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomationGridItemPattern

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CurrentContainingGrid(IDispatchedUiAutomationElement **retVal){
	IUIAutomationElement * tmp;
	HRESULT hr = m_pPattern->get_CurrentContainingGrid(&tmp);
	if (SUCCEEDED(hr) && tmp != NULL)
		*retVal = new UiAutomationElement(tmp);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CurrentRow(int *retVal){
	HRESULT hr = m_pPattern->get_CurrentRow(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CurrentColumn(int *retVal){
	HRESULT hr = m_pPattern->get_CurrentColumn(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CurrentRowSpan(int *retVal){
	HRESULT hr = m_pPattern->get_CurrentRowSpan(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CurrentColumnSpan(int *retVal){
	HRESULT hr = m_pPattern->get_CurrentColumnSpan(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CachedContainingGrid(IDispatchedUiAutomationElement **retVal){
	IUIAutomationElement * tmp;
	HRESULT hr = m_pPattern->get_CachedContainingGrid(&tmp);
	if (SUCCEEDED(hr) && tmp != NULL)
		*retVal = new UiAutomationElement(tmp);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CachedRow(int *retVal){
	HRESULT hr = m_pPattern->get_CachedRow(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CachedColumn(int *retVal){
	HRESULT hr = m_pPattern->get_CachedColumn(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CachedRowSpan(int *retVal){
	HRESULT hr = m_pPattern->get_CachedRowSpan(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedGridItemPattern::get_CachedColumnSpan(int *retVal){
	HRESULT hr = m_pPattern->get_CachedColumnSpan(retVal);
	return hr;
}

#pragma endregion /* IUIAutomationGridItemPattern */