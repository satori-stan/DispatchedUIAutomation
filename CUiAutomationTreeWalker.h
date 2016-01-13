#pragma once

#ifndef CUIAUTOMATIONTREEWALKER_H
#define CUIAUTOMATIONTREEWALKER_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <algorithm>
#include <UIAutomation.h>
#include "DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class CUiAutomationTreeWalker : public IDispatchedUiAutomationTreeWalker
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
	
	// IUIAutomationTreeWalker methods
	IFACEMETHODIMP GetParentElement(
		/* [in] */ IDispatchedUiAutomationElement *element,
		/* [retval][out] */ IDispatchedUiAutomationElement **parent);

	IFACEMETHODIMP GetFirstChildElement(
		/* [in] */ IDispatchedUiAutomationElement *element,
		/* [retval][out] */ IDispatchedUiAutomationElement **first);

	IFACEMETHODIMP GetLastChildElement(
		/* [in] */ IDispatchedUiAutomationElement *element,
		/* [retval][out] */ IDispatchedUiAutomationElement **last);

	IFACEMETHODIMP GetNextSiblingElement(
		/* [in] */ IDispatchedUiAutomationElement *element,
		/* [retval][out] */ IDispatchedUiAutomationElement **next);

	IFACEMETHODIMP GetPreviousSiblingElement(
		/* [in] */ IDispatchedUiAutomationElement *element,
		/* [retval][out] */ IDispatchedUiAutomationElement **previous);

	IFACEMETHODIMP NormalizeElement(
		/* [in] */ IDispatchedUiAutomationElement *element,
		/* [retval][out] */ IDispatchedUiAutomationElement **normalized);

	IFACEMETHODIMP GetParentElementBuildCache(
		/* [in] */ IUIAutomationElement *element,
		/* [in] */ IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ IUIAutomationElement **parent);

	IFACEMETHODIMP GetFirstChildElementBuildCache(
		/* [in] */ IUIAutomationElement *element,
		/* [in] */ IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ IUIAutomationElement **first);

	IFACEMETHODIMP GetLastChildElementBuildCache(
		/* [in] */ IUIAutomationElement *element,
		/* [in] */ IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ IUIAutomationElement **last);

	IFACEMETHODIMP GetNextSiblingElementBuildCache(
		/* [in] */ IUIAutomationElement *element,
		/* [in] */ IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ IUIAutomationElement **next);

	IFACEMETHODIMP GetPreviousSiblingElementBuildCache(
		/* [in] */ IUIAutomationElement *element,
		/* [in] */ IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ IUIAutomationElement **previous);

	IFACEMETHODIMP NormalizeElementBuildCache(
		/* [in] */ IUIAutomationElement *element,
		/* [in] */ IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ IUIAutomationElement **normalized);

	IFACEMETHODIMP get_Condition(
		/* [retval][out] */ IDispatchedUiAutomationCondition **condition);

	// Main Object Constructor & Destructor.
	CUiAutomationTreeWalker(IUIAutomationTreeWalker * tw);

protected:
	~CUiAutomationTreeWalker();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomationTreeWalker *m_pTreeWalker;
};

#endif // __cplusplus 
#endif // CUIAUTOMATIONTREEWALKER_H