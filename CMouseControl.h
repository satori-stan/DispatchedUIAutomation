#pragma once

#ifndef CMOUSECONTROL_H
#define CMOUSECONTROL_H 
#ifdef __cplusplus 
//#include <Unknwn.h>
//#include <UIAutomation.h>
#include "DispatchedUiAutomation_h.h"

//typedef void** PPVOID;

class CMouseControl : public IDispatchedMouseControl
{
	//friend class UiAutomation;
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

#pragma region User32

	HRESULT STDMETHODCALLTYPE LeftClick(void);

	HRESULT STDMETHODCALLTYPE MoveTo(
		/* [in] */ LONG x,
		/* [in] */ LONG y);

#pragma endregion /* User32 */

	// Main Object Constructor & Destructor.
	CMouseControl();

protected:
	~CMouseControl();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	// The value of members
	//IUIAutomationElement *m_pElement;
};

#endif // __cplusplus 
#endif // CMOUSECONTROL_H