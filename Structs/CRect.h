#pragma once

#ifndef CDISPRECT_H
#define CDISPRECT_H 
#ifdef __cplusplus 
#include "..\\DispatchedUiAutomation_h.h"
class CRect : public IDispRect
{
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

	STDMETHODIMP get_left(LONG * retVal);
	STDMETHODIMP get_top(LONG * retVal);
	STDMETHODIMP get_right(LONG * retVal);
	STDMETHODIMP get_bottom(LONG * retVal);

	STDMETHODIMP toPoint(IDispPoint ** point);

	STDMETHODIMP toString(__RPC__deref_out_opt BSTR *retVal);

	//CRect(LONG left, LONG top, LONG right, LONG bottom);
	CRect(RECT r);

protected:
	~CRect();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	long m_Left;
	long m_Top;
	long m_Right;
	long m_Bottom;
};

#endif // __cplusplus 
#endif // CDISPRECT_H