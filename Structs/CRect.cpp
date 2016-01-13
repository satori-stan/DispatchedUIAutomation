#include <windows.h>
#include <ole2.h>
#include "comutil.h"
#include "CRect.h"
#include "CPoint.h"

CRect::CRect(RECT r) : m_cRef(1), m_ptinfo(NULL), m_Left(r.left), m_Top(r.top), m_Right(r.right), m_Bottom(r.bottom) {}

CRect::~CRect() {}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP
CRect::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispRect, riid))
	{
		*ppv = static_cast<IDispRect *>(this);
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
CRect::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG)
CRect::Release()
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
CRect::GetTypeInfoCount(UINT *pctinfo)
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
CRect::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispRect, 0);
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
CRect::LoadTypeInfo(ITypeInfo **pptinfo,
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
CRect::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispRect, 0);
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
CRect::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispRect, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IDispRect
STDMETHODIMP 
CRect::get_left(LONG * retVal){
	*retVal = m_Left;
	return S_OK;
}

STDMETHODIMP 
CRect::get_top(LONG * retVal){
	*retVal = m_Top;
	return S_OK;
}

STDMETHODIMP
CRect::get_right(LONG * retVal){
	*retVal = m_Right;
	return S_OK;
}

STDMETHODIMP
CRect::get_bottom(LONG * retVal){
	*retVal = m_Bottom;
	return S_OK;
}

STDMETHODIMP 
CRect::toPoint(IDispPoint ** point){
	*point = new CPoint((m_Right - m_Left) / 2 + m_Left, (m_Bottom - m_Top) / 2 + m_Top);
	return S_OK;
}

STDMETHODIMP
CRect::toString(__RPC__deref_out_opt BSTR *retVal){
	//HRESULT hr;
	_bstr_t sTmp;
	_bstr_t sValue;
	sValue += L"{ left: ";
	sTmp = m_Left;
	sValue += sTmp;
	sValue += L", top: ";
	sTmp = m_Top;
	sValue += sTmp;
	sValue += L", right: ";
	sTmp = m_Right;
	sValue += sTmp;
	sValue += L", bottom: ";
	sTmp = m_Bottom;
	sValue += sTmp;
	sValue += L" }";
	return S_OK;
}

#pragma endregion /* IDispRect */
