

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Mar 18 11:04:23 2019
 */
/* Compiler settings for AtlEventServer.idl:
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

MIDL_DEFINE_GUID(IID, IID_ICalculator,0x8415BFDB,0x4B13,0x4009,0xBD,0x40,0x0E,0x84,0xDD,0xA8,0xAA,0xD4);


MIDL_DEFINE_GUID(IID, LIBID_AtlEventServerLib,0x57113D47,0xD09B,0x4C5D,0x87,0x23,0x35,0xEF,0x0A,0xEF,0x42,0xC5);


MIDL_DEFINE_GUID(IID, DIID__ICalculatorEvents,0xED2E8B90,0xF826,0x43DA,0x8E,0x33,0xA9,0xDC,0x0F,0xE0,0xF7,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_Calculator,0x032238B8,0xB79B,0x4A16,0xBE,0x17,0xE2,0xBB,0x1E,0x2A,0xD5,0x92);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



