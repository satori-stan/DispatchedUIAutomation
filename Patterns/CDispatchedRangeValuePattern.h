#pragma once

#ifndef CDISPATCHEDRANGEVALUEPATTERN_H
#define CDISPATCHEDRANGEVALUEPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

class CDispatchedRangeValuePattern : public IDispatchedRangeValuePattern
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
	
	// IUIAutomationRangeValuePattern methods
	IFACEMETHODIMP SetValue(
		/* [in] */ double val);

	// IUIAutomationRangeValuePattern properties
	IFACEMETHODIMP get_CurrentValue(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentIsReadOnly(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CurrentMaximum(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentMinimum(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentLargeChange(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CurrentSmallChange(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedValue(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedIsReadOnly(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CachedMaximum(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedMinimum(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedLargeChange(
		/* [retval][out] */ double *retVal);

	IFACEMETHODIMP get_CachedSmallChange(
		/* [retval][out] */ double *retVal);

	// Main Object Constructor & Destructor.
	CDispatchedRangeValuePattern(IUIAutomationRangeValuePattern * pPatt);

protected:
	~CDispatchedRangeValuePattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationRangeValuePattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDRANGEVALUEPATTERN_H