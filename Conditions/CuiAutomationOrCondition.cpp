#include <windows.h>
#include <ole2.h>
#include "comutil.h"

#include "CUiAutomationOrCondition.h" 

CUiAutomationOrCondition::CUiAutomationOrCondition(IUIAutomationOrCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_pCondition(ac) {}

CUiAutomationOrCondition::~CUiAutomationOrCondition()
{
	m_pCondition->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CUiAutomationOrCondition::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedUiAutomationCondition, riid)) // For implementing IDispatchedUiAutomationCondition
	{
		*ppv = static_cast<IDispatchedUiAutomationCondition *>(this);
	}
	else if (IsEqualIID(IID_IDispatchedUiAutomationOrCondition, riid))
	{
		*ppv = static_cast<IDispatchedUiAutomationOrCondition *>(this);
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
CUiAutomationOrCondition::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CUiAutomationOrCondition::Release()
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
CUiAutomationOrCondition::GetTypeInfoCount(UINT *pctinfo)
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
CUiAutomationOrCondition::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationOrCondition, 0);
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
CUiAutomationOrCondition::LoadTypeInfo(ITypeInfo **pptinfo,
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
CUiAutomationOrCondition::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationOrCondition, 0);
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
CUiAutomationOrCondition::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationAndCondition, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomationCondition

// IUIAutomationCondition methods
HRESULT STDMETHODCALLTYPE 
CUiAutomationOrCondition::GetBase(__RPC__deref_out_opt IUIAutomationCondition ** condition){
	*condition = m_pCondition;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE
CUiAutomationOrCondition::GetBaseType( IID * idRef){
	*idRef = IID_IUIAutomationOrCondition;
	return S_OK;
}

#pragma endregion

#pragma region IUIAutomationOrCondition

HRESULT STDMETHODCALLTYPE 
CUiAutomationOrCondition::get_ChildCount(__RPC__out int *childCount){
	HRESULT hr = ((IUIAutomationOrCondition *)m_pCondition)->get_ChildCount(childCount);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
CUiAutomationOrCondition::GetChildren(__RPC__deref_out_opt SAFEARRAY * *childArray){
	// XXX: We might have to massage the output to wrap it in variants
	HRESULT hr = m_pCondition->GetChildren(childArray);
	return hr;
}

#pragma endregion /* IUIAutomationOrCondition */