#pragma once

#include <unknwn.h>     // For ICFDispatchedUiAutomation
#include <windows.h>


class CFDispatchedUiAutomation : public IClassFactory
{
public:
	// IUnknown
	IFACEMETHODIMP QueryInterface(REFIID riid, void **ppv);
	IFACEMETHODIMP_(ULONG) AddRef();
	IFACEMETHODIMP_(ULONG) Release();

	// ICFDispatchedUiAutomation
	IFACEMETHODIMP CreateInstance(IUnknown *pUnkOuter, REFIID riid, void **ppv);
	IFACEMETHODIMP LockServer(BOOL fLock);

	CFDispatchedUiAutomation();

protected:
	~CFDispatchedUiAutomation();

private:
	long m_cRef;
};