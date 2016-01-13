#include <windows.h>
#include <ole2.h>
//#include <vector>
//#include "comdef.h"
//#include "comip.h"
//#include "comutil.h"

#include "CMouseControl.h" 

CMouseControl::CMouseControl() : m_cRef(1), m_ptinfo(NULL) {}

CMouseControl::~CMouseControl()
{
	//m_pElement->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
CMouseControl::QueryInterface(REFIID riid, void **ppv)
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
	else if (IsEqualIID(IID_IDispatchedMouseControl, riid))
	{
		*ppv = static_cast<IDispatchedMouseControl *>(this);
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
CMouseControl::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
CMouseControl::Release()
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
CMouseControl::GetTypeInfoCount(UINT *pctinfo)
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
CMouseControl::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedMouseControl, 0);
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
CMouseControl::LoadTypeInfo(ITypeInfo **pptinfo,
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
CMouseControl::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedMouseControl, 0);
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
CMouseControl::Invoke(DISPID dispidMember,
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
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedMouseControl, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region User32

HRESULT STDMETHODCALLTYPE 
CMouseControl::LeftClick(void){
	UINT clickResult;
	INPUT * d = new INPUT();
	d->type = 0;
	d->mi.dx = 0;
	d->mi.dy = 0;
	d->mi.mouseData = 0;
	d->mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	d->mi.time = 0;
	d->mi.dwExtraInfo = GetMessageExtraInfo();
	INPUT * u = new INPUT(*d);
	u->mi.dwFlags = MOUSEEVENTF_LEFTUP;
	clickResult = SendInput(1, d, sizeof(*d));
	if (clickResult == 0) {
		clickResult = GetLastError();
		// TODO: Improve error reporting
		delete(d);
		delete(u);
		return E_FAIL;
	}
	Sleep(50);
	// XXX: Should we be using the same input variable and just change the flags??
	clickResult = SendInput(1, u, sizeof(*u));
	if (clickResult == 0) {
		clickResult = GetLastError();
		delete(d);
		delete(u);
		return E_FAIL;
	}
	delete(d);
	delete(u);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE 
CMouseControl::MoveTo(LONG x, LONG y){
	// TODO: Improve result
	if (SetCursorPos(x, y))
	{
		return S_OK;
	}
	else 
	{
		return E_FAIL;
	}
}

#pragma endregion /* User32 */