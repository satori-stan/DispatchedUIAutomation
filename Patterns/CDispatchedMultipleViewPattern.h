#pragma once

#ifndef CDISPATCHEDMULTIPLEVIEWPATTERN_H
#define CDISPATCHEDMULTIPLEVIEWPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

class CDispatchedMultipleViewPattern : public IDispatchedMultipleViewPattern
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
	
	// IUIAutomationMultipleViewPattern methods
	IFACEMETHODIMP GetViewName(
		/* [in] */ int view,
		/* [retval][out] */ BSTR *name);

	IFACEMETHODIMP SetCurrentView(
		/* [in] */ int view);

	IFACEMETHODIMP GetCurrentSupportedViews(
		/* [retval][out] */ SAFEARRAY * *retVal);

	IFACEMETHODIMP GetCachedSupportedViews(
		/* [retval][out] */ SAFEARRAY * *retVal);

	// IUIAutomationMultipleViewPattern properties
	IFACEMETHODIMP get_CurrentCurrentView(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedCurrentView(
		/* [retval][out] */ int *retVal);

	// Main Object Constructor & Destructor.
	CDispatchedMultipleViewPattern(IUIAutomationMultipleViewPattern * pPatt);

protected:
	~CDispatchedMultipleViewPattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationMultipleViewPattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDMULTIPLEVIEWPATTERN_H