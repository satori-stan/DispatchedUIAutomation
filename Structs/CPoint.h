#pragma once

#ifndef CDISPPOINT_H
#define CDISPPOINT_H 
#ifdef __cplusplus 
#include "..\\DispatchedUiAutomation_h.h"
class CPoint : public IDispPoint
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

	STDMETHODIMP get_x(LONG * retVal);
	STDMETHODIMP get_y(LONG * retVal);

	STDMETHODIMP toString(__RPC__deref_out_opt BSTR *retVal);

	CPoint(LONG x, LONG y);

protected:
	~CPoint();

private:
	// Reference count of component.
	long m_cRef;

	// Pointer to type-library (for implementing IDispatch).
	LPTYPEINFO m_ptinfo;

	// Helper function to load the type info (for implementing IDispatch).
	HRESULT LoadTypeInfo(ITypeInfo **pptinfo, const CLSID& libid, const CLSID& iid, LCID lcid);

	long m_X;
	long m_Y;
};

#endif // __cplusplus 
#endif // CDISPPOINT_H