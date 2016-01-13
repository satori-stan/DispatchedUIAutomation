#pragma once

#ifndef CDISPATCHEDGRIDITEMPATTERN_H
#define CDISPATCHEDGRIDITEMPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class CDispatchedGridItemPattern : public IDispatchedGridItemPattern
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
	
	// IUIAutomationGridItemPattern properties
	IFACEMETHODIMP get_CurrentContainingGrid(
		/* [retval][out] */ IDispatchedUiAutomationElement **retVal);

	IFACEMETHODIMP get_CurrentRow(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CurrentColumn(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CurrentRowSpan(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CurrentColumnSpan(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedContainingGrid(
		/* [retval][out] */ IDispatchedUiAutomationElement **retVal);

	IFACEMETHODIMP get_CachedRow(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedColumn(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedRowSpan(
		/* [retval][out] */ int *retVal);

	IFACEMETHODIMP get_CachedColumnSpan(
		/* [retval][out] */ int *retVal);

	// Main Object Constructor & Destructor.
	CDispatchedGridItemPattern(IUIAutomationGridItemPattern * pPatt);

protected:
	~CDispatchedGridItemPattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationGridItemPattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDGRIDITEMPATTERN_H