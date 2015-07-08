//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#ifndef _SPOT_ALLJOYN_NATIVE_H_
#define _SPOT_ALLJOYN_NATIVE_H_

#include <TinyCLR_Interop.h>
struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ
{
    static const int FIELD__AboutIconMime = 1;
    static const int FIELD__AboutIconSize = 2;
    static const int FIELD__AboutIconContent = 3;
    static const int FIELD__AboutIconURL = 4;
    static const int FIELD__doAnnounce = 5;
    static const int FIELD__AboutPropGetterCB = 6;

    TINYCLR_NATIVE_DECLARE(GetUniqueName___STRING__U4);
    TINYCLR_NATIVE_DECLARE(Initialize___VOID);
    TINYCLR_NATIVE_DECLARE(SetBusLinkTimeout___MicrosoftSPOTAllJoynAJStatus__U4__U4);
    TINYCLR_NATIVE_DECLARE(NotifyLinkActive___VOID);
    TINYCLR_NATIVE_DECLARE(BusLinkStateProc___MicrosoftSPOTAllJoynAJStatus__U4);
    TINYCLR_NATIVE_DECLARE(SetIdleTimeouts___MicrosoftSPOTAllJoynAJStatus__U4__U4__U4);
    TINYCLR_NATIVE_DECLARE(StartService___MicrosoftSPOTAllJoynAJStatus__U4__STRING__U4__I1__U2__STRING__U4);
    TINYCLR_NATIVE_DECLARE(ClientConnectBus___MicrosoftSPOTAllJoynAJStatus__U4__STRING__U4);
    TINYCLR_NATIVE_DECLARE(ClientFindServiceInner___MicrosoftSPOTAllJoynAJStatus__U4__STRING__STRING__U4);
    TINYCLR_NATIVE_DECLARE(ClientConnectService___MicrosoftSPOTAllJoynAJStatus__U4__U4__STRING__U2__BYREF_U4__MicrosoftSPOTAllJoynAJSessionOpts__BYREF_STRING);
    TINYCLR_NATIVE_DECLARE(StartClientByName___MicrosoftSPOTAllJoynAJStatus__U4__STRING__U4__U1__STRING__U2__BYREF_U4__MicrosoftSPOTAllJoynAJSessionOpts__BYREF_STRING);
    TINYCLR_NATIVE_DECLARE(AlwaysPrintf___VOID__STRING);
    TINYCLR_NATIVE_DECLARE(AboutIconHandleGetContent___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__MicrosoftSPOTAllJoynAJMessage__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(BusHandleBusMessageInner___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(BusCancelSessionless___MicrosoftSPOTAllJoynAJStatus__U4__U4);
    TINYCLR_NATIVE_DECLARE(MarshalReplyMsg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(MarshalSignal___MicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynAJMessage__U4__U4__U4__U1__U4);
    TINYCLR_NATIVE_DECLARE(MarshalMethodCall___MicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynAJMessage__U4__STRING__U4__U1__U4);
    TINYCLR_NATIVE_DECLARE(UnmarshalArg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4);
    TINYCLR_NATIVE_DECLARE(DeliverMsg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(BusSetPasswordCallback___VOID);
    TINYCLR_NATIVE_DECLARE(UnmarshalMsg___MicrosoftSPOTAllJoynAJStatus__U4__MicrosoftSPOTAllJoynAJMessage__U4);
    TINYCLR_NATIVE_DECLARE(UnmarshalVariant___STRING__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(MarshalVariant___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING);
    TINYCLR_NATIVE_DECLARE(UnmarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__U2__U4__STRING);
    TINYCLR_NATIVE_DECLARE(UnmarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(UnmarshalArgs___STRING__MicrosoftSPOTAllJoynAJMessage__STRING);
    TINYCLR_NATIVE_DECLARE(UnmarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__BYREF_U4__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(UnmarshalPropertyArgs___STRING__MicrosoftSPOTAllJoynAJMessage__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(MarshalArg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__U4);
    TINYCLR_NATIVE_DECLARE(MarshalArg___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING);
    TINYCLR_NATIVE_DECLARE(MarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING__STRING__STRING);
    TINYCLR_NATIVE_DECLARE(MarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING__STRING);
    TINYCLR_NATIVE_DECLARE(MarshalArgs___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__STRING__STRING__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(MarshalContainer___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4__U1);
    TINYCLR_NATIVE_DECLARE(MarshalCloseContainer___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4);
    TINYCLR_NATIVE_DECLARE(BusReplyAcceptSession___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage__U4);
    TINYCLR_NATIVE_DECLARE(CloseMsg___VOID__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(Disconnect___VOID__U4);
    TINYCLR_NATIVE_DECLARE(Sleep___VOID__U4);
    TINYCLR_NATIVE_DECLARE(CreateBus___VOID__BYREF_U4);
    TINYCLR_NATIVE_DECLARE(MarshalObjectDescriptions___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(MarshalDefaultProps___MicrosoftSPOTAllJoynAJStatus__MicrosoftSPOTAllJoynAJMessage);
    TINYCLR_NATIVE_DECLARE(GetArgPtr___U4__I4);
    TINYCLR_NATIVE_DECLARE(GetArgString___STRING__I4);
    TINYCLR_NATIVE_DECLARE(UsePeerAuthentication___VOID__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(SetPassphrase___VOID__STRING);
    TINYCLR_NATIVE_DECLARE(SetPskHint___VOID__STRING);
    TINYCLR_NATIVE_DECLARE(SetPskString___VOID__STRING);
    TINYCLR_NATIVE_DECLARE(SetPemPrivString___VOID__STRING);
    TINYCLR_NATIVE_DECLARE(SetPemX509String___VOID__STRING);
    TINYCLR_NATIVE_DECLARE(SetKeyExpiration___VOID__U4);
    TINYCLR_NATIVE_DECLARE(AuthenticatePeer___MicrosoftSPOTAllJoynAJStatus__U4__STRING);
    TINYCLR_NATIVE_DECLARE(GetAuthStatus___MicrosoftSPOTAllJoynAJStatus);
    TINYCLR_NATIVE_DECLARE(SetAuthStatus___VOID__MicrosoftSPOTAllJoynAJStatus);
    TINYCLR_NATIVE_DECLARE(EnableSecurity___MicrosoftSPOTAllJoynAJStatus__U4__SZARRAY_I4);
    TINYCLR_NATIVE_DECLARE(ClearCredentials___MicrosoftSPOTAllJoynAJStatus);
    TINYCLR_NATIVE_DECLARE(GetLocalGUID___STATIC__MicrosoftSPOTAllJoynAJStatus__SZARRAY_U1);
    TINYCLR_NATIVE_DECLARE(RegisterObjects___STATIC__VOID__STRING__STRING__U1__I4__BOOLEAN__BOOLEAN);
    TINYCLR_NATIVE_DECLARE(PrintXML___STATIC__VOID__STRING__STRING__U1__I4);
    TINYCLR_NATIVE_DECLARE(AppMessageId___STATIC__U4__U4__U4__U4);
    TINYCLR_NATIVE_DECLARE(BusMessageId___STATIC__U4__U4__U4__U4);
    TINYCLR_NATIVE_DECLARE(PrxMessageId___STATIC__U4__U4__U4__U4);
    TINYCLR_NATIVE_DECLARE(AppPropertyId___STATIC__U4__U4__U4__U4);
    TINYCLR_NATIVE_DECLARE(BusPropertyId___STATIC__U4__U4__U4__U4);
    TINYCLR_NATIVE_DECLARE(PrxPropertyId___STATIC__U4__U4__U4__U4);

    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_Arg
{
    static const int FIELD__typeId = 1;
    static const int FIELD__flags = 2;
    static const int FIELD__len = 3;
    static const int FIELD__val = 4;
    static const int FIELD__sigPtr = 5;
    static const int FIELD__container = 6;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_BusAttachment
{
    static const int FIELD__aboutPort = 1;
    static const int FIELD__uniqueName = 2;
    static const int FIELD__sock = 3;
    static const int FIELD__serial = 4;
    static const int FIELD__pwdCallback = 5;
    static const int FIELD__authListenerCallback = 6;
    static const int FIELD__suites = 7;
    static const int FIELD__numsuites = 8;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_IOBuffer
{
    static const int FIELD__direction = 1;
    static const int FIELD__flags = 2;
    static const int FIELD__bufSize = 3;
    static const int FIELD__bufStart = 4;
    static const int FIELD__readPtr = 5;
    static const int FIELD__writePtr = 6;
    static const int FIELD__TxRxFunc = 7;
    static const int FIELD__context = 8;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_Message
{
    static const int FIELD__msgId = 1;
    static const int FIELD__hdr = 2;
    static const int FIELD__union0 = 3;
    static const int FIELD__union1 = 4;
    static const int FIELD__iface = 5;
    static const int FIELD__sender = 6;
    static const int FIELD__destination = 7;
    static const int FIELD__signature = 8;
    static const int FIELD__sessionId = 9;
    static const int FIELD__timestamp = 10;
    static const int FIELD__ttl = 11;
    static const int FIELD__sigOffset = 12;
    static const int FIELD__varOffset = 13;
    static const int FIELD__bodyBytes = 14;
    static const int FIELD__bus = 15;
    static const int FIELD__outer = 16;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_MsgHeader
{
    static const int FIELD__endianess = 1;
    static const int FIELD__msgType = 2;
    static const int FIELD__flags = 3;
    static const int FIELD__majorVersion = 4;
    static const int FIELD__bodyLen = 5;
    static const int FIELD__serialNum = 6;
    static const int FIELD__headerLen = 7;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_NetSocket
{
    static const int FIELD__tx = 1;
    static const int FIELD__rx = 2;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_Object
{
    static const int FIELD__path = 1;
    static const int FIELD__interfaces = 2;
    static const int FIELD__flags = 3;
    static const int FIELD__context = 4;


    //--//

};

struct Library_spot_alljoyn_native_Microsoft_SPOT_AllJoyn_AJ_SessionOpts
{
    static const int FIELD__traffic = 1;
    static const int FIELD__proximity = 2;
    static const int FIELD__transports = 3;
    static const int FIELD__isMultipoint = 4;


    //--//

};



extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Microsoft_SPOT_Alljoyn;

#endif  //_SPOT_ALLJOYN_NATIVE_H_