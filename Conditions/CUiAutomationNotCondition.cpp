#include <windows.h>
#include <ole2.h>
#include <typeinfo>
#include "comutil.h"

#include "CUiAutomationNotCondition.h" 
#include "CUiAutomationAndCondition.h" 
#include "CUiAutomationOrCondition.h" 
#include "CUiAutomationPropertyCondition.h" 
#include "CUiAutomationBoolCondition.h" 

//CUiAutomationNotCondition::CUiAutomationNotCondition(IUIAutomationNotCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_pCondition(ac) {}
/*
CUiAutomationNotCondition::CUiAutomationNotCondition(IUIAutomation *a, IDispatchedUiAutomationAndCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_idRef(__uuidof(IDispatchedUiAutomationAndCondition))
{
	IUIAutomationCondition * tmp;
	if (SUCCEEDED(ac->GetBase(&tmp))){
		a->CreateNotCondition(tmp, (IUIAutomationCondition **)&m_pCondition);
	}
}
CUiAutomationNotCondition::CUiAutomationNotCondition(IUIAutomation *a, IDispatchedUiAutomationOrCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_idRef(__uuidof(IDispatchedUiAutomationOrCondition)){
	IUIAutomationCondition * tmp;
	if (SUCCEEDED(ac->GetBase(&tmp))){
		a->CreateNotCondition(tmp, (IUIAutomationCondition **)&m_pCondition);
	}
}
CUiAutomationNotCondition::CUiAutomationNotCondition(IUIAutomation *a, IDispatchedUiAutomationBoolCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_idRef(__uuidof(IDispatchedUiAutomationBoolCondition)){
	IUIAutomationCondition * tmp;
	if (SUCCEEDED(ac->GetBase(&tmp))){
		a->CreateNotCondition(tmp, (IUIAutomationCondition **)&m_pCondition);
	}
}
CUiAutomationNotCondition::CUiAutomationNotCondition(IUIAutomation *a, IDispatchedUiAutomationPropertyCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_idRef(__uuidof(IDispatchedUiAutomationPropertyCondition)){
	IUIAutomationCondition * tmp;
	if (SUCCEEDED(ac->GetBase(&tmp))){
		a->CreateNotCondition(tmp, (IUIAutomationCondition **)&m_pCondition);
	}
}
*/
CUiAutomationNotCondition::CUiAutomationNotCondition(REFIID id, IUIAutomationNotCondition *ac) : m_cRef(1), m_ptinfo(NULL), m_idRef(id), m_pCondition(ac){}

CUiAutomationNotCondition::~CUiAutomationNotCondition()
{
	m_pCondition->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CUiAutomationNotCondition::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedUiAutomationNotCondition, riid))
	{
		*ppv = static_cast<IDispatchedUiAutomationNotCondition *>(this);
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
CUiAutomationNotCondition::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CUiAutomationNotCondition::Release()
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
CUiAutomationNotCondition::GetTypeInfoCount(UINT *pctinfo)
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
CUiAutomationNotCondition::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationNotCondition, 0);
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
CUiAutomationNotCondition::LoadTypeInfo(ITypeInfo **pptinfo,
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
CUiAutomationNotCondition::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationNotCondition, 0);
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
CUiAutomationNotCondition::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationNotCondition, 0);
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
CUiAutomationNotCondition::GetBase(__RPC__deref_out_opt IUIAutomationCondition ** condition){
	*condition = m_pCondition;
	return S_OK;
}

HRESULT STDMETHODCALLTYPE
CUiAutomationNotCondition::GetBaseType( IID * idRef){
	*idRef = IID_IUIAutomationNotCondition;
	return S_OK;
}

#pragma endregion

#pragma region IUIAutomationNotCondition

IFACEMETHODIMP 
CUiAutomationNotCondition::GetChild(IDispatchedUiAutomationCondition **condition){
	IUIAutomationCondition * tmp;
	HRESULT hr = m_pCondition->GetChild(&tmp);
	if (SUCCEEDED(hr))
	{
		if (IsEqualIID(IID_IUIAutomationAndCondition, m_idRef))
		{
			*condition = new CUiAutomationAndCondition((IUIAutomationAndCondition *)tmp);
			return S_OK;
		}
		else if (IsEqualIID(IID_IUIAutomationOrCondition, m_idRef))
		{
			*condition = new CUiAutomationOrCondition((IUIAutomationOrCondition *)tmp);
			return S_OK;
		}
		else if (IsEqualIID(IID_IUIAutomationBoolCondition, m_idRef))
		{
			*condition = new CUiAutomationBoolCondition((IUIAutomationBoolCondition *)tmp);
			return S_OK;
		}
		else if (IsEqualIID(IID_IUIAutomationPropertyCondition, m_idRef))
		{
			*condition = new CUiAutomationPropertyCondition((IUIAutomationPropertyCondition *)tmp);
			return S_OK;
		}
		else
		{
			return E_FAIL;
		}
		
	}
	return hr;
}

#pragma endregion /* IUIAutomationNotCondition */