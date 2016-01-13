// System includes
#include <windows.h>
#include <ole2.h>
//#include <strsafe.h>
//#include <vector>
#include "comutil.h"
// Project includes
#include "CDispatchedScrollPattern.h" 
#include "..\\CUiAutomationElement.h" 

CDispatchedScrollPattern::CDispatchedScrollPattern(IUIAutomationScrollPattern * pPatt) : m_cRef(1), m_ptinfo(NULL), m_pPattern(pPatt){}

CDispatchedScrollPattern::~CDispatchedScrollPattern()
{
	m_pPattern->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CDispatchedScrollPattern::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedScrollPattern, riid))
	{
		*ppv = static_cast<IDispatchedScrollPattern *>(this);
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
CDispatchedScrollPattern::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CDispatchedScrollPattern::Release()
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
CDispatchedScrollPattern::GetTypeInfoCount(UINT *pctinfo)
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
CDispatchedScrollPattern::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedScrollPattern, 0);
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
CDispatchedScrollPattern::LoadTypeInfo(ITypeInfo **pptinfo,
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
CDispatchedScrollPattern::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedScrollPattern, 0);
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
CDispatchedScrollPattern::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedScrollPattern, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomationScrollPattern

// IUIAutomationScrollPattern methods
IFACEMETHODIMP 
CDispatchedScrollPattern::Scroll(enum ScrollAmount horizontalAmount, enum ScrollAmount verticalAmount){
	HRESULT hr = m_pPattern->Scroll(horizontalAmount, verticalAmount);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::SetScrollPercent(double horizontalPercent, double verticalPercent){
	HRESULT hr = m_pPattern->SetScrollPercent(horizontalPercent, verticalPercent);
	return hr;
}

// IUIAutomationScrollPattern properties
IFACEMETHODIMP 
CDispatchedScrollPattern::get_CurrentHorizontalScrollPercent(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentHorizontalScrollPercent(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CurrentVerticalScrollPercent(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentVerticalScrollPercent(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CurrentHorizontalViewSize(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentHorizontalViewSize(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CurrentVerticalViewSize(double *retVal){
	HRESULT hr = m_pPattern->get_CurrentVerticalViewSize(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CurrentHorizontallyScrollable(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CurrentHorizontallyScrollable(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CurrentVerticallyScrollable(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CurrentVerticallyScrollable(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CachedHorizontalScrollPercent(double *retVal){
	HRESULT hr = m_pPattern->get_CachedHorizontalScrollPercent(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CachedVerticalScrollPercent(double *retVal){
	HRESULT hr = m_pPattern->get_CachedVerticalScrollPercent(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CachedHorizontalViewSize(double *retVal){
	HRESULT hr = m_pPattern->get_CachedHorizontalViewSize(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CachedVerticalViewSize(double *retVal){
	HRESULT hr = m_pPattern->get_CachedVerticalViewSize(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CachedHorizontallyScrollable(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CachedHorizontallyScrollable(retVal);
	return hr;
}

IFACEMETHODIMP 
CDispatchedScrollPattern::get_CachedVerticallyScrollable(BOOL *retVal){
	HRESULT hr = m_pPattern->get_CachedVerticallyScrollable(retVal);
	return hr;
}

#pragma endregion /* IUIAutomationScrollPattern */