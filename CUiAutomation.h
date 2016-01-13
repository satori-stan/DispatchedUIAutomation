// -------------------------------------------------------------
// CUiAutomation.h
//
// Header file for the IDispatch compatible version of the
// UiAutomation class
//
// Copyright (c) 2015 Trabajos de Diseño e Ingeniería S.A. de C.V.
//
// This source is subject to the Microsoft Public License.
// See http://www.microsoft.com/en-us/openness/resources/licenses.aspx#MPL.
// All other rights reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
// EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND / OR FITNESS FOR A PARTICULAR PURPOSE.
// -------------------------------------------------------------
#pragma once

#ifndef COUIAUTOMATION_H
#define COUIAUTOMATION_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
#include <algorithm>
#include <UIAutomation.h>
#include "DispatchedUiAutomation_h.h"

typedef void** PPVOID;

class UiAutomation : public IDispatchedUiAutomation
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
	
	// IUIAutomation properties
	STDMETHODIMP get_ControlViewWalker(IDispatchedUiAutomationTreeWalker **);
	STDMETHODIMP get_ContentViewWalker(IDispatchedUiAutomationTreeWalker **);
	STDMETHODIMP get_RawViewWalker(IDispatchedUiAutomationTreeWalker **);
	STDMETHODIMP get_RawViewCondition(IDispatchedUiAutomationCondition **);
	STDMETHODIMP get_ControlViewCondition(IDispatchedUiAutomationCondition **);
	STDMETHODIMP get_ContentViewCondition(IDispatchedUiAutomationCondition **);
	STDMETHODIMP get_ProxyFactoryMapping(IUIAutomationProxyFactoryMapping **);
	STDMETHODIMP get_ReservedNotSupportedValue(IUnknown **);
	STDMETHODIMP get_ReservedMixedAttributeValue(IUnknown **);

	// IUIAutomation methods
	STDMETHODIMP CompareElements(IDispatchedUiAutomationElement * el1, IDispatchedUiAutomationElement * el2, BOOL * areSame);
	STDMETHODIMP CompareRuntimeIds(SAFEARRAY *,SAFEARRAY *, BOOL *);
	// Gets the Desktop
	STDMETHODIMP GetRootElement(IDispatchedUiAutomationElement **);
	//STDMETHODIMP ElementFromWindow(BSTR, IDispatchedUiAutomationElement **);
	STDMETHODIMP ElementFromHandle( ULONG hwnd, IDispatchedUiAutomationElement ** element);
	STDMETHODIMP ElementFromPoint(POINT, IUIAutomationElement **);
	STDMETHODIMP GetFocusedElement(IDispatchedUiAutomationElement **);
	STDMETHODIMP GetRootElementBuildCache(IUIAutomationCacheRequest *, IUIAutomationElement **);
	STDMETHODIMP ElementFromHandleBuildCache(UIA_HWND, IUIAutomationCacheRequest *, IUIAutomationElement **);
	STDMETHODIMP ElementFromPointBuildCache(POINT, IUIAutomationCacheRequest *, IUIAutomationElement **);
	STDMETHODIMP GetFocusedElementBuildCache(IUIAutomationCacheRequest *, IUIAutomationElement **);
	STDMETHODIMP CreateTreeWalker(IDispatchedUiAutomationCondition *, IDispatchedUiAutomationTreeWalker **);
	STDMETHODIMP CreateCacheRequest(IUIAutomationCacheRequest **);
	STDMETHODIMP CreateTrueCondition(IDispatchedUiAutomationBoolCondition **);
	STDMETHODIMP CreateFalseCondition(IDispatchedUiAutomationBoolCondition **);
	// Factory method for a Property Condition
	STDMETHODIMP CreatePropertyCondition(
		PROPERTYID propertyId,
		VARIANT value,
		__RPC__deref_out_opt IDispatchedUiAutomationCondition **newCondition);
	STDMETHODIMP CreatePropertyConditionEx(PROPERTYID, VARIANT, PropertyConditionFlags, IDispatchedUiAutomationCondition **);
	STDMETHODIMP CreateAndCondition(IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition **);
	STDMETHODIMP CreateAndConditionFromArray(SAFEARRAY *, IDispatchedUiAutomationCondition **);
	STDMETHODIMP CreateAndConditionFromNativeArray(IUIAutomationCondition **, int, IUIAutomationCondition **);
	STDMETHODIMP CreateOrCondition(IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition **);
	STDMETHODIMP CreateOrConditionFromArray(SAFEARRAY *, IDispatchedUiAutomationCondition **);
	STDMETHODIMP CreateOrConditionFromNativeArray(IUIAutomationCondition **, int, IUIAutomationCondition **);
	STDMETHODIMP CreateNotCondition(IDispatchedUiAutomationCondition *, IDispatchedUiAutomationCondition **);
	STDMETHODIMP AddAutomationEventHandler(EVENTID, IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationEventHandler *);
	STDMETHODIMP RemoveAutomationEventHandler(EVENTID, IUIAutomationElement *, IUIAutomationEventHandler *);
	STDMETHODIMP AddPropertyChangedEventHandlerNativeArray(IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationPropertyChangedEventHandler *, PROPERTYID *, int);
	STDMETHODIMP AddPropertyChangedEventHandler(IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationPropertyChangedEventHandler *, SAFEARRAY *);
	STDMETHODIMP RemovePropertyChangedEventHandler(IUIAutomationElement *, IUIAutomationPropertyChangedEventHandler *);
	STDMETHODIMP AddStructureChangedEventHandler(IUIAutomationElement *, TreeScope, IUIAutomationCacheRequest *, IUIAutomationStructureChangedEventHandler *);
	STDMETHODIMP RemoveStructureChangedEventHandler(IUIAutomationElement *, IUIAutomationStructureChangedEventHandler *);
	STDMETHODIMP AddFocusChangedEventHandler(IUIAutomationCacheRequest *, IUIAutomationFocusChangedEventHandler *);
	STDMETHODIMP RemoveFocusChangedEventHandler(IUIAutomationFocusChangedEventHandler *);
	STDMETHODIMP RemoveAllEventHandlers(void);
	STDMETHODIMP IntNativeArrayToSafeArray(int *, int , SAFEARRAY **);
	STDMETHODIMP IntSafeArrayToNativeArray(SAFEARRAY *, int **, int *);
	STDMETHODIMP RectToVariant(RECT, VARIANT *);
	STDMETHODIMP VariantToRect(VARIANT, RECT *);
	STDMETHODIMP SafeArrayToRectNativeArray(SAFEARRAY *, RECT **, int *);
	STDMETHODIMP CreateProxyFactoryEntry(IUIAutomationProxyFactory *, IUIAutomationProxyFactoryEntry **);
	STDMETHODIMP GetPropertyProgrammaticName(PROPERTYID, BSTR *);
	STDMETHODIMP GetPatternProgrammaticName(PATTERNID, BSTR *);
	STDMETHODIMP PollForPotentialSupportedPatterns(IUIAutomationElement *, SAFEARRAY **, SAFEARRAY **);
	STDMETHODIMP PollForPotentialSupportedProperties(IUIAutomationElement *, SAFEARRAY * *, SAFEARRAY * *);
	STDMETHODIMP CheckNotSupported(VARIANT , BOOL *);
	STDMETHODIMP ElementFromIAccessible( IAccessible *, int, IUIAutomationElement **);
	STDMETHODIMP ElementFromIAccessibleBuildCache(IAccessible *, int, IUIAutomationCacheRequest *, IUIAutomationElement **);

	// Extensions
	STDMETHODIMP get_Mouse(IDispatchedMouseControl **controller);
	//STDMETHODIMP get_Nothing( VARIANT *retVal);

	STDMETHODIMP ConvertUnknownContitionToDispatchCondition(IUIAutomationCondition * condition, IDispatchedUiAutomationCondition ** newCondition);

	// Main Object Constructor & Destructor.
	UiAutomation();

protected:
	~UiAutomation();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The base implementation
	IUIAutomation *m_pAutomation;
	IDispatchedMouseControl *m_pMouse;
};

#endif // __cplusplus 
#endif // COUIAUTOMATION_H