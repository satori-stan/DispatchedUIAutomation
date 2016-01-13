#pragma once

#ifndef COUIAUTOMATIONELEMENT_H
#define COUIAUTOMATIONELEMENT_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
#include <UIAutomation.h>
#include "DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class UiAutomationElement : public IDispatchedUiAutomationElement
{
	friend class UiAutomation;
	friend class CUiAutomationTreeWalker;
	//explicit operator IUIAutomationElement*() const { return m_pElement; }
public:
#pragma region IUnknown

	// shared IUnknown methods. Main object, non-delegating.
	IFACEMETHODIMP QueryInterface(REFIID riid, void **ppv);
	IFACEMETHODIMP_(ULONG) AddRef();
	IFACEMETHODIMP_(ULONG) Release();

#pragma endregion /* IUnknown */
#pragma region IDispatch

	// shared IDispatch methods. Main object, non-delegating.
	IFACEMETHODIMP GetTypeInfoCount(UINT *pctinfo);
	IFACEMETHODIMP GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
	IFACEMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID* rgdispid);
	IFACEMETHODIMP Invoke(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispParams, VARIANT *pvarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	
#pragma endregion /* IDispatch */
	/*
#pragma region IRecordInfo

	IRecordInfo* GetRecordInfo();

#pragma endregion /* IRecordInfo * /
	*/
#pragma region IUIAutomationElement

#pragma region Properties
	// IUIAutomationElement Properties
	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProcessId(
		/* [retval][out] */ __RPC__out int *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControlType(
		/* [retval][out] */ __RPC__out CONTROLTYPEID *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLocalizedControlType(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentName(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAcceleratorKey(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAccessKey(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHasKeyboardFocus(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsKeyboardFocusable(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsEnabled(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAutomationId(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentClassName(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHelpText(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCulture(
		/* [retval][out] */ __RPC__out int *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsControlElement(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsContentElement(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsPassword(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentNativeWindowHandle(
		/* [retval][out] */ __RPC__deref_out_opt LONG *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemType(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsOffscreen(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentOrientation(
		/* [retval][out] */ __RPC__out enum OrientationType *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFrameworkId(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsRequiredForForm(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemStatus(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentBoundingRectangle(
		/* [retval][out] */ __RPC__deref_out_opt IDispRect ** rect);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLabeledBy(
		/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaRole(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaProperties(
		/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsDataValidForForm(
		/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControllerFor(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentDescribedBy(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFlowsTo(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProviderDescription(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedProcessId(
	//	/* [retval][out] */ __RPC__out int *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedControlType(
	//	/* [retval][out] */ __RPC__out CONTROLTYPEID *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLocalizedControlType(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedName(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAcceleratorKey(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAccessKey(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHasKeyboardFocus(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsKeyboardFocusable(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsEnabled(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAutomationId(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedClassName(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedHelpText(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedCulture(
	//	/* [retval][out] */ __RPC__out int *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsControlElement(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsContentElement(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsPassword(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedNativeWindowHandle(
	//	/* [retval][out] */ __RPC__deref_out_opt UIA_HWND *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemType(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsOffscreen(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedOrientation(
	//	/* [retval][out] */ __RPC__out enum OrientationType *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFrameworkId(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsRequiredForForm(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedItemStatus(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedBoundingRectangle(
	//	/* [retval][out] */ __RPC__out RECT *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedLabeledBy(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAriaRole(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedAriaProperties(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsDataValidForForm(
	//	/* [retval][out] */ __RPC__out BOOL *retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedControllerFor(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedDescribedBy(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedFlowsTo(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **retVal);

	///* [propget] */ HRESULT STDMETHODCALLTYPE get_CachedProviderDescription(
	//	/* [retval][out] */ __RPC__deref_out_opt BSTR *retVal);

	HRESULT STDMETHODCALLTYPE get_InvokePattern(
		__RPC__deref_out_opt IDispatchedInvokePattern **pattern);

#pragma endregion /* Properties */
#pragma region Methods

	//// IUIAutomationElement Methods
	HRESULT STDMETHODCALLTYPE SetFocus(__RPC__out BOOL * retVal);
	HRESULT STDMETHODCALLTYPE GetRuntimeId(__RPC__deref_out_opt SAFEARRAY * *runtimeId);
	HRESULT STDMETHODCALLTYPE FindFirst(
		enum TreeScope scope,
		__RPC__in_opt IDispatchedUiAutomationCondition *condition, 
		__RPC__deref_out_opt IDispatchedUiAutomationElement **found);

	HRESULT STDMETHODCALLTYPE FindAll(
		/* [in] */ enum TreeScope scope,
		/* [in] */ __RPC__in_opt IDispatchedUiAutomationCondition *condition,
		/* [retval][out] */ __RPC__deref_out_opt SAFEARRAY * *found);

	HRESULT STDMETHODCALLTYPE FindFirstBuildCache(
	/* [in] */ enum TreeScope scope,
		/* [in] */ __RPC__in_opt IDispatchedUiAutomationCondition *condition,
		/* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
		/* [retval][out] */ __RPC__deref_out_opt IDispatchedUiAutomationElement **found);

	//HRESULT STDMETHODCALLTYPE FindAllBuildCache(
	///* [in] */ enum TreeScope scope,
	//	/* [in] */ __RPC__in_opt IUIAutomationCondition *condition,
	//	/* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **found);

	//HRESULT STDMETHODCALLTYPE BuildUpdatedCache(
	//	/* [in] */ __RPC__in_opt IUIAutomationCacheRequest *cacheRequest,
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **updatedElement);

	//HRESULT STDMETHODCALLTYPE GetCurrentPropertyValue(
	//	/* [in] */ PROPERTYID propertyId,
	//	/* [retval][out] */ __RPC__out VARIANT *retVal);

	//HRESULT STDMETHODCALLTYPE GetCurrentPropertyValueEx(
	//	/* [in] */ PROPERTYID propertyId,
	//	/* [in] */ BOOL ignoreDefaultValue,
	//	/* [retval][out] */ __RPC__out VARIANT *retVal);

	//HRESULT STDMETHODCALLTYPE GetCachedPropertyValue(
	//	/* [in] */ PROPERTYID propertyId,
	//	/* [retval][out] */ __RPC__out VARIANT *retVal);

	//HRESULT STDMETHODCALLTYPE GetCachedPropertyValueEx(
	//	/* [in] */ PROPERTYID propertyId,
	//	/* [in] */ BOOL ignoreDefaultValue,
	//	/* [retval][out] */ __RPC__out VARIANT *retVal);

	//HRESULT STDMETHODCALLTYPE GetCurrentPatternAs(
	//	/* [in] */ PATTERNID patternId,
	//	/* [in] */ __RPC__in REFIID riid,
	//	/* [retval][iid_is][out] */ __RPC__deref_out_opt void **patternObject);

	//HRESULT STDMETHODCALLTYPE GetCachedPatternAs(
	//	/* [in] */ PATTERNID patternId,
	//	/* [in] */ __RPC__in REFIID riid,
	//	/* [retval][iid_is][out] */ __RPC__deref_out_opt void **patternObject);

	HRESULT STDMETHODCALLTYPE GetCurrentPattern(
		/* [in] */ PATTERNID patternId,
		/* [retval][out] */ __RPC__deref_out_opt IUnknown **patternObject);

	//HRESULT STDMETHODCALLTYPE GetCachedPattern(
	//	/* [in] */ PATTERNID patternId,
	//	/* [retval][out] */ __RPC__deref_out_opt IUnknown **patternObject);

	//HRESULT STDMETHODCALLTYPE GetCachedParent(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElement **parent);

	//HRESULT STDMETHODCALLTYPE GetCachedChildren(
	//	/* [retval][out] */ __RPC__deref_out_opt IUIAutomationElementArray **children);

	HRESULT STDMETHODCALLTYPE GetClickablePoint(
		/* [retval][out] */ __RPC__out IDispPoint ** clickable);

	HRESULT STDMETHODCALLTYPE toString(
		__RPC__deref_out_opt BSTR *retVal);

#pragma endregion /* Methods */
#pragma endregion /* IUIAutomationElement */

	/* [propget] */ HRESULT STDMETHODCALLTYPE get_Mouse(
		/* [retval][out] */ __RPC__deref_out_opt IDispatchedMouseControl ** controller);

	// Helper functions
	static SAFEARRAY * AutomationElementArrayToSafeArray(IUIAutomationElementArray *aeArry){
		HRESULT hr;
		SAFEARRAY * sfArry;
		SAFEARRAYBOUND  bound;
		bound.lLbound = 0;
		hr = aeArry->get_Length((int*)&(bound.cElements));
		if (FAILED(hr))
			return NULL;
		// TODO: Should it be "VT_ARRAY | VT_VARIANT" ?
		sfArry = SafeArrayCreateVector(VT_VARIANT, bound.lLbound, bound.cElements);
		if (sfArry == NULL){
			return NULL;
		}
		VARIANT var;
		V_VT(&var) = VT_DISPATCH;
		IUIAutomationElement * pIElement;
		UiAutomationElement* pElement;
		LONG num_elements = static_cast<LONG>(bound.cElements);
		for (LONG i = 0; i < num_elements; i++)
		{
			if (SUCCEEDED(aeArry->GetElement(i, &pIElement)) && pIElement != NULL)
			{
				pElement = new UiAutomationElement(pIElement);
				if (pElement != NULL)
				{
					// TODO: What happens if we leave one of the array indexes empty? Should we take precautions?
					if (SUCCEEDED(pElement->QueryInterface(IID_IDispatch, (void FAR* FAR*)&V_DISPATCH(&var))))
					{
						SafeArrayPutElement(sfArry, &i, &var);
					}
				}
				
			}
		}

		return sfArry;
	}
	/*
	static IRecordInfo * RecordInfoFromType(){
		//ITypeInfo **pptinfo
		IRecordInfo * pRecInfo;
		LPTYPELIB ptlib = NULL;
		LPTYPEINFO ptinfo = NULL;

		//LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationElement, 0);
		if (SUCCEEDED(LoadRegTypeLib(LIBID_DispatchedUiAutomation, 1, 0, 0, &ptlib))){
			if (SUCCEEDED(ptlib->GetTypeInfoOfGuid(__uuidof(CPOINT), &ptinfo))){
				// *pptinfo = ptinfo;
				
				if (FAILED(GetRecordInfoFromTypeInfo(ptinfo, &pRecInfo))){
					// TODO: Do something
				}
				ptinfo->Release();
			}
			ptlib->Release();
		}
		return pRecInfo;
	}
	*/
	// Main Object Constructor & Destructor.
	UiAutomationElement(IUIAutomationElement *el);

protected:
	~UiAutomationElement();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The value of members
	IUIAutomationElement *m_pElement;
};

#endif // __cplusplus 
#endif // COUIAUTOMATIONELEMENT_H