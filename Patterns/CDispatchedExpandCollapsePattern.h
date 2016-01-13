#pragma once

#ifndef CDISPATCHEDEXPANDCOLLAPSEPATTERN_H
#define CDISPATCHEDEXPANDCOLLAPSEPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class CDispatchedExpandCollapsePattern : public IDispatchedExpandCollapsePattern
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
	
	// IUIAutomationExpandCollapsePattern methods
	IFACEMETHODIMP Expand(void);
	IFACEMETHODIMP Collapse(void);

	// IUIAutomationExpandCollapsePattern properties
	IFACEMETHODIMP get_CurrentExpandCollapseState( enum ExpandCollapseState * retVal);
	IFACEMETHODIMP get_CachedExpandCollapseState( enum ExpandCollapseState * retVal);

	// Main Object Constructor & Destructor.
	CDispatchedExpandCollapsePattern(IUIAutomationExpandCollapsePattern * pPatt);

protected:
	~CDispatchedExpandCollapsePattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationExpandCollapsePattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDEXPANDCOLLAPSEPATTERN_H