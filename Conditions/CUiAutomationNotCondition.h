#pragma once

#ifndef COUINOTCONDITION_H
#define COUINOTCONDITION_H 
#ifdef __cplusplus 
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"
//#include "CuiAutomationCondition.h"

class CUiAutomationNotCondition : public IDispatchedUiAutomationNotCondition
{
	//friend class UiAutomation;
	//friend class UiAutomationElement;

	//operator IUIAutomationNotCondition*() const { return m_pCondition; }

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

	// IUIAutomationCondition methods
	HRESULT STDMETHODCALLTYPE GetBase(
		/* [retval][out] */ __RPC__deref_out_opt IUIAutomationCondition ** condition);
	HRESULT STDMETHODCALLTYPE GetBaseType(
		/* [retval][out] */ IID * idRef);
	
	// IUIAutomationNotCondition methods
	IFACEMETHODIMP GetChild(
		/* [retval][out] */ IDispatchedUiAutomationCondition **condition);

	// Main Object Constructor & Destructor.
	//CUiAutomationNotCondition(IUIAutomationNotCondition *ac);
	/*
	CUiAutomationNotCondition(IUIAutomation * a, IDispatchedUiAutomationAndCondition *ac);
	CUiAutomationNotCondition(IUIAutomation * a, IDispatchedUiAutomationOrCondition *ac);
	CUiAutomationNotCondition(IUIAutomation * a, IDispatchedUiAutomationBoolCondition *ac);
	CUiAutomationNotCondition(IUIAutomation * a, IDispatchedUiAutomationPropertyCondition *ac);
	*/
	CUiAutomationNotCondition(REFIID, IUIAutomationNotCondition *ac);

protected:
	~CUiAutomationNotCondition();

	// Base class
	IUIAutomationNotCondition *m_pCondition;

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	REFIID m_idRef;

};

#endif // __cplusplus 
#endif // COUINOTCONDITION_H