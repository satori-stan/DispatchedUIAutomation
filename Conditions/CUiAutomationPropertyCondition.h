#pragma once

#ifndef COUIPROPERTYCONDITION_H
#define COUIPROPERTYCONDITION_H 
#ifdef __cplusplus 
#include <UIAutomation.h>
#include "..\\DispatchedUiAutomation_h.h"
//#include "CUiAutomationCondition.h"

class CUiAutomationPropertyCondition : public IDispatchedUiAutomationPropertyCondition //, public UiCondition
{
	//friend class UiAutomation;
	//friend class UiAutomationElement;
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

	// IUIAutomationPropertyCondition properties
	HRESULT STDMETHODCALLTYPE get_PropertyId(
		PROPERTYID * propertyId);

	HRESULT STDMETHODCALLTYPE get_PropertyValue(
		VARIANT * propertyValue);

	HRESULT STDMETHODCALLTYPE get_PropertyConditionFlags(
		enum PropertyConditionFlags * flags);

	// Main Object Constructor & Destructor.
	CUiAutomationPropertyCondition(IUIAutomationPropertyCondition *pc);

protected:
	~CUiAutomationPropertyCondition();

	// Base class
	IUIAutomationPropertyCondition *m_pCondition;

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

};

#endif // __cplusplus 
#endif // COUIPROPERTYCONDITION_H