

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Tue Mar 19 10:10:17 2019
 */
/* Compiler settings for AtlComServer.idl:
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

#ifndef __AtlComServer_i_h__
#define __AtlComServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICalculator_FWD_DEFINED__
#define __ICalculator_FWD_DEFINED__
typedef interface ICalculator ICalculator;

#endif 	/* __ICalculator_FWD_DEFINED__ */


#ifndef __Calculator_FWD_DEFINED__
#define __Calculator_FWD_DEFINED__

#ifdef __cplusplus
typedef class Calculator Calculator;
#else
typedef struct Calculator Calculator;
#endif /* __cplusplus */

#endif 	/* __Calculator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICalculator_INTERFACE_DEFINED__
#define __ICalculator_INTERFACE_DEFINED__

/* interface ICalculator */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICalculator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8F7421B-CB65-4ED2-B5B6-166A9CA8B1FB")
    ICalculator : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sum( 
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *rlt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICalculatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICalculator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICalculator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICalculator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICalculator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICalculator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICalculator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICalculator * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sum )( 
            ICalculator * This,
            /* [in] */ LONG x,
            /* [in] */ LONG y,
            /* [retval][out] */ LONG *rlt);
        
        END_INTERFACE
    } ICalculatorVtbl;

    interface ICalculator
    {
        CONST_VTBL struct ICalculatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICalculator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICalculator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICalculator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICalculator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICalculator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICalculator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICalculator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICalculator_Sum(This,x,y,rlt)	\
    ( (This)->lpVtbl -> Sum(This,x,y,rlt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICalculator_INTERFACE_DEFINED__ */



#ifndef __AtlComServerLib_LIBRARY_DEFINED__
#define __AtlComServerLib_LIBRARY_DEFINED__

/* library AtlComServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_AtlComServerLib;

EXTERN_C const CLSID CLSID_Calculator;

#ifdef __cplusplus

class DECLSPEC_UUID("2276B565-4A2C-450B-AEF4-A0FFA953B975")
Calculator;
#endif
#endif /* __AtlComServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


