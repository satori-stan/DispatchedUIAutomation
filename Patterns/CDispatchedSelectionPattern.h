#pragma once

#ifndef CDISPATCHEDSELECTIONPATTERN_H
#define CDISPATCHEDSELECTIONPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

class CDispatchedSelectionPattern : public IDispatchedSelectionPattern
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
	
	// IUIAutomationSelectionPattern methods
	IFACEMETHODIMP GetCurrentSelection(
		/* [retval][out] */ SAFEARRAY * *retVal);

	IFACEMETHODIMP GetCachedSelection(
		/* [retval][out] */ SAFEARRAY * *retVal);

	// IUIAutomationSelectionPattern properties
	IFACEMETHODIMP get_CurrentCanSelectMultiple(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CurrentIsSelectionRequired(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CachedCanSelectMultiple(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CachedIsSelectionRequired(
		/* [retval][out] */ BOOL *retVal);

	// Main Object Constructor & Destructor.
	CDispatchedSelectionPattern(IUIAutomationSelectionPattern * pPatt);

protected:
	~CDispatchedSelectionPattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationSelectionPattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDSELECTIONPATTERN_H