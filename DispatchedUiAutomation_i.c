

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomation,0x4C8282BC,0x0BD1,0x41FA,0xB6,0x49,0x53,0x1A,0x34,0x38,0x42,0xE0);


MIDL_DEFINE_GUID(IID, LIBID_DispatchedUiAutomation,0xD7F08CAA,0x33EA,0x41E2,0xB7,0x7A,0xE6,0x60,0x59,0xA0,0x4A,0xAF);


MIDL_DEFINE_GUID(IID, IID_IDispPoint,0xBEF2FEBE,0xBB51,0x478A,0xA1,0x72,0xF5,0xA9,0x08,0xC1,0x0C,0xF7);


MIDL_DEFINE_GUID(IID, IID_IDispRect,0x8E54D30A,0xB10E,0x4BC0,0xA6,0xF0,0x67,0xFB,0x68,0x98,0x48,0x0A);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationCondition,0xF104A127,0x154E,0x45CD,0xA4,0x5A,0x0D,0x64,0x89,0xF4,0x37,0x69);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationBoolCondition,0x91EEAE28,0xC692,0x42CB,0x9C,0x2D,0x3A,0x4F,0xC7,0x73,0xEF,0x11);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationPropertyCondition,0x01FC392E,0x43EB,0x4C1F,0x8D,0xC6,0xA1,0xF8,0x38,0x77,0x36,0xDB);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationAndCondition,0x1205365E,0x91EE,0x446C,0xB0,0xF2,0xA3,0x07,0xFD,0x93,0x26,0xA1);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationOrCondition,0x11B8A2E0,0xB891,0x4893,0xAF,0x9D,0xBB,0xBE,0xE7,0x74,0xE2,0x47);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationNotCondition,0x87DCE25B,0xE388,0x4FB6,0x9C,0xF5,0xA7,0x79,0x3C,0xAB,0x6F,0x9A);


MIDL_DEFINE_GUID(IID, IID_IDispatchedInvokePattern,0xF577992F,0xD7FB,0x497C,0x85,0x23,0x84,0xEC,0xC0,0x6C,0x34,0x5A);


MIDL_DEFINE_GUID(IID, IID_IDispatchedSelectionPattern,0x41173706,0xF86E,0x4DA1,0xA9,0x4D,0x15,0xD1,0x1B,0x59,0xDB,0x20);


MIDL_DEFINE_GUID(IID, IID_IDispatchedValuePattern,0x212EEC1D,0xB474,0x4AFE,0x9E,0xD2,0xA7,0x6B,0x13,0x8D,0x52,0x1E);


MIDL_DEFINE_GUID(IID, IID_IDispatchedRangeValuePattern,0xD1DD52CF,0xF769,0x4184,0x8B,0x50,0x06,0xAD,0x99,0x7D,0x3F,0x52);


MIDL_DEFINE_GUID(IID, IID_IDispatchedScrollPattern,0x2BBE74D4,0x9472,0x4268,0x9E,0x49,0xC2,0x99,0xAA,0x8D,0x0A,0xB1);


MIDL_DEFINE_GUID(IID, IID_IDispatchedExpandCollapsePattern,0x6FEA5B98,0xA8F6,0x4DDE,0xB1,0xED,0x70,0xBD,0x67,0x21,0x25,0x4D);


MIDL_DEFINE_GUID(IID, IID_IDispatchedGridPattern,0xE6E5BF29,0x3AA9,0x4E8F,0x92,0xF3,0x12,0x7C,0xE2,0x4B,0xF5,0xB2);


MIDL_DEFINE_GUID(IID, IID_IDispatchedGridItemPattern,0xB70CEE66,0xA775,0x4EB7,0xA8,0xC3,0xD9,0x96,0x77,0x19,0x52,0xCE);


MIDL_DEFINE_GUID(IID, IID_IDispatchedMultipleViewPattern,0xCDB5180D,0x0AB1,0x4A5C,0xA2,0xA0,0xA8,0xB9,0x58,0xD7,0xF1,0x82);


MIDL_DEFINE_GUID(IID, IID_IDispatchedSelectionItemPattern,0x65362205,0xE1C8,0x41F0,0xB4,0x6A,0xD4,0xC4,0x24,0x4F,0x2B,0x2B);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationTreeWalker,0x6E64DC40,0x9B9D,0x428A,0x8E,0xCC,0x9F,0xB7,0xC0,0x8E,0xF7,0xDF);


MIDL_DEFINE_GUID(IID, IID_IDispatchedMouseControl,0x48F3B401,0xEEFC,0x4D23,0xB8,0x1E,0xE8,0xDB,0x84,0x6A,0xBF,0xE9);


MIDL_DEFINE_GUID(IID, IID_IDispatchedUiAutomationElement,0xF4DC2FBD,0x51E8,0x4CEE,0x9E,0x14,0x2F,0x49,0x73,0x88,0x81,0xB6);


MIDL_DEFINE_GUID(CLSID, CLSID_UiAutomation,0x4B6DF223,0x461A,0x4065,0xAB,0xB2,0xF9,0x71,0x8B,0xAB,0xC8,0x55);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif


