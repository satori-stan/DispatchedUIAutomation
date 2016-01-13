#pragma once

#ifndef COUIANDCONDITION_H
#define COUIANDCONDITION_H 
#ifdef __cplusplus 
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"
//#include "CUiAutomationCondition.h"

class CUiAutomationAndCondition : public IDispatchedUiAutomationAndCondition //, public  CUiAutomationCondition
{
	//friend class UiAutomation;
	//friend class UiAutomationElement;

	//operator IUIAutomationAndCondition*() const { return m_pCondition; }

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

	/*
	IUIAutomationCondition* GetBase();
	REFIID GetBaseType();
	*/

	// IUIAutomationAndCondition properties
	/* [propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount(
		/* [retval][out] */ __RPC__out int *childCount);

	// IUIAutomationAndCondition methods
	HRESULT STDMETHODCALLTYPE GetChildren(
		/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *childArray);

	// Main Object Constructor & Destructor.
	CUiAutomationAndCondition(IUIAutomationAndCondition *ac);

protected:
	~CUiAutomationAndCondition();

	// Base class
	IUIAutomationAndCondition *m_pCondition;

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

};

#endif // __cplusplus 
#endif // COUIANDCONDITION_H