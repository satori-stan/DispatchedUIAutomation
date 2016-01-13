#pragma once

#ifndef CDISPATCHEDSCROLLPATTERN_H
#define CDISPATCHEDSCROLLPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

class CDispatchedScrollPattern : public IDispatchedScrollPattern
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
	
	// IUIAutomationScrollPattern methods
	IFACEMETHODIMP Scroll(
	/* [in] */ enum ScrollAmount horizontalAmount,
	/* [in] */ enum ScrollAmount verticalAmount);

	IFACEMETHODIMP SetScrollPercent(
		/* [in] */ double horizontalPercent,
		/* [in] */ double verticalPercent);

	// IUIAutomationScrollPattern properties
	IFACEMETHODIMP get_CurrentHorizontalScrollPercent(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentVerticalScrollPercent(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentHorizontalViewSize(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentVerticalViewSize(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentHorizontallyScrollable(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CurrentVerticallyScrollable(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CachedHorizontalScrollPercent(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedVerticalScrollPercent(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedHorizontalViewSize(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedVerticalViewSize(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedHorizontallyScrollable(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CachedVerticallyScrollable(
		/* [retval][out] */ BOOL *retVal);

	// Main Object Constructor & Destructor.
	CDispatchedScrollPattern(IUIAutomationScrollPattern * pPatt);

protected:
	~CDispatchedScrollPattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationScrollPattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDSCROLLPATTERN_H