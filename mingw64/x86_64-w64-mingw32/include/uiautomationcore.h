/*** Autogenerated by WIDL 3.20 from include/uiautomationcore.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __uiautomationcore_h__
#define __uiautomationcore_h__

/* Forward declarations */

#ifndef __IRawElementProviderSimple_FWD_DEFINED__
#define __IRawElementProviderSimple_FWD_DEFINED__
typedef interface IRawElementProviderSimple IRawElementProviderSimple;
#ifdef __cplusplus
interface IRawElementProviderSimple;
#endif /* __cplusplus */
#endif

#ifndef __IAccessibleEx_FWD_DEFINED__
#define __IAccessibleEx_FWD_DEFINED__
typedef interface IAccessibleEx IAccessibleEx;
#ifdef __cplusplus
interface IAccessibleEx;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <oleacc.h>

#ifdef __cplusplus
extern "C" {
#endif

enum ProviderOptions {
    ProviderOptions_ClientSideProvider = 0x1,
    ProviderOptions_ServerSideProvider = 0x2,
    ProviderOptions_NonClientAreaProvider = 0x4,
    ProviderOptions_OverrideProvider = 0x8,
    ProviderOptions_ProviderOwnsSetFocus = 0x10,
    ProviderOptions_UseComThreading = 0x20
};
typedef int PROPERTYID;
typedef int PATTERNID;
typedef int EVENTID;
typedef int TEXTATTRIBUTEID;
typedef int CONTROLTYPEID;

DEFINE_GUID(LIBID_UIA, 0x930299ce, 0x9965, 0x4dec, 0xb0,0xf4, 0xa5,0x48,0x48,0xd4,0xb6,0x67);

/*****************************************************************************
 * IRawElementProviderSimple interface
 */
#ifndef __IRawElementProviderSimple_INTERFACE_DEFINED__
#define __IRawElementProviderSimple_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRawElementProviderSimple, 0xd6dd68d1, 0x86fd, 0x4332, 0x86,0x66, 0x9a,0xbe,0xde,0xa2,0xd2,0x4c);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d6dd68d1-86fd-4332-8666-9abedea2d24c")
IRawElementProviderSimple : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE get_ProviderOptions(
        enum ProviderOptions *pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPatternProvider(
        PATTERNID patternId,
        IUnknown **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(
        PROPERTYID propertyId,
        VARIANT *pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_HostRawElementProvider(
        IRawElementProviderSimple **pRetVal) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRawElementProviderSimple, 0xd6dd68d1, 0x86fd, 0x4332, 0x86,0x66, 0x9a,0xbe,0xde,0xa2,0xd2,0x4c)
#endif
#else
typedef struct IRawElementProviderSimpleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRawElementProviderSimple *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRawElementProviderSimple *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRawElementProviderSimple *This);

    /*** IRawElementProviderSimple methods ***/
    HRESULT (STDMETHODCALLTYPE *get_ProviderOptions)(
        IRawElementProviderSimple *This,
        enum ProviderOptions *pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetPatternProvider)(
        IRawElementProviderSimple *This,
        PATTERNID patternId,
        IUnknown **pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetPropertyValue)(
        IRawElementProviderSimple *This,
        PROPERTYID propertyId,
        VARIANT *pRetVal);

    HRESULT (STDMETHODCALLTYPE *get_HostRawElementProvider)(
        IRawElementProviderSimple *This,
        IRawElementProviderSimple **pRetVal);

    END_INTERFACE
} IRawElementProviderSimpleVtbl;

interface IRawElementProviderSimple {
    CONST_VTBL IRawElementProviderSimpleVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRawElementProviderSimple_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRawElementProviderSimple_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRawElementProviderSimple_Release(This) (This)->lpVtbl->Release(This)
/*** IRawElementProviderSimple methods ***/
#define IRawElementProviderSimple_get_ProviderOptions(This,pRetVal) (This)->lpVtbl->get_ProviderOptions(This,pRetVal)
#define IRawElementProviderSimple_GetPatternProvider(This,patternId,pRetVal) (This)->lpVtbl->GetPatternProvider(This,patternId,pRetVal)
#define IRawElementProviderSimple_GetPropertyValue(This,propertyId,pRetVal) (This)->lpVtbl->GetPropertyValue(This,propertyId,pRetVal)
#define IRawElementProviderSimple_get_HostRawElementProvider(This,pRetVal) (This)->lpVtbl->get_HostRawElementProvider(This,pRetVal)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRawElementProviderSimple_QueryInterface(IRawElementProviderSimple* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRawElementProviderSimple_AddRef(IRawElementProviderSimple* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRawElementProviderSimple_Release(IRawElementProviderSimple* This) {
    return This->lpVtbl->Release(This);
}
/*** IRawElementProviderSimple methods ***/
static FORCEINLINE HRESULT IRawElementProviderSimple_get_ProviderOptions(IRawElementProviderSimple* This,enum ProviderOptions *pRetVal) {
    return This->lpVtbl->get_ProviderOptions(This,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderSimple_GetPatternProvider(IRawElementProviderSimple* This,PATTERNID patternId,IUnknown **pRetVal) {
    return This->lpVtbl->GetPatternProvider(This,patternId,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderSimple_GetPropertyValue(IRawElementProviderSimple* This,PROPERTYID propertyId,VARIANT *pRetVal) {
    return This->lpVtbl->GetPropertyValue(This,propertyId,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderSimple_get_HostRawElementProvider(IRawElementProviderSimple* This,IRawElementProviderSimple **pRetVal) {
    return This->lpVtbl->get_HostRawElementProvider(This,pRetVal);
}
#endif
#endif

#endif


#endif  /* __IRawElementProviderSimple_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAccessibleEx interface
 */
#ifndef __IAccessibleEx_INTERFACE_DEFINED__
#define __IAccessibleEx_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleEx, 0xf8b80ada, 0x2c44, 0x48d0, 0x89,0xbe, 0x5f,0xf2,0x3c,0x9c,0xd8,0x75);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f8b80ada-2c44-48d0-89be-5ff23c9cd875")
IAccessibleEx : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetObjectForChild(
        LONG idChild,
        IAccessibleEx **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIAccessiblePair(
        IAccessible **ppAcc,
        LONG *pidChild) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRuntimeId(
        SAFEARRAY **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE ConvertReturnedElement(
        IRawElementProviderSimple *pIn,
        IAccessibleEx **ppRetValOut) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleEx, 0xf8b80ada, 0x2c44, 0x48d0, 0x89,0xbe, 0x5f,0xf2,0x3c,0x9c,0xd8,0x75)
#endif
#else
typedef struct IAccessibleExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleEx *This);

    /*** IAccessibleEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetObjectForChild)(
        IAccessibleEx *This,
        LONG idChild,
        IAccessibleEx **pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetIAccessiblePair)(
        IAccessibleEx *This,
        IAccessible **ppAcc,
        LONG *pidChild);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeId)(
        IAccessibleEx *This,
        SAFEARRAY **pRetVal);

    HRESULT (STDMETHODCALLTYPE *ConvertReturnedElement)(
        IAccessibleEx *This,
        IRawElementProviderSimple *pIn,
        IAccessibleEx **ppRetValOut);

    END_INTERFACE
} IAccessibleExVtbl;

interface IAccessibleEx {
    CONST_VTBL IAccessibleExVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleEx_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleEx_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleEx_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleEx methods ***/
#define IAccessibleEx_GetObjectForChild(This,idChild,pRetVal) (This)->lpVtbl->GetObjectForChild(This,idChild,pRetVal)
#define IAccessibleEx_GetIAccessiblePair(This,ppAcc,pidChild) (This)->lpVtbl->GetIAccessiblePair(This,ppAcc,pidChild)
#define IAccessibleEx_GetRuntimeId(This,pRetVal) (This)->lpVtbl->GetRuntimeId(This,pRetVal)
#define IAccessibleEx_ConvertReturnedElement(This,pIn,ppRetValOut) (This)->lpVtbl->ConvertReturnedElement(This,pIn,ppRetValOut)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleEx_QueryInterface(IAccessibleEx* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleEx_AddRef(IAccessibleEx* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleEx_Release(IAccessibleEx* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleEx methods ***/
static FORCEINLINE HRESULT IAccessibleEx_GetObjectForChild(IAccessibleEx* This,LONG idChild,IAccessibleEx **pRetVal) {
    return This->lpVtbl->GetObjectForChild(This,idChild,pRetVal);
}
static FORCEINLINE HRESULT IAccessibleEx_GetIAccessiblePair(IAccessibleEx* This,IAccessible **ppAcc,LONG *pidChild) {
    return This->lpVtbl->GetIAccessiblePair(This,ppAcc,pidChild);
}
static FORCEINLINE HRESULT IAccessibleEx_GetRuntimeId(IAccessibleEx* This,SAFEARRAY **pRetVal) {
    return This->lpVtbl->GetRuntimeId(This,pRetVal);
}
static FORCEINLINE HRESULT IAccessibleEx_ConvertReturnedElement(IAccessibleEx* This,IRawElementProviderSimple *pIn,IAccessibleEx **ppRetValOut) {
    return This->lpVtbl->ConvertReturnedElement(This,pIn,ppRetValOut);
}
#endif
#endif

#endif


#endif  /* __IAccessibleEx_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __uiautomationcore_h__ */
