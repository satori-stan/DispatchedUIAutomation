

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "DispatchedUiAutomation_h.h"

#define TYPE_FORMAT_STRING_SIZE   1501                              
#define PROC_FORMAT_STRING_SIZE   2083                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _DispatchedUiAutomation_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } DispatchedUiAutomation_MIDL_TYPE_FORMAT_STRING;

typedef struct _DispatchedUiAutomation_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } DispatchedUiAutomation_MIDL_PROC_FORMAT_STRING;

typedef struct _DispatchedUiAutomation_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } DispatchedUiAutomation_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const DispatchedUiAutomation_MIDL_TYPE_FORMAT_STRING DispatchedUiAutomation__MIDL_TypeFormatString;
extern const DispatchedUiAutomation_MIDL_PROC_FORMAT_STRING DispatchedUiAutomation__MIDL_ProcFormatString;
extern const DispatchedUiAutomation_MIDL_EXPR_FORMAT_STRING DispatchedUiAutomation__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDispatchedUiAutomation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDispatchedUiAutomation_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const DispatchedUiAutomation_MIDL_PROC_FORMAT_STRING DispatchedUiAutomation__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure CompareElements */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter el1 */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter el2 */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter areSame */

/* 36 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CompareRuntimeIds */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x24 ),	/* 36 */
/* 62 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 64 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter runtimeId1 */

/* 72 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 74 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 76 */	NdrFcShort( 0x422 ),	/* Type Offset=1058 */

	/* Parameter runtimeId2 */

/* 78 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	NdrFcShort( 0x422 ),	/* Type Offset=1058 */

	/* Parameter areSame */

/* 84 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 86 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 92 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRootElement */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x9 ),	/* 9 */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 112 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter root */

/* 120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 122 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 124 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElementFromHandle */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0xa ),	/* 10 */
/* 140 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 148 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hwnd */

/* 156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 158 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter element */

/* 162 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 164 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 166 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElementFromPoint */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0xb ),	/* 11 */
/* 182 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 184 */	NdrFcShort( 0x18 ),	/* 24 */
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 190 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pt */

/* 198 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 200 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 202 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Parameter element */

/* 204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	NdrFcShort( 0x430 ),	/* Type Offset=1072 */

	/* Return value */

/* 210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 212 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFocusedElement */

/* 216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 222 */	NdrFcShort( 0xc ),	/* 12 */
/* 224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 232 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter element */

/* 240 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRootElementBuildCache */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0xd ),	/* 13 */
/* 260 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 266 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 268 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cacheRequest */

/* 276 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 278 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 280 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter root */

/* 282 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 284 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 286 */	NdrFcShort( 0x430 ),	/* Type Offset=1072 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 290 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElementFromPointBuildCache */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0xf ),	/* 15 */
/* 302 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 304 */	NdrFcShort( 0x18 ),	/* 24 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 310 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pt */

/* 318 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 320 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 322 */	NdrFcShort( 0x3f8 ),	/* Type Offset=1016 */

	/* Parameter cacheRequest */

/* 324 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 326 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 328 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter element */

/* 330 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 334 */	NdrFcShort( 0x430 ),	/* Type Offset=1072 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 338 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFocusedElementBuildCache */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x10 ),	/* 16 */
/* 350 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 358 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cacheRequest */

/* 366 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 368 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 370 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter element */

/* 372 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 374 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 376 */	NdrFcShort( 0x430 ),	/* Type Offset=1072 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 380 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTreeWalker */

/* 384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 390 */	NdrFcShort( 0x11 ),	/* 17 */
/* 392 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 398 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 400 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCondition */

/* 408 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Parameter walker */

/* 414 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ControlViewWalker */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x12 ),	/* 18 */
/* 434 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 442 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter walker */

/* 450 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 452 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 454 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 458 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ContentViewWalker */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x13 ),	/* 19 */
/* 470 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 478 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter walker */

/* 486 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RawViewWalker */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x14 ),	/* 20 */
/* 506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 514 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter walker */

/* 522 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 524 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 526 */	NdrFcShort( 0x46a ),	/* Type Offset=1130 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RawViewCondition */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x15 ),	/* 21 */
/* 542 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 550 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter condition */

/* 558 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ControlViewCondition */

/* 570 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x16 ),	/* 22 */
/* 578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter condition */

/* 594 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 596 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 598 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ContentViewCondition */

/* 606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x17 ),	/* 23 */
/* 614 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 622 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter condition */

/* 630 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 634 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCacheRequest */

/* 642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x18 ),	/* 24 */
/* 650 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 656 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 658 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cacheRequest */

/* 666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 668 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 670 */	NdrFcShort( 0x484 ),	/* Type Offset=1156 */

	/* Return value */

/* 672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 674 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateTrueCondition */

/* 678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x19 ),	/* 25 */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 694 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newCondition */

/* 702 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 704 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 706 */	NdrFcShort( 0x488 ),	/* Type Offset=1160 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 710 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateFalseCondition */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x1a ),	/* 26 */
/* 722 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 728 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 730 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newCondition */

/* 738 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 742 */	NdrFcShort( 0x488 ),	/* Type Offset=1160 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePropertyCondition */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x1b ),	/* 27 */
/* 758 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 766 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter propertyId */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 780 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 782 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 784 */	NdrFcShort( 0x4a2 ),	/* Type Offset=1186 */

	/* Parameter newCondition */

/* 786 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 788 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 790 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 794 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreatePropertyConditionEx */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x1c ),	/* 28 */
/* 806 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 808 */	NdrFcShort( 0xe ),	/* 14 */
/* 810 */	NdrFcShort( 0x8 ),	/* 8 */
/* 812 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 814 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x1 ),	/* 1 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter propertyId */

/* 822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter value */

/* 828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	NdrFcShort( 0x4a2 ),	/* Type Offset=1186 */

	/* Parameter flags */

/* 834 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 836 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 838 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter newCondition */

/* 840 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 842 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 844 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateAndCondition */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x1d ),	/* 29 */
/* 860 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 866 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 868 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter condition1 */

/* 876 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Parameter condition2 */

/* 882 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Parameter newCondition */

/* 888 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 890 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 892 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateAndConditionFromArray */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x1e ),	/* 30 */
/* 908 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 916 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter conditions */

/* 924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	NdrFcShort( 0x422 ),	/* Type Offset=1058 */

	/* Parameter newCondition */

/* 930 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOrCondition */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 944 */	NdrFcLong( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0x1f ),	/* 31 */
/* 950 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 956 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 958 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter condition1 */

/* 966 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 968 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 970 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Parameter condition2 */

/* 972 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 974 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 976 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Parameter newCondition */

/* 978 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 980 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 982 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 986 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOrConditionFromArray */

/* 990 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x20 ),	/* 32 */
/* 998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1004 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1006 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter conditions */

/* 1014 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1016 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1018 */	NdrFcShort( 0x422 ),	/* Type Offset=1058 */

	/* Parameter newCondition */

/* 1020 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1022 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1024 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNotCondition */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1040 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1048 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter condition */

/* 1056 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1058 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1060 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */

	/* Parameter newCondition */

/* 1062 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1064 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1066 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1070 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddAutomationEventHandler */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1082 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1084 */	NdrFcShort( 0xe ),	/* 14 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1090 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eventId */

/* 1098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter element */

/* 1104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1108 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter scope */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1114 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter cacheRequest */

/* 1116 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1118 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1120 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter handler */

/* 1122 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1124 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1126 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAutomationEventHandler */

/* 1134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1142 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1150 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eventId */

/* 1158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1160 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter element */

/* 1164 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1166 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1168 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter handler */

/* 1170 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1172 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1174 */	NdrFcShort( 0x4ac ),	/* Type Offset=1196 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPropertyChangedEventHandler */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1190 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1192 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1196 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1198 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter element */

/* 1206 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1208 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1210 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter scope */

/* 1212 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1214 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1216 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter cacheRequest */

/* 1218 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1222 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter handler */

/* 1224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1226 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1228 */	NdrFcShort( 0x4be ),	/* Type Offset=1214 */

	/* Parameter propertyArray */

/* 1230 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1232 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1234 */	NdrFcShort( 0x422 ),	/* Type Offset=1058 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemovePropertyChangedEventHandler */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0x25 ),	/* 37 */
/* 1250 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1256 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1258 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter element */

/* 1266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1268 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1270 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter handler */

/* 1272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1274 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1276 */	NdrFcShort( 0x4be ),	/* Type Offset=1214 */

	/* Return value */

/* 1278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1280 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddStructureChangedEventHandler */

/* 1284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x26 ),	/* 38 */
/* 1292 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1294 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1298 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1300 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter element */

/* 1308 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1312 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter scope */

/* 1314 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1318 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter cacheRequest */

/* 1320 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1322 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1324 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Parameter handler */

/* 1326 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1328 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1330 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1334 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveStructureChangedEventHandler */

/* 1338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1344 */	NdrFcShort( 0x27 ),	/* 39 */
/* 1346 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1354 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter element */

/* 1362 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1364 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1366 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter handler */

/* 1368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1370 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1372 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1376 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddFocusChangedEventHandler */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1388 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1396 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cacheRequest */

/* 1404 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1406 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1408 */	NdrFcShort( 0x4e2 ),	/* Type Offset=1250 */

	/* Parameter handler */

/* 1410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1412 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1414 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveFocusChangedEventHandler */

/* 1422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1436 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1438 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter handler */

/* 1446 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1450 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Return value */

/* 1452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveAllEventHandlers */

/* 1458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1472 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 1474 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 1482 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RectToVariant */

/* 1488 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1496 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1498 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1502 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1504 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rc */

/* 1512 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 1514 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1516 */	NdrFcShort( 0x518 ),	/* Type Offset=1304 */

	/* Parameter var */

/* 1518 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1520 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1522 */	NdrFcShort( 0x52a ),	/* Type Offset=1322 */

	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1526 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure VariantToRect */

/* 1530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1538 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1544 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1546 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1550 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter var */

/* 1554 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1558 */	NdrFcShort( 0x4a2 ),	/* Type Offset=1186 */

	/* Parameter rc */

/* 1560 */	NdrFcShort( 0x4112 ),	/* Flags:  must free, out, simple ref, srv alloc size=16 */
/* 1562 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1564 */	NdrFcShort( 0x518 ),	/* Type Offset=1304 */

	/* Return value */

/* 1566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1568 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateProxyFactoryEntry */

/* 1572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1580 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1586 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1588 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter factory */

/* 1596 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1600 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Parameter factoryEntry */

/* 1602 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1604 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1606 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */

/* 1608 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1610 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyFactoryMapping */

/* 1614 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1616 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1622 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1628 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1630 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter factoryMapping */

/* 1638 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1640 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1642 */	NdrFcShort( 0x560 ),	/* Type Offset=1376 */

	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1646 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPropertyProgrammaticName */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1658 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1666 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter property */

/* 1674 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1676 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 1680 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1682 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1684 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPatternProgrammaticName */

/* 1692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1700 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1706 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1708 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1710 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pattern */

/* 1716 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1718 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 1722 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1724 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1726 */	NdrFcShort( 0x57e ),	/* Type Offset=1406 */

	/* Return value */

/* 1728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PollForPotentialSupportedPatterns */

/* 1734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1742 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1748 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1750 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pElement */

/* 1758 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1760 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1762 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter patternIds */

/* 1764 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1766 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1768 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Parameter patternNames */

/* 1770 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1772 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1774 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 1776 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PollForPotentialSupportedProperties */

/* 1782 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1790 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1796 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1798 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pElement */

/* 1806 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1808 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1810 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter propertyIds */

/* 1812 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1814 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1816 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Parameter propertyNames */

/* 1818 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 1824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1826 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CheckNotSupported */

/* 1830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x33 ),	/* 51 */
/* 1838 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1846 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1854 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1856 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1858 */	NdrFcShort( 0x4a2 ),	/* Type Offset=1186 */

	/* Parameter isNotSupported */

/* 1860 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1862 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1868 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReservedNotSupportedValue */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1880 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1886 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1888 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter notSupportedValue */

/* 1896 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1898 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1900 */	NdrFcShort( 0x59e ),	/* Type Offset=1438 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ReservedMixedAttributeValue */

/* 1908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x35 ),	/* 53 */
/* 1916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1924 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter mixedAttributeValue */

/* 1932 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1936 */	NdrFcShort( 0x59e ),	/* Type Offset=1438 */

	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElementFromIAccessible */

/* 1944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x36 ),	/* 54 */
/* 1952 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1960 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 1968 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1972 */	NdrFcShort( 0x5b4 ),	/* Type Offset=1460 */

	/* Parameter childId */

/* 1974 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter element */

/* 1980 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1984 */	NdrFcShort( 0x430 ),	/* Type Offset=1072 */

	/* Return value */

/* 1986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElementFromIAccessibleBuildCache */

/* 1992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1998 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2000 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2008 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 2016 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2018 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2020 */	NdrFcShort( 0x5b4 ),	/* Type Offset=1460 */

	/* Parameter childId */

/* 2022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2024 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cacheRequest */

/* 2028 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2030 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2032 */	NdrFcShort( 0x446 ),	/* Type Offset=1094 */

	/* Parameter element */

/* 2034 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2036 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2038 */	NdrFcShort( 0x430 ),	/* Type Offset=1072 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2042 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Mouse */

/* 2046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2054 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2062 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter controller */

/* 2070 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2072 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2074 */	NdrFcShort( 0x5c6 ),	/* Type Offset=1478 */

	/* Return value */

/* 2076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2078 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const DispatchedUiAutomation_MIDL_TYPE_FORMAT_STRING DispatchedUiAutomation__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0xf4dc2fbd ),	/* -186896451 */
/*  8 */	NdrFcShort( 0x51e8 ),	/* 20968 */
/* 10 */	NdrFcShort( 0x4cee ),	/* 19694 */
/* 12 */	0x9e,		/* 158 */
			0x14,		/* 20 */
/* 14 */	0x2f,		/* 47 */
			0x49,		/* 73 */
/* 16 */	0x73,		/* 115 */
			0x88,		/* 136 */
/* 18 */	0x81,		/* 129 */
			0xb6,		/* 182 */
/* 20 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 22 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 24 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	
			0x12, 0x0,	/* FC_UP */
/* 30 */	NdrFcShort( 0x3f2 ),	/* Offset= 1010 (1040) */
/* 32 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 34 */	NdrFcShort( 0x18 ),	/* 24 */
/* 36 */	NdrFcShort( 0xa ),	/* 10 */
/* 38 */	NdrFcLong( 0x8 ),	/* 8 */
/* 42 */	NdrFcShort( 0x70 ),	/* Offset= 112 (154) */
/* 44 */	NdrFcLong( 0xd ),	/* 13 */
/* 48 */	NdrFcShort( 0xa6 ),	/* Offset= 166 (214) */
/* 50 */	NdrFcLong( 0x9 ),	/* 9 */
/* 54 */	NdrFcShort( 0xd8 ),	/* Offset= 216 (270) */
/* 56 */	NdrFcLong( 0xc ),	/* 12 */
/* 60 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (786) */
/* 62 */	NdrFcLong( 0x24 ),	/* 36 */
/* 66 */	NdrFcShort( 0x300 ),	/* Offset= 768 (834) */
/* 68 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 72 */	NdrFcShort( 0x31c ),	/* Offset= 796 (868) */
/* 74 */	NdrFcLong( 0x10 ),	/* 16 */
/* 78 */	NdrFcShort( 0x336 ),	/* Offset= 822 (900) */
/* 80 */	NdrFcLong( 0x2 ),	/* 2 */
/* 84 */	NdrFcShort( 0x350 ),	/* Offset= 848 (932) */
/* 86 */	NdrFcLong( 0x3 ),	/* 3 */
/* 90 */	NdrFcShort( 0x36a ),	/* Offset= 874 (964) */
/* 92 */	NdrFcLong( 0x14 ),	/* 20 */
/* 96 */	NdrFcShort( 0x384 ),	/* Offset= 900 (996) */
/* 98 */	NdrFcShort( 0xffff ),	/* Offset= -1 (97) */
/* 100 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 102 */	NdrFcShort( 0x2 ),	/* 2 */
/* 104 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 106 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 108 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 110 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 112 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (100) */
/* 118 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 122 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 132 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	0x12, 0x0,	/* FC_UP */
/* 148 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (112) */
/* 150 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 152 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 154 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x4 ),	/* 4 */
/* 166 */	0x11, 0x0,	/* FC_RP */
/* 168 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (122) */
/* 170 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 172 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 174 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 186 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 188 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 190 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 192 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 202 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 206 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 208 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 210 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (174) */
/* 212 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 214 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 216 */	NdrFcShort( 0x8 ),	/* 8 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x6 ),	/* Offset= 6 (226) */
/* 222 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 224 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 226 */	
			0x11, 0x0,	/* FC_RP */
/* 228 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (192) */
/* 230 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 232 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 242 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 244 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 246 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 248 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 258 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 262 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 264 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (230) */
/* 268 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 270 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x6 ),	/* Offset= 6 (282) */
/* 278 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 280 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 282 */	
			0x11, 0x0,	/* FC_RP */
/* 284 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (248) */
/* 286 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 288 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 290 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (296) */
/* 296 */	NdrFcShort( 0x10 ),	/* 16 */
/* 298 */	NdrFcShort( 0x2f ),	/* 47 */
/* 300 */	NdrFcLong( 0x14 ),	/* 20 */
/* 304 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 306 */	NdrFcLong( 0x3 ),	/* 3 */
/* 310 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 312 */	NdrFcLong( 0x11 ),	/* 17 */
/* 316 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 318 */	NdrFcLong( 0x2 ),	/* 2 */
/* 322 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 324 */	NdrFcLong( 0x4 ),	/* 4 */
/* 328 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 330 */	NdrFcLong( 0x5 ),	/* 5 */
/* 334 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 336 */	NdrFcLong( 0xb ),	/* 11 */
/* 340 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 342 */	NdrFcLong( 0xa ),	/* 10 */
/* 346 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 348 */	NdrFcLong( 0x6 ),	/* 6 */
/* 352 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (584) */
/* 354 */	NdrFcLong( 0x7 ),	/* 7 */
/* 358 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 360 */	NdrFcLong( 0x8 ),	/* 8 */
/* 364 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (590) */
/* 366 */	NdrFcLong( 0xd ),	/* 13 */
/* 370 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (174) */
/* 372 */	NdrFcLong( 0x9 ),	/* 9 */
/* 376 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (230) */
/* 378 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 382 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (594) */
/* 384 */	NdrFcLong( 0x24 ),	/* 36 */
/* 388 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (602) */
/* 390 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 394 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (602) */
/* 396 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 400 */	NdrFcShort( 0x100 ),	/* Offset= 256 (656) */
/* 402 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 406 */	NdrFcShort( 0xfe ),	/* Offset= 254 (660) */
/* 408 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 412 */	NdrFcShort( 0xfc ),	/* Offset= 252 (664) */
/* 414 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 418 */	NdrFcShort( 0xfa ),	/* Offset= 250 (668) */
/* 420 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 424 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (672) */
/* 426 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 430 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (676) */
/* 432 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 436 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (660) */
/* 438 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 442 */	NdrFcShort( 0xde ),	/* Offset= 222 (664) */
/* 444 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 448 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (680) */
/* 450 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 454 */	NdrFcShort( 0xde ),	/* Offset= 222 (676) */
/* 456 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 460 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (684) */
/* 462 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 466 */	NdrFcShort( 0xde ),	/* Offset= 222 (688) */
/* 468 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 472 */	NdrFcShort( 0xdc ),	/* Offset= 220 (692) */
/* 474 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 478 */	NdrFcShort( 0xda ),	/* Offset= 218 (696) */
/* 480 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 484 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (708) */
/* 486 */	NdrFcLong( 0x10 ),	/* 16 */
/* 490 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 492 */	NdrFcLong( 0x12 ),	/* 18 */
/* 496 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 498 */	NdrFcLong( 0x13 ),	/* 19 */
/* 502 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 504 */	NdrFcLong( 0x15 ),	/* 21 */
/* 508 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 510 */	NdrFcLong( 0x16 ),	/* 22 */
/* 514 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 516 */	NdrFcLong( 0x17 ),	/* 23 */
/* 520 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 522 */	NdrFcLong( 0xe ),	/* 14 */
/* 526 */	NdrFcShort( 0xbe ),	/* Offset= 190 (716) */
/* 528 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 532 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (726) */
/* 534 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 538 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (730) */
/* 540 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 544 */	NdrFcShort( 0x74 ),	/* Offset= 116 (660) */
/* 546 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 550 */	NdrFcShort( 0x72 ),	/* Offset= 114 (664) */
/* 552 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 556 */	NdrFcShort( 0x70 ),	/* Offset= 112 (668) */
/* 558 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 562 */	NdrFcShort( 0x66 ),	/* Offset= 102 (664) */
/* 564 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 568 */	NdrFcShort( 0x60 ),	/* Offset= 96 (664) */
/* 570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x0 ),	/* Offset= 0 (574) */
/* 576 */	NdrFcLong( 0x1 ),	/* 1 */
/* 580 */	NdrFcShort( 0x0 ),	/* Offset= 0 (580) */
/* 582 */	NdrFcShort( 0xffff ),	/* Offset= -1 (581) */
/* 584 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 588 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 590 */	
			0x12, 0x0,	/* FC_UP */
/* 592 */	NdrFcShort( 0xfe20 ),	/* Offset= -480 (112) */
/* 594 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (598) */
/* 598 */	
			0x12, 0x0,	/* FC_UP */
/* 600 */	NdrFcShort( 0x1b8 ),	/* Offset= 440 (1040) */
/* 602 */	
			0x12, 0x0,	/* FC_UP */
/* 604 */	NdrFcShort( 0x20 ),	/* Offset= 32 (636) */
/* 606 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 608 */	NdrFcLong( 0x2f ),	/* 47 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 618 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 624 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 628 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 634 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 636 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x10 ),	/* 16 */
/* 640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 642 */	NdrFcShort( 0xa ),	/* Offset= 10 (652) */
/* 644 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 646 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 648 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (606) */
/* 650 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 652 */	
			0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (624) */
/* 656 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 658 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 662 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 664 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 666 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 668 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 670 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 672 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 674 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 676 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 678 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 680 */	
			0x12, 0x0,	/* FC_UP */
/* 682 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (584) */
/* 684 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 686 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (590) */
/* 688 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 690 */	NdrFcShort( 0xfdfc ),	/* Offset= -516 (174) */
/* 692 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 694 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (230) */
/* 696 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 698 */	NdrFcShort( 0x2 ),	/* Offset= 2 (700) */
/* 700 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 702 */	NdrFcShort( 0x2 ),	/* Offset= 2 (704) */
/* 704 */	
			0x12, 0x0,	/* FC_UP */
/* 706 */	NdrFcShort( 0x14e ),	/* Offset= 334 (1040) */
/* 708 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 710 */	NdrFcShort( 0x2 ),	/* Offset= 2 (712) */
/* 712 */	
			0x12, 0x0,	/* FC_UP */
/* 714 */	NdrFcShort( 0x14 ),	/* Offset= 20 (734) */
/* 716 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 720 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 722 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 724 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 726 */	
			0x12, 0x0,	/* FC_UP */
/* 728 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (716) */
/* 730 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 732 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 734 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 736 */	NdrFcShort( 0x20 ),	/* 32 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	NdrFcShort( 0x0 ),	/* Offset= 0 (740) */
/* 742 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 744 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 746 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 748 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (286) */
/* 752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 754 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 758 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 764 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 766 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	0x12, 0x0,	/* FC_UP */
/* 780 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (734) */
/* 782 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 784 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 786 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x6 ),	/* Offset= 6 (798) */
/* 794 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 796 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 798 */	
			0x11, 0x0,	/* FC_RP */
/* 800 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (754) */
/* 802 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 804 */	NdrFcShort( 0x4 ),	/* 4 */
/* 806 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 812 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 814 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 816 */	NdrFcShort( 0x4 ),	/* 4 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x1 ),	/* 1 */
/* 822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	0x12, 0x0,	/* FC_UP */
/* 828 */	NdrFcShort( 0xff40 ),	/* Offset= -192 (636) */
/* 830 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 832 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 834 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x6 ),	/* Offset= 6 (846) */
/* 842 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 844 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 846 */	
			0x11, 0x0,	/* FC_RP */
/* 848 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (802) */
/* 850 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 854 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 856 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 860 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 862 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 864 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (850) */
			0x5b,		/* FC_END */
/* 868 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x18 ),	/* 24 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0xa ),	/* Offset= 10 (884) */
/* 876 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 878 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 880 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (856) */
/* 882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 884 */	
			0x11, 0x0,	/* FC_RP */
/* 886 */	NdrFcShort( 0xfd4a ),	/* Offset= -694 (192) */
/* 888 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 898 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 900 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 910 */	NdrFcShort( 0x4 ),	/* 4 */
/* 912 */	0x12, 0x0,	/* FC_UP */
/* 914 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (888) */
/* 916 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 918 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 920 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 922 */	NdrFcShort( 0x2 ),	/* 2 */
/* 924 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 930 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 932 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 936 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 938 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 940 */	NdrFcShort( 0x4 ),	/* 4 */
/* 942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 944 */	0x12, 0x0,	/* FC_UP */
/* 946 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (920) */
/* 948 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 950 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 952 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 956 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 962 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 964 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	NdrFcShort( 0x4 ),	/* 4 */
/* 976 */	0x12, 0x0,	/* FC_UP */
/* 978 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (952) */
/* 980 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 982 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 984 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 988 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 994 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 996 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1000 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1002 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1004 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1006 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1008 */	0x12, 0x0,	/* FC_UP */
/* 1010 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (984) */
/* 1012 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1014 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1016 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1020 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1022 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1024 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1030 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1032 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1034 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1036 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1016) */
/* 1038 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1040 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1042 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1044 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1024) */
/* 1046 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1046) */
/* 1048 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1050 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1052 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1054 */	NdrFcShort( 0xfc02 ),	/* Offset= -1022 (32) */
/* 1056 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1058 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1066 */	NdrFcShort( 0xfbee ),	/* Offset= -1042 (24) */
/* 1068 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1070 */	NdrFcShort( 0xfbd4 ),	/* Offset= -1068 (2) */
/* 1072 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1074 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1076) */
/* 1076 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1078 */	NdrFcLong( 0xd22108aa ),	/* -769587030 */
/* 1082 */	NdrFcShort( 0x8ac5 ),	/* -30011 */
/* 1084 */	NdrFcShort( 0x49a5 ),	/* 18853 */
/* 1086 */	0x83,		/* 131 */
			0x7b,		/* 123 */
/* 1088 */	0x37,		/* 55 */
			0xbb,		/* 187 */
/* 1090 */	0xb3,		/* 179 */
			0xd7,		/* 215 */
/* 1092 */	0x59,		/* 89 */
			0x1e,		/* 30 */
/* 1094 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1096 */	NdrFcLong( 0xb32a92b5 ),	/* -1289055563 */
/* 1100 */	NdrFcShort( 0xbc25 ),	/* -17371 */
/* 1102 */	NdrFcShort( 0x4078 ),	/* 16504 */
/* 1104 */	0x9c,		/* 156 */
			0x8,		/* 8 */
/* 1106 */	0xd7,		/* 215 */
			0xee,		/* 238 */
/* 1108 */	0x95,		/* 149 */
			0xc4,		/* 196 */
/* 1110 */	0x8e,		/* 142 */
			0x3,		/* 3 */
/* 1112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1114 */	NdrFcLong( 0xf104a127 ),	/* -251354841 */
/* 1118 */	NdrFcShort( 0x154e ),	/* 5454 */
/* 1120 */	NdrFcShort( 0x45cd ),	/* 17869 */
/* 1122 */	0xa4,		/* 164 */
			0x5a,		/* 90 */
/* 1124 */	0xd,		/* 13 */
			0x64,		/* 100 */
/* 1126 */	0x89,		/* 137 */
			0xf4,		/* 244 */
/* 1128 */	0x37,		/* 55 */
			0x69,		/* 105 */
/* 1130 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1134) */
/* 1134 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1136 */	NdrFcLong( 0x6e64dc40 ),	/* 1852103744 */
/* 1140 */	NdrFcShort( 0x9b9d ),	/* -25699 */
/* 1142 */	NdrFcShort( 0x428a ),	/* 17034 */
/* 1144 */	0x8e,		/* 142 */
			0xcc,		/* 204 */
/* 1146 */	0x9f,		/* 159 */
			0xb7,		/* 183 */
/* 1148 */	0xc0,		/* 192 */
			0x8e,		/* 142 */
/* 1150 */	0xf7,		/* 247 */
			0xdf,		/* 223 */
/* 1152 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1154 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (1112) */
/* 1156 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1158 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1094) */
/* 1160 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1164) */
/* 1164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1166 */	NdrFcLong( 0x91eeae28 ),	/* -1846628824 */
/* 1170 */	NdrFcShort( 0xc692 ),	/* -14702 */
/* 1172 */	NdrFcShort( 0x42cb ),	/* 17099 */
/* 1174 */	0x9c,		/* 156 */
			0x2d,		/* 45 */
/* 1176 */	0x3a,		/* 58 */
			0x4f,		/* 79 */
/* 1178 */	0xc7,		/* 199 */
			0x73,		/* 115 */
/* 1180 */	0xef,		/* 239 */
			0x11,		/* 17 */
/* 1182 */	
			0x12, 0x0,	/* FC_UP */
/* 1184 */	NdrFcShort( 0xfe3e ),	/* Offset= -450 (734) */
/* 1186 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1188 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1190 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1182) */
/* 1196 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1198 */	NdrFcLong( 0x146c3c17 ),	/* 342637591 */
/* 1202 */	NdrFcShort( 0xf12e ),	/* -3794 */
/* 1204 */	NdrFcShort( 0x4e22 ),	/* 20002 */
/* 1206 */	0x8c,		/* 140 */
			0x27,		/* 39 */
/* 1208 */	0xf8,		/* 248 */
			0x94,		/* 148 */
/* 1210 */	0xb9,		/* 185 */
			0xb7,		/* 183 */
/* 1212 */	0x9c,		/* 156 */
			0x69,		/* 105 */
/* 1214 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1216 */	NdrFcLong( 0x40cd37d4 ),	/* 1087190996 */
/* 1220 */	NdrFcShort( 0xc756 ),	/* -14506 */
/* 1222 */	NdrFcShort( 0x4b0c ),	/* 19212 */
/* 1224 */	0x8c,		/* 140 */
			0x6f,		/* 111 */
/* 1226 */	0xbd,		/* 189 */
			0xdf,		/* 223 */
/* 1228 */	0xee,		/* 238 */
			0xb1,		/* 177 */
/* 1230 */	0x3b,		/* 59 */
			0x50,		/* 80 */
/* 1232 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1234 */	NdrFcLong( 0xd22108aa ),	/* -769587030 */
/* 1238 */	NdrFcShort( 0x8ac5 ),	/* -30011 */
/* 1240 */	NdrFcShort( 0x49a5 ),	/* 18853 */
/* 1242 */	0x83,		/* 131 */
			0x7b,		/* 123 */
/* 1244 */	0x37,		/* 55 */
			0xbb,		/* 187 */
/* 1246 */	0xb3,		/* 179 */
			0xd7,		/* 215 */
/* 1248 */	0x59,		/* 89 */
			0x1e,		/* 30 */
/* 1250 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1252 */	NdrFcLong( 0xb32a92b5 ),	/* -1289055563 */
/* 1256 */	NdrFcShort( 0xbc25 ),	/* -17371 */
/* 1258 */	NdrFcShort( 0x4078 ),	/* 16504 */
/* 1260 */	0x9c,		/* 156 */
			0x8,		/* 8 */
/* 1262 */	0xd7,		/* 215 */
			0xee,		/* 238 */
/* 1264 */	0x95,		/* 149 */
			0xc4,		/* 196 */
/* 1266 */	0x8e,		/* 142 */
			0x3,		/* 3 */
/* 1268 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1270 */	NdrFcLong( 0xe81d1b4e ),	/* -400745650 */
/* 1274 */	NdrFcShort( 0x11c5 ),	/* 4549 */
/* 1276 */	NdrFcShort( 0x42f8 ),	/* 17144 */
/* 1278 */	0x97,		/* 151 */
			0x54,		/* 84 */
/* 1280 */	0xe7,		/* 231 */
			0x3,		/* 3 */
/* 1282 */	0x6c,		/* 108 */
			0x79,		/* 121 */
/* 1284 */	0xf0,		/* 240 */
			0x54,		/* 84 */
/* 1286 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1288 */	NdrFcLong( 0xc270f6b5 ),	/* -1032784203 */
/* 1292 */	NdrFcShort( 0x5c69 ),	/* 23657 */
/* 1294 */	NdrFcShort( 0x4290 ),	/* 17040 */
/* 1296 */	0x97,		/* 151 */
			0x45,		/* 69 */
/* 1298 */	0x7a,		/* 122 */
			0x7f,		/* 127 */
/* 1300 */	0x97,		/* 151 */
			0x16,		/* 22 */
/* 1302 */	0x94,		/* 148 */
			0x68,		/* 104 */
/* 1304 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1306 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1310 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1312 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1314 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1316 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1322) */
/* 1318 */	
			0x13, 0x0,	/* FC_OP */
/* 1320 */	NdrFcShort( 0xfdb6 ),	/* Offset= -586 (734) */
/* 1322 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1326 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1318) */
/* 1332 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1334 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1304) */
/* 1336 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1338 */	NdrFcLong( 0x85b94ecd ),	/* -2051453235 */
/* 1342 */	NdrFcShort( 0x849d ),	/* -31587 */
/* 1344 */	NdrFcShort( 0x42b6 ),	/* 17078 */
/* 1346 */	0xb9,		/* 185 */
			0x4d,		/* 77 */
/* 1348 */	0xd6,		/* 214 */
			0xdb,		/* 219 */
/* 1350 */	0x23,		/* 35 */
			0xfd,		/* 253 */
/* 1352 */	0xf5,		/* 245 */
			0xa4,		/* 164 */
/* 1354 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1356 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1358) */
/* 1358 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1360 */	NdrFcLong( 0xd50e472e ),	/* -720484562 */
/* 1364 */	NdrFcShort( 0xb64b ),	/* -18869 */
/* 1366 */	NdrFcShort( 0x490c ),	/* 18700 */
/* 1368 */	0xbc,		/* 188 */
			0xa1,		/* 161 */
/* 1370 */	0xd3,		/* 211 */
			0x6,		/* 6 */
/* 1372 */	0x96,		/* 150 */
			0xf9,		/* 249 */
/* 1374 */	0xf2,		/* 242 */
			0x89,		/* 137 */
/* 1376 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1380) */
/* 1380 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1382 */	NdrFcLong( 0x9e31e18 ),	/* 165879320 */
/* 1386 */	NdrFcShort( 0x872d ),	/* -30931 */
/* 1388 */	NdrFcShort( 0x4873 ),	/* 18547 */
/* 1390 */	0x93,		/* 147 */
			0xd1,		/* 209 */
/* 1392 */	0x1e,		/* 30 */
			0x54,		/* 84 */
/* 1394 */	0x1e,		/* 30 */
			0xc1,		/* 193 */
/* 1396 */	0x33,		/* 51 */
			0xfd,		/* 253 */
/* 1398 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1400 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1406) */
/* 1402 */	
			0x13, 0x0,	/* FC_OP */
/* 1404 */	NdrFcShort( 0xfaf4 ),	/* Offset= -1292 (112) */
/* 1406 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1408 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1410 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1402) */
/* 1416 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1418 */	NdrFcShort( 0xa ),	/* Offset= 10 (1428) */
/* 1420 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1422 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1424) */
/* 1424 */	
			0x13, 0x0,	/* FC_OP */
/* 1426 */	NdrFcShort( 0xfe7e ),	/* Offset= -386 (1040) */
/* 1428 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1436 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1420) */
/* 1438 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1442) */
/* 1442 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1454 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1456 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1458 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1460 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1462 */	NdrFcLong( 0x618736e0 ),	/* 1636251360 */
/* 1466 */	NdrFcShort( 0x3c3d ),	/* 15421 */
/* 1468 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 1470 */	0x81,		/* 129 */
			0xc,		/* 12 */
/* 1472 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1474 */	0x0,		/* 0 */
			0x38,		/* 56 */
/* 1476 */	0x9b,		/* 155 */
			0x71,		/* 113 */
/* 1478 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1482) */
/* 1482 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1484 */	NdrFcLong( 0x48f3b401 ),	/* 1223930881 */
/* 1488 */	NdrFcShort( 0xeefc ),	/* -4356 */
/* 1490 */	NdrFcShort( 0x4d23 ),	/* 19747 */
/* 1492 */	0xb8,		/* 184 */
			0x1e,		/* 30 */
/* 1494 */	0xe8,		/* 232 */
			0xdb,		/* 219 */
/* 1496 */	0x84,		/* 132 */
			0x6a,		/* 106 */
/* 1498 */	0xbf,		/* 191 */
			0xe9,		/* 233 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Standard interface: __MIDL_itf_DispatchedUiAutomation_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatchedUiAutomation, ver. 0.0,
   GUID={0x4C8282BC,0x0BD1,0x41FA,{0xB6,0x49,0x53,0x1A,0x34,0x38,0x42,0xE0}} */

#pragma code_seg(".orpc")
static const unsigned short IDispatchedUiAutomation_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    48,
    96,
    132,
    174,
    216,
    252,
    (unsigned short) -1,
    294,
    342,
    384,
    426,
    462,
    498,
    534,
    570,
    606,
    642,
    678,
    714,
    750,
    798,
    852,
    900,
    942,
    990,
    1032,
    1074,
    1134,
    1182,
    1242,
    1284,
    1338,
    1380,
    1422,
    1458,
    1488,
    1530,
    1572,
    1614,
    1650,
    1692,
    1734,
    1782,
    1830,
    1872,
    1908,
    1944,
    1992,
    2046
    };

static const MIDL_STUBLESS_PROXY_INFO IDispatchedUiAutomation_ProxyInfo =
    {
    &Object_StubDesc,
    DispatchedUiAutomation__MIDL_ProcFormatString.Format,
    &IDispatchedUiAutomation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDispatchedUiAutomation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DispatchedUiAutomation__MIDL_ProcFormatString.Format,
    &IDispatchedUiAutomation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(57) _IDispatchedUiAutomationProxyVtbl = 
{
    &IDispatchedUiAutomation_ProxyInfo,
    &IID_IDispatchedUiAutomation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CompareElements */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CompareRuntimeIds */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::GetRootElement */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::ElementFromHandle */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::ElementFromPoint */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::GetFocusedElement */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::GetRootElementBuildCache */ ,
    0 /* IDispatchedUiAutomation::ElementFromHandleBuildCache */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::ElementFromPointBuildCache */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::GetFocusedElementBuildCache */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateTreeWalker */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ControlViewWalker */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ContentViewWalker */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_RawViewWalker */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_RawViewCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ControlViewCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ContentViewCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateCacheRequest */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateTrueCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateFalseCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreatePropertyCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreatePropertyConditionEx */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateAndCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateAndConditionFromArray */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateOrCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateOrConditionFromArray */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateNotCondition */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::AddAutomationEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::RemoveAutomationEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::AddPropertyChangedEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::RemovePropertyChangedEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::AddStructureChangedEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::RemoveStructureChangedEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::AddFocusChangedEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::RemoveFocusChangedEventHandler */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::RemoveAllEventHandlers */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::RectToVariant */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::VariantToRect */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CreateProxyFactoryEntry */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ProxyFactoryMapping */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::GetPropertyProgrammaticName */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::GetPatternProgrammaticName */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::PollForPotentialSupportedPatterns */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::PollForPotentialSupportedProperties */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::CheckNotSupported */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ReservedNotSupportedValue */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_ReservedMixedAttributeValue */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::ElementFromIAccessible */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::ElementFromIAccessibleBuildCache */ ,
    (void *) (INT_PTR) -1 /* IDispatchedUiAutomation::get_Mouse */
};


static const PRPC_STUB_FUNCTION IDispatchedUiAutomation_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDispatchedUiAutomationStubVtbl =
{
    &IID_IDispatchedUiAutomation,
    &IDispatchedUiAutomation_ServerInfo,
    57,
    &IDispatchedUiAutomation_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    DispatchedUiAutomation__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _DispatchedUiAutomation_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDispatchedUiAutomationProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _DispatchedUiAutomation_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDispatchedUiAutomationStubVtbl,
    0
};

PCInterfaceName const _DispatchedUiAutomation_InterfaceNamesList[] = 
{
    "IDispatchedUiAutomation",
    0
};

const IID *  const _DispatchedUiAutomation_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _DispatchedUiAutomation_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DispatchedUiAutomation, pIID, n)

int __stdcall _DispatchedUiAutomation_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_DispatchedUiAutomation_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo DispatchedUiAutomation_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DispatchedUiAutomation_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DispatchedUiAutomation_StubVtblList,
    (const PCInterfaceName * ) & _DispatchedUiAutomation_InterfaceNamesList,
    (const IID ** ) & _DispatchedUiAutomation_BaseIIDList,
    & _DispatchedUiAutomation_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

