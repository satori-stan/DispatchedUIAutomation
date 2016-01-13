#pragma once

#ifndef CDISPATCHEDSELECTIONITEMPATTERN_H
#define CDISPATCHEDSELECTIONITEMPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class CDispatchedSelectionItemPattern : public IDispatchedSelectionItemPattern
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
	
	// IUIAutomationSelectionItemPattern methods
	IFACEMETHODIMP Select(void);

	IFACEMETHODIMP AddToSelection(void);

	IFACEMETHODIMP RemoveFromSelection(void);

	// IUIAutomationSelectionItemPattern properties
	IFACEMETHODIMP get_CurrentIsSelected(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CurrentSelectionContainer(
		/* [retval][out] */ IDispatchedUiAutomationElement **retVal);

	IFACEMETHODIMP get_CachedIsSelected(
		/* [retval][out] */ BOOL *retVal);

	IFACEMETHODIMP get_CachedSelectionContainer(
		/* [retval][out] */ IDispatchedUiAutomationElement **retVal);

	// Main Object Constructor & Destructor.
	CDispatchedSelectionItemPattern(IUIAutomationSelectionItemPattern * pPatt);

protected:
	~CDispatchedSelectionItemPattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationSelectionItemPattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDSELECTIONITEMPATTERN_H