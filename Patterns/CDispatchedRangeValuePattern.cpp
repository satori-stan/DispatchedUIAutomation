// System includes
#include <windows.h>
#include <ole2.h>
//#include <strsafe.h>
//#include <vector>
#include "comutil.h"
// Project includes
#include "CDispatchedRangeValuePattern.h" 
#include "..\\CUiAutomationElement.h" 

CDispatchedRangeValuePattern::CDispatchedRangeValuePattern(IUIAutomationRangeValuePattern * pPatt) : m_cRef(1), m_ptinfo(NULL), m_pPattern(pPatt){}

CDispatchedRangeValuePattern::~CDispatchedRangeValuePattern()
{
	m_pPattern->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CDispatchedRangeValuePattern::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedRangeValuePattern, riid))
	{
		*ppv = static_cast<IDispatchedRangeValuePattern *>(this);
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
CDispatchedRangeValuePattern::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CDispatchedRangeValuePattern::Release()
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
CDispatchedRangeValuePattern::GetTypeInfoCount(UINT *pctinfo)
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
CDispatchedRangeValuePattern::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedRangeValuePattern, 0);
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
CDispatchedRangeValuePattern::LoadTypeInfo(ITypeInfo **pptinfo,
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
CDispatchedRangeValuePattern::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedRangeValuePattern, 0);
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
CDispatchedRangeValuePattern::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedRangeValuePattern, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomationRangeValuePattern

// IUIAutomationRangeValuePattern methods
IFACEMETHODIMP 
CDispatchedRangeValuePattern::SetValue(double val){
	HRESULT hr = m_pPattern->SetValue(val);
	return hr;
}

// IUIAutomationRangeValuePattern properties
IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CurrentValue(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentValue(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CurrentIsReadOnly(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CurrentIsReadOnly(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CurrentMaximum(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentMaximum(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CurrentMinimum(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentMinimum(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CurrentLargeChange(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentLargeChange(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CurrentSmallChange(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentSmallChange(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CachedValue(double *retVal){
	HRESULT hr = m_pPattern->get_CachedValue(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CachedIsReadOnly(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CachedIsReadOnly(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CachedMaximum(double *retVal){
	HRESULT hr = m_pPattern->get_CachedMaximum(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CachedMinimum(double *retVal){
	HRESULT hr = m_pPattern->get_CachedMinimum(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CachedLargeChange(double *retVal){
	HRESULT hr = m_pPattern->get_CachedLargeChange(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedRangeValuePattern::get_CachedSmallChange(double *retVal){
	HRESULT hr = m_pPattern->get_CachedSmallChange(retVal);
	return hr;
}

#pragma endregion /* IUIAutomationRangeValuePattern */