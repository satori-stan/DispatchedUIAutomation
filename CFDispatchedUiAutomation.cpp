#include "CFDispatchedUiAutomation.h"
#include "CUiAutomation.h"


extern long g_cDllRef;


CFDispatchedUiAutomation::CFDispatchedUiAutomation() : m_cRef(1)
{
	InterlockedIncrement(&g_cDllRef);
}

CFDispatchedUiAutomation::~CFDispatchedUiAutomation()
{
	InterlockedDecrement(&g_cDllRef);
}


//
// IUnknown
//

IFACEMETHODIMP CFDispatchedUiAutomation::QueryInterface(REFIID riid, void **ppv)
{
	HRESULT hr = S_OK;

	if (IsEqualIID(IID_IUnknown, riid) ||
		IsEqualIID(IID_IDispatch, riid) ||  // For implementing IDispatch
		IsEqualIID(IID_IClassFactory, riid))
	{
		*ppv = static_cast<IUnknown *>(this);
		AddRef();
	}
	else
	{
		hr = E_NOINTERFACE;
		*ppv = NULL;
	}

	return hr;
}

IFACEMETHODIMP_(ULONG) CFDispatchedUiAutomation::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

IFACEMETHODIMP_(ULONG) CFDispatchedUiAutomation::Release()
{
	ULONG cRef = InterlockedDecrement(&m_cRef);
	if (0 == cRef)
	{
		delete this;
	}
	return cRef;
}


// 
// IClassFactory
//

IFACEMETHODIMP CFDispatchedUiAutomation::CreateInstance(IUnknown *pUnkOuter, REFIID riid, void **ppv)
{
	HRESULT hr = CLASS_E_NOAGGREGATION;

	// pUnkOuter is used for aggregation. We do not support it
	if (pUnkOuter == NULL)
	{
		hr = E_OUTOFMEMORY;

		// Create the COM component.
		UiAutomation *pDispUiAutomation = new UiAutomation();
		if (pDispUiAutomation)
		{
			// Query the specified interface.
			hr = pDispUiAutomation->QueryInterface(riid, ppv);
			pDispUiAutomation->Release();
		}
	}

	return hr;
}

IFACEMETHODIMP CFDispatchedUiAutomation::LockServer(BOOL fLock)
{
	if (fLock)
	{
		InterlockedIncrement(&g_cDllRef);
	}
	else
	{
		InterlockedDecrement(&g_cDllRef);
	}
	return S_OK;
}