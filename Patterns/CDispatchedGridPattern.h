#pragma once

#ifndef CDISPATCHEDGRIDPATTERN_H
#define CDISPATCHEDGRIDPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"


class CDispatchedGridPattern : public IDispatchedGridPattern
{
public:
	// shared IUnknown methods. Main object, non-delegating.
	IFACEMETHODIMP QueryInterface(REFIID riid, void **ppv);
	IFACEMETHODIMP_(ULONG) AddRef();
	IFACEMETHODIMP_(ULONG) Release();

	// shared IDispatch methods. Main object, non-delegating.
	IFACEMETHODIMP GetTypeInfoCount(UINT *pctinfo);
	IFACEMETHODIMP GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
	IFACEMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid);
	IFACEMETHODIMP Invoke(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispParams, VARIANT *pvarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	
	// IUIAutomationGridPattern methods
	IFACEMETHODIMP GetItem(
		/* [in] */ int row,
		/* [in] */ int column,
		/* [retval][out] */ IDispatchedUiAutomationElement **element);

	// IUIAutomationGridPattern properties
	IFACEMETHODIMP get_CurrentRowCount(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CurrentColumnCount(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedRowCount(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedColumnCount(
		/* [retval][out] */ int *retVal);

	// Main Object Constructor & Destructor.
	CDispatchedGridPattern(IUIAutomationGridPattern * pPatt);

protected:
	~CDispatchedGridPattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationGridPattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDGRIDPATTERN_H