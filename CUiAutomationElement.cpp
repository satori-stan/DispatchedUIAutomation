#include <windows.h>
#include <ole2.h>
#include <vector>
#include "comdef.h"
//#include "comip.h"
//#include "comutil.h"

#include "CUiAutomationElement.h" 
#include "Conditions\\CUiAutomationPropertyCondition.h" 
// TODO: Move to a single include
#include "Patterns\\CDispatchedInvokePattern.h" 
#include "Patterns\\CDispatchedSelectionItemPattern.h" 
#include "Patterns\\CDispatchedValuePattern.h" 
#include "Patterns\\CDispatchedRangeValuePattern.h" 
#include "Patterns\\CDispatchedScrollPattern.h" 
#include "Patterns\\CDispatchedExpandCollapsePattern.h" 
#include "Patterns\\CDispatchedSelectionPattern.h" 
#include "Patterns\\CDispatchedGridPattern.h" 
#include "Patterns\\CDispatchedGridItemPattern.h" 
#include "Patterns\\CDispatchedMultipleViewPattern.h" 

#include "Structs\\CPoint.h"
#include "Structs\\CRect.h"


UiAutomationElement::UiAutomationElement(IUIAutomationElement *el) : m_cRef(1), m_ptinfo(NULL), m_pElement(el) { }

UiAutomationElement::~UiAutomationElement()
{
	m_pElement->Release();
}

#pragma region IUnknown

// Query to the interface the component supported.
IFACEMETHODIMP 
UiAutomationElement::QueryInterface(REFIID riid, void **ppv)
{
	HRESULT hr = S_OK;

	if (IsEqualIID(IID_IUnknown, riid))
	{
		//*ppv = static_cast<IUnknown *>(static_cast<IDispatchedUiAutomationElement *>(this));
		*ppv = static_cast<IUnknown *>(this);
	}
	else if (IsEqualIID(IID_IDispatch, riid)) // For implementing IDispatch
	{
		//*ppv = static_cast<IDispatch *>(static_cast<IDispatchedUiAutomationElement *>(this));
		*ppv = static_cast<IDispatch *>(this);
	}
	else if (IsEqualIID(IID_IDispatchedUiAutomationElement, riid))
	{
		*ppv = static_cast<IDispatchedUiAutomationElement *>(this);
	}
	else
	{
		hr = E_NOINTERFACE;
		*ppv = NULL;
	}

	if (*ppv)
	{
		AddRef();
	}

	return hr;
}

// Increase the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
UiAutomationElement::AddRef()
{
	return InterlockedIncrement(&m_cRef);
}

// Decrease the reference count for an interface on an object.
IFACEMETHODIMP_(ULONG) 
UiAutomationElement::Release()
{
	ULONG cRef = InterlockedDecrement(&m_cRef);
	if (0 == cRef)
	{
		delete this;
	}

	return cRef;
}

#pragma endregion /* IUnknown */

#pragma region IDispatch

// This method retrieves the number of type information interfaces that an 
// object provides, either 0 or 1. If the object provides type information, 
// this *pctinfo is 1; otherwise the *pctinfo is 0.
IFACEMETHODIMP 
UiAutomationElement::GetTypeInfoCount(UINT *pctinfo)
{
	if (pctinfo == NULL)
	{
		return E_POINTER;
	}
	*pctinfo = 1;
	return S_OK;
}

// This method retrieves the type information for an object.
IFACEMETHODIMP 
UiAutomationElement::GetTypeInfo(UINT itinfo, LCID lcid, ITypeInfo **pptinfo)
{
	HRESULT hr = S_OK;
	*pptinfo = NULL;

	if (itinfo != 0)
	{
		return ResultFromScode(DISP_E_BADINDEX);
	}

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationElement, 0);
	}

	if (SUCCEEDED(hr))
	{
		// AddRef and return pointer to cached typeinfo.
		m_ptinfo->AddRef();
		*pptinfo = m_ptinfo;
	}

	return hr;
}

// Helper function to load the type info.
HRESULT 
UiAutomationElement::LoadTypeInfo(ITypeInfo **pptinfo,
	const CLSID& libid,
	const CLSID& iid,
	LCID lcid)
{
	HRESULT hr;
	LPTYPELIB ptlib = NULL;
	LPTYPEINFO ptinfo = NULL;

	*pptinfo = NULL;

	// Load the type library.
	hr = LoadRegTypeLib(libid, 1, 0, lcid, &ptlib);
	if (SUCCEEDED(hr))
	{
		// Get type information for interface of the object.
		hr = ptlib->GetTypeInfoOfGuid(iid, &ptinfo);
		if (SUCCEEDED(hr))
		{
			*pptinfo = ptinfo;
		}

		ptlib->Release();
	}

	return hr;
}

// Maps a single member and an optional set of argument names to a 
// corresponding set of integer DISPIDs, which can be used on subsequent 
// calls to IDispatch::Invoke. The dispatch function DispGetIDsOfNames 
// provides a standard implementation of GetIDsOfNames.
IFACEMETHODIMP 
UiAutomationElement::GetIDsOfNames(REFIID riid,
	LPOLESTR *rgszNames,
	UINT cNames,
	LCID lcid,
	DISPID* rgdispid)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationElement, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispGetIDsOfNames(m_ptinfo, rgszNames, cNames, rgdispid);
	}

	return hr;
}

// Provides access to properties and methods exposed by an object. The 
// dispatch function DispInvoke Function provides a standard implementation 
// of IDispatch::Invoke.
IFACEMETHODIMP 
UiAutomationElement::Invoke(DISPID dispidMember,
	REFIID riid,
	LCID lcid,
	WORD wFlags,
	DISPPARAMS *pdispParams,
	VARIANT *pvarResult,
	EXCEPINFO *pExcepInfo,
	UINT *puArgErr)
{
	HRESULT hr = S_OK;

	if (m_ptinfo == NULL)
	{
		// Load the type info.
		hr = LoadTypeInfo(&m_ptinfo, LIBID_DispatchedUiAutomation, IID_IDispatchedUiAutomationElement, 0);
	}

	if (SUCCEEDED(hr))
	{
		hr = DispInvoke(this, m_ptinfo, dispidMember, wFlags, pdispParams,
			pvarResult, pExcepInfo, puArgErr);
	}

	return hr;
}

#pragma endregion /* IDispatch */

#pragma region IUIAutomationElement

#pragma region Properties


HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentProcessId(__RPC__out int *retVal){
	HRESULT hr = m_pElement->get_CurrentProcessId(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentControlType(__RPC__out CONTROLTYPEID *retVal){
	HRESULT hr = m_pElement->get_CurrentControlType(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentLocalizedControlType(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentLocalizedControlType(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentName(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentName(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentAcceleratorKey(__RPC__deref_out_opt BSTR *retVal){
	return m_pElement->get_CurrentAcceleratorKey(retVal);
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentAccessKey(__RPC__deref_out_opt BSTR *retVal){
	return m_pElement->get_CurrentAccessKey(retVal);
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentHasKeyboardFocus(__RPC__out BOOL *retVal){
	return m_pElement->get_CurrentHasKeyboardFocus(retVal);
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsKeyboardFocusable(__RPC__out BOOL *retVal){
	return m_pElement->get_CurrentIsKeyboardFocusable(retVal);
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsEnabled(__RPC__out BOOL *retVal){
	return m_pElement->get_CurrentIsEnabled(retVal);
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentAutomationId(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentAutomationId(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentClassName(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentClassName(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentHelpText(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentHelpText(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentCulture(__RPC__out int *retVal){
	HRESULT hr = m_pElement->get_CurrentCulture(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsControlElement(__RPC__out BOOL *retVal){
	HRESULT hr = m_pElement->get_CurrentIsControlElement(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsContentElement(__RPC__out BOOL *retVal){
	HRESULT hr = m_pElement->get_CurrentIsContentElement(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsPassword(__RPC__out BOOL *retVal){
	HRESULT hr = m_pElement->get_CurrentIsPassword(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentNativeWindowHandle(__RPC__deref_out_opt LONG *retVal){
	UIA_HWND hW;
	HRESULT hr = m_pElement->get_CurrentNativeWindowHandle(&hW);
	if (SUCCEEDED(hr))
		*retVal = (LONG)hW;
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentItemType(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentItemType(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsOffscreen(__RPC__out BOOL *retVal){
	HRESULT hr = m_pElement->get_CurrentIsOffscreen(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentOrientation(__RPC__out enum OrientationType *retVal){
	HRESULT hr = m_pElement->get_CurrentOrientation(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentFrameworkId(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentFrameworkId(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsRequiredForForm(__RPC__out BOOL *retVal){
	HRESULT hr = m_pElement->get_CurrentIsRequiredForForm(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentItemStatus(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr = m_pElement->get_CurrentItemStatus(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentBoundingRectangle(__RPC__out IDispRect ** rect){
	RECT r;
	HRESULT hr = m_pElement->get_CurrentBoundingRectangle(&r);
	if (SUCCEEDED(hr)){
		*rect = new CRect(r);
	}
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentLabeledBy(__RPC__deref_out_opt IUIAutomationElement **retVal){
	HRESULT hr = m_pElement->get_CurrentLabeledBy(retVal);
	return hr;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentAriaRole(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentAriaProperties(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentIsDataValidForForm(__RPC__out BOOL *retVal){
	return E_PENDING;
}
/*
HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentControllerFor(__RPC__deref_out_opt IUIAutomationElementArray **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentDescribedBy(__RPC__deref_out_opt IUIAutomationElementArray **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentFlowsTo(__RPC__deref_out_opt IUIAutomationElementArray **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CurrentProviderDescription(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedProcessId(__RPC__out int *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedControlType(__RPC__out CONTROLTYPEID *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedLocalizedControlType(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedName(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedAcceleratorKey(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedAccessKey(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedHasKeyboardFocus(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsKeyboardFocusable(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsEnabled(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedAutomationId(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedClassName(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedHelpText(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedCulture(__RPC__out int *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsControlElement(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsContentElement(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsPassword(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedNativeWindowHandle(__RPC__deref_out_opt UIA_HWND *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedItemType(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsOffscreen(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedOrientation(__RPC__out enum OrientationType *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedFrameworkId(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsRequiredForForm(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedItemStatus(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedBoundingRectangle(__RPC__out RECT *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedLabeledBy(__RPC__deref_out_opt IUIAutomationElement **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedAriaRole(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedAriaProperties(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedIsDataValidForForm(__RPC__out BOOL *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedControllerFor(__RPC__deref_out_opt IUIAutomationElementArray **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedDescribedBy(__RPC__deref_out_opt IUIAutomationElementArray **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedFlowsTo(__RPC__deref_out_opt IUIAutomationElementArray **retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_CachedProviderDescription(__RPC__deref_out_opt BSTR *retVal){
	return E_PENDING;
}
*/

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::get_InvokePattern(IDispatchedInvokePattern **pattern){
	IUIAutomationInvokePattern * pInv;
	HRESULT hr = m_pElement->GetCurrentPatternAs(UIA_InvokePatternId, __uuidof(IUIAutomationInvokePattern), (void **)&pInv);

	if (FAILED(hr) || pInv == NULL)
	{
		return hr;
	}
	else 
	{
		*pattern = new CDispatchedInvokePattern(pInv);
		if (*pattern == NULL)
		{
			return E_POINTER;
		}
		else 
		{
			return hr;
		}
	}
}

#pragma endregion /* Properties */

#pragma region Methods

HRESULT STDMETHODCALLTYPE
UiAutomationElement::SetFocus(__RPC__out BOOL * retVal){
	HRESULT hr = m_pElement->SetFocus();
	if (SUCCEEDED(hr)){
		*retVal = TRUE;
	}
	else {
		*retVal = FALSE;
	}
	return hr;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetRuntimeId(__RPC__deref_out_opt SAFEARRAY ** runtimeId){
	return m_pElement->GetRuntimeId(runtimeId);
}

HRESULT STDMETHODCALLTYPE
//UiAutomationElement::FindFirst(TreeScope scope, __RPC__in_opt IUIAutomationCondition *condition, __RPC__deref_out_opt IUIAutomationElement **found){
UiAutomationElement::FindFirst(enum TreeScope scope, __RPC__in_opt IDispatchedUiAutomationCondition *condition, __RPC__deref_out_opt IDispatchedUiAutomationElement **found){
	HRESULT hr; 
	IUIAutomationCondition * c;
	IUIAutomationElement * tmp;
	hr = condition->GetBase(&c);

	if (FAILED(hr))
		return hr;

	hr = m_pElement->FindFirst(scope, c, &tmp);
	
	//HRESULT hr = m_pElement->FindFirst(scope, ((UiAutomationPropertyCondition*)condition)->m_pCondition, &tmp);

	if (SUCCEEDED(hr) && tmp != NULL){
		*found = new UiAutomationElement(tmp);
		if (*found == NULL)
		{
			return E_POINTER;
		}
		else
		{
			return hr;
		}
	}
	else if (SUCCEEDED(hr)){
		return S_FALSE;
	}
	else {
		return hr;
	}

}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::FindAll(enum TreeScope scope, __RPC__in_opt IDispatchedUiAutomationCondition *condition, __RPC__deref_out_opt SAFEARRAY * *found){
	HRESULT hr;
	IUIAutomationCondition * c;
	IUIAutomationElementArray * tmp;
	IUIAutomationElement * tmp2;
	SAFEARRAYBOUND  bound;
	bound.lLbound = 0;

	hr = condition->GetBase(&c);

	if (FAILED(hr))
		return hr;

	hr = m_pElement->FindAll(scope, c, &tmp);

	if (SUCCEEDED(hr) && tmp != NULL){
		hr = tmp->get_Length((int*)&(bound.cElements));
		if (FAILED(hr))
			return hr;
		// TODO: Should it be "VT_ARRAY | VT_VARIANT" ?
		*found = SafeArrayCreateVector(VT_VARIANT, bound.lLbound, bound.cElements);
		if (*found == NULL){
			return E_OUTOFMEMORY;
		}
		VARIANT var;
		V_VT(&var) = VT_DISPATCH;
		UiAutomationElement* pElement;
		LONG num_elements = static_cast<LONG>(bound.cElements);
		for (LONG i = 0; i < num_elements; i++)
		{
			if (SUCCEEDED(tmp->GetElement(i, &tmp2)) && tmp2 != NULL)
			{
				pElement = new UiAutomationElement(tmp2);
				if (pElement != NULL)
				{
					// TODO: What happens if we leave one of the array indexes empty? Should we take precautions?
					if (SUCCEEDED(pElement->QueryInterface(IID_IDispatch, (void FAR* FAR*)&V_DISPATCH(&var))))
					{
						SafeArrayPutElement(*found, &i, &var);
					}
				}
				/*
				else
				{
					return E_POINTER;
				}
				*/

				//pElement->Release();
				//VariantClear(&var);
			}
		}
		return S_OK;
	}
	else if (SUCCEEDED(hr)){
		return S_FALSE;
	}
	else {
		return hr;
	}
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::FindFirstBuildCache(enum TreeScope scope, __RPC__in_opt IDispatchedUiAutomationCondition *condition, __RPC__in_opt IUIAutomationCacheRequest *cacheRequest, __RPC__deref_out_opt IDispatchedUiAutomationElement **found){
	return E_NOTIMPL;
}
/*
HRESULT STDMETHODCALLTYPE
UiAutomationElement::FindAllBuildCache(enum TreeScope scope, __RPC__in_opt IUIAutomationCondition *condition, __RPC__in_opt IUIAutomationCacheRequest *cacheRequest, __RPC__deref_out_opt IUIAutomationElementArray **found){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::BuildUpdatedCache(__RPC__in_opt IUIAutomationCacheRequest *cacheRequest, __RPC__deref_out_opt IUIAutomationElement **updatedElement){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCurrentPropertyValue(PROPERTYID propertyId, __RPC__out VARIANT *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCurrentPropertyValueEx(PROPERTYID propertyId, BOOL ignoreDefaultValue, __RPC__out VARIANT *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCachedPropertyValue(PROPERTYID propertyId, __RPC__out VARIANT *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCachedPropertyValueEx(PROPERTYID propertyId, BOOL ignoreDefaultValue, __RPC__out VARIANT *retVal){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCurrentPatternAs(PATTERNID patternId, __RPC__in REFIID riid, __RPC__deref_out_opt void **patternObject){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCachedPatternAs(PATTERNID patternId, __RPC__in REFIID riid, __RPC__deref_out_opt void **patternObject){
	return E_PENDING;
}
*/
HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCurrentPattern(PATTERNID patternId, __RPC__deref_out_opt IUnknown **patternObject){
	HRESULT hr;

	switch (patternId){
	case UIA_InvokePatternId:
		IUIAutomationInvokePattern * pInv;
		hr = m_pElement->GetCurrentPatternAs(UIA_InvokePatternId, __uuidof(IUIAutomationInvokePattern), (void **)&pInv);

		if (FAILED(hr) || pInv == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedInvokePattern(pInv);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_SelectionPatternId:
		IUIAutomationSelectionPattern * pSel;
		hr = m_pElement->GetCurrentPatternAs(UIA_SelectionPatternId, __uuidof(IUIAutomationSelectionPattern), (void **)&pSel);

		if (FAILED(hr) || pSel == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedSelectionPattern(pSel);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_ValuePatternId:
		IUIAutomationValuePattern * pVal;
		hr = m_pElement->GetCurrentPatternAs(UIA_ValuePatternId, __uuidof(IUIAutomationValuePattern), (void **)&pVal);

		if (FAILED(hr) || pVal == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedValuePattern(pVal);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_RangeValuePatternId:
		IUIAutomationRangeValuePattern * pRVal;
		hr = m_pElement->GetCurrentPatternAs(UIA_RangeValuePatternId, __uuidof(IUIAutomationRangeValuePattern), (void **)&pRVal);

		if (FAILED(hr) || pRVal == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedRangeValuePattern(pRVal);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_ScrollPatternId:
		IUIAutomationScrollPattern * pScrol;
		hr = m_pElement->GetCurrentPatternAs(UIA_ScrollPatternId, __uuidof(IUIAutomationScrollPattern), (void **)&pScrol);

		if (FAILED(hr) || pScrol == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedScrollPattern(pScrol);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_ExpandCollapsePatternId:
		IUIAutomationExpandCollapsePattern * pExCol;
		hr = m_pElement->GetCurrentPatternAs(UIA_ExpandCollapsePatternId, __uuidof(IUIAutomationExpandCollapsePattern), (void **)&pExCol);

		if (FAILED(hr) || pExCol == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedExpandCollapsePattern(pExCol);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_GridPatternId:
		IUIAutomationGridPattern * pGrid;
		hr = m_pElement->GetCurrentPatternAs(UIA_GridPatternId, __uuidof(IUIAutomationGridPattern), (void **)&pGrid);

		if (FAILED(hr) || pGrid == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedGridPattern(pGrid);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_GridItemPatternId:
		IUIAutomationGridItemPattern * pGridI;
		hr = m_pElement->GetCurrentPatternAs(UIA_GridItemPatternId, __uuidof(IUIAutomationGridItemPattern), (void **)&pGridI);

		if (FAILED(hr) || pGridI == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedGridItemPattern(pGridI);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	case UIA_MultipleViewPatternId:
		IUIAutomationMultipleViewPattern * pMV;
		hr = m_pElement->GetCurrentPatternAs(UIA_MultipleViewPatternId, __uuidof(IUIAutomationMultipleViewPattern), (void **)&pMV);

		if (FAILED(hr) || pMV == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedMultipleViewPattern(pMV);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	/*
    const long UIA_WindowPatternId             = 10009;
	*/
	case UIA_SelectionItemPatternId:
		IUIAutomationSelectionItemPattern * pSI;
		hr = m_pElement->GetCurrentPatternAs(UIA_SelectionItemPatternId, __uuidof(IUIAutomationSelectionItemPattern), (void **)&pSI);

		if (FAILED(hr) || pSI == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedSelectionItemPattern(pSI);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else
			{
				return hr;
			}
		}
		break;
	/*
    const long UIA_DockPatternId               = 10011;
    const long UIA_TablePatternId              = 10012;
    const long UIA_TableItemPatternId          = 10013;
		
	case UIA_TextPatternId:
		IUIAutomationTextPattern * pInv;
		hr = m_pElement->GetCurrentPatternAs(UIA_TextPatternId, __uuidof(IUIAutomationTextPattern), (void **)&pInv);

		if (FAILED(hr) || pInv == NULL)
		{
			return hr;
		}
		else
		{
			*patternObject = new CDispatchedTextPattern(pInv);
			if (*patternObject == NULL)
			{
				return E_POINTER;
			}
			else 
			{
				return hr;
			}
		}
		break;
		
        const long UIA_TogglePatternId             = 10015;
        const long UIA_TransformPatternId          = 10016;
        const long UIA_ScrollItemPatternId         = 10017;
        const long UIA_LegacyIAccessiblePatternId  = 10018;
        const long UIA_ItemContainerPatternId      = 10019;
        const long UIA_VirtualizedItemPatternId    = 10020;
        const long UIA_SynchronizedInputPatternId  = 10021;
        const long UIA_ObjectModelPatternId        = 10022;
        const long UIA_AnnotationPatternId         = 10023;
        const long UIA_TextPattern2Id              = 10024;
        const long UIA_StylesPatternId             = 10025;
        const long UIA_SpreadsheetPatternId        = 10026;
        const long UIA_SpreadsheetItemPatternId    = 10027;
        const long UIA_TransformPattern2Id         = 10028;
        const long UIA_TextChildPatternId          = 10029;
        const long UIA_DragPatternId               = 10030;
        const long UIA_DropTargetPatternId         = 10031;
        const long UIA_TextEditPatternId           = 10032;	
	*/

	default:
		return E_FAIL;
	}
}
/*
HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCachedPattern(PATTERNID patternId, __RPC__deref_out_opt IUnknown **patternObject){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCachedParent(__RPC__deref_out_opt IUIAutomationElement **parent){
	return E_PENDING;
}

HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetCachedChildren(__RPC__deref_out_opt IUIAutomationElementArray **children){
	return E_PENDING;
}
*/
HRESULT STDMETHODCALLTYPE
UiAutomationElement::GetClickablePoint(__RPC__out IDispPoint ** clickable){
	BOOL gotIt;
	POINT point;
	HRESULT hr = m_pElement->GetClickablePoint(&point, &gotIt);
	if (SUCCEEDED(hr) && gotIt == TRUE){
		*clickable = new CPoint(point.x, point.y);
	}
	return gotIt == TRUE && clickable != NULL ? hr : E_FAIL;
}

HRESULT STDMETHODCALLTYPE 
UiAutomationElement::toString(__RPC__deref_out_opt BSTR *retVal){
	HRESULT hr;
	_bstr_t sName; // https://msdn.microsoft.com/en-us/library/zthfhkd6.aspx
	_bstr_t sValue;
	_bstr_t sSeparator = L"\n";
	int iValue;
	long lValue;
	long sLen = 0;
	std::vector<_bstr_t> data;
	//hr = m_pElement->GetRuntimeId(&sValue); // Array of ints
	//hr = m_pElement->get_CurrentBoundingRectangle(&sValue); // RECT
	if (SUCCEEDED(m_pElement->get_CurrentProcessId(&iValue))){ // INT
		sName = L"ProcessId: ";
		sValue = iValue;
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentControlType(&iValue))){ // INT
		sName = L"ControlType: ";
		sValue = iValue;
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentLocalizedControlType(sValue.GetAddress()))){
		sName = L"LocalizedControlType: ";
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentName(sValue.GetAddress())) && sValue.length() > 0){
		sName = L"Name: ";
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentAcceleratorKey(sValue.GetAddress())) && sValue.length() > 0){
		sName = L"AcceleratorKey: ";
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentAccessKey(sValue.GetAddress())) && sValue.length() > 0){
		sName = L"AccessKey: ";
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentHasKeyboardFocus((BOOL *)&iValue))){ // BOOL
		sName = L"HasKeyboardFocus: ";
		sValue = iValue;
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentIsKeyboardFocusable((BOOL *)&iValue))){ // BOOL
		sName = L"IsKeyboardFocusable: ";
		sValue = iValue;
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentIsEnabled((BOOL *)&iValue))){ // BOOL
		sName = L"IsEnabled: ";
		sValue = iValue;
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentAutomationId(sValue.GetAddress())) && sValue.length() > 0){
		sName = L"AutomationId: ";
		data.push_back(sName + sValue);
	}
	if (SUCCEEDED(m_pElement->get_CurrentClassName(sValue.GetAddress())) && sValue.length() > 0){
		sName = L"ClassName: ";
		data.push_back(sName + sValue);
	}
	/*
	HelpText =								30013,
	ClickablePoint =						30014,
	Culture =								30015,
	IsControlElement =						30016,
	IsContentElement =						30017,
	LabeledBy =								30018,
	IsPassword =							30019,
	*/
	hr = m_pElement->get_CurrentNativeWindowHandle((UIA_HWND *)&lValue);
	if (SUCCEEDED(hr)){
		sName = L"IsEnabled: ";
		sValue = lValue;
		data.push_back(sName + sValue);
	}
	/*
	ItemType =								30021,
	IsOffscreen =							30022,
	Orientation =							30023,
	FrameworkId =							30024,
	IsRequiredForForm =						30025,
	ItemStatus =							30026,
	IsDockPatternAvailable =				30027,
	IsExpandCollapsePatternAvailable =		30028,
	IsGridItemPatternAvailable =			30029,
	IsGridPatternAvailable =				30030,
	IsInvokePatternAvailable =				30031,
	IsMultipleViewPatternAvailable =		30032,
	IsRangeValuePatternAvailable =			30033,
	IsScrollPatternAvailable =				30034,
	IsScrollItemPatternAvailable =			30035,
	IsSelectionItemPatternAvailable =		30036,
	IsSelectionPatternAvailable =			30037,
	IsTablePatternAvailable =				30038,
	IsTableItemPatternAvailable =			30039,
	IsTextPatternAvailable =				30040,
	IsTogglePatternAvailable =				30041,
	IsTransformPatternAvailable =			30042,
	IsValuePatternAvailable =				30043,
	IsWindowPatternAvailable =				30044,
	ValueValue =							30045,
	ValueIsReadOnly =						30046,
	RangeValueValue =						30047,
	RangeValueIsReadOnly =					30048,
	RangeValueMinimum =						30049,
	RangeValueMaximum =						30050,
	RangeValueLargeChange =					30051,
	RangeValueSmallChange =					30052,
	ScrollHorizontalScrollPercent =			30053,
	ScrollHorizontalViewSize =				30054,
	ScrollVerticalScrollPercent =			30055,
	ScrollVerticalViewSize =				30056,
	ScrollHorizontallyScrollable =			30057,
	ScrollVerticallyScrollable =			30058,
	SelectionSelection =					30059,
	SelectionCanSelectMultiple =			30060,
	SelectionIsSelectionRequired =			30061,
	GridRowCount =							30062,
	GridColumnCount =						30063,
	GridItemRow =							30064,
	GridItemColumn =						30065,
	GridItemRowSpan =						30066,
	GridItemColumnSpan =					30067,
	GridItemContainingGrid =				30068,
	DockDockPosition =						30069,
	ExpandCollapseExpandCollapseState =		30070,
	MultipleViewCurrentView =				30071,
	MultipleViewSupportedViews =			30072,
	WindowCanMaximize =						30073,
	WindowCanMinimize =						30074,
	WindowWindowVisualState =				30075,
	WindowWindowInteractionState =			30076,
	WindowIsModal =							30077,
	WindowIsTopmost =						30078,
	SelectionItemIsSelected =				30079,
	SelectionItemSelectionContainer =		30080,
	TableRowHeaders =						30081,
	TableColumnHeaders =					30082,
	TableRowOrColumnMajor =					30083,
	TableItemRowHeaderItems =				30084,
	TableItemColumnHeaderItems =			30085,
	ToggleToggleState =						30086,
	TransformCanMove =						30087,
	TransformCanResize =					30088,
	TransformCanRotate =					30089,
	IsLegacyIAccessiblePatternAvailable =	30090,
	LegacyIAccessibleChildId =				30091,
	LegacyIAccessibleName =					30092,
	LegacyIAccessibleValue =				30093,
	LegacyIAccessibleDescription =			30094,
	LegacyIAccessibleRole =					30095,
	LegacyIAccessibleState =				30096,
	LegacyIAccessibleHelp =					30097,
	LegacyIAccessibleKeyboardShortcut =		30098,
	LegacyIAccessibleSelection =			30099,
	LegacyIAccessibleDefaultAction =		30100,
	AriaRole =								30101,
	AriaProperties =						30102,
	IsDataValidForForm =					30103,
	ControllerFor =							30104,
	DescribedBy =							30105,
	FlowsTo =								30106,
	ProviderDescription =					30107,
	IsItemContainerPatternAvailable =		30108,
	IsVirtualizedItemPatternAvailable =		30109,
	IsSynchronizedInputPatternAvailable =	30110,
	OptimizeForVisualContent =				30111,
	IsObjectModelPatternAvailable =			30112,
	AnnotationAnnotationTypeId =			30113,
	AnnotationAnnotationTypeName =			30114,
	AnnotationAuthor =						30115,
	AnnotationDateTime =					30116,
	AnnotationTarget =						30117,
	IsAnnotationPatternAvailable =			30118,
	IsTextPattern2Available =				30119,
	StylesStyleId =							30120,
	StylesStyleName =						30121,
	StylesFillColor =						30122,
	StylesFillPatternStyle =				30123,
	StylesShape =							30124,
	StylesFillPatternColor =				30125,
	StylesExtendedProperties =				30126,
	IsStylesPatternAvailable =				30127,
	IsSpreadsheetPatternAvailable =			30128,
	SpreadsheetItemFormula =				30129,
	SpreadsheetItemAnnotationObjects =		30130,
	SpreadsheetItemAnnotationTypes =		30131,
	IsSpreadsheetItemPatternAvailable =		30132,
	Transform2CanZoom =						30133,
	IsTransformPattern2Available =			30134,
	LiveSetting =							30135,
	IsTextChildPatternAvailable =			30136,
	IsDragPatternAvailable =				30137,
	DragIsGrabbed =							30138,
	DragDropEffect =						30139,
	DragDropEffects =						30140,
	IsDropTargetPatternAvailable =			30141,
	DropTargetDropTargetEffect =			30142,
	DropTargetDropTargetEffects =			30143,
	DragGrabbedItems =						30144,
	Transform2ZoomLevel =					30145,
	Transform2ZoomMinimum =					30146,
	Transform2ZoomMaximum =					30147,
	FlowsFrom =								30148,
	IsTextEditPatternAvailable =			30149,
	IsPeripheral =							30150
	*/
	sValue = L"";
	for (std::vector<_bstr_t>::iterator it = data.begin(); it != data.end(); ++it) {
		//sLen += it->length(); //_bstr_t::length(it);
		sValue += *it;
		sValue += sSeparator;
	}
	*retVal = sValue.Detach(); // sValue.GetAddress(); //sValue.copy();
	return S_OK;
}

#pragma endregion /* Methods */

#pragma endregion /* IUIAutomationElement */
/*
SAFEARRAY *
AutomationElementArrayToSafeArray(IUIAutomationElementArray * aeArry){
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
	for (LONG i = 0; i < bound.cElements; i++)
	{
		if (SUCCEEDED(aeArry->GetElement(i, &pIElement)))
		{
			pElement = new UiAutomationElement(pIElement);

			// TODO: What happens if we leave one of the array indexes empty? Should we take precautions?
			if (SUCCEEDED(pElement->QueryInterface(IID_IDispatch, (void FAR* FAR*)&V_DISPATCH(&var))))
			{
				SafeArrayPutElement(sfArry, &i, &var);
			}

			//pElement->Release();
			//VariantClear(&var);
		}
	}

	return sfArry;
}
*/
