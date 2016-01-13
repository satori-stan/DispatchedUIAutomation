#pragma once

#ifndef CDISPATCHEDVALUEPATTERN_H
#define CDISPATCHEDVALUEPATTERN_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class CDispatchedValuePattern : public IDispatchedValuePattern
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
	
	// IUIAutomationValuePattern methods
	IFACEMETHODIMP SetValue(BSTR val);

	// IUIAutomationValuePattern properties
	IFACEMETHODIMP get_CurrentValue( BSTR * retVal);
	IFACEMETHODIMP get_CurrentIsReadOnly(BOOL * retVal);
	IFACEMETHODIMP get_CachedValue( BSTR * retVal);
	IFACEMETHODIMP get_CachedIsReadOnly( BOOL * retVal);

	// Main Object Constructor & Destructor.
	CDispatchedValuePattern(IUIAutomationValuePattern * pInv);

protected:
	~CDispatchedValuePattern();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationValuePattern *m_pPattern;
};

#endif // __cplusplus 
#endif // CDISPATCHEDVALUEPATTERN_H