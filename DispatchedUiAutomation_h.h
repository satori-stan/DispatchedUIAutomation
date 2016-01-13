

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jun 04 20:25:24 2015
 */
/* Compiler settings for DispatchedUiAutomation.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DispatchedUiAutomation_h_h__
#define __DispatchedUiAutomation_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDispatchedUiAutomation_FWD_DEFINED__
#define __IDispatchedUiAutomation_FWD_DEFINED__
typedef interface IDispatchedUiAutomation IDispatchedUiAutomation;

#endif 	/* __IDispatchedUiAutomation_FWD_DEFINED__ */


#ifndef __IDispPoint_FWD_DEFINED__
#define __IDispPoint_FWD_DEFINED__
typedef interface IDispPoint IDispPoint;

#endif 	/* __IDispPoint_FWD_DEFINED__ */


#ifndef __IDispRect_FWD_DEFINED__
#define __IDispRect_FWD_DEFINED__
typedef interface IDispRect IDispRect;

#endif 	/* __IDispRect_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationCondition_FWD_DEFINED__
#define __IDispatchedUiAutomationCondition_FWD_DEFINED__
typedef interface IDispatchedUiAutomationCondition IDispatchedUiAutomationCondition;

#endif 	/* __IDispatchedUiAutomationCondition_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationBoolCondition_FWD_DEFINED__
#define __IDispatchedUiAutomationBoolCondition_FWD_DEFINED__
typedef interface IDispatchedUiAutomationBoolCondition IDispatchedUiAutomationBoolCondition;

#endif 	/* __IDispatchedUiAutomationBoolCondition_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationPropertyCondition_FWD_DEFINED__
#define __IDispatchedUiAutomationPropertyCondition_FWD_DEFINED__
typedef interface IDispatchedUiAutomationPropertyCondition IDispatchedUiAutomationPropertyCondition;

#endif 	/* __IDispatchedUiAutomationPropertyCondition_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationAndCondition_FWD_DEFINED__
#define __IDispatchedUiAutomationAndCondition_FWD_DEFINED__
typedef interface IDispatchedUiAutomationAndCondition IDispatchedUiAutomationAndCondition;

#endif 	/* __IDispatchedUiAutomationAndCondition_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationOrCondition_FWD_DEFINED__
#define __IDispatchedUiAutomationOrCondition_FWD_DEFINED__
typedef interface IDispatchedUiAutomationOrCondition IDispatchedUiAutomationOrCondition;

#endif 	/* __IDispatchedUiAutomationOrCondition_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationNotCondition_FWD_DEFINED__
#define __IDispatchedUiAutomationNotCondition_FWD_DEFINED__
typedef interface IDispatchedUiAutomationNotCondition IDispatchedUiAutomationNotCondition;

#endif 	/* __IDispatchedUiAutomationNotCondition_FWD_DEFINED__ */


#ifndef __IDispatchedInvokePattern_FWD_DEFINED__
#define __IDispatchedInvokePattern_FWD_DEFINED__
typedef interface IDispatchedInvokePattern IDispatchedInvokePattern;

#endif 	/* __IDispatchedInvokePattern_FWD_DEFINED__ */


#ifndef __IDispatchedSelectionPattern_FWD_DEFINED__
#define __IDispatchedSelectionPattern_FWD_DEFINED__
typedef interface IDispatchedSelectionPattern IDispatchedSelectionPattern;

#endif 	/* __IDispatchedSelectionPattern_FWD_DEFINED__ */


#ifndef __IDispatchedValuePattern_FWD_DEFINED__
#define __IDispatchedValuePattern_FWD_DEFINED__
typedef interface IDispatchedValuePattern IDispatchedValuePattern;

#endif 	/* __IDispatchedValuePattern_FWD_DEFINED__ */


#ifndef __IDispatchedRangeValuePattern_FWD_DEFINED__
#define __IDispatchedRangeValuePattern_FWD_DEFINED__
typedef interface IDispatchedRangeValuePattern IDispatchedRangeValuePattern;

#endif 	/* __IDispatchedRangeValuePattern_FWD_DEFINED__ */


#ifndef __IDispatchedScrollPattern_FWD_DEFINED__
#define __IDispatchedScrollPattern_FWD_DEFINED__
typedef interface IDispatchedScrollPattern IDispatchedScrollPattern;

#endif 	/* __IDispatchedScrollPattern_FWD_DEFINED__ */


#ifndef __IDispatchedExpandCollapsePattern_FWD_DEFINED__
#define __IDispatchedExpandCollapsePattern_FWD_DEFINED__
typedef interface IDispatchedExpandCollapsePattern IDispatchedExpandCollapsePattern;

#endif 	/* __IDispatchedExpandCollapsePattern_FWD_DEFINED__ */


#ifndef __IDispatchedGridPattern_FWD_DEFINED__
#define __IDispatchedGridPattern_FWD_DEFINED__
typedef interface IDispatchedGridPattern IDispatchedGridPattern;

#endif 	/* __IDispatchedGridPattern_FWD_DEFINED__ */


#ifndef __IDispatchedGridItemPattern_FWD_DEFINED__
#define __IDispatchedGridItemPattern_FWD_DEFINED__
typedef interface IDispatchedGridItemPattern IDispatchedGridItemPattern;

#endif 	/* __IDispatchedGridItemPattern_FWD_DEFINED__ */


#ifndef __IDispatchedMultipleViewPattern_FWD_DEFINED__
#define __IDispatchedMultipleViewPattern_FWD_DEFINED__
typedef interface IDispatchedMultipleViewPattern IDispatchedMultipleViewPattern;

#endif 	/* __IDispatchedMultipleViewPattern_FWD_DEFINED__ */


#ifndef __IDispatchedSelectionItemPattern_FWD_DEFINED__
#define __IDispatchedSelectionItemPattern_FWD_DEFINED__
typedef interface IDispatchedSelectionItemPattern IDispatchedSelectionItemPattern;

#endif 	/* __IDispatchedSelectionItemPattern_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationTreeWalker_FWD_DEFINED__
#define __IDispatchedUiAutomationTreeWalker_FWD_DEFINED__
typedef interface IDispatchedUiAutomationTreeWalker IDispatchedUiAutomationTreeWalker;

#endif 	/* __IDispatchedUiAutomationTreeWalker_FWD_DEFINED__ */


#ifndef __IDispatchedMouseControl_FWD_DEFINED__
#define __IDispatchedMouseControl_FWD_DEFINED__
typedef interface IDispatchedMouseControl IDispatchedMouseControl;

#endif 	/* __IDispatchedMouseControl_FWD_DEFINED__ */


#ifndef __IDispatchedUiAutomationElement_FWD_DEFINED__
#define __IDispatchedUiAutomationElement_FWD_DEFINED__
typedef interface IDispatchedUiAutomationElement IDispatchedUiAutomationElement;

#endif 	/* __IDispatchedUiAutomationElement_FWD_DEFINED__ */


#ifndef __UiAutomation_FWD_DEFINED__
#define __UiAutomation_FWD_DEFINED__

#ifdef __cplusplus
typedef class UiAutomation UiAutomation;
#else
typedef struct UiAutomation UiAutomation;
#endif /* __cplusplus */

#endif 	/* __UiAutomation_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "UIAutomationClient.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_DispatchedUiAutomation_0000_0000 */
/* [local] */ 

// -------------------------------------------------------------
// DispatchedUiAutomation.idl
//
// IDispatch compatible version of Microsoft's UIAutomation Client 
// interface and extensions meant to support scripting paradigms
//
// Copyright (c) 2015 Trabajos de Diseño e Ingeniería S.A. de C.V.
//
// This source is subject to the Microsoft Public License.
// See http://www.microsoft.com/en-us/openness/resources/licenses.aspx#MPL.
// All other rights reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
// EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND / OR FITNESS FOR A PARTICULAR PURPOSE.
// -------------------------------------------------------------


enum PropertyIds
    {
        RuntimeId	= 30000,
        BoundingRectangle	= 30001,
        ProcessId	= 30002,
        ControlType	= 30003,
        LocalizedControlType	= 30004,
        Name	= 30005,
        AcceleratorKey	= 30006,
        AccessKey	= 30007,
        HasKeyboardFocus	= 30008,
        IsKeyboardFocusable	= 30009,
        IsEnabled	= 30010,
        AutomationId	= 30011,
        ClassName	= 30012,
        HelpText	= 30013,
        ClickablePoint	= 30014,
        Culture	= 30015,
        IsControlElement	= 30016,
        IsContentElement	= 30017,
        LabeledBy	= 30018,
        IsPassword	= 30019,
        NativeWindowHandle	= 30020,
        ItemType	= 30021,
        IsOffscreen	= 30022,
        Orientation	= 30023,
        FrameworkId	= 30024,
        IsRequiredForForm	= 30025,
        ItemStatus	= 30026,
        IsDockPatternAvailable	= 30027,
        IsExpandCollapsePatternAvailable	= 30028,
        IsGridItemPatternAvailable	= 30029,
        IsGridPatternAvailable	= 30030,
        IsInvokePatternAvailable	= 30031,
        IsMultipleViewPatternAvailable	= 30032,
        IsRangeValuePatternAvailable	= 30033,
        IsScrollPatternAvailable	= 30034,
        IsScrollItemPatternAvailable	= 30035,
        IsSelectionItemPatternAvailable	= 30036,
        IsSelectionPatternAvailable	= 30037,
        IsTablePatternAvailable	= 30038,
        IsTableItemPatternAvailable	= 30039,
        IsTextPatternAvailable	= 30040,
        IsTogglePatternAvailable	= 30041,
        IsTransformPatternAvailable	= 30042,
        IsValuePatternAvailable	= 30043,
        IsWindowPatternAvailable	= 30044,
        ValueValue	= 30045,
        ValueIsReadOnly	= 30046,
        RangeValueValue	= 30047,
        RangeValueIsReadOnly	= 30048,
        RangeValueMinimum	= 30049,
        RangeValueMaximum	= 30050,
        RangeValueLargeChange	= 30051,
        RangeValueSmallChange	= 30052,
        ScrollHorizontalScrollPercent	= 30053,
        ScrollHorizontalViewSize	= 30054,
        ScrollVerticalScrollPercent	= 30055,
        ScrollVerticalViewSize	= 30056,
        ScrollHorizontallyScrollable	= 30057,
        ScrollVerticallyScrollable	= 30058,
        SelectionSelection	= 30059,
        SelectionCanSelectMultiple	= 30060,
        SelectionIsSelectionRequired	= 30061,
        GridRowCount	= 30062,
        GridColumnCount	= 30063,
        GridItemRow	= 30064,
        GridItemColumn	= 30065,
        GridItemRowSpan	= 30066,
        GridItemColumnSpan	= 30067,
        GridItemContainingGrid	= 30068,
        DockDockPosition	= 30069,
        ExpandCollapseExpandCollapseState	= 30070,
        MultipleViewCurrentView	= 30071,
        MultipleViewSupportedViews	= 30072,
        WindowCanMaximize	= 30073,
        WindowCanMinimize	= 30074,
        WindowWindowVisualState	= 30075,
        WindowWindowInteractionState	= 30076,
        WindowIsModal	= 30077,
        WindowIsTopmost	= 30078,
        SelectionItemIsSelected	= 30079,
        SelectionItemSelectionContainer	= 30080,
        TableRowHeaders	= 30081,
        TableColumnHeaders	= 30082,
        TableRowOrColumnMajor	= 30083,
        TableItemRowHeaderItems	= 30084,
        TableItemColumnHeaderItems	= 30085,
        ToggleToggleState	= 30086,
        TransformCanMove	= 30087,
        TransformCanResize	= 30088,
        TransformCanRotate	= 30089,
        IsLegacyIAccessiblePatternAvailable	= 30090,
        LegacyIAccessibleChildId	= 30091,
        LegacyIAccessibleName	= 30092,
        LegacyIAccessibleValue	= 30093,
        LegacyIAccessibleDescription	= 30094,
        LegacyIAccessibleRole	= 30095,
        LegacyIAccessibleState	= 30096,
        LegacyIAccessibleHelp	= 30097,
        LegacyIAccessibleKeyboardShortcut	= 30098,
        LegacyIAccessibleSelection	= 30099,
        LegacyIAccessibleDefaultAction	= 30100,
        AriaRole	= 30101,
        AriaProperties	= 30102,
        IsDataValidForForm	= 30103,
        ControllerFor	= 30104,
        DescribedBy	= 30105,
        FlowsTo	= 30106,
        ProviderDescription	= 30107,
        IsItemContainerPatternAvailable	= 30108,
        IsVirtualizedItemPatternAvailable	= 30109,
        IsSynchronizedInputPatternAvailable	= 30110,
        OptimizeForVisualContent	= 30111,
        IsObjectModelPatternAvailable	= 30112,
        AnnotationAnnotationTypeId	= 30113,
        AnnotationAnnotationTypeName	= 30114,
        AnnotationAuthor	= 30115,
        AnnotationDateTime	= 30116,
        AnnotationTarget	= 30117,
        IsAnnotationPatternAvailable	= 30118,
        IsTextPattern2Available	= 30119,
        StylesStyleId	= 30120,
        StylesStyleName	= 30121,
        StylesFillColor	= 30122,
        StylesFillPatternStyle	= 30123,
        StylesShape	= 30124,
        StylesFillPatternColor	= 30125,
        StylesExtendedProperties	= 30126,
        IsStylesPatternAvailable	= 30127,
        IsSpreadsheetPatternAvailable	= 30128,
        SpreadsheetItemFormula	= 30129,
        SpreadsheetItemAnnotationObjects	= 30130,
        SpreadsheetItemAnnotationTypes	= 30131,
        IsSpreadsheetItemPatternAvailable	= 30132,
        Transform2CanZoom	= 30133,
        IsTransformPattern2Available	= 30134,
        LiveSetting	= 30135,
        IsTextChildPatternAvailable	= 30136,
        IsDragPatternAvailable	= 30137,
        DragIsGrabbed	= 30138,
        DragDropEffect	= 30139,
        DragDropEffects	= 30140,
        IsDropTargetPatternAvailable	= 30141,
        DropTargetDropTargetEffect	= 30142,
        DropTargetDropTargetEffects	= 30143,
        DragGrabbedItems	= 30144,
        Transform2ZoomLevel	= 30145,
        Transform2ZoomMinimum	= 30146,
        Transform2ZoomMaximum	= 30147,
        FlowsFrom	= 30148,
        IsTextEditPatternAvailable	= 30149,
        IsPeripheral	= 30150
    } ;











extern RPC_IF_HANDLE __MIDL_itf_DispatchedUiAutomation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DispatchedUiAutomation_0000_0000_v0_0_s_ifspec;

#ifndef __IDispatchedUiAutomation_INTERFACE_DEFINED__
#define __IDispatchedUiAutomation_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomation */
/* [unique][helpstring][dual][uuid][object] */ 

#pragma region IUIAutomation
#pragma endregion  

EXTERN_C const IID IID_IDispatchedUiAutomation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C8282BC-0BD1-41FA-B649-531A343842E0")
    IDispatchedUiAutomation : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CompareElements( 
            /* [in] */ IDispatchedUiAutomationElement *el1,
            /* [in] */ IDispatchedUiAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CompareRuntimeIds( 
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRootElement( 
            /* [retval][out] */ IDispatchedUiAutomationElement **root) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ElementFromHandle( 
            /* [in] */ ULONG hwnd,
            /* [retval][out] */ IDispatchedUiAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ElementFromPoint( 
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFocusedElement( 
            /* [retval][out] */ IDispatchedUiAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRootElementBuildCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root) = 0;
        
        virtual /* [local][helpstring][id] */ HRESULT STDMETHODCALLTYPE ElementFromHandleBuildCache( 
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ElementFromPointBuildCache( 
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFocusedElementBuildCache( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTreeWalker( 
            /* [in] */ IDispatchedUiAutomationCondition *pCondition,
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControlViewWalker( 
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContentViewWalker( 
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RawViewWalker( 
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RawViewCondition( 
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ControlViewCondition( 
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ContentViewCondition( 
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateCacheRequest( 
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTrueCondition( 
            /* [retval][out] */ IDispatchedUiAutomationBoolCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFalseCondition( 
            /* [retval][out] */ IDispatchedUiAutomationBoolCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePropertyCondition( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePropertyConditionEx( 
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAndCondition( 
            /* [in] */ IDispatchedUiAutomationCondition *condition1,
            /* [in] */ IDispatchedUiAutomationCondition *condition2,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateAndConditionFromArray( 
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateOrCondition( 
            /* [in] */ IDispatchedUiAutomationCondition *condition1,
            /* [in] */ IDispatchedUiAutomationCondition *condition2,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateOrConditionFromArray( 
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNotCondition( 
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAutomationEventHandler( 
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAutomationEventHandler( 
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddPropertyChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemovePropertyChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddStructureChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveStructureChangedEventHandler( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddFocusChangedEventHandler( 
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveFocusChangedEventHandler( 
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAllEventHandlers( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RectToVariant( 
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VariantToRect( 
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateProxyFactoryEntry( 
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProxyFactoryMapping( 
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropertyProgrammaticName( 
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPatternProgrammaticName( 
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PollForPotentialSupportedPatterns( 
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PollForPotentialSupportedProperties( 
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckNotSupported( 
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReservedNotSupportedValue( 
            /* [retval][out] */ IUnknown **notSupportedValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReservedMixedAttributeValue( 
            /* [retval][out] */ IUnknown **mixedAttributeValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ElementFromIAccessible( 
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ElementFromIAccessibleBuildCache( 
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Mouse( 
            /* [retval][out] */ IDispatchedMouseControl **controller) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomation * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomation * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomation * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomation * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompareElements )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IDispatchedUiAutomationElement *el1,
            /* [in] */ IDispatchedUiAutomationElement *el2,
            /* [retval][out] */ BOOL *areSame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompareRuntimeIds )( 
            IDispatchedUiAutomation * This,
            /* [in] */ SAFEARRAY * runtimeId1,
            /* [in] */ SAFEARRAY * runtimeId2,
            /* [retval][out] */ BOOL *areSame);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRootElement )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationElement **root);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ElementFromHandle )( 
            IDispatchedUiAutomation * This,
            /* [in] */ ULONG hwnd,
            /* [retval][out] */ IDispatchedUiAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ElementFromPoint )( 
            IDispatchedUiAutomation * This,
            /* [in] */ POINT pt,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRootElementBuildCache )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **root);
        
        /* [local][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ElementFromHandleBuildCache )( 
            IDispatchedUiAutomation * This,
            /* [in] */ UIA_HWND hwnd,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ElementFromPointBuildCache )( 
            IDispatchedUiAutomation * This,
            /* [in] */ POINT pt,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFocusedElementBuildCache )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTreeWalker )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IDispatchedUiAutomationCondition *pCondition,
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewWalker )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewWalker )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewWalker )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationTreeWalker **walker);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RawViewCondition )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ControlViewCondition )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentViewCondition )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateCacheRequest )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IUIAutomationCacheRequest **cacheRequest);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTrueCondition )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationBoolCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFalseCondition )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedUiAutomationBoolCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePropertyCondition )( 
            IDispatchedUiAutomation * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePropertyConditionEx )( 
            IDispatchedUiAutomation * This,
            /* [in] */ PROPERTYID propertyId,
            /* [in] */ VARIANT value,
            /* [in] */ enum PropertyConditionFlags flags,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAndCondition )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IDispatchedUiAutomationCondition *condition1,
            /* [in] */ IDispatchedUiAutomationCondition *condition2,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateAndConditionFromArray )( 
            IDispatchedUiAutomation * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateOrCondition )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IDispatchedUiAutomationCondition *condition1,
            /* [in] */ IDispatchedUiAutomationCondition *condition2,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateOrConditionFromArray )( 
            IDispatchedUiAutomation * This,
            /* [in] */ SAFEARRAY * conditions,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateNotCondition )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [retval][out] */ IDispatchedUiAutomationCondition **newCondition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAutomationEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAutomationEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ EVENTID eventId,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddPropertyChangedEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler,
            /* [in] */ SAFEARRAY * propertyArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemovePropertyChangedEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationPropertyChangedEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddStructureChangedEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveStructureChangedEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationStructureChangedEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddFocusChangedEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveFocusChangedEventHandler )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationFocusChangedEventHandler *handler);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllEventHandlers )( 
            IDispatchedUiAutomation * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RectToVariant )( 
            IDispatchedUiAutomation * This,
            /* [in] */ RECT rc,
            /* [retval][out] */ VARIANT *var);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VariantToRect )( 
            IDispatchedUiAutomation * This,
            /* [in] */ VARIANT var,
            /* [retval][out] */ RECT *rc);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateProxyFactoryEntry )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationProxyFactory *factory,
            /* [retval][out] */ IUIAutomationProxyFactoryEntry **factoryEntry);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProxyFactoryMapping )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IUIAutomationProxyFactoryMapping **factoryMapping);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyProgrammaticName )( 
            IDispatchedUiAutomation * This,
            /* [in] */ PROPERTYID property,
            /* [retval][out] */ BSTR *name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPatternProgrammaticName )( 
            IDispatchedUiAutomation * This,
            /* [in] */ PATTERNID pattern,
            /* [retval][out] */ BSTR *name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedPatterns )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *patternIds,
            /* [out] */ SAFEARRAY * *patternNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PollForPotentialSupportedProperties )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IUIAutomationElement *pElement,
            /* [out] */ SAFEARRAY * *propertyIds,
            /* [out] */ SAFEARRAY * *propertyNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckNotSupported )( 
            IDispatchedUiAutomation * This,
            /* [in] */ VARIANT value,
            /* [retval][out] */ BOOL *isNotSupported);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedNotSupportedValue )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IUnknown **notSupportedValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReservedMixedAttributeValue )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IUnknown **mixedAttributeValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessible )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ElementFromIAccessibleBuildCache )( 
            IDispatchedUiAutomation * This,
            /* [in] */ IAccessible *accessible,
            /* [in] */ int childId,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **element);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mouse )( 
            IDispatchedUiAutomation * This,
            /* [retval][out] */ IDispatchedMouseControl **controller);
        
        END_INTERFACE
    } IDispatchedUiAutomationVtbl;

    interface IDispatchedUiAutomation
    {
        CONST_VTBL struct IDispatchedUiAutomationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomation_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomation_CompareElements(This,el1,el2,areSame)	\
    ( (This)->lpVtbl -> CompareElements(This,el1,el2,areSame) ) 

#define IDispatchedUiAutomation_CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame)	\
    ( (This)->lpVtbl -> CompareRuntimeIds(This,runtimeId1,runtimeId2,areSame) ) 

#define IDispatchedUiAutomation_GetRootElement(This,root)	\
    ( (This)->lpVtbl -> GetRootElement(This,root) ) 

#define IDispatchedUiAutomation_ElementFromHandle(This,hwnd,element)	\
    ( (This)->lpVtbl -> ElementFromHandle(This,hwnd,element) ) 

#define IDispatchedUiAutomation_ElementFromPoint(This,pt,element)	\
    ( (This)->lpVtbl -> ElementFromPoint(This,pt,element) ) 

#define IDispatchedUiAutomation_GetFocusedElement(This,element)	\
    ( (This)->lpVtbl -> GetFocusedElement(This,element) ) 

#define IDispatchedUiAutomation_GetRootElementBuildCache(This,cacheRequest,root)	\
    ( (This)->lpVtbl -> GetRootElementBuildCache(This,cacheRequest,root) ) 

#define IDispatchedUiAutomation_ElementFromHandleBuildCache(This,hwnd,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromHandleBuildCache(This,hwnd,cacheRequest,element) ) 

#define IDispatchedUiAutomation_ElementFromPointBuildCache(This,pt,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromPointBuildCache(This,pt,cacheRequest,element) ) 

#define IDispatchedUiAutomation_GetFocusedElementBuildCache(This,cacheRequest,element)	\
    ( (This)->lpVtbl -> GetFocusedElementBuildCache(This,cacheRequest,element) ) 

#define IDispatchedUiAutomation_CreateTreeWalker(This,pCondition,walker)	\
    ( (This)->lpVtbl -> CreateTreeWalker(This,pCondition,walker) ) 

#define IDispatchedUiAutomation_get_ControlViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ControlViewWalker(This,walker) ) 

#define IDispatchedUiAutomation_get_ContentViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_ContentViewWalker(This,walker) ) 

#define IDispatchedUiAutomation_get_RawViewWalker(This,walker)	\
    ( (This)->lpVtbl -> get_RawViewWalker(This,walker) ) 

#define IDispatchedUiAutomation_get_RawViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_RawViewCondition(This,condition) ) 

#define IDispatchedUiAutomation_get_ControlViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ControlViewCondition(This,condition) ) 

#define IDispatchedUiAutomation_get_ContentViewCondition(This,condition)	\
    ( (This)->lpVtbl -> get_ContentViewCondition(This,condition) ) 

#define IDispatchedUiAutomation_CreateCacheRequest(This,cacheRequest)	\
    ( (This)->lpVtbl -> CreateCacheRequest(This,cacheRequest) ) 

#define IDispatchedUiAutomation_CreateTrueCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateTrueCondition(This,newCondition) ) 

#define IDispatchedUiAutomation_CreateFalseCondition(This,newCondition)	\
    ( (This)->lpVtbl -> CreateFalseCondition(This,newCondition) ) 

#define IDispatchedUiAutomation_CreatePropertyCondition(This,propertyId,value,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyCondition(This,propertyId,value,newCondition) ) 

#define IDispatchedUiAutomation_CreatePropertyConditionEx(This,propertyId,value,flags,newCondition)	\
    ( (This)->lpVtbl -> CreatePropertyConditionEx(This,propertyId,value,flags,newCondition) ) 

#define IDispatchedUiAutomation_CreateAndCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateAndCondition(This,condition1,condition2,newCondition) ) 

#define IDispatchedUiAutomation_CreateAndConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateAndConditionFromArray(This,conditions,newCondition) ) 

#define IDispatchedUiAutomation_CreateOrCondition(This,condition1,condition2,newCondition)	\
    ( (This)->lpVtbl -> CreateOrCondition(This,condition1,condition2,newCondition) ) 

#define IDispatchedUiAutomation_CreateOrConditionFromArray(This,conditions,newCondition)	\
    ( (This)->lpVtbl -> CreateOrConditionFromArray(This,conditions,newCondition) ) 

#define IDispatchedUiAutomation_CreateNotCondition(This,condition,newCondition)	\
    ( (This)->lpVtbl -> CreateNotCondition(This,condition,newCondition) ) 

#define IDispatchedUiAutomation_AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddAutomationEventHandler(This,eventId,element,scope,cacheRequest,handler) ) 

#define IDispatchedUiAutomation_RemoveAutomationEventHandler(This,eventId,element,handler)	\
    ( (This)->lpVtbl -> RemoveAutomationEventHandler(This,eventId,element,handler) ) 

#define IDispatchedUiAutomation_AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray)	\
    ( (This)->lpVtbl -> AddPropertyChangedEventHandler(This,element,scope,cacheRequest,handler,propertyArray) ) 

#define IDispatchedUiAutomation_RemovePropertyChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemovePropertyChangedEventHandler(This,element,handler) ) 

#define IDispatchedUiAutomation_AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddStructureChangedEventHandler(This,element,scope,cacheRequest,handler) ) 

#define IDispatchedUiAutomation_RemoveStructureChangedEventHandler(This,element,handler)	\
    ( (This)->lpVtbl -> RemoveStructureChangedEventHandler(This,element,handler) ) 

#define IDispatchedUiAutomation_AddFocusChangedEventHandler(This,cacheRequest,handler)	\
    ( (This)->lpVtbl -> AddFocusChangedEventHandler(This,cacheRequest,handler) ) 

#define IDispatchedUiAutomation_RemoveFocusChangedEventHandler(This,handler)	\
    ( (This)->lpVtbl -> RemoveFocusChangedEventHandler(This,handler) ) 

#define IDispatchedUiAutomation_RemoveAllEventHandlers(This)	\
    ( (This)->lpVtbl -> RemoveAllEventHandlers(This) ) 

#define IDispatchedUiAutomation_RectToVariant(This,rc,var)	\
    ( (This)->lpVtbl -> RectToVariant(This,rc,var) ) 

#define IDispatchedUiAutomation_VariantToRect(This,var,rc)	\
    ( (This)->lpVtbl -> VariantToRect(This,var,rc) ) 

#define IDispatchedUiAutomation_CreateProxyFactoryEntry(This,factory,factoryEntry)	\
    ( (This)->lpVtbl -> CreateProxyFactoryEntry(This,factory,factoryEntry) ) 

#define IDispatchedUiAutomation_get_ProxyFactoryMapping(This,factoryMapping)	\
    ( (This)->lpVtbl -> get_ProxyFactoryMapping(This,factoryMapping) ) 

#define IDispatchedUiAutomation_GetPropertyProgrammaticName(This,property,name)	\
    ( (This)->lpVtbl -> GetPropertyProgrammaticName(This,property,name) ) 

#define IDispatchedUiAutomation_GetPatternProgrammaticName(This,pattern,name)	\
    ( (This)->lpVtbl -> GetPatternProgrammaticName(This,pattern,name) ) 

#define IDispatchedUiAutomation_PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedPatterns(This,pElement,patternIds,patternNames) ) 

#define IDispatchedUiAutomation_PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames)	\
    ( (This)->lpVtbl -> PollForPotentialSupportedProperties(This,pElement,propertyIds,propertyNames) ) 

#define IDispatchedUiAutomation_CheckNotSupported(This,value,isNotSupported)	\
    ( (This)->lpVtbl -> CheckNotSupported(This,value,isNotSupported) ) 

#define IDispatchedUiAutomation_get_ReservedNotSupportedValue(This,notSupportedValue)	\
    ( (This)->lpVtbl -> get_ReservedNotSupportedValue(This,notSupportedValue) ) 

#define IDispatchedUiAutomation_get_ReservedMixedAttributeValue(This,mixedAttributeValue)	\
    ( (This)->lpVtbl -> get_ReservedMixedAttributeValue(This,mixedAttributeValue) ) 

#define IDispatchedUiAutomation_ElementFromIAccessible(This,accessible,childId,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessible(This,accessible,childId,element) ) 

#define IDispatchedUiAutomation_ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element)	\
    ( (This)->lpVtbl -> ElementFromIAccessibleBuildCache(This,accessible,childId,cacheRequest,element) ) 

#define IDispatchedUiAutomation_get_Mouse(This,controller)	\
    ( (This)->lpVtbl -> get_Mouse(This,controller) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomation_INTERFACE_DEFINED__ */



#ifndef __DispatchedUiAutomation_LIBRARY_DEFINED__
#define __DispatchedUiAutomation_LIBRARY_DEFINED__

/* library DispatchedUiAutomation */
/* [helpstring][version][uuid] */ 

#pragma region Conditions
#pragma endregion 
#pragma region Patterns
#pragma endregion 
#pragma region Other
#pragma endregion 

EXTERN_C const IID LIBID_DispatchedUiAutomation;

#ifndef __IDispPoint_INTERFACE_DEFINED__
#define __IDispPoint_INTERFACE_DEFINED__

/* interface IDispPoint */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEF2FEBE-BB51-478A-A172-F5A908C10CF7")
    IDispPoint : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispPoint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispPoint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispPoint * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispPoint * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispPoint * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispPoint * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispPoint * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IDispPoint * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IDispPoint * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IDispPoint * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IDispPointVtbl;

    interface IDispPoint
    {
        CONST_VTBL struct IDispPointVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispPoint_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispPoint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispPoint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispPoint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispPoint_get_x(This,retVal)	\
    ( (This)->lpVtbl -> get_x(This,retVal) ) 

#define IDispPoint_get_y(This,retVal)	\
    ( (This)->lpVtbl -> get_y(This,retVal) ) 

#define IDispPoint_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispPoint_INTERFACE_DEFINED__ */


#ifndef __IDispRect_INTERFACE_DEFINED__
#define __IDispRect_INTERFACE_DEFINED__

/* interface IDispRect */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E54D30A-B10E-4BC0-A6F0-67FB6898480A")
    IDispRect : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_left( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_top( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_right( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_bottom( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE toPoint( 
            /* [retval][out] */ IDispPoint **point) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispRect * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispRect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispRect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispRect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispRect * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_left )( 
            IDispRect * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_top )( 
            IDispRect * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_right )( 
            IDispRect * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_bottom )( 
            IDispRect * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *toPoint )( 
            IDispRect * This,
            /* [retval][out] */ IDispPoint **point);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IDispRect * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IDispRectVtbl;

    interface IDispRect
    {
        CONST_VTBL struct IDispRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispRect_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispRect_get_left(This,retVal)	\
    ( (This)->lpVtbl -> get_left(This,retVal) ) 

#define IDispRect_get_top(This,retVal)	\
    ( (This)->lpVtbl -> get_top(This,retVal) ) 

#define IDispRect_get_right(This,retVal)	\
    ( (This)->lpVtbl -> get_right(This,retVal) ) 

#define IDispRect_get_bottom(This,retVal)	\
    ( (This)->lpVtbl -> get_bottom(This,retVal) ) 

#define IDispRect_toPoint(This,point)	\
    ( (This)->lpVtbl -> toPoint(This,point) ) 

#define IDispRect_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispRect_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationCondition_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationCondition_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationCondition */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F104A127-154E-45CD-A45A-0D6489F43769")
    IDispatchedUiAutomationCondition : public IDispatch
    {
    public:
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetBase( 
            /* [retval][out] */ IUIAutomationCondition **condition) = 0;
        
        virtual /* [helpstring][hidden] */ HRESULT STDMETHODCALLTYPE GetBaseType( 
            /* [retval][out] */ IID *idRef) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationCondition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationCondition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationCondition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationCondition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IDispatchedUiAutomationCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IDispatchedUiAutomationCondition * This,
            /* [retval][out] */ IID *idRef);
        
        END_INTERFACE
    } IDispatchedUiAutomationConditionVtbl;

    interface IDispatchedUiAutomationCondition
    {
        CONST_VTBL struct IDispatchedUiAutomationConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationCondition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationCondition_GetBase(This,condition)	\
    ( (This)->lpVtbl -> GetBase(This,condition) ) 

#define IDispatchedUiAutomationCondition_GetBaseType(This,idRef)	\
    ( (This)->lpVtbl -> GetBaseType(This,idRef) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationCondition_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationBoolCondition_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationBoolCondition_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationBoolCondition */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationBoolCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91EEAE28-C692-42CB-9C2D-3A4FC773EF11")
    IDispatchedUiAutomationBoolCondition : public IDispatchedUiAutomationCondition
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BooleanValue( 
            /* [retval][out] */ BOOL *boolVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationBoolConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationBoolCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationBoolCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [retval][out] */ IID *idRef);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BooleanValue )( 
            IDispatchedUiAutomationBoolCondition * This,
            /* [retval][out] */ BOOL *boolVal);
        
        END_INTERFACE
    } IDispatchedUiAutomationBoolConditionVtbl;

    interface IDispatchedUiAutomationBoolCondition
    {
        CONST_VTBL struct IDispatchedUiAutomationBoolConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationBoolCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationBoolCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationBoolCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationBoolCondition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationBoolCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationBoolCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationBoolCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationBoolCondition_GetBase(This,condition)	\
    ( (This)->lpVtbl -> GetBase(This,condition) ) 

#define IDispatchedUiAutomationBoolCondition_GetBaseType(This,idRef)	\
    ( (This)->lpVtbl -> GetBaseType(This,idRef) ) 


#define IDispatchedUiAutomationBoolCondition_get_BooleanValue(This,boolVal)	\
    ( (This)->lpVtbl -> get_BooleanValue(This,boolVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationBoolCondition_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationPropertyCondition_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationPropertyCondition_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationPropertyCondition */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationPropertyCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01FC392E-43EB-4C1F-8DC6-A1F8387736DB")
    IDispatchedUiAutomationPropertyCondition : public IDispatchedUiAutomationCondition
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyId( 
            /* [retval][out] */ PROPERTYID *propertyId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyValue( 
            /* [retval][out] */ VARIANT *propertyValue) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyConditionFlags( 
            /* [retval][out] */ enum PropertyConditionFlags *flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationPropertyConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationPropertyCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationPropertyCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [retval][out] */ IID *idRef);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyId )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [retval][out] */ PROPERTYID *propertyId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyValue )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [retval][out] */ VARIANT *propertyValue);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyConditionFlags )( 
            IDispatchedUiAutomationPropertyCondition * This,
            /* [retval][out] */ enum PropertyConditionFlags *flags);
        
        END_INTERFACE
    } IDispatchedUiAutomationPropertyConditionVtbl;

    interface IDispatchedUiAutomationPropertyCondition
    {
        CONST_VTBL struct IDispatchedUiAutomationPropertyConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationPropertyCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationPropertyCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationPropertyCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationPropertyCondition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationPropertyCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationPropertyCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationPropertyCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationPropertyCondition_GetBase(This,condition)	\
    ( (This)->lpVtbl -> GetBase(This,condition) ) 

#define IDispatchedUiAutomationPropertyCondition_GetBaseType(This,idRef)	\
    ( (This)->lpVtbl -> GetBaseType(This,idRef) ) 


#define IDispatchedUiAutomationPropertyCondition_get_PropertyId(This,propertyId)	\
    ( (This)->lpVtbl -> get_PropertyId(This,propertyId) ) 

#define IDispatchedUiAutomationPropertyCondition_get_PropertyValue(This,propertyValue)	\
    ( (This)->lpVtbl -> get_PropertyValue(This,propertyValue) ) 

#define IDispatchedUiAutomationPropertyCondition_get_PropertyConditionFlags(This,flags)	\
    ( (This)->lpVtbl -> get_PropertyConditionFlags(This,flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationPropertyCondition_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationAndCondition_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationAndCondition_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationAndCondition */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationAndCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1205365E-91EE-446C-B0F2-A307FD9326A1")
    IDispatchedUiAutomationAndCondition : public IDispatchedUiAutomationCondition
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount( 
            /* [retval][out] */ int *childCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ SAFEARRAY * *childArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationAndConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationAndCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationAndCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [retval][out] */ IID *idRef);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildCount )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [retval][out] */ int *childCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IDispatchedUiAutomationAndCondition * This,
            /* [retval][out] */ SAFEARRAY * *childArray);
        
        END_INTERFACE
    } IDispatchedUiAutomationAndConditionVtbl;

    interface IDispatchedUiAutomationAndCondition
    {
        CONST_VTBL struct IDispatchedUiAutomationAndConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationAndCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationAndCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationAndCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationAndCondition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationAndCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationAndCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationAndCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationAndCondition_GetBase(This,condition)	\
    ( (This)->lpVtbl -> GetBase(This,condition) ) 

#define IDispatchedUiAutomationAndCondition_GetBaseType(This,idRef)	\
    ( (This)->lpVtbl -> GetBaseType(This,idRef) ) 


#define IDispatchedUiAutomationAndCondition_get_ChildCount(This,childCount)	\
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) ) 

#define IDispatchedUiAutomationAndCondition_GetChildren(This,childArray)	\
    ( (This)->lpVtbl -> GetChildren(This,childArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationAndCondition_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationOrCondition_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationOrCondition_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationOrCondition */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationOrCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11B8A2E0-B891-4893-AF9D-BBBEE774E247")
    IDispatchedUiAutomationOrCondition : public IDispatchedUiAutomationCondition
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ChildCount( 
            /* [retval][out] */ int *childCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChildren( 
            /* [retval][out] */ SAFEARRAY * *childArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationOrConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationOrCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationOrCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [retval][out] */ IID *idRef);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ChildCount )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [retval][out] */ int *childCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChildren )( 
            IDispatchedUiAutomationOrCondition * This,
            /* [retval][out] */ SAFEARRAY * *childArray);
        
        END_INTERFACE
    } IDispatchedUiAutomationOrConditionVtbl;

    interface IDispatchedUiAutomationOrCondition
    {
        CONST_VTBL struct IDispatchedUiAutomationOrConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationOrCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationOrCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationOrCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationOrCondition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationOrCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationOrCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationOrCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationOrCondition_GetBase(This,condition)	\
    ( (This)->lpVtbl -> GetBase(This,condition) ) 

#define IDispatchedUiAutomationOrCondition_GetBaseType(This,idRef)	\
    ( (This)->lpVtbl -> GetBaseType(This,idRef) ) 


#define IDispatchedUiAutomationOrCondition_get_ChildCount(This,childCount)	\
    ( (This)->lpVtbl -> get_ChildCount(This,childCount) ) 

#define IDispatchedUiAutomationOrCondition_GetChildren(This,childArray)	\
    ( (This)->lpVtbl -> GetChildren(This,childArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationOrCondition_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationNotCondition_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationNotCondition_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationNotCondition */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationNotCondition;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87DCE25B-E388-4FB6-9CF5-A7793CAB6F9A")
    IDispatchedUiAutomationNotCondition : public IDispatchedUiAutomationCondition
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChild( 
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationNotConditionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationNotCondition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationNotCondition * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBase )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [retval][out] */ IUIAutomationCondition **condition);
        
        /* [helpstring][hidden] */ HRESULT ( STDMETHODCALLTYPE *GetBaseType )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [retval][out] */ IID *idRef);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IDispatchedUiAutomationNotCondition * This,
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition);
        
        END_INTERFACE
    } IDispatchedUiAutomationNotConditionVtbl;

    interface IDispatchedUiAutomationNotCondition
    {
        CONST_VTBL struct IDispatchedUiAutomationNotConditionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationNotCondition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationNotCondition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationNotCondition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationNotCondition_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationNotCondition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationNotCondition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationNotCondition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationNotCondition_GetBase(This,condition)	\
    ( (This)->lpVtbl -> GetBase(This,condition) ) 

#define IDispatchedUiAutomationNotCondition_GetBaseType(This,idRef)	\
    ( (This)->lpVtbl -> GetBaseType(This,idRef) ) 


#define IDispatchedUiAutomationNotCondition_GetChild(This,condition)	\
    ( (This)->lpVtbl -> GetChild(This,condition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationNotCondition_INTERFACE_DEFINED__ */


#ifndef __IDispatchedInvokePattern_INTERFACE_DEFINED__
#define __IDispatchedInvokePattern_INTERFACE_DEFINED__

/* interface IDispatchedInvokePattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedInvokePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F577992F-D7FB-497C-8523-84ECC06C345A")
    IDispatchedInvokePattern : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoInvoke( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedInvokePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedInvokePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedInvokePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedInvokePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedInvokePattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedInvokePattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedInvokePattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedInvokePattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoInvoke )( 
            IDispatchedInvokePattern * This);
        
        END_INTERFACE
    } IDispatchedInvokePatternVtbl;

    interface IDispatchedInvokePattern
    {
        CONST_VTBL struct IDispatchedInvokePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedInvokePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedInvokePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedInvokePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedInvokePattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedInvokePattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedInvokePattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedInvokePattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedInvokePattern_DoInvoke(This)	\
    ( (This)->lpVtbl -> DoInvoke(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedInvokePattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedSelectionPattern_INTERFACE_DEFINED__
#define __IDispatchedSelectionPattern_INTERFACE_DEFINED__

/* interface IDispatchedSelectionPattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedSelectionPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41173706-F86E-4DA1-A94D-15D11B59DB20")
    IDispatchedSelectionPattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentSelection( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCachedSelection( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCanSelectMultiple( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsSelectionRequired( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedCanSelectMultiple( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsSelectionRequired( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedSelectionPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedSelectionPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedSelectionPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedSelectionPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedSelectionPattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedSelectionPattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedSelectionPattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedSelectionPattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )( 
            IDispatchedSelectionPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCachedSelection )( 
            IDispatchedSelectionPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCanSelectMultiple )( 
            IDispatchedSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelectionRequired )( 
            IDispatchedSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCanSelectMultiple )( 
            IDispatchedSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelectionRequired )( 
            IDispatchedSelectionPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IDispatchedSelectionPatternVtbl;

    interface IDispatchedSelectionPattern
    {
        CONST_VTBL struct IDispatchedSelectionPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedSelectionPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedSelectionPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedSelectionPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedSelectionPattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedSelectionPattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedSelectionPattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedSelectionPattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedSelectionPattern_GetCurrentSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSelection(This,retVal) ) 

#define IDispatchedSelectionPattern_GetCachedSelection(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSelection(This,retVal) ) 

#define IDispatchedSelectionPattern_get_CurrentCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCanSelectMultiple(This,retVal) ) 

#define IDispatchedSelectionPattern_get_CurrentIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelectionRequired(This,retVal) ) 

#define IDispatchedSelectionPattern_get_CachedCanSelectMultiple(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCanSelectMultiple(This,retVal) ) 

#define IDispatchedSelectionPattern_get_CachedIsSelectionRequired(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelectionRequired(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedSelectionPattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedValuePattern_INTERFACE_DEFINED__
#define __IDispatchedValuePattern_INTERFACE_DEFINED__

/* interface IDispatchedValuePattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedValuePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("212EEC1D-B474-4AFE-9ED2-A76B138D521E")
    IDispatchedValuePattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ BSTR val) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedValuePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedValuePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedValuePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedValuePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedValuePattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedValuePattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedValuePattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedValuePattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IDispatchedValuePattern * This,
            /* [in] */ BSTR val);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            IDispatchedValuePattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )( 
            IDispatchedValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            IDispatchedValuePattern * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )( 
            IDispatchedValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IDispatchedValuePatternVtbl;

    interface IDispatchedValuePattern
    {
        CONST_VTBL struct IDispatchedValuePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedValuePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedValuePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedValuePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedValuePattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedValuePattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedValuePattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedValuePattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedValuePattern_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IDispatchedValuePattern_get_CurrentValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) ) 

#define IDispatchedValuePattern_get_CurrentIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) ) 

#define IDispatchedValuePattern_get_CachedValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) ) 

#define IDispatchedValuePattern_get_CachedIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedValuePattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedRangeValuePattern_INTERFACE_DEFINED__
#define __IDispatchedRangeValuePattern_INTERFACE_DEFINED__

/* interface IDispatchedRangeValuePattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedRangeValuePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1DD52CF-F769-4184-8B50-06AD997D3F52")
    IDispatchedRangeValuePattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentValue( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMaximum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentMinimum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLargeChange( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSmallChange( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedValue( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsReadOnly( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedMaximum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedMinimum( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedLargeChange( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedSmallChange( 
            /* [retval][out] */ double *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedRangeValuePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedRangeValuePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedRangeValuePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedRangeValuePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedRangeValuePattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedRangeValuePattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedRangeValuePattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedRangeValuePattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            IDispatchedRangeValuePattern * This,
            /* [in] */ double val);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentValue )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsReadOnly )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMaximum )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentMinimum )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLargeChange )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSmallChange )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedValue )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsReadOnly )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedMaximum )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedMinimum )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedLargeChange )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSmallChange )( 
            IDispatchedRangeValuePattern * This,
            /* [retval][out] */ double *retVal);
        
        END_INTERFACE
    } IDispatchedRangeValuePatternVtbl;

    interface IDispatchedRangeValuePattern
    {
        CONST_VTBL struct IDispatchedRangeValuePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedRangeValuePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedRangeValuePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedRangeValuePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedRangeValuePattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedRangeValuePattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedRangeValuePattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedRangeValuePattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedRangeValuePattern_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IDispatchedRangeValuePattern_get_CurrentValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentValue(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CurrentIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsReadOnly(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CurrentMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentMaximum(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CurrentMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentMinimum(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CurrentLargeChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLargeChange(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CurrentSmallChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSmallChange(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CachedValue(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedValue(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CachedIsReadOnly(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsReadOnly(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CachedMaximum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedMaximum(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CachedMinimum(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedMinimum(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CachedLargeChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedLargeChange(This,retVal) ) 

#define IDispatchedRangeValuePattern_get_CachedSmallChange(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSmallChange(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedRangeValuePattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedScrollPattern_INTERFACE_DEFINED__
#define __IDispatchedScrollPattern_INTERFACE_DEFINED__

/* interface IDispatchedScrollPattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedScrollPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2BBE74D4-9472-4268-9E49-C299AA8D0AB1")
    IDispatchedScrollPattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Scroll( 
            /* [in] */ enum ScrollAmount horizontalAmount,
            /* [in] */ enum ScrollAmount verticalAmount) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetScrollPercent( 
            /* [in] */ double horizontalPercent,
            /* [in] */ double verticalPercent) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHorizontallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentVerticallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticalScrollPercent( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticalViewSize( 
            /* [retval][out] */ double *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedHorizontallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedVerticallyScrollable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedScrollPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedScrollPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedScrollPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedScrollPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedScrollPattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedScrollPattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedScrollPattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedScrollPattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Scroll )( 
            IDispatchedScrollPattern * This,
            /* [in] */ enum ScrollAmount horizontalAmount,
            /* [in] */ enum ScrollAmount verticalAmount);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )( 
            IDispatchedScrollPattern * This,
            /* [in] */ double horizontalPercent,
            /* [in] */ double verticalPercent);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalScrollPercent )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalScrollPercent )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontalViewSize )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticalViewSize )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHorizontallyScrollable )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentVerticallyScrollable )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalScrollPercent )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalScrollPercent )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontalViewSize )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticalViewSize )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ double *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedHorizontallyScrollable )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedVerticallyScrollable )( 
            IDispatchedScrollPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        END_INTERFACE
    } IDispatchedScrollPatternVtbl;

    interface IDispatchedScrollPattern
    {
        CONST_VTBL struct IDispatchedScrollPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedScrollPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedScrollPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedScrollPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedScrollPattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedScrollPattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedScrollPattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedScrollPattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedScrollPattern_Scroll(This,horizontalAmount,verticalAmount)	\
    ( (This)->lpVtbl -> Scroll(This,horizontalAmount,verticalAmount) ) 

#define IDispatchedScrollPattern_SetScrollPercent(This,horizontalPercent,verticalPercent)	\
    ( (This)->lpVtbl -> SetScrollPercent(This,horizontalPercent,verticalPercent) ) 

#define IDispatchedScrollPattern_get_CurrentHorizontalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontalScrollPercent(This,retVal) ) 

#define IDispatchedScrollPattern_get_CurrentVerticalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticalScrollPercent(This,retVal) ) 

#define IDispatchedScrollPattern_get_CurrentHorizontalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontalViewSize(This,retVal) ) 

#define IDispatchedScrollPattern_get_CurrentVerticalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticalViewSize(This,retVal) ) 

#define IDispatchedScrollPattern_get_CurrentHorizontallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHorizontallyScrollable(This,retVal) ) 

#define IDispatchedScrollPattern_get_CurrentVerticallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentVerticallyScrollable(This,retVal) ) 

#define IDispatchedScrollPattern_get_CachedHorizontalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontalScrollPercent(This,retVal) ) 

#define IDispatchedScrollPattern_get_CachedVerticalScrollPercent(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticalScrollPercent(This,retVal) ) 

#define IDispatchedScrollPattern_get_CachedHorizontalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontalViewSize(This,retVal) ) 

#define IDispatchedScrollPattern_get_CachedVerticalViewSize(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticalViewSize(This,retVal) ) 

#define IDispatchedScrollPattern_get_CachedHorizontallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedHorizontallyScrollable(This,retVal) ) 

#define IDispatchedScrollPattern_get_CachedVerticallyScrollable(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedVerticallyScrollable(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedScrollPattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedExpandCollapsePattern_INTERFACE_DEFINED__
#define __IDispatchedExpandCollapsePattern_INTERFACE_DEFINED__

/* interface IDispatchedExpandCollapsePattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedExpandCollapsePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6FEA5B98-A8F6-4DDE-B1ED-70BD6721254D")
    IDispatchedExpandCollapsePattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Expand( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Collapse( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentExpandCollapseState( 
            /* [retval][out] */ enum ExpandCollapseState *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedExpandCollapseState( 
            /* [retval][out] */ enum ExpandCollapseState *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedExpandCollapsePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedExpandCollapsePattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedExpandCollapsePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedExpandCollapsePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedExpandCollapsePattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedExpandCollapsePattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedExpandCollapsePattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedExpandCollapsePattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Expand )( 
            IDispatchedExpandCollapsePattern * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Collapse )( 
            IDispatchedExpandCollapsePattern * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentExpandCollapseState )( 
            IDispatchedExpandCollapsePattern * This,
            /* [retval][out] */ enum ExpandCollapseState *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedExpandCollapseState )( 
            IDispatchedExpandCollapsePattern * This,
            /* [retval][out] */ enum ExpandCollapseState *retVal);
        
        END_INTERFACE
    } IDispatchedExpandCollapsePatternVtbl;

    interface IDispatchedExpandCollapsePattern
    {
        CONST_VTBL struct IDispatchedExpandCollapsePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedExpandCollapsePattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedExpandCollapsePattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedExpandCollapsePattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedExpandCollapsePattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedExpandCollapsePattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedExpandCollapsePattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedExpandCollapsePattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedExpandCollapsePattern_Expand(This)	\
    ( (This)->lpVtbl -> Expand(This) ) 

#define IDispatchedExpandCollapsePattern_Collapse(This)	\
    ( (This)->lpVtbl -> Collapse(This) ) 

#define IDispatchedExpandCollapsePattern_get_CurrentExpandCollapseState(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentExpandCollapseState(This,retVal) ) 

#define IDispatchedExpandCollapsePattern_get_CachedExpandCollapseState(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedExpandCollapseState(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedExpandCollapsePattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedGridPattern_INTERFACE_DEFINED__
#define __IDispatchedGridPattern_INTERFACE_DEFINED__

/* interface IDispatchedGridPattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedGridPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6E5BF29-3AA9-4E8F-92F3-127CE24BF5B2")
    IDispatchedGridPattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetItem( 
            /* [in] */ int row,
            /* [in] */ int column,
            /* [retval][out] */ IDispatchedUiAutomationElement **element) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumnCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowCount( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumnCount( 
            /* [retval][out] */ int *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedGridPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedGridPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedGridPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedGridPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedGridPattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedGridPattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedGridPattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedGridPattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IDispatchedGridPattern * This,
            /* [in] */ int row,
            /* [in] */ int column,
            /* [retval][out] */ IDispatchedUiAutomationElement **element);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowCount )( 
            IDispatchedGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnCount )( 
            IDispatchedGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowCount )( 
            IDispatchedGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumnCount )( 
            IDispatchedGridPattern * This,
            /* [retval][out] */ int *retVal);
        
        END_INTERFACE
    } IDispatchedGridPatternVtbl;

    interface IDispatchedGridPattern
    {
        CONST_VTBL struct IDispatchedGridPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedGridPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedGridPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedGridPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedGridPattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedGridPattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedGridPattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedGridPattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedGridPattern_GetItem(This,row,column,element)	\
    ( (This)->lpVtbl -> GetItem(This,row,column,element) ) 

#define IDispatchedGridPattern_get_CurrentRowCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowCount(This,retVal) ) 

#define IDispatchedGridPattern_get_CurrentColumnCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumnCount(This,retVal) ) 

#define IDispatchedGridPattern_get_CachedRowCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowCount(This,retVal) ) 

#define IDispatchedGridPattern_get_CachedColumnCount(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumnCount(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedGridPattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedGridItemPattern_INTERFACE_DEFINED__
#define __IDispatchedGridItemPattern_INTERFACE_DEFINED__

/* interface IDispatchedGridItemPattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedGridItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B70CEE66-A775-4EB7-A8C3-D996771952CE")
    IDispatchedGridItemPattern : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentContainingGrid( 
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRow( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumn( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentRowSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentColumnSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedContainingGrid( 
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedRow( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumn( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedRowSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedColumnSpan( 
            /* [retval][out] */ int *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedGridItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedGridItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedGridItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedGridItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedGridItemPattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedGridItemPattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedGridItemPattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedGridItemPattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentContainingGrid )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRow )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumn )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentRowSpan )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentColumnSpan )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedContainingGrid )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRow )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumn )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedRowSpan )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedColumnSpan )( 
            IDispatchedGridItemPattern * This,
            /* [retval][out] */ int *retVal);
        
        END_INTERFACE
    } IDispatchedGridItemPatternVtbl;

    interface IDispatchedGridItemPattern
    {
        CONST_VTBL struct IDispatchedGridItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedGridItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedGridItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedGridItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedGridItemPattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedGridItemPattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedGridItemPattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedGridItemPattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedGridItemPattern_get_CurrentContainingGrid(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentContainingGrid(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CurrentRow(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRow(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CurrentColumn(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumn(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CurrentRowSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentRowSpan(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CurrentColumnSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentColumnSpan(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CachedContainingGrid(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedContainingGrid(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CachedRow(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRow(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CachedColumn(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumn(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CachedRowSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedRowSpan(This,retVal) ) 

#define IDispatchedGridItemPattern_get_CachedColumnSpan(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedColumnSpan(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedGridItemPattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedMultipleViewPattern_INTERFACE_DEFINED__
#define __IDispatchedMultipleViewPattern_INTERFACE_DEFINED__

/* interface IDispatchedMultipleViewPattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedMultipleViewPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CDB5180D-0AB1-4A5C-A2A0-A8B958D7F182")
    IDispatchedMultipleViewPattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetViewName( 
            /* [in] */ int view,
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetCurrentView( 
            /* [in] */ int view) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentSupportedViews( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCachedSupportedViews( 
            /* [retval][out] */ SAFEARRAY * *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCurrentView( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedCurrentView( 
            /* [retval][out] */ int *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedMultipleViewPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedMultipleViewPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedMultipleViewPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedMultipleViewPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedMultipleViewPattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedMultipleViewPattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedMultipleViewPattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedMultipleViewPattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetViewName )( 
            IDispatchedMultipleViewPattern * This,
            /* [in] */ int view,
            /* [retval][out] */ BSTR *name);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentView )( 
            IDispatchedMultipleViewPattern * This,
            /* [in] */ int view);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentSupportedViews )( 
            IDispatchedMultipleViewPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCachedSupportedViews )( 
            IDispatchedMultipleViewPattern * This,
            /* [retval][out] */ SAFEARRAY * *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCurrentView )( 
            IDispatchedMultipleViewPattern * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedCurrentView )( 
            IDispatchedMultipleViewPattern * This,
            /* [retval][out] */ int *retVal);
        
        END_INTERFACE
    } IDispatchedMultipleViewPatternVtbl;

    interface IDispatchedMultipleViewPattern
    {
        CONST_VTBL struct IDispatchedMultipleViewPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedMultipleViewPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedMultipleViewPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedMultipleViewPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedMultipleViewPattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedMultipleViewPattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedMultipleViewPattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedMultipleViewPattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedMultipleViewPattern_GetViewName(This,view,name)	\
    ( (This)->lpVtbl -> GetViewName(This,view,name) ) 

#define IDispatchedMultipleViewPattern_SetCurrentView(This,view)	\
    ( (This)->lpVtbl -> SetCurrentView(This,view) ) 

#define IDispatchedMultipleViewPattern_GetCurrentSupportedViews(This,retVal)	\
    ( (This)->lpVtbl -> GetCurrentSupportedViews(This,retVal) ) 

#define IDispatchedMultipleViewPattern_GetCachedSupportedViews(This,retVal)	\
    ( (This)->lpVtbl -> GetCachedSupportedViews(This,retVal) ) 

#define IDispatchedMultipleViewPattern_get_CurrentCurrentView(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCurrentView(This,retVal) ) 

#define IDispatchedMultipleViewPattern_get_CachedCurrentView(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedCurrentView(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedMultipleViewPattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedSelectionItemPattern_INTERFACE_DEFINED__
#define __IDispatchedSelectionItemPattern_INTERFACE_DEFINED__

/* interface IDispatchedSelectionItemPattern */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedSelectionItemPattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65362205-E1C8-41F0-B46A-D4C4244F2B2B")
    IDispatchedSelectionItemPattern : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Select( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE AddToSelection( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE RemoveFromSelection( void) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsSelected( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSelectionContainer( 
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedIsSelected( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CachedSelectionContainer( 
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedSelectionItemPatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedSelectionItemPattern * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedSelectionItemPattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedSelectionItemPattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedSelectionItemPattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedSelectionItemPattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedSelectionItemPattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedSelectionItemPattern * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Select )( 
            IDispatchedSelectionItemPattern * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddToSelection )( 
            IDispatchedSelectionItemPattern * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )( 
            IDispatchedSelectionItemPattern * This);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsSelected )( 
            IDispatchedSelectionItemPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSelectionContainer )( 
            IDispatchedSelectionItemPattern * This,
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedIsSelected )( 
            IDispatchedSelectionItemPattern * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CachedSelectionContainer )( 
            IDispatchedSelectionItemPattern * This,
            /* [retval][out] */ IDispatchedUiAutomationElement **retVal);
        
        END_INTERFACE
    } IDispatchedSelectionItemPatternVtbl;

    interface IDispatchedSelectionItemPattern
    {
        CONST_VTBL struct IDispatchedSelectionItemPatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedSelectionItemPattern_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedSelectionItemPattern_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedSelectionItemPattern_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedSelectionItemPattern_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedSelectionItemPattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedSelectionItemPattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedSelectionItemPattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedSelectionItemPattern_Select(This)	\
    ( (This)->lpVtbl -> Select(This) ) 

#define IDispatchedSelectionItemPattern_AddToSelection(This)	\
    ( (This)->lpVtbl -> AddToSelection(This) ) 

#define IDispatchedSelectionItemPattern_RemoveFromSelection(This)	\
    ( (This)->lpVtbl -> RemoveFromSelection(This) ) 

#define IDispatchedSelectionItemPattern_get_CurrentIsSelected(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsSelected(This,retVal) ) 

#define IDispatchedSelectionItemPattern_get_CurrentSelectionContainer(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentSelectionContainer(This,retVal) ) 

#define IDispatchedSelectionItemPattern_get_CachedIsSelected(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedIsSelected(This,retVal) ) 

#define IDispatchedSelectionItemPattern_get_CachedSelectionContainer(This,retVal)	\
    ( (This)->lpVtbl -> get_CachedSelectionContainer(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedSelectionItemPattern_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationTreeWalker_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationTreeWalker_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationTreeWalker */
/* [unique][helpstring][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationTreeWalker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E64DC40-9B9D-428A-8ECC-9FB7C08EF7DF")
    IDispatchedUiAutomationTreeWalker : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParentElement( 
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **parent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFirstChildElement( 
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **first) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLastChildElement( 
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **last) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNextSiblingElement( 
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **next) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPreviousSiblingElement( 
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **previous) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NormalizeElement( 
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **normalized) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetParentElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **parent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetFirstChildElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **first) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLastChildElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **last) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNextSiblingElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **next) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPreviousSiblingElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **previous) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE NormalizeElementBuildCache( 
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **normalized) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_Condition( 
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationTreeWalkerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationTreeWalker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationTreeWalker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParentElement )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **parent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFirstChildElement )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **first);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLastChildElement )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **last);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElement )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **next);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElement )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **previous);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NormalizeElement )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IDispatchedUiAutomationElement *element,
            /* [retval][out] */ IDispatchedUiAutomationElement **normalized);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetParentElementBuildCache )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **parent);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetFirstChildElementBuildCache )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **first);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetLastChildElementBuildCache )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **last);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetNextSiblingElementBuildCache )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **next);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPreviousSiblingElementBuildCache )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **previous);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *NormalizeElementBuildCache )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [in] */ IUIAutomationElement *element,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IUIAutomationElement **normalized);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Condition )( 
            IDispatchedUiAutomationTreeWalker * This,
            /* [retval][out] */ IDispatchedUiAutomationCondition **condition);
        
        END_INTERFACE
    } IDispatchedUiAutomationTreeWalkerVtbl;

    interface IDispatchedUiAutomationTreeWalker
    {
        CONST_VTBL struct IDispatchedUiAutomationTreeWalkerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationTreeWalker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationTreeWalker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationTreeWalker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationTreeWalker_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationTreeWalker_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationTreeWalker_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationTreeWalker_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationTreeWalker_GetParentElement(This,element,parent)	\
    ( (This)->lpVtbl -> GetParentElement(This,element,parent) ) 

#define IDispatchedUiAutomationTreeWalker_GetFirstChildElement(This,element,first)	\
    ( (This)->lpVtbl -> GetFirstChildElement(This,element,first) ) 

#define IDispatchedUiAutomationTreeWalker_GetLastChildElement(This,element,last)	\
    ( (This)->lpVtbl -> GetLastChildElement(This,element,last) ) 

#define IDispatchedUiAutomationTreeWalker_GetNextSiblingElement(This,element,next)	\
    ( (This)->lpVtbl -> GetNextSiblingElement(This,element,next) ) 

#define IDispatchedUiAutomationTreeWalker_GetPreviousSiblingElement(This,element,previous)	\
    ( (This)->lpVtbl -> GetPreviousSiblingElement(This,element,previous) ) 

#define IDispatchedUiAutomationTreeWalker_NormalizeElement(This,element,normalized)	\
    ( (This)->lpVtbl -> NormalizeElement(This,element,normalized) ) 

#define IDispatchedUiAutomationTreeWalker_GetParentElementBuildCache(This,element,cacheRequest,parent)	\
    ( (This)->lpVtbl -> GetParentElementBuildCache(This,element,cacheRequest,parent) ) 

#define IDispatchedUiAutomationTreeWalker_GetFirstChildElementBuildCache(This,element,cacheRequest,first)	\
    ( (This)->lpVtbl -> GetFirstChildElementBuildCache(This,element,cacheRequest,first) ) 

#define IDispatchedUiAutomationTreeWalker_GetLastChildElementBuildCache(This,element,cacheRequest,last)	\
    ( (This)->lpVtbl -> GetLastChildElementBuildCache(This,element,cacheRequest,last) ) 

#define IDispatchedUiAutomationTreeWalker_GetNextSiblingElementBuildCache(This,element,cacheRequest,next)	\
    ( (This)->lpVtbl -> GetNextSiblingElementBuildCache(This,element,cacheRequest,next) ) 

#define IDispatchedUiAutomationTreeWalker_GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous)	\
    ( (This)->lpVtbl -> GetPreviousSiblingElementBuildCache(This,element,cacheRequest,previous) ) 

#define IDispatchedUiAutomationTreeWalker_NormalizeElementBuildCache(This,element,cacheRequest,normalized)	\
    ( (This)->lpVtbl -> NormalizeElementBuildCache(This,element,cacheRequest,normalized) ) 

#define IDispatchedUiAutomationTreeWalker_get_Condition(This,condition)	\
    ( (This)->lpVtbl -> get_Condition(This,condition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationTreeWalker_INTERFACE_DEFINED__ */


#ifndef __IDispatchedMouseControl_INTERFACE_DEFINED__
#define __IDispatchedMouseControl_INTERFACE_DEFINED__

/* interface IDispatchedMouseControl */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedMouseControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48F3B401-EEFC-4D23-B81E-E8DB846ABFE9")
    IDispatchedMouseControl : public IDispatch
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LeftClick( void) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE MoveTo( 
            /* [in] */ LONG x,
            /* [in] */ LONG y) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedMouseControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedMouseControl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedMouseControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedMouseControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedMouseControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedMouseControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedMouseControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedMouseControl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LeftClick )( 
            IDispatchedMouseControl * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *MoveTo )( 
            IDispatchedMouseControl * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y);
        
        END_INTERFACE
    } IDispatchedMouseControlVtbl;

    interface IDispatchedMouseControl
    {
        CONST_VTBL struct IDispatchedMouseControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedMouseControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedMouseControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedMouseControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedMouseControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedMouseControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedMouseControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedMouseControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedMouseControl_LeftClick(This)	\
    ( (This)->lpVtbl -> LeftClick(This) ) 

#define IDispatchedMouseControl_MoveTo(This,x,y)	\
    ( (This)->lpVtbl -> MoveTo(This,x,y) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedMouseControl_INTERFACE_DEFINED__ */


#ifndef __IDispatchedUiAutomationElement_INTERFACE_DEFINED__
#define __IDispatchedUiAutomationElement_INTERFACE_DEFINED__

/* interface IDispatchedUiAutomationElement */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDispatchedUiAutomationElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F4DC2FBD-51E8-4CEE-9E14-2F49738881B6")
    IDispatchedUiAutomationElement : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentProcessId( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentControlType( 
            /* [retval][out] */ CONTROLTYPEID *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLocalizedControlType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAcceleratorKey( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAccessKey( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHasKeyboardFocus( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsKeyboardFocusable( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsEnabled( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAutomationId( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentClassName( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentHelpText( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCulture( 
            /* [retval][out] */ int *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsControlElement( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsContentElement( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsPassword( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentNativeWindowHandle( 
            /* [retval][out] */ LONG *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemType( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsOffscreen( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentOrientation( 
            /* [retval][out] */ enum OrientationType *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentFrameworkId( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsRequiredForForm( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentItemStatus( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentBoundingRectangle( 
            /* [retval][out] */ IDispRect **rect) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentLabeledBy( 
            /* [retval][out] */ IUIAutomationElement **retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaRole( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentAriaProperties( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentIsDataValidForForm( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetFocus( 
            /* [retval][out] */ BOOL *retVal) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetRuntimeId( 
            /* [retval][out] */ SAFEARRAY * *runtimeId) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFirst( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [retval][out] */ IDispatchedUiAutomationElement **found) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindAll( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [retval][out] */ SAFEARRAY * *found) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE FindFirstBuildCache( 
            /* [in] */ enum TreeScope scope,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IDispatchedUiAutomationElement **found) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetCurrentPattern( 
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetClickablePoint( 
            /* [retval][out] */ IDispPoint **clickable) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE toString( 
            /* [retval][out] */ BSTR *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDispatchedUiAutomationElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDispatchedUiAutomationElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDispatchedUiAutomationElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDispatchedUiAutomationElement * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDispatchedUiAutomationElement * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentProcessId )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentControlType )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ CONTROLTYPEID *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLocalizedControlType )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentName )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAcceleratorKey )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAccessKey )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHasKeyboardFocus )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsKeyboardFocusable )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsEnabled )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAutomationId )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentClassName )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentHelpText )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCulture )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ int *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsControlElement )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsContentElement )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsPassword )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNativeWindowHandle )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ LONG *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemType )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsOffscreen )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentOrientation )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ enum OrientationType *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentFrameworkId )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsRequiredForForm )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentItemStatus )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentBoundingRectangle )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ IDispRect **rect);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentLabeledBy )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ IUIAutomationElement **retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaRole )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentAriaProperties )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentIsDataValidForForm )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BOOL *retVal);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetRuntimeId )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ SAFEARRAY * *runtimeId);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindFirst )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [retval][out] */ IDispatchedUiAutomationElement **found);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [retval][out] */ SAFEARRAY * *found);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindFirstBuildCache )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ enum TreeScope scope,
            /* [in] */ IDispatchedUiAutomationCondition *condition,
            /* [in] */ IUIAutomationCacheRequest *cacheRequest,
            /* [retval][out] */ IDispatchedUiAutomationElement **found);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentPattern )( 
            IDispatchedUiAutomationElement * This,
            /* [in] */ PATTERNID patternId,
            /* [retval][out] */ IUnknown **patternObject);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetClickablePoint )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ IDispPoint **clickable);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *toString )( 
            IDispatchedUiAutomationElement * This,
            /* [retval][out] */ BSTR *retVal);
        
        END_INTERFACE
    } IDispatchedUiAutomationElementVtbl;

    interface IDispatchedUiAutomationElement
    {
        CONST_VTBL struct IDispatchedUiAutomationElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDispatchedUiAutomationElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDispatchedUiAutomationElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDispatchedUiAutomationElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDispatchedUiAutomationElement_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDispatchedUiAutomationElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDispatchedUiAutomationElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDispatchedUiAutomationElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDispatchedUiAutomationElement_get_CurrentProcessId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentProcessId(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentControlType(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentLocalizedControlType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLocalizedControlType(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentName(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentAcceleratorKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAcceleratorKey(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentAccessKey(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAccessKey(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentHasKeyboardFocus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHasKeyboardFocus(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsKeyboardFocusable(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsKeyboardFocusable(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsEnabled(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsEnabled(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentAutomationId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAutomationId(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentClassName(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentClassName(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentHelpText(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentHelpText(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentCulture(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentCulture(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsControlElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsControlElement(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsContentElement(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsContentElement(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsPassword(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsPassword(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentNativeWindowHandle(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentNativeWindowHandle(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentItemType(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemType(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsOffscreen(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsOffscreen(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentOrientation(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentOrientation(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentFrameworkId(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentFrameworkId(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsRequiredForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsRequiredForForm(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentItemStatus(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentItemStatus(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentBoundingRectangle(This,rect)	\
    ( (This)->lpVtbl -> get_CurrentBoundingRectangle(This,rect) ) 

#define IDispatchedUiAutomationElement_get_CurrentLabeledBy(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentLabeledBy(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentAriaRole(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaRole(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentAriaProperties(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentAriaProperties(This,retVal) ) 

#define IDispatchedUiAutomationElement_get_CurrentIsDataValidForForm(This,retVal)	\
    ( (This)->lpVtbl -> get_CurrentIsDataValidForForm(This,retVal) ) 

#define IDispatchedUiAutomationElement_SetFocus(This,retVal)	\
    ( (This)->lpVtbl -> SetFocus(This,retVal) ) 

#define IDispatchedUiAutomationElement_GetRuntimeId(This,runtimeId)	\
    ( (This)->lpVtbl -> GetRuntimeId(This,runtimeId) ) 

#define IDispatchedUiAutomationElement_FindFirst(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindFirst(This,scope,condition,found) ) 

#define IDispatchedUiAutomationElement_FindAll(This,scope,condition,found)	\
    ( (This)->lpVtbl -> FindAll(This,scope,condition,found) ) 

#define IDispatchedUiAutomationElement_FindFirstBuildCache(This,scope,condition,cacheRequest,found)	\
    ( (This)->lpVtbl -> FindFirstBuildCache(This,scope,condition,cacheRequest,found) ) 

#define IDispatchedUiAutomationElement_GetCurrentPattern(This,patternId,patternObject)	\
    ( (This)->lpVtbl -> GetCurrentPattern(This,patternId,patternObject) ) 

#define IDispatchedUiAutomationElement_GetClickablePoint(This,clickable)	\
    ( (This)->lpVtbl -> GetClickablePoint(This,clickable) ) 

#define IDispatchedUiAutomationElement_toString(This,retVal)	\
    ( (This)->lpVtbl -> toString(This,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDispatchedUiAutomationElement_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_UiAutomation;

#ifdef __cplusplus

class DECLSPEC_UUID("4B6DF223-461A-4065-ABB2-F9718BABC855")
UiAutomation;
#endif
#endif /* __DispatchedUiAutomation_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


