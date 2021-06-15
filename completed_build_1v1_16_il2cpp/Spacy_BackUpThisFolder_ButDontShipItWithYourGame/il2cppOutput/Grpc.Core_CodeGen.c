#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.CallCredentials::ToNativeCredentials()
// 0x00000002 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000003 System.Void Grpc.Core.CallInvocationDetails`2::.ctor(Grpc.Core.Channel,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>,Grpc.Core.CallOptions)
// 0x00000004 Grpc.Core.Channel Grpc.Core.CallInvocationDetails`2::get_Channel()
// 0x00000005 System.String Grpc.Core.CallInvocationDetails`2::get_Method()
// 0x00000006 System.String Grpc.Core.CallInvocationDetails`2::get_Host()
// 0x00000007 Grpc.Core.Marshaller`1<TRequest> Grpc.Core.CallInvocationDetails`2::get_RequestMarshaller()
// 0x00000008 Grpc.Core.Marshaller`1<TResponse> Grpc.Core.CallInvocationDetails`2::get_ResponseMarshaller()
// 0x00000009 Grpc.Core.CallOptions Grpc.Core.CallInvocationDetails`2::get_Options()
// 0x0000000A Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.CallInvocationDetails`2::WithOptions(Grpc.Core.CallOptions)
// 0x0000000B TResponse Grpc.Core.CallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000000C System.Void Grpc.Core.CallInvoker::.ctor()
extern void CallInvoker__ctor_mCD1F67FA182B567E3FB4D70568F08DE10697ADFF (void);
// 0x0000000D System.Void Grpc.Core.CallOptions::.ctor(Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken,Grpc.Core.WriteOptions,Grpc.Core.ContextPropagationToken,Grpc.Core.CallCredentials)
extern void CallOptions__ctor_mF8C56883333EB9F403B5C6FC83DA1B0A7F55001C (void);
// 0x0000000E Grpc.Core.Metadata Grpc.Core.CallOptions::get_Headers()
extern void CallOptions_get_Headers_m8976CF0E492FF184A1B485DFD1F6FF3D5C5C81EF (void);
// 0x0000000F System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::get_Deadline()
extern void CallOptions_get_Deadline_m93D3472352264E20874552A3A530B35114325319 (void);
// 0x00000010 System.Threading.CancellationToken Grpc.Core.CallOptions::get_CancellationToken()
extern void CallOptions_get_CancellationToken_m4D27FA3AD6E672D6F1AEED30842CBCBE40B0B700 (void);
// 0x00000011 Grpc.Core.WriteOptions Grpc.Core.CallOptions::get_WriteOptions()
extern void CallOptions_get_WriteOptions_m36277D2343BE7F33FB912C76F028392F6C54B70E (void);
// 0x00000012 Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::get_PropagationToken()
extern void CallOptions_get_PropagationToken_m152DD003E0C56F3B644ED4D29E70525BE185DF18 (void);
// 0x00000013 Grpc.Core.CallCredentials Grpc.Core.CallOptions::get_Credentials()
extern void CallOptions_get_Credentials_mCCC9E74ED976CC9F2850FAC47DD44C5BFBB17A80 (void);
// 0x00000014 Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::get_Flags()
extern void CallOptions_get_Flags_m0D17F9FD51511151963D48C63A4D35E25A0DB367 (void);
// 0x00000015 Grpc.Core.CallOptions Grpc.Core.CallOptions::Normalize()
extern void CallOptions_Normalize_m1D1E6D51D5DC4E37D8D491CA4A02AA9EA1381D4D (void);
// 0x00000016 TResponse Grpc.Core.Calls::BlockingUnaryCall(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>,TRequest)
// 0x00000017 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials)
extern void Channel__ctor_m8DFFE822D2EB167EDBFC91FFD6D87D5755D148DA (void);
// 0x00000018 System.Void Grpc.Core.Channel::.ctor(System.String,Grpc.Core.ChannelCredentials,System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel__ctor_mD6B913FF7FC90D572A77D8378446D0390895AF89 (void);
// 0x00000019 Grpc.Core.ChannelState Grpc.Core.Channel::get_State()
extern void Channel_get_State_m499484CE6AE2E6FAFFEE7FBDFB0C10744C0CC941 (void);
// 0x0000001A System.Threading.Tasks.Task`1<System.Boolean> Grpc.Core.Channel::WaitForStateChangedInternalAsync(Grpc.Core.ChannelState,System.Nullable`1<System.DateTime>)
extern void Channel_WaitForStateChangedInternalAsync_mA81CA9070CC981B6208883D06B01CA18D3B7DB31 (void);
// 0x0000001B System.Threading.Tasks.Task Grpc.Core.Channel::ShutdownAsync()
extern void Channel_ShutdownAsync_m11592C6DE9A6C0A849A6A040C33455E12FE9D73A (void);
// 0x0000001C Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Channel::get_Handle()
extern void Channel_get_Handle_m5475964824CCE36F69E2B8D3D1AD72AD529F5B53 (void);
// 0x0000001D Grpc.Core.GrpcEnvironment Grpc.Core.Channel::get_Environment()
extern void Channel_get_Environment_mDA14578BC71343282D37A7D3B6B277A8F7C83100 (void);
// 0x0000001E System.Void Grpc.Core.Channel::AddCallReference(System.Object)
extern void Channel_AddCallReference_mA79926FB0C858F5A2F2BA33A1C7DC7AAA89390D7 (void);
// 0x0000001F System.Void Grpc.Core.Channel::RemoveCallReference(System.Object)
extern void Channel_RemoveCallReference_m4FEC7EA375940E1BD92B95FC7F5FB834743F546E (void);
// 0x00000020 Grpc.Core.ChannelState Grpc.Core.Channel::GetConnectivityState(System.Boolean)
extern void Channel_GetConnectivityState_m8F9A1C25A3D51DD64A62387CCE7931050873A865 (void);
// 0x00000021 System.Threading.Tasks.Task Grpc.Core.Channel::RunConnectivityWatcherAsync()
extern void Channel_RunConnectivityWatcherAsync_mF03BE95A82ABF68EA46AA61FFCE414575EE6907F (void);
// 0x00000022 System.Void Grpc.Core.Channel::EnsureUserAgentChannelOption(System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption>)
extern void Channel_EnsureUserAgentChannelOption_m4BC8F5C28EB3BF1F3D54A5416DB961A9BBF0BF40 (void);
// 0x00000023 System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption> Grpc.Core.Channel::CreateOptionsDictionary(System.Collections.Generic.IEnumerable`1<Grpc.Core.ChannelOption>)
extern void Channel_CreateOptionsDictionary_mC8ACCDB6A317901198580E365875359F6DCADBFA (void);
// 0x00000024 System.Void Grpc.Core.Channel::.cctor()
extern void Channel__cctor_mAD3B7A76641F1C7E9F2205F36024C56721BD1065 (void);
// 0x00000025 System.Void Grpc.Core.Channel/<ShutdownAsync>d__27::MoveNext()
extern void U3CShutdownAsyncU3Ed__27_MoveNext_mF8848AFE4A4A1D411CA34AE3E20FF4FFBA35C02B (void);
// 0x00000026 System.Void Grpc.Core.Channel/<ShutdownAsync>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncU3Ed__27_SetStateMachine_m694C578D47C85AB6A0DE6FFB5B083F8776FFD15E (void);
// 0x00000027 System.Void Grpc.Core.Channel/<RunConnectivityWatcherAsync>d__37::MoveNext()
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_m4685CB38D877AB61B6564A526B062CC1928723C5 (void);
// 0x00000028 System.Void Grpc.Core.Channel/<RunConnectivityWatcherAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m36805B0BD06F4A5049980CF4D03E33A28B4C6DA8 (void);
// 0x00000029 System.Void Grpc.Core.Channel/<>c::.cctor()
extern void U3CU3Ec__cctor_m6F74E7C3804C8C25AC4165CF410B3ADC282ADD2A (void);
// 0x0000002A System.Void Grpc.Core.Channel/<>c::.ctor()
extern void U3CU3Ec__ctor_m386ED0F79EE31134110181B3477BBB56B986939C (void);
// 0x0000002B System.Void Grpc.Core.Channel/<>c::<.cctor>b__40_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__40_0_mA6BDD93C22738F884E699EFB7FFB1C0A9188A3BF (void);
// 0x0000002C Grpc.Core.ChannelCredentials Grpc.Core.ChannelCredentials::get_Insecure()
extern void ChannelCredentials_get_Insecure_m9A9A2980637CE1DDEF85F82E96364D7F5A705CDF (void);
// 0x0000002D Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.ChannelCredentials::ToNativeCredentials()
// 0x0000002E System.Void Grpc.Core.ChannelCredentials::.ctor()
extern void ChannelCredentials__ctor_mBB87E55E9B50952A13E6348CA754BEA97916DDDC (void);
// 0x0000002F System.Void Grpc.Core.ChannelCredentials::.cctor()
extern void ChannelCredentials__cctor_m42DC3388E7EA04AB15D4442FB75AD72B5CC04DC5 (void);
// 0x00000030 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.ChannelCredentials/InsecureCredentialsImpl::ToNativeCredentials()
extern void InsecureCredentialsImpl_ToNativeCredentials_m6D4B7AD87DDE9B41687806DB5D85734A35652515 (void);
// 0x00000031 System.Void Grpc.Core.ChannelCredentials/InsecureCredentialsImpl::.ctor()
extern void InsecureCredentialsImpl__ctor_m7FB454CB8322887314AE90E7D11FC8434351D3DB (void);
// 0x00000032 System.Void Grpc.Core.ChannelOption::.ctor(System.String,System.String)
extern void ChannelOption__ctor_m87521DF73392994A0B5DE4B112CA9CBAEB77BB1A (void);
// 0x00000033 Grpc.Core.ChannelOption/OptionType Grpc.Core.ChannelOption::get_Type()
extern void ChannelOption_get_Type_m9C3FD393DD5B28A9AD1ADD4CDFABCE18CAB429A0 (void);
// 0x00000034 System.String Grpc.Core.ChannelOption::get_Name()
extern void ChannelOption_get_Name_m494A398A3018AD7D2EF64CD00A4EDE31E9C7CA59 (void);
// 0x00000035 System.Int32 Grpc.Core.ChannelOption::get_IntValue()
extern void ChannelOption_get_IntValue_mEFAD871FD86A644FAD36531F7BBE163AE08D55B9 (void);
// 0x00000036 System.String Grpc.Core.ChannelOption::get_StringValue()
extern void ChannelOption_get_StringValue_m66B07E9D9C91916FA8FBAAC9A525D7C107239807 (void);
// 0x00000037 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.ChannelOptions::CreateChannelArgs(System.Collections.Generic.ICollection`1<Grpc.Core.ChannelOption>)
extern void ChannelOptions_CreateChannelArgs_mAEB4E88E49AD182D6C4B0D133CB96F77F643811C (void);
// 0x00000038 System.Void Grpc.Core.ClientBase`1::.ctor(Grpc.Core.Channel)
// 0x00000039 System.Void Grpc.Core.ClientBase::.ctor(Grpc.Core.ClientBase/ClientBaseConfiguration)
extern void ClientBase__ctor_m4E3C351AB35CB3704A21956840FB31A55964FE54 (void);
// 0x0000003A System.Void Grpc.Core.ClientBase::.ctor(Grpc.Core.Channel)
extern void ClientBase__ctor_m0A580C97CB59132CAE82772867D1D08E721721F7 (void);
// 0x0000003B System.Void Grpc.Core.ClientBase::.ctor(Grpc.Core.CallInvoker)
extern void ClientBase__ctor_m05E23B5D549B11B59CD8036BC15D9122B89E3075 (void);
// 0x0000003C Grpc.Core.CallInvoker Grpc.Core.ClientBase::get_CallInvoker()
extern void ClientBase_get_CallInvoker_m717EE393F9BA179088F999AFA81852EA4094287C (void);
// 0x0000003D System.Void Grpc.Core.ClientBase/ClientBaseConfiguration::.ctor(Grpc.Core.CallInvoker,System.String)
extern void ClientBaseConfiguration__ctor_m41D14EA6147B05903EAC2CF5A42E6EEBEC3850BF (void);
// 0x0000003E Grpc.Core.CallInvoker Grpc.Core.ClientBase/ClientBaseConfiguration::CreateDecoratedCallInvoker()
extern void ClientBaseConfiguration_CreateDecoratedCallInvoker_m234DC1433558E56B72B1ECDD2D1CB5FF8413456E (void);
// 0x0000003F System.Tuple`2<System.String,Grpc.Core.CallOptions> Grpc.Core.ClientBase/ClientBaseConfiguration::<CreateDecoratedCallInvoker>b__4_0(Grpc.Core.IMethod,System.String,Grpc.Core.CallOptions)
extern void ClientBaseConfiguration_U3CCreateDecoratedCallInvokerU3Eb__4_0_m02D84A3B2BB7C3D108480AF031E4C6CD8B08B41E (void);
// 0x00000040 System.Void Grpc.Core.ClientBase/ClientBaseConfiguration/ClientBaseConfigurationInterceptor::.ctor(System.Func`4<Grpc.Core.IMethod,System.String,Grpc.Core.CallOptions,System.Tuple`2<System.String,Grpc.Core.CallOptions>>)
extern void ClientBaseConfigurationInterceptor__ctor_m5CAFD684DEECEC7E553338453C2D99790C8CBD35 (void);
// 0x00000041 Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse> Grpc.Core.ClientBase/ClientBaseConfiguration/ClientBaseConfigurationInterceptor::GetNewContext(Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>)
// 0x00000042 TResponse Grpc.Core.ClientBase/ClientBaseConfiguration/ClientBaseConfigurationInterceptor::BlockingUnaryCall(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>,Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2<TRequest,TResponse>)
// 0x00000043 Grpc.Core.Internal.CallSafeHandle Grpc.Core.ContextPropagationToken::get_ParentCall()
extern void ContextPropagationToken_get_ParentCall_m9C1CA1CDB185F420336F4A96C5E4EF94F585E656 (void);
// 0x00000044 System.DateTime Grpc.Core.ContextPropagationToken::get_ParentDeadline()
extern void ContextPropagationToken_get_ParentDeadline_m9A8B1F2223F2C724C81093A7E804D0648E13F87D (void);
// 0x00000045 System.Threading.CancellationToken Grpc.Core.ContextPropagationToken::get_ParentCancellationToken()
extern void ContextPropagationToken_get_ParentCancellationToken_m30BF5852CA213583B8CFBFA19F8E7D07FBF3CFD7 (void);
// 0x00000046 Grpc.Core.ContextPropagationOptions Grpc.Core.ContextPropagationToken::get_Options()
extern void ContextPropagationToken_get_Options_mAB9343F0119C4B957E969846F3565335AD752889 (void);
// 0x00000047 System.Void Grpc.Core.ContextPropagationOptions::.ctor(System.Boolean,System.Boolean)
extern void ContextPropagationOptions__ctor_m06B8D692D7D68E9C57155600591223FAE0B9D0B5 (void);
// 0x00000048 System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateDeadline()
extern void ContextPropagationOptions_get_IsPropagateDeadline_mC9D40B9C75CC776000877DE49CFCFC1754CA6B76 (void);
// 0x00000049 System.Boolean Grpc.Core.ContextPropagationOptions::get_IsPropagateCancellation()
extern void ContextPropagationOptions_get_IsPropagateCancellation_mFBB0D7575EE0C360C49BAA6A15AA03E9DD6A99E6 (void);
// 0x0000004A System.Void Grpc.Core.ContextPropagationOptions::.cctor()
extern void ContextPropagationOptions__cctor_m60E62E164FD6244F8FC62B6327A1CB0819346829 (void);
// 0x0000004B System.Void Grpc.Core.DefaultCallInvoker::.ctor(Grpc.Core.Channel)
extern void DefaultCallInvoker__ctor_mCD7404D17B739D0F4B678D1F176D907F24F0E9FA (void);
// 0x0000004C TResponse Grpc.Core.DefaultCallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x0000004D Grpc.Core.CallInvocationDetails`2<TRequest,TResponse> Grpc.Core.DefaultCallInvoker::CreateCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x0000004E Grpc.Core.GrpcEnvironment Grpc.Core.GrpcEnvironment::AddRef()
extern void GrpcEnvironment_AddRef_mAEDBB3BA976285B8D9BE79CA0C12E18F7175DD3A (void);
// 0x0000004F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ReleaseAsync()
extern void GrpcEnvironment_ReleaseAsync_m5CAFA4FCC9CB3B1EC620E5BD05F653EBF7C87DBE (void);
// 0x00000050 System.Void Grpc.Core.GrpcEnvironment::RegisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_RegisterChannel_m36175E45C4CF6D4153C299AAC40280EC917F8DF0 (void);
// 0x00000051 System.Void Grpc.Core.GrpcEnvironment::UnregisterChannel(Grpc.Core.Channel)
extern void GrpcEnvironment_UnregisterChannel_mE2D567630D3B51934CA551C84950672CEF5A5F4F (void);
// 0x00000052 System.Void Grpc.Core.GrpcEnvironment::UnregisterServer(Grpc.Core.Server)
extern void GrpcEnvironment_UnregisterServer_m15DD81A732286D93F54E652EC5B52D4740A37C9C (void);
// 0x00000053 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownChannelsAsync()
extern void GrpcEnvironment_ShutdownChannelsAsync_m8513B4DE5E4B2BCA12CD1D010FA2F7D1C1C8AEA0 (void);
// 0x00000054 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::KillServersAsync()
extern void GrpcEnvironment_KillServersAsync_m0A2CD7F34BA5C439BB0EAF73F1ED62EEAECB508E (void);
// 0x00000055 Grpc.Core.Logging.ILogger Grpc.Core.GrpcEnvironment::get_Logger()
extern void GrpcEnvironment_get_Logger_m0BEF8A37DC4AE95F0082BCCCCC83BA2CD8239E1F (void);
// 0x00000056 System.Void Grpc.Core.GrpcEnvironment::.ctor()
extern void GrpcEnvironment__ctor_mE81F639E0D478627A6D51ECBAA61EE7A1E45CE1F (void);
// 0x00000057 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.GrpcEnvironment::get_CompletionQueues()
extern void GrpcEnvironment_get_CompletionQueues_m9952B2B87342596DBC4A436CB329763E126EACF5 (void);
// 0x00000058 Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.BatchContextSafeHandle> Grpc.Core.GrpcEnvironment::get_BatchContextPool()
extern void GrpcEnvironment_get_BatchContextPool_m74C153764AA9AF18D0710A10045847010721F999 (void);
// 0x00000059 Grpc.Core.Internal.IObjectPool`1<Grpc.Core.Internal.RequestCallContextSafeHandle> Grpc.Core.GrpcEnvironment::get_RequestCallContextPool()
extern void GrpcEnvironment_get_RequestCallContextPool_m3C0D74C96DF0B80E2B2DDE2582F9ED5E6790B9D3 (void);
// 0x0000005A System.Boolean Grpc.Core.GrpcEnvironment::get_IsAlive()
extern void GrpcEnvironment_get_IsAlive_m785545075D5A857F81780430E6EF09403A61AB97 (void);
// 0x0000005B Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.GrpcEnvironment::PickCompletionQueue()
extern void GrpcEnvironment_PickCompletionQueue_m82852B3C06E7C8CDD2FEB4708796B4A3D467FEA1 (void);
// 0x0000005C Grpc.Core.Internal.DebugStats Grpc.Core.GrpcEnvironment::get_DebugStats()
extern void GrpcEnvironment_get_DebugStats_m224B1977EA7B6A8DCC346536E24ABF384C274944 (void);
// 0x0000005D System.Void Grpc.Core.GrpcEnvironment::GrpcNativeInit()
extern void GrpcEnvironment_GrpcNativeInit_mD66A39AAE9D695DC822B9CCA4F721D781EE74D0F (void);
// 0x0000005E System.Void Grpc.Core.GrpcEnvironment::GrpcNativeShutdown()
extern void GrpcEnvironment_GrpcNativeShutdown_m44786903B22BF92F7B9D5E005B94445B5F84980B (void);
// 0x0000005F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment::ShutdownAsync()
extern void GrpcEnvironment_ShutdownAsync_mCE1FE5DEE25BF595144D80BBCAD3B04C81DADE83 (void);
// 0x00000060 System.Int32 Grpc.Core.GrpcEnvironment::GetThreadPoolSizeOrDefault()
extern void GrpcEnvironment_GetThreadPoolSizeOrDefault_m6F9A51351D082E71579BB65138DCBCEE8BE294C7 (void);
// 0x00000061 System.Int32 Grpc.Core.GrpcEnvironment::GetCompletionQueueCountOrDefault()
extern void GrpcEnvironment_GetCompletionQueueCountOrDefault_m76C422D61AE3B9044D441C3B15959EF769BBE35A (void);
// 0x00000062 System.Void Grpc.Core.GrpcEnvironment::.cctor()
extern void GrpcEnvironment__cctor_m50B347CE1255239F36EA0B82A21D81419658E0A4 (void);
// 0x00000063 System.Void Grpc.Core.GrpcEnvironment::<ShutdownAsync>b__59_0()
extern void GrpcEnvironment_U3CShutdownAsyncU3Eb__59_0_mC3E8F4C18DD51BABA902B1A221583C96CBBFBCB1 (void);
// 0x00000064 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::Register()
extern void ShutdownHooks_Register_mE16B566547B7491B3FFD0768B6089CF9C118EC80 (void);
// 0x00000065 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::HandleShutdown()
extern void ShutdownHooks_HandleShutdown_m3B8439F8EFB428395EE73DDA6FAD02C40F1C34D6 (void);
// 0x00000066 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks::.cctor()
extern void ShutdownHooks__cctor_m0FC23656E9AC7AA2D73F10888DCBD5881071B5F1 (void);
// 0x00000067 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.cctor()
extern void U3CU3Ec__cctor_mF565BE4F80CBE3900FDB7CECB4607C67CD8F8EEE (void);
// 0x00000068 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::.ctor()
extern void U3CU3Ec__ctor_m2CA860CA9CEE3CC98469FFAE24C0515E892B0B05 (void);
// 0x00000069 System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_0(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_0_m6223F46FC1420C50A86ABA5074A9B284DD56CEFC (void);
// 0x0000006A System.Void Grpc.Core.GrpcEnvironment/ShutdownHooks/<>c::<Register>b__2_1(System.Object,System.EventArgs)
extern void U3CU3Ec_U3CRegisterU3Eb__2_1_m2A090FA3BEE20386D03E38C04F118DE4531AB1BA (void);
// 0x0000006B System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__25::MoveNext()
extern void U3CReleaseAsyncU3Ed__25_MoveNext_mA72EAC6D03E6D49B162627F4B1F17EBDE66D67FD (void);
// 0x0000006C System.Void Grpc.Core.GrpcEnvironment/<ReleaseAsync>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReleaseAsyncU3Ed__25_SetStateMachine_m4D4420EB99639C76F2FE31EF40F4524E9E292F9E (void);
// 0x0000006D System.Void Grpc.Core.GrpcEnvironment/<>c::.cctor()
extern void U3CU3Ec__cctor_mA7262BC21082C2993880E12D3001F8E8C57DC7A7 (void);
// 0x0000006E System.Void Grpc.Core.GrpcEnvironment/<>c::.ctor()
extern void U3CU3Ec__ctor_m7A3DF675C629E3F387A06622F88334E4348E6B2C (void);
// 0x0000006F System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<ShutdownChannelsAsync>b__31_0(Grpc.Core.Channel)
extern void U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__31_0_m7558A537DCDFF9F0A78EFCE6264FA4CA1720D912 (void);
// 0x00000070 System.Threading.Tasks.Task Grpc.Core.GrpcEnvironment/<>c::<KillServersAsync>b__32_0(Grpc.Core.Server)
extern void U3CU3Ec_U3CKillServersAsyncU3Eb__32_0_m34070D7E9FCE4C485CFA78BBD7B48B3EAEDFE73C (void);
// 0x00000071 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__44_0()
extern void U3CU3Ec_U3C_ctorU3Eb__44_0_m33F9882BBADD3E6DCDD87DFED09F5E3B4D6951AC (void);
// 0x00000072 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.GrpcEnvironment/<>c::<.ctor>b__44_1()
extern void U3CU3Ec_U3C_ctorU3Eb__44_1_m8528E58F88D442B4F17B8444B80A9350E490ED79 (void);
// 0x00000073 System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__59::MoveNext()
extern void U3CShutdownAsyncU3Ed__59_MoveNext_m3CC7426593006A20DCB8ADFA6B4544862A1F2798 (void);
// 0x00000074 System.Void Grpc.Core.GrpcEnvironment/<ShutdownAsync>d__59::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownAsyncU3Ed__59_SetStateMachine_mD9B8ECDA6C0015C6C894B3D2E8A7B9934F479D71 (void);
// 0x00000075 System.Void Grpc.Core.Marshaller`1::.ctor(System.Func`2<T,System.Byte[]>,System.Func`2<System.Byte[],T>)
// 0x00000076 System.Func`2<T,System.Byte[]> Grpc.Core.Marshaller`1::get_Serializer()
// 0x00000077 System.Func`2<System.Byte[],T> Grpc.Core.Marshaller`1::get_Deserializer()
// 0x00000078 Grpc.Core.Marshaller`1<T> Grpc.Core.Marshallers::Create(System.Func`2<T,System.Byte[]>,System.Func`2<System.Byte[],T>)
// 0x00000079 System.Void Grpc.Core.Metadata::.ctor()
extern void Metadata__ctor_m3CEC8D4E6C0B2946DFD7789F838793710B0FD689 (void);
// 0x0000007A Grpc.Core.Metadata Grpc.Core.Metadata::Freeze()
extern void Metadata_Freeze_m5BDA2FFCCC07864ABEE2A4661DA87D68EC0EBD30 (void);
// 0x0000007B System.Int32 Grpc.Core.Metadata::IndexOf(Grpc.Core.Metadata/Entry)
extern void Metadata_IndexOf_m62AAE1AB5734AABA460C07155355352D5B60AE91 (void);
// 0x0000007C System.Void Grpc.Core.Metadata::Insert(System.Int32,Grpc.Core.Metadata/Entry)
extern void Metadata_Insert_m371B5CB40511B58DD2C811C65A9502F8AF69E4CD (void);
// 0x0000007D System.Void Grpc.Core.Metadata::RemoveAt(System.Int32)
extern void Metadata_RemoveAt_mC3F2190795610FA2FED3A022095322AA5079036E (void);
// 0x0000007E Grpc.Core.Metadata/Entry Grpc.Core.Metadata::get_Item(System.Int32)
extern void Metadata_get_Item_m72760DE95A21D844F311FC462C809E7C5F949912 (void);
// 0x0000007F System.Void Grpc.Core.Metadata::set_Item(System.Int32,Grpc.Core.Metadata/Entry)
extern void Metadata_set_Item_m85BEF0ECBB430662D1B5C7310B65AC6843A5A81E (void);
// 0x00000080 System.Void Grpc.Core.Metadata::Add(Grpc.Core.Metadata/Entry)
extern void Metadata_Add_mF1E0A1C30131CB5FF394F70A9D31750029F4DC25 (void);
// 0x00000081 System.Void Grpc.Core.Metadata::Clear()
extern void Metadata_Clear_mDE0C9928E90D4ED0A3F5E41C71B92420FA473476 (void);
// 0x00000082 System.Boolean Grpc.Core.Metadata::Contains(Grpc.Core.Metadata/Entry)
extern void Metadata_Contains_mFB162D87EF4B07402770E9D1AF294E9BF31B1A41 (void);
// 0x00000083 System.Void Grpc.Core.Metadata::CopyTo(Grpc.Core.Metadata/Entry[],System.Int32)
extern void Metadata_CopyTo_m92A791DD15067F43B44C95372B33FA4E14BF7A27 (void);
// 0x00000084 System.Int32 Grpc.Core.Metadata::get_Count()
extern void Metadata_get_Count_m83DAD9E767A25CF5DAE326C28E9B2858248A5086 (void);
// 0x00000085 System.Boolean Grpc.Core.Metadata::get_IsReadOnly()
extern void Metadata_get_IsReadOnly_m801D2A2E8AB63F6952E884C98018A4D4028BDD9E (void);
// 0x00000086 System.Boolean Grpc.Core.Metadata::Remove(Grpc.Core.Metadata/Entry)
extern void Metadata_Remove_m21E6A384B0FD21CDDCA7ED49A353513187452C87 (void);
// 0x00000087 System.Collections.Generic.IEnumerator`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::GetEnumerator()
extern void Metadata_GetEnumerator_mAC1E8088525BFE199BE25364B56D86D5F8BA804D (void);
// 0x00000088 System.Collections.IEnumerator Grpc.Core.Metadata::System.Collections.IEnumerable.GetEnumerator()
extern void Metadata_System_Collections_IEnumerable_GetEnumerator_m5BC66A61D7442F7847F41143B439BC2A7C786FC4 (void);
// 0x00000089 System.Void Grpc.Core.Metadata::CheckWriteable()
extern void Metadata_CheckWriteable_m172CE925DDDAE87C6CEC9DAE4792CF33D2382DA5 (void);
// 0x0000008A System.Void Grpc.Core.Metadata::.cctor()
extern void Metadata__cctor_mA34734A71AAB45258A70BAC65195D532401F917A (void);
// 0x0000008B System.Void Grpc.Core.Metadata/Entry::.ctor(System.String,System.String,System.Byte[])
extern void Entry__ctor_m6DB44F9B03DED610E2139DD515FEDA5647E37676 (void);
// 0x0000008C System.String Grpc.Core.Metadata/Entry::get_Key()
extern void Entry_get_Key_m8840C94B36045EB174A4455867E71D6D9559747D (void);
// 0x0000008D System.Boolean Grpc.Core.Metadata/Entry::get_IsBinary()
extern void Entry_get_IsBinary_mB1D360E75BC27A088BB07070026441D3458192F1 (void);
// 0x0000008E System.String Grpc.Core.Metadata/Entry::ToString()
extern void Entry_ToString_m7D1A87964FE4FF87CE0FFD7D4D58071F7869527D (void);
// 0x0000008F System.Byte[] Grpc.Core.Metadata/Entry::GetSerializedValueUnsafe()
extern void Entry_GetSerializedValueUnsafe_mF71CF3999AFC72808A8BAAC644F31CF9B178030D (void);
// 0x00000090 Grpc.Core.Metadata/Entry Grpc.Core.Metadata/Entry::CreateUnsafe(System.String,System.Byte[])
extern void Entry_CreateUnsafe_m65328E47ABD4AC9971DE66A7B1670D3748561755 (void);
// 0x00000091 System.Boolean Grpc.Core.Metadata/Entry::HasBinaryHeaderSuffix(System.String)
extern void Entry_HasBinaryHeaderSuffix_m8479DC66A433F44634F6B245B9DD4B8EB3ABA875 (void);
// 0x00000092 System.Void Grpc.Core.Metadata/Entry::.cctor()
extern void Entry__cctor_mCAD54EE06A21481E6CB1CD747BC0E046D9DF50F6 (void);
// 0x00000093 System.Void Grpc.Core.Method`2::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<TRequest>,Grpc.Core.Marshaller`1<TResponse>)
// 0x00000094 Grpc.Core.Marshaller`1<TRequest> Grpc.Core.Method`2::get_RequestMarshaller()
// 0x00000095 Grpc.Core.Marshaller`1<TResponse> Grpc.Core.Method`2::get_ResponseMarshaller()
// 0x00000096 System.String Grpc.Core.Method`2::get_FullName()
// 0x00000097 System.String Grpc.Core.Method`2::GetFullName(System.String,System.String)
// 0x00000098 System.Void Grpc.Core.RpcException::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void RpcException__ctor_mBFCED350A89AC8399BF23D131DD3D63F81EA450E (void);
// 0x00000099 Grpc.Core.Status Grpc.Core.RpcException::get_Status()
extern void RpcException_get_Status_m2B78A174FBB31967AB6ABD79B45DF093D8DD4138 (void);
// 0x0000009A System.Threading.Tasks.Task Grpc.Core.Server::KillAsync()
extern void Server_KillAsync_m014C52F0FE386C5DC022ECA5A6C9811CE9C32CC0 (void);
// 0x0000009B System.Threading.Tasks.Task Grpc.Core.Server::ShutdownInternalAsync(System.Boolean)
extern void Server_ShutdownInternalAsync_m7C9E75AC534A131882BEBF4168C388D6A4F40F0E (void);
// 0x0000009C System.Threading.Tasks.Task Grpc.Core.Server::ShutdownCompleteOrEnvironmentDeadAsync()
extern void Server_ShutdownCompleteOrEnvironmentDeadAsync_m2C4A5ACBE20C77ADEF28DA5892BB1D7C5C8C1E72 (void);
// 0x0000009D System.Void Grpc.Core.Server::DisposeHandle()
extern void Server_DisposeHandle_mA476FEB23D7D72AF35820133A997E6AF4B3F9B78 (void);
// 0x0000009E System.Void Grpc.Core.Server::HandleServerShutdown(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void Server_HandleServerShutdown_mACFEF91015E69956B60327ED89AF17531A259300 (void);
// 0x0000009F System.Void Grpc.Core.Server::.cctor()
extern void Server__cctor_m65130F4A72C8BB29D8309B5C1E9D49EF6DC491E5 (void);
// 0x000000A0 System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::MoveNext()
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m4F3FBAA5AF712B9EFBE461E0DF3FE55369AA1697 (void);
// 0x000000A1 System.Void Grpc.Core.Server/<ShutdownInternalAsync>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mAD9E26D66092DB13D12B48418376BC462CBBA31F (void);
// 0x000000A2 System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::MoveNext()
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m4839A82CC55051F059919BFB5A6A26C9E40F2BC4 (void);
// 0x000000A3 System.Void Grpc.Core.Server/<ShutdownCompleteOrEnvironmentDeadAsync>d__33::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mFC7CDA22989636BFDDBAF8754F0FFAECB706EB5E (void);
// 0x000000A4 System.Void Grpc.Core.Status::.ctor(Grpc.Core.StatusCode,System.String)
extern void Status__ctor_mDA2F89D0711AF59EB9B8633BEA22DAF91F8CD9EE (void);
// 0x000000A5 Grpc.Core.StatusCode Grpc.Core.Status::get_StatusCode()
extern void Status_get_StatusCode_mC0CAB9A67D6D5B8CA659FD834E3D77EC1A258054 (void);
// 0x000000A6 System.String Grpc.Core.Status::get_Detail()
extern void Status_get_Detail_m304E4CCE7B0AD754FB9B00B9792A925931FA1D4F (void);
// 0x000000A7 System.String Grpc.Core.Status::ToString()
extern void Status_ToString_m07F5926D4D70C0D55D6067841EBA76C59653D77B (void);
// 0x000000A8 System.Void Grpc.Core.Status::.cctor()
extern void Status__cctor_m7100753806DA1D271557934354719AA850F2EB15 (void);
// 0x000000A9 System.Void Grpc.Core.WriteOptions::.ctor(Grpc.Core.WriteFlags)
extern void WriteOptions__ctor_m13496EA760803C44D513BB05BB6140DF29E31816 (void);
// 0x000000AA Grpc.Core.WriteFlags Grpc.Core.WriteOptions::get_Flags()
extern void WriteOptions_get_Flags_m74EB3F07E36014E6A2BBCC9B564A734189955157 (void);
// 0x000000AB System.Void Grpc.Core.WriteOptions::.cctor()
extern void WriteOptions__cctor_mE19D957BA4B63B5FFBF404FB752B2ECB2FD24305 (void);
// 0x000000AC System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean)
extern void GrpcPreconditions_CheckArgument_mF6112774C50ACE47FE9A27105A809DD268E1DDD4 (void);
// 0x000000AD System.Void Grpc.Core.Utils.GrpcPreconditions::CheckArgument(System.Boolean,System.String)
extern void GrpcPreconditions_CheckArgument_mD3E4736A70E242676C1ADDF58D82F791E09DD003 (void);
// 0x000000AE T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull(T)
// 0x000000AF T Grpc.Core.Utils.GrpcPreconditions::CheckNotNull(T,System.String)
// 0x000000B0 System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean)
extern void GrpcPreconditions_CheckState_m82846BE59F78927837E8C58C7741EA799904A3B9 (void);
// 0x000000B1 System.Void Grpc.Core.Utils.GrpcPreconditions::CheckState(System.Boolean,System.String)
extern void GrpcPreconditions_CheckState_mA537C6FFEDC5169E6BF88D4BC9423AA75F434F39 (void);
// 0x000000B2 System.Void Grpc.Core.Profiling.IProfiler::Begin(System.String)
// 0x000000B3 System.Void Grpc.Core.Profiling.IProfiler::End(System.String)
// 0x000000B4 System.Void Grpc.Core.Profiling.ProfilerEntry::.ctor(Grpc.Core.Internal.Timespec,Grpc.Core.Profiling.ProfilerEntry/Type,System.String)
extern void ProfilerEntry__ctor_m51372D6EF4E0A77EBCDF66E91AB827C8D4DFD6EB (void);
// 0x000000B5 System.String Grpc.Core.Profiling.ProfilerEntry::ToString()
extern void ProfilerEntry_ToString_mA89E97C6C403703B633037913AF5F7AEE2996920 (void);
// 0x000000B6 System.String Grpc.Core.Profiling.ProfilerEntry::GetTypeAbbreviation(Grpc.Core.Profiling.ProfilerEntry/Type)
extern void ProfilerEntry_GetTypeAbbreviation_m9DB8CD80DFF0BB2F2EDDE6405EDCBC9A99D3F6B9 (void);
// 0x000000B7 Grpc.Core.Profiling.IProfiler Grpc.Core.Profiling.Profilers::ForCurrentThread()
extern void Profilers_ForCurrentThread_m2BFA82E8B0B025D325543DB5F817CBFA28245CBE (void);
// 0x000000B8 System.Void Grpc.Core.Profiling.Profilers::SetForCurrentThread(Grpc.Core.Profiling.IProfiler)
extern void Profilers_SetForCurrentThread_m448081CA2995E04208A9AE2B1138FCA23C793BFE (void);
// 0x000000B9 Grpc.Core.Profiling.ProfilerScope Grpc.Core.Profiling.Profilers::NewScope(Grpc.Core.Profiling.IProfiler,System.String)
extern void Profilers_NewScope_m92A8B4A50C45CFA1AAAA394E774435B23BAE7C71 (void);
// 0x000000BA System.Void Grpc.Core.Profiling.Profilers::.cctor()
extern void Profilers__cctor_m1B0AC1275033C146A4D13479B876B002885F387D (void);
// 0x000000BB System.Void Grpc.Core.Profiling.NopProfiler::Begin(System.String)
extern void NopProfiler_Begin_m171D6A620B9362D41796209698C0E068CEF6C3F5 (void);
// 0x000000BC System.Void Grpc.Core.Profiling.NopProfiler::End(System.String)
extern void NopProfiler_End_mAC29B4407939FF2C26EFA04DD2F5C73414B8697C (void);
// 0x000000BD System.Void Grpc.Core.Profiling.NopProfiler::.ctor()
extern void NopProfiler__ctor_m3ADEF58D3E56B01F1788C8520EABA9152803C0A9 (void);
// 0x000000BE System.Void Grpc.Core.Profiling.BasicProfiler::Begin(System.String)
extern void BasicProfiler_Begin_mDB116112C975FC7837996973EFDE6C5DCCD214A7 (void);
// 0x000000BF System.Void Grpc.Core.Profiling.BasicProfiler::End(System.String)
extern void BasicProfiler_End_m0444EDA0CF04B981037BCCEE6872C46F43C836C4 (void);
// 0x000000C0 System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.String)
extern void BasicProfiler_Dump_mD27FD949DA1E692FB848CBFD2033E3293BE45B2D (void);
// 0x000000C1 System.Void Grpc.Core.Profiling.BasicProfiler::Dump(System.IO.TextWriter)
extern void BasicProfiler_Dump_mD74AE62BB7A5C84E8A9B3CBF1E0A57FAAD62681D (void);
// 0x000000C2 System.Void Grpc.Core.Profiling.BasicProfiler::AddEntry(Grpc.Core.Profiling.ProfilerEntry)
extern void BasicProfiler_AddEntry_m7635C734E036CA1363B3B163118D6098387F78A1 (void);
// 0x000000C3 System.Void Grpc.Core.Profiling.ProfilerScope::.ctor(Grpc.Core.Profiling.IProfiler,System.String)
extern void ProfilerScope__ctor_m94126261F4A3138B4DE9E6F7B429BEF0CB941725 (void);
// 0x000000C4 System.Void Grpc.Core.Profiling.ProfilerScope::Dispose()
extern void ProfilerScope_Dispose_mA8E37D1B4C3765839213FA0AFA7DFDCFB549AF65 (void);
// 0x000000C5 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor()
extern void ConsoleLogger__ctor_m021CFA520385DD63E22905DA500C7B7BD388260C (void);
// 0x000000C6 System.Void Grpc.Core.Logging.ConsoleLogger::.ctor(System.Type)
extern void ConsoleLogger__ctor_m6085F148C8FFB88345591E58A753E3DD053156C7 (void);
// 0x000000C7 Grpc.Core.Logging.ILogger Grpc.Core.Logging.ConsoleLogger::ForType()
// 0x000000C8 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.cctor()
extern void U3CU3Ec__cctor_m7589246363A54958C5FAF7D0A90E73FA6BF8A0CF (void);
// 0x000000C9 System.Void Grpc.Core.Logging.ConsoleLogger/<>c::.ctor()
extern void U3CU3Ec__ctor_m7633D0CA2749095E992A385FE98826251ACAE445 (void);
// 0x000000CA System.IO.TextWriter Grpc.Core.Logging.ConsoleLogger/<>c::<.ctor>b__1_0()
extern void U3CU3Ec_U3C_ctorU3Eb__1_0_mEB73261E527E774143EAA4053619FE79F70EC860 (void);
// 0x000000CB Grpc.Core.Logging.ILogger Grpc.Core.Logging.ILogger::ForType()
// 0x000000CC System.Void Grpc.Core.Logging.ILogger::Debug(System.String)
// 0x000000CD System.Void Grpc.Core.Logging.ILogger::Debug(System.String,System.Object[])
// 0x000000CE System.Void Grpc.Core.Logging.ILogger::Info(System.String)
// 0x000000CF System.Void Grpc.Core.Logging.ILogger::Warning(System.String,System.Object[])
// 0x000000D0 System.Void Grpc.Core.Logging.ILogger::Error(System.String)
// 0x000000D1 System.Void Grpc.Core.Logging.ILogger::Error(System.Exception,System.String)
// 0x000000D2 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel)
extern void LogLevelFilterLogger__ctor_m67617E99AA6BB3C3A244EC510FBA8A2B63C9CECC (void);
// 0x000000D3 System.Void Grpc.Core.Logging.LogLevelFilterLogger::.ctor(Grpc.Core.Logging.ILogger,Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger__ctor_m881898E94AD77D9035A4DF9A380D59FD924A389C (void);
// 0x000000D4 Grpc.Core.Logging.ILogger Grpc.Core.Logging.LogLevelFilterLogger::ForType()
// 0x000000D5 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String)
extern void LogLevelFilterLogger_Debug_m1328B49DA965B5033891C6BF84124616C85391DC (void);
// 0x000000D6 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Debug(System.String,System.Object[])
extern void LogLevelFilterLogger_Debug_mE3D23E6B737AD29A0B07F50D3FBFE8DE3499D368 (void);
// 0x000000D7 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Info(System.String)
extern void LogLevelFilterLogger_Info_m6B3AA3B0070185BA5E73B16FB92ACBC5DE6FA218 (void);
// 0x000000D8 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Warning(System.String,System.Object[])
extern void LogLevelFilterLogger_Warning_m1D2F6D195CB22217E232C9D5FCB812C3B7576FBE (void);
// 0x000000D9 System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.String)
extern void LogLevelFilterLogger_Error_mA57A147338E6395CE2FE9A6CAE00AC5C8ABCDBCE (void);
// 0x000000DA System.Void Grpc.Core.Logging.LogLevelFilterLogger::Error(System.Exception,System.String)
extern void LogLevelFilterLogger_Error_mFF938C622FF60D74D0A49745499D09ADA0675286 (void);
// 0x000000DB Grpc.Core.Logging.LogLevel Grpc.Core.Logging.LogLevelFilterLogger::GetLogLevelFromEnvironment(Grpc.Core.Logging.LogLevel,System.Boolean)
extern void LogLevelFilterLogger_GetLogLevelFromEnvironment_m5D1BF19159D3FB3DA14B2C222C6E0F9056F0843A (void);
// 0x000000DC System.Void Grpc.Core.Logging.TextWriterLogger::.ctor(System.Func`1<System.IO.TextWriter>,System.Type)
extern void TextWriterLogger__ctor_mEF686C979122A3BB78A2DE64EDAB5B9B28150D94 (void);
// 0x000000DD Grpc.Core.Logging.ILogger Grpc.Core.Logging.TextWriterLogger::ForType()
// 0x000000DE System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String)
extern void TextWriterLogger_Debug_mD97043C8C454FCB47C4445B3EF650B82369EEFBE (void);
// 0x000000DF System.Void Grpc.Core.Logging.TextWriterLogger::Debug(System.String,System.Object[])
extern void TextWriterLogger_Debug_m68AFE2644554539E74A8DF5498FFBC5B717CDB07 (void);
// 0x000000E0 System.Void Grpc.Core.Logging.TextWriterLogger::Info(System.String)
extern void TextWriterLogger_Info_mBBA4ECF0AC3E4C9066C7A25C01461D148E0E7793 (void);
// 0x000000E1 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String)
extern void TextWriterLogger_Warning_mA0E897032E3D098D0E31EB432938A326D1F3AE31 (void);
// 0x000000E2 System.Void Grpc.Core.Logging.TextWriterLogger::Warning(System.String,System.Object[])
extern void TextWriterLogger_Warning_mDA06C7D150C570F88439F17DDB7D44482F9514F7 (void);
// 0x000000E3 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.String)
extern void TextWriterLogger_Error_m35EC80C0ED193ECD48761513340F49D440F67AD7 (void);
// 0x000000E4 System.Void Grpc.Core.Logging.TextWriterLogger::Error(System.Exception,System.String)
extern void TextWriterLogger_Error_m3D611FC761BCDF421C105EB2F9A4146D8A01751C (void);
// 0x000000E5 System.Type Grpc.Core.Logging.TextWriterLogger::get_AssociatedType()
extern void TextWriterLogger_get_AssociatedType_mE6DC903CB0A330AB281C1D15FF9A423266C87CDD (void);
// 0x000000E6 System.Void Grpc.Core.Logging.TextWriterLogger::Log(System.String,System.String)
extern void TextWriterLogger_Log_mDDDB3E73DFA3EDA9213327FC282EEEF2D592F55F (void);
// 0x000000E7 System.Void Grpc.Core.Internal.AsyncCall`2::.ctor(Grpc.Core.CallInvocationDetails`2<TRequest,TResponse>)
// 0x000000E8 TResponse Grpc.Core.Internal.AsyncCall`2::UnaryCall(TRequest)
// 0x000000E9 System.Void Grpc.Core.Internal.AsyncCall`2::OnAfterReleaseResources()
// 0x000000EA System.Boolean Grpc.Core.Internal.AsyncCall`2::get_IsClient()
// 0x000000EB System.Exception Grpc.Core.Internal.AsyncCall`2::GetRpcExceptionClientOnly()
// 0x000000EC System.Void Grpc.Core.Internal.AsyncCall`2::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000000ED Grpc.Core.Internal.INativeCall Grpc.Core.Internal.AsyncCall`2::CreateNativeCall(Grpc.Core.Internal.CompletionQueueSafeHandle)
// 0x000000EE System.Void Grpc.Core.Internal.AsyncCall`2::RegisterCancellationCallback()
// 0x000000EF Grpc.Core.WriteFlags Grpc.Core.Internal.AsyncCall`2::GetWriteFlagsForCall()
// 0x000000F0 System.Void Grpc.Core.Internal.AsyncCall`2::HandleReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000000F1 System.Void Grpc.Core.Internal.AsyncCall`2::HandleUnaryResponse(System.Boolean,Grpc.Core.Internal.ClientSideStatus,System.Byte[],Grpc.Core.Metadata)
// 0x000000F2 System.Void Grpc.Core.Internal.AsyncCall`2::HandleFinished(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000000F3 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IUnaryResponseClientCallback.OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,System.Byte[],Grpc.Core.Metadata)
// 0x000000F4 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedStatusOnClientCallback.OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x000000F5 System.Void Grpc.Core.Internal.AsyncCall`2::Grpc.Core.Internal.IReceivedResponseHeadersCallback.OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x000000F6 System.Void Grpc.Core.Internal.AsyncCall`2::.cctor()
// 0x000000F7 System.Void Grpc.Core.Internal.AsyncCall`2::<RegisterCancellationCallback>b__34_0()
// 0x000000F8 System.Void Grpc.Core.Internal.AsyncCallBase`2::.ctor(System.Func`2<TWrite,System.Byte[]>,System.Func`2<System.Byte[],TRead>)
// 0x000000F9 System.Void Grpc.Core.Internal.AsyncCallBase`2::Cancel()
// 0x000000FA System.Void Grpc.Core.Internal.AsyncCallBase`2::CancelWithStatus(Grpc.Core.Status)
// 0x000000FB System.Void Grpc.Core.Internal.AsyncCallBase`2::InitializeInternal(Grpc.Core.Internal.INativeCall)
// 0x000000FC System.Boolean Grpc.Core.Internal.AsyncCallBase`2::ReleaseResourcesIfPossible()
// 0x000000FD System.Boolean Grpc.Core.Internal.AsyncCallBase`2::get_IsClient()
// 0x000000FE System.Exception Grpc.Core.Internal.AsyncCallBase`2::GetRpcExceptionClientOnly()
// 0x000000FF System.Void Grpc.Core.Internal.AsyncCallBase`2::ReleaseResources()
// 0x00000100 System.Void Grpc.Core.Internal.AsyncCallBase`2::OnAfterReleaseResources()
// 0x00000101 System.Byte[] Grpc.Core.Internal.AsyncCallBase`2::UnsafeSerialize(TWrite)
// 0x00000102 System.Exception Grpc.Core.Internal.AsyncCallBase`2::TryDeserialize(System.Byte[],TRead&)
// 0x00000103 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleSendFinished(System.Boolean)
// 0x00000104 System.Void Grpc.Core.Internal.AsyncCallBase`2::HandleReadFinished(System.Boolean,System.Byte[])
// 0x00000105 System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.ISendCompletionCallback.OnSendCompletion(System.Boolean)
// 0x00000106 System.Void Grpc.Core.Internal.AsyncCallBase`2::Grpc.Core.Internal.IReceivedMessageCallback.OnReceivedMessage(System.Boolean,System.Byte[])
// 0x00000107 System.Void Grpc.Core.Internal.AsyncCallBase`2::.cctor()
// 0x00000108 System.Void Grpc.Core.Internal.AtomicCounter::.ctor(System.Int64)
extern void AtomicCounter__ctor_mE0E08C43AC2F7B4E9C37000E2C53A4F94E6E19B0 (void);
// 0x00000109 System.Int64 Grpc.Core.Internal.AtomicCounter::Increment()
extern void AtomicCounter_Increment_mAEE3E578062594AA427C1155CB611DBFE9ED1421 (void);
// 0x0000010A System.Void Grpc.Core.Internal.AtomicCounter::IncrementIfNonzero(System.Boolean&)
extern void AtomicCounter_IncrementIfNonzero_m85213E168DF50ACC8BF55AEB54FA6A7CA210DCD8 (void);
// 0x0000010B System.Int64 Grpc.Core.Internal.AtomicCounter::Decrement()
extern void AtomicCounter_Decrement_mC537964EF45F37381D7537CE7E9F97FB974AC4EF (void);
// 0x0000010C System.Int64 Grpc.Core.Internal.AtomicCounter::get_Count()
extern void AtomicCounter_get_Count_m6124B5FD6885F256883936D90DAAF343A479B2AA (void);
// 0x0000010D System.Boolean Grpc.Core.Internal.AuthContextSafeHandle::ReleaseHandle()
extern void AuthContextSafeHandle_ReleaseHandle_m2755C22C25D470FA3D2B7374A1E62FC3AA88EF3D (void);
// 0x0000010E System.Void Grpc.Core.Internal.AuthContextSafeHandle::.cctor()
extern void AuthContextSafeHandle__cctor_m606E19E9CE3741F8F13468ECB1FA9C5D35BE720E (void);
// 0x0000010F System.Void Grpc.Core.Internal.IOpCompletionCallback::OnComplete(System.Boolean)
// 0x00000110 Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.BatchContextSafeHandle::Create()
extern void BatchContextSafeHandle_Create_mB4AC3FE7E16F4EFD94684C3DF25AC33BEABAB6CC (void);
// 0x00000111 System.IntPtr Grpc.Core.Internal.BatchContextSafeHandle::get_Handle()
extern void BatchContextSafeHandle_get_Handle_m76630540B833E3DBBF1D235137A8C8F797A0516C (void);
// 0x00000112 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.BatchContextSafeHandle>)
extern void BatchContextSafeHandle_SetReturnToPoolAction_m0447794758AA54A6DDB3FC9ACCA4042E0ADF85F9 (void);
// 0x00000113 System.Void Grpc.Core.Internal.BatchContextSafeHandle::SetCompletionCallback(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void BatchContextSafeHandle_SetCompletionCallback_mF4E678B089D1EEA4F467CDF41444B002021201D7 (void);
// 0x00000114 Grpc.Core.Metadata Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedInitialMetadata()
extern void BatchContextSafeHandle_GetReceivedInitialMetadata_mC5E5D67B3A70657444F073F350932B104E32C1E7 (void);
// 0x00000115 Grpc.Core.Internal.ClientSideStatus Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedStatusOnClient()
extern void BatchContextSafeHandle_GetReceivedStatusOnClient_m28B929FDC7CF70D0E658DCA592DEACD35CBB7684 (void);
// 0x00000116 System.Byte[] Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedMessage()
extern void BatchContextSafeHandle_GetReceivedMessage_m6BCA1A53023472AD693A263DFB3E7142235937E5 (void);
// 0x00000117 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::GetReceivedCloseOnServerCancelled()
extern void BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_mB781F2C349E9D949D9EC1B4635612A5E7390F743 (void);
// 0x00000118 System.Void Grpc.Core.Internal.BatchContextSafeHandle::Recycle()
extern void BatchContextSafeHandle_Recycle_m3FBA74C4DB223275EF3EA8C18FD132487148EBB8 (void);
// 0x00000119 System.Boolean Grpc.Core.Internal.BatchContextSafeHandle::ReleaseHandle()
extern void BatchContextSafeHandle_ReleaseHandle_mEEB1316F08EA9A548388ACD38980BF442E0F3AAC (void);
// 0x0000011A System.Void Grpc.Core.Internal.BatchContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mE72AC3EAD8755C29763A55D68C043E0426E56A8C (void);
// 0x0000011B System.Void Grpc.Core.Internal.BatchContextSafeHandle::.cctor()
extern void BatchContextSafeHandle__cctor_mEFBAD84565CDD24AC749CA3013A0414BC8340C9D (void);
// 0x0000011C System.Void Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::.ctor(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionCallbackData__ctor_mB64711B2AA741620F54325DEF003FB870ECA22C4 (void);
// 0x0000011D Grpc.Core.Internal.BatchCompletionDelegate Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_Callback()
extern void CompletionCallbackData_get_Callback_m52A5FB56BF0A105FA230A41C0676D6227538E273 (void);
// 0x0000011E System.Object Grpc.Core.Internal.BatchContextSafeHandle/CompletionCallbackData::get_State()
extern void CompletionCallbackData_get_State_m3CAA8F5A8E8E689A0DE4C258AB5F93E3093AFECD (void);
// 0x0000011F System.Boolean Grpc.Core.Internal.CallCredentialsSafeHandle::ReleaseHandle()
extern void CallCredentialsSafeHandle_ReleaseHandle_mAD67F0D45D45E0F19B85130238C522702B16AD69 (void);
// 0x00000120 System.Void Grpc.Core.Internal.CallCredentialsSafeHandle::.cctor()
extern void CallCredentialsSafeHandle__cctor_m2D97B9058822A357FE4134021243E2D45E1D7F67 (void);
// 0x00000121 System.Void Grpc.Core.Internal.CallErrorExtensions::CheckOk(Grpc.Core.Internal.CallError)
extern void CallErrorExtensions_CheckOk_mB87CB9AEEC252E93471B4B52F63C3FC211545BE8 (void);
// 0x00000122 System.Void Grpc.Core.Internal.CallSafeHandle::.ctor()
extern void CallSafeHandle__ctor_mFC03FF19D4ED82B0C88C66AAE0A46CE17F95C028 (void);
// 0x00000123 System.Void Grpc.Core.Internal.CallSafeHandle::Initialize(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void CallSafeHandle_Initialize_m7D747B881AA8887F877AFC2CEB4ABCE1BD0FFE97 (void);
// 0x00000124 System.Void Grpc.Core.Internal.CallSafeHandle::SetCredentials(Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void CallSafeHandle_SetCredentials_mB2EF1629921925FC5697F6882528ECFD3654FD2E (void);
// 0x00000125 System.Void Grpc.Core.Internal.CallSafeHandle::StartUnary(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void CallSafeHandle_StartUnary_m5A4C02A10D9552633AC71E63336242EF13C1058E (void);
// 0x00000126 System.Void Grpc.Core.Internal.CallSafeHandle::Cancel()
extern void CallSafeHandle_Cancel_m8E53318BD9895FDC102E688C13CD0A3339BB22B9 (void);
// 0x00000127 System.Void Grpc.Core.Internal.CallSafeHandle::CancelWithStatus(Grpc.Core.Status)
extern void CallSafeHandle_CancelWithStatus_mE30CA3CEE9E8201335826AD40D71A1A24211BC10 (void);
// 0x00000128 System.Boolean Grpc.Core.Internal.CallSafeHandle::ReleaseHandle()
extern void CallSafeHandle_ReleaseHandle_m4AAD68819A005DDDB2467FDF759FBB12949CEBE3 (void);
// 0x00000129 System.Void Grpc.Core.Internal.CallSafeHandle::.cctor()
extern void CallSafeHandle__cctor_mF21C78E2E295FB578A2E3F7932C8283AC3C4FD22 (void);
// 0x0000012A System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.cctor()
extern void U3CU3Ec__cctor_m21ADD842B2D2C9D59066989ECE40963D4BBFA316 (void);
// 0x0000012B System.Void Grpc.Core.Internal.CallSafeHandle/<>c::.ctor()
extern void U3CU3Ec__ctor_m90C1508424A7014A36D29487F899FCDA69961704 (void);
// 0x0000012C System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_0(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_0_m754CDAABECE6F70DBD160532B70A3B4941D2B7AE (void);
// 0x0000012D System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_1(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_1_mF0D931D960C132935C26784631B7C922772D8F6A (void);
// 0x0000012E System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_2(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_2_m9407191C0B723D8B73DAFB05A60B71D2ABC0EAEA (void);
// 0x0000012F System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_3(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_3_mB39AA929197C5FFFFDE68517D47F3A6BEC1802BA (void);
// 0x00000130 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_4(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_4_mEFBF4F5A52B84FFA0E19BA6094F72FF88E1BD224 (void);
// 0x00000131 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_5(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_5_m53C3551E34DE1D0A156952E32E4A2DBA6CD702C2 (void);
// 0x00000132 System.Void Grpc.Core.Internal.CallSafeHandle/<>c::<.cctor>b__33_6(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void U3CU3Ec_U3C_cctorU3Eb__33_6_mF1D813B22F73D9EFBF2568334F85260A2BEDC3D0 (void);
// 0x00000133 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.ctor()
extern void ChannelArgsSafeHandle__ctor_m11E7C819C013E825B106EBC6D51EF69D409CF4F7 (void);
// 0x00000134 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::CreateNull()
extern void ChannelArgsSafeHandle_CreateNull_mAC7086A8486B6B76393565E661E56523B3D7A687 (void);
// 0x00000135 Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.ChannelArgsSafeHandle::Create(System.Int32)
extern void ChannelArgsSafeHandle_Create_mE8BB97CC42501D12852D20D974685E5760A6FD30 (void);
// 0x00000136 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetString(System.Int32,System.String,System.String)
extern void ChannelArgsSafeHandle_SetString_m8B7D88EB0935EBF23606D07736BEA4A1F79248ED (void);
// 0x00000137 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::SetInteger(System.Int32,System.String,System.Int32)
extern void ChannelArgsSafeHandle_SetInteger_m144AC20B1C62F95B03AE26B70543EBBDAFE16BCC (void);
// 0x00000138 System.Boolean Grpc.Core.Internal.ChannelArgsSafeHandle::ReleaseHandle()
extern void ChannelArgsSafeHandle_ReleaseHandle_m8AFC85D009FA1F07BD287B2D6129B487F5AD211F (void);
// 0x00000139 System.Void Grpc.Core.Internal.ChannelArgsSafeHandle::.cctor()
extern void ChannelArgsSafeHandle__cctor_m6908F2D7CE5EC98A06E9A6E315F402604F3DD547 (void);
// 0x0000013A System.Boolean Grpc.Core.Internal.ChannelCredentialsSafeHandle::ReleaseHandle()
extern void ChannelCredentialsSafeHandle_ReleaseHandle_mD5028109E4BBC168C0A0AA0EBC335E91EE10122F (void);
// 0x0000013B System.Void Grpc.Core.Internal.ChannelCredentialsSafeHandle::.cctor()
extern void ChannelCredentialsSafeHandle__cctor_mE2A307F5E1F4FC10A2E3859327DE474C727F57A0 (void);
// 0x0000013C Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateInsecure(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateInsecure_m7148B212372EDDAB59DD6B0ED5AFC3BFC64D8687 (void);
// 0x0000013D Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateSecure(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void ChannelSafeHandle_CreateSecure_m8F7757A40278AF04D33AA8BF3AAD34AFC7F2F531 (void);
// 0x0000013E Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.ChannelSafeHandle::CreateCall(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void ChannelSafeHandle_CreateCall_m04317411E56DC8692B96EA917767EEB39FABA4FF (void);
// 0x0000013F Grpc.Core.ChannelState Grpc.Core.Internal.ChannelSafeHandle::CheckConnectivityState(System.Boolean)
extern void ChannelSafeHandle_CheckConnectivityState_mF544E4A2799C6588AF1357041C70EFEC9A040141 (void);
// 0x00000140 System.Void Grpc.Core.Internal.ChannelSafeHandle::WatchConnectivityState(Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void ChannelSafeHandle_WatchConnectivityState_m33DDA48710CA7F8ED04FDF69A06ACF3FCAF3B7FB (void);
// 0x00000141 System.Boolean Grpc.Core.Internal.ChannelSafeHandle::ReleaseHandle()
extern void ChannelSafeHandle_ReleaseHandle_mBC031877B037E873383FA57CE8D53068C851E5F6 (void);
// 0x00000142 System.Void Grpc.Core.Internal.ChannelSafeHandle::.cctor()
extern void ChannelSafeHandle__cctor_m3D3931EFB2890593B0B32B23CA14129DF23B590A (void);
// 0x00000143 System.Void Grpc.Core.Internal.ClientSideStatus::.ctor(Grpc.Core.Status,Grpc.Core.Metadata)
extern void ClientSideStatus__ctor_mF2B0E195E5D71A346E723548EE40369EF553C510 (void);
// 0x00000144 Grpc.Core.Status Grpc.Core.Internal.ClientSideStatus::get_Status()
extern void ClientSideStatus_get_Status_m218E9065B0C36620CDA01A167E2287669A897193 (void);
// 0x00000145 Grpc.Core.Metadata Grpc.Core.Internal.ClientSideStatus::get_Trailers()
extern void ClientSideStatus_get_Trailers_mF84F181401CFADA53E5C070736385AE0C55023F7 (void);
// 0x00000146 System.Void Grpc.Core.Internal.CompletionQueueEvent::.cctor()
extern void CompletionQueueEvent__cctor_mC5DBC5EB96CF4A8D3E33D09F2A72E4A36602C98B (void);
// 0x00000147 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateSync()
extern void CompletionQueueSafeHandle_CreateSync_m2C2472220880A8D3E02D902A5D24BECFAE7FAF7A (void);
// 0x00000148 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.CompletionQueueSafeHandle::CreateAsync(Grpc.Core.Internal.CompletionRegistry)
extern void CompletionQueueSafeHandle_CreateAsync_mD747C96186EE79C50BF4035809B4AA14AAC20D4C (void);
// 0x00000149 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Next()
extern void CompletionQueueSafeHandle_Next_m9C347800C9C5B3B95EAEB0979B2D0996AB14AC17 (void);
// 0x0000014A Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.CompletionQueueSafeHandle::Pluck(System.IntPtr)
extern void CompletionQueueSafeHandle_Pluck_mFE7984F69B061FA485BD8C0F0BBD6A59154202B0 (void);
// 0x0000014B Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope Grpc.Core.Internal.CompletionQueueSafeHandle::NewScope()
extern void CompletionQueueSafeHandle_NewScope_m5EADE3D4895E78B5CD5EC03F28155AA0616049EA (void);
// 0x0000014C System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::Shutdown()
extern void CompletionQueueSafeHandle_Shutdown_m0B056CFE2EF29B72F32CCC21DD4F6E96761CDFFA (void);
// 0x0000014D Grpc.Core.Internal.CompletionRegistry Grpc.Core.Internal.CompletionQueueSafeHandle::get_CompletionRegistry()
extern void CompletionQueueSafeHandle_get_CompletionRegistry_m0640C236F79E4B674461F040BFF0C41B2B866B86 (void);
// 0x0000014E System.Boolean Grpc.Core.Internal.CompletionQueueSafeHandle::ReleaseHandle()
extern void CompletionQueueSafeHandle_ReleaseHandle_m6AB69BBFF631F413427A5C32D53827E34DE711C2 (void);
// 0x0000014F System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::DecrementShutdownRefcount()
extern void CompletionQueueSafeHandle_DecrementShutdownRefcount_mDCF9E4418A680DA65823E98BAD10AF886DDE1B63 (void);
// 0x00000150 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::BeginOp()
extern void CompletionQueueSafeHandle_BeginOp_m7AE79AAFD991F96F155C1C1EA65F13910D6226F2 (void);
// 0x00000151 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::EndOp()
extern void CompletionQueueSafeHandle_EndOp_mBB98F57D5DA229EB5395C0C49F51E20F9F41BA00 (void);
// 0x00000152 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle::.cctor()
extern void CompletionQueueSafeHandle__cctor_mA7904BF3E043473B9F0A12F024C7BAED646D3A2A (void);
// 0x00000153 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::.ctor(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void UsageScope__ctor_m365D9BEEBB3E3410274408F3DAB4286A779590EF (void);
// 0x00000154 System.Void Grpc.Core.Internal.CompletionQueueSafeHandle/UsageScope::Dispose()
extern void UsageScope_Dispose_m0AA11ED37C8A7E00DDDB8B8FBF632B49F4DF8445 (void);
// 0x00000155 System.Void Grpc.Core.Internal.BatchCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void BatchCompletionDelegate__ctor_mBE15BFD3ECD9A6C2A9E8F54942D2C0E826041074 (void);
// 0x00000156 System.Void Grpc.Core.Internal.BatchCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object)
extern void BatchCompletionDelegate_Invoke_m8ADCDF00C08A7306EDB17C8C7979141737D02AA5 (void);
// 0x00000157 System.IAsyncResult Grpc.Core.Internal.BatchCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.BatchContextSafeHandle,System.Object,System.AsyncCallback,System.Object)
extern void BatchCompletionDelegate_BeginInvoke_mDDD621F1E8829BCF78163AE365A54CE58E5CFAB1 (void);
// 0x00000158 System.Void Grpc.Core.Internal.BatchCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void BatchCompletionDelegate_EndInvoke_mA5F70A0AFBF4EE8DD7BDD50D767543578AAF1EB7 (void);
// 0x00000159 System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::.ctor(System.Object,System.IntPtr)
extern void RequestCallCompletionDelegate__ctor_mFC109CC786AA0BF384831CEB8E566D3812A1B041 (void);
// 0x0000015A System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::Invoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void RequestCallCompletionDelegate_Invoke_m9AA919418CD2D783884DBF7FFCC04121FA175B9C (void);
// 0x0000015B System.IAsyncResult Grpc.Core.Internal.RequestCallCompletionDelegate::BeginInvoke(System.Boolean,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void RequestCallCompletionDelegate_BeginInvoke_m8DBB9D1D39784417E3497E8A991680D2CD1CB95F (void);
// 0x0000015C System.Void Grpc.Core.Internal.RequestCallCompletionDelegate::EndInvoke(System.IAsyncResult)
extern void RequestCallCompletionDelegate_EndInvoke_mA1AEFDC4F667588A3ABC7D7E428EE9294CBDCC05 (void);
// 0x0000015D System.Void Grpc.Core.Internal.CompletionRegistry::.ctor(Grpc.Core.GrpcEnvironment,System.Func`1<Grpc.Core.Internal.BatchContextSafeHandle>,System.Func`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void CompletionRegistry__ctor_mF4EBED000C8CC4EF276ED0E63CD363B14732023F (void);
// 0x0000015E System.Void Grpc.Core.Internal.CompletionRegistry::Register(System.IntPtr,Grpc.Core.Internal.IOpCompletionCallback)
extern void CompletionRegistry_Register_m2BF4005A3222273B84718AA8D343665112B273D8 (void);
// 0x0000015F Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.CompletionRegistry::RegisterBatchCompletion(Grpc.Core.Internal.BatchCompletionDelegate,System.Object)
extern void CompletionRegistry_RegisterBatchCompletion_m64F64DFB5CD145BF438C7817922570DD6351BECB (void);
// 0x00000160 Grpc.Core.Internal.IOpCompletionCallback Grpc.Core.Internal.CompletionRegistry::Extract(System.IntPtr)
extern void CompletionRegistry_Extract_mF9D8820D57DC09A94C105496733437165F89B71B (void);
// 0x00000161 System.Void Grpc.Core.Internal.CompletionRegistry::.cctor()
extern void CompletionRegistry__cctor_m7A56BFB79181E4F41E5D0919BB04D3418F3FF601 (void);
// 0x00000162 System.Boolean Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::Equals(System.IntPtr,System.IntPtr)
extern void IntPtrComparer_Equals_mE3E7B531523248226CEF9C0D6AE2EE7E9DD928EC (void);
// 0x00000163 System.Int32 Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::GetHashCode(System.IntPtr)
extern void IntPtrComparer_GetHashCode_m3DAE0C5EC2D347A22FFBA3C5B4C58B5AD38B209C (void);
// 0x00000164 System.Void Grpc.Core.Internal.CompletionRegistry/IntPtrComparer::.ctor()
extern void IntPtrComparer__ctor_m1334BA15604BC3F9D3139133CD8A72B625AB4B7D (void);
// 0x00000165 System.Boolean Grpc.Core.Internal.CStringSafeHandle::ReleaseHandle()
extern void CStringSafeHandle_ReleaseHandle_mAE75E95CC4A2DF87361E01A505CDCE4548A3F3AE (void);
// 0x00000166 System.Void Grpc.Core.Internal.CStringSafeHandle::.cctor()
extern void CStringSafeHandle__cctor_m036B07A8EEAA4432B353D127A8877065E4695C19 (void);
// 0x00000167 System.Void Grpc.Core.Internal.DebugStats::CheckOK()
extern void DebugStats_CheckOK_m3B586EE449A70C76C87C1593BAF657E0C692753C (void);
// 0x00000168 System.Void Grpc.Core.Internal.DebugStats::DebugWarning(System.String)
extern void DebugStats_DebugWarning_m640ED3B5C92A90073F22B80B5C09380E900BFF9C (void);
// 0x00000169 System.Void Grpc.Core.Internal.DebugStats::.ctor()
extern void DebugStats__ctor_m4BDBC05DBED2B6663E43A3FFAE05B0DF7612C980 (void);
// 0x0000016A System.Void Grpc.Core.Internal.DefaultObjectPool`1::.ctor(System.Func`1<T>,System.Int32,System.Int32)
// 0x0000016B T Grpc.Core.Internal.DefaultObjectPool`1::Lease()
// 0x0000016C T Grpc.Core.Internal.DefaultObjectPool`1::LeaseInternal()
// 0x0000016D System.Void Grpc.Core.Internal.DefaultObjectPool`1::Return(T)
// 0x0000016E System.Void Grpc.Core.Internal.DefaultObjectPool`1::Dispose()
// 0x0000016F System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::.ctor(System.Int32)
// 0x00000170 System.Collections.Generic.Queue`1<T> Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_Queue()
// 0x00000171 System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_CreateBudget()
// 0x00000172 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_CreateBudget(System.Int32)
// 0x00000173 System.Int32 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::get_DisposeBudget()
// 0x00000174 System.Void Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData::set_DisposeBudget(System.Int32)
// 0x00000175 System.Void Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::.ctor()
// 0x00000176 Grpc.Core.Internal.DefaultObjectPool`1/ThreadLocalData<T> Grpc.Core.Internal.DefaultObjectPool`1/<>c__DisplayClass9_0::<.ctor>b__0()
// 0x00000177 System.Void Grpc.Core.Internal.DefaultSslRootsOverride::Override(Grpc.Core.Internal.NativeMethods)
extern void DefaultSslRootsOverride_Override_mA6D3245B4ED4A9D2D84E2ECE87814ABAF566803F (void);
// 0x00000178 System.Void Grpc.Core.Internal.DefaultSslRootsOverride::.cctor()
extern void DefaultSslRootsOverride__cctor_mBA77775AC6EEEF68D246F9EB224C81BE2F38ADD5 (void);
// 0x00000179 System.Void Grpc.Core.Internal.GrpcThreadPool::.ctor(Grpc.Core.GrpcEnvironment,System.Int32,System.Int32,System.Boolean)
extern void GrpcThreadPool__ctor_m6F899111D8D6F214478747AC0B92F93A0F26BAD9 (void);
// 0x0000017A System.Void Grpc.Core.Internal.GrpcThreadPool::Start()
extern void GrpcThreadPool_Start_m1206087A927C88DF77D8FED20510B316BF936DF7 (void);
// 0x0000017B System.Threading.Tasks.Task Grpc.Core.Internal.GrpcThreadPool::StopAsync()
extern void GrpcThreadPool_StopAsync_m4BC773D2516625BA5AF6551BCB75F906F7F4C778 (void);
// 0x0000017C System.Boolean Grpc.Core.Internal.GrpcThreadPool::get_IsAlive()
extern void GrpcThreadPool_get_IsAlive_m2EE41F016E63D486139CEB23C6856A17C04DA768 (void);
// 0x0000017D System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::get_CompletionQueues()
extern void GrpcThreadPool_get_CompletionQueues_m791ABD76B887D935B1FF06504A1FB26BEAF2E699 (void);
// 0x0000017E System.Threading.Thread Grpc.Core.Internal.GrpcThreadPool::CreateAndStartThread(System.Int32,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_CreateAndStartThread_m4948A1B5A5FB9314B5E81B21AD8A13CDFFE4E6B5 (void);
// 0x0000017F System.Void Grpc.Core.Internal.GrpcThreadPool::RunHandlerLoop(Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Profiling.IProfiler)
extern void GrpcThreadPool_RunHandlerLoop_m97FA3195B428003D4A39ECC0D57AB7BFA7E62EC5 (void);
// 0x00000180 System.Collections.Generic.IReadOnlyCollection`1<Grpc.Core.Internal.CompletionQueueSafeHandle> Grpc.Core.Internal.GrpcThreadPool::CreateCompletionQueueList(Grpc.Core.GrpcEnvironment,System.Int32)
extern void GrpcThreadPool_CreateCompletionQueueList_m7482874DF7EA8398C0540D91E5AFB662C5C8811E (void);
// 0x00000181 System.Void Grpc.Core.Internal.GrpcThreadPool::RunCompletionQueueEventCallback(Grpc.Core.Internal.IOpCompletionCallback,System.Boolean)
extern void GrpcThreadPool_RunCompletionQueueEventCallback_m39A1D77ADA89DA8430748392D74672BED9FAD57E (void);
// 0x00000182 System.Void Grpc.Core.Internal.GrpcThreadPool::.cctor()
extern void GrpcThreadPool__cctor_m2819570A5CD4D1FC157FDB35C2FC467BCC62C40C (void);
// 0x00000183 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_0(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_0_m440D949B780EECBBB7E0ECA750D6A357AAC5BFD3 (void);
// 0x00000184 System.Void Grpc.Core.Internal.GrpcThreadPool::<.ctor>b__15_1(System.Object)
extern void GrpcThreadPool_U3C_ctorU3Eb__15_1_mC25D9AE36CC4E511D6C63B7A52DB81B351121F23 (void);
// 0x00000185 System.Void Grpc.Core.Internal.GrpcThreadPool::<StopAsync>b__17_0()
extern void GrpcThreadPool_U3CStopAsyncU3Eb__17_0_mB0B1CF9007D7F365567023D5E5618A030DFBDBBD (void);
// 0x00000186 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.cctor()
extern void U3CU3Ec__cctor_mF3C7DD79D7F30FFA279AA0693EC0465ABB519D76 (void);
// 0x00000187 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c::.ctor()
extern void U3CU3Ec__ctor_mAB5F29D0B08A84399356FF6B0F5DDE45D0F500F7 (void);
// 0x00000188 System.Boolean Grpc.Core.Internal.GrpcThreadPool/<>c::<get_IsAlive>b__19_0(System.Threading.Thread)
extern void U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_mB9CCED19F073763C4A8063DA97AC8FB731CC3EAB (void);
// 0x00000189 System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_m401472715865CBDB7FC5986439B2E211E8469E41 (void);
// 0x0000018A System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass22_0::<CreateAndStartThread>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_mA5338078025A37EA515EED03FAA2985F8346DCF6 (void);
// 0x0000018B System.Void Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m7356E4177C9DC97DDFAD2A48D8FEB6C0647E124C (void);
// 0x0000018C Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m28DE366C5D89A82BC039FCB3FD9B9A7EDA3A1CA0 (void);
// 0x0000018D Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.GrpcThreadPool/<>c__DisplayClass24_0::<CreateCompletionQueueList>b__1()
extern void U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_mD40B4DC7284616DC4310F5923959037C2B9ED733 (void);
// 0x0000018E System.Void Grpc.Core.Internal.IUnaryResponseClientCallback::OnUnaryResponseClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus,System.Byte[],Grpc.Core.Metadata)
// 0x0000018F System.Void Grpc.Core.Internal.IReceivedStatusOnClientCallback::OnReceivedStatusOnClient(System.Boolean,Grpc.Core.Internal.ClientSideStatus)
// 0x00000190 System.Void Grpc.Core.Internal.IReceivedMessageCallback::OnReceivedMessage(System.Boolean,System.Byte[])
// 0x00000191 System.Void Grpc.Core.Internal.IReceivedResponseHeadersCallback::OnReceivedResponseHeaders(System.Boolean,Grpc.Core.Metadata)
// 0x00000192 System.Void Grpc.Core.Internal.ISendCompletionCallback::OnSendCompletion(System.Boolean)
// 0x00000193 System.Void Grpc.Core.Internal.ISendStatusFromServerCompletionCallback::OnSendStatusFromServerCompletion(System.Boolean)
// 0x00000194 System.Void Grpc.Core.Internal.IReceivedCloseOnServerCallback::OnReceivedCloseOnServer(System.Boolean,System.Boolean)
// 0x00000195 System.Void Grpc.Core.Internal.INativeCall::Cancel()
// 0x00000196 System.Void Grpc.Core.Internal.INativeCall::CancelWithStatus(Grpc.Core.Status)
// 0x00000197 System.Void Grpc.Core.Internal.INativeCall::StartUnary(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
// 0x00000198 T Grpc.Core.Internal.IObjectPool`1::Lease()
// 0x00000199 System.Void Grpc.Core.Internal.IPooledObject`1::SetReturnToPoolAction(System.Action`1<T>)
// 0x0000019A System.String Grpc.Core.Internal.MarshalUtils::PtrToStringUTF8(System.IntPtr,System.Int32)
extern void MarshalUtils_PtrToStringUTF8_mD4ECFA1F871D8AED5A3DA04856A42CF162FEB249 (void);
// 0x0000019B System.Byte[] Grpc.Core.Internal.MarshalUtils::GetBytesASCII(System.String)
extern void MarshalUtils_GetBytesASCII_m6A3F9E187322DD70D90C657B9A1E05CAABB421EC (void);
// 0x0000019C System.String Grpc.Core.Internal.MarshalUtils::GetStringASCII(System.Byte[])
extern void MarshalUtils_GetStringASCII_mDF203D013FC5D674B152F43792C5F3E36BEF0272 (void);
// 0x0000019D System.Void Grpc.Core.Internal.MarshalUtils::.cctor()
extern void MarshalUtils__cctor_m564447B61B086BBC4C7EC1D8B47BBE3C01ECD966 (void);
// 0x0000019E System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.ctor()
extern void MetadataArraySafeHandle__ctor_m1EC6AC7F84DBD9DBB41BC1E4FD14A67C92FD86FD (void);
// 0x0000019F Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.MetadataArraySafeHandle::Create(Grpc.Core.Metadata)
extern void MetadataArraySafeHandle_Create_mEEE2787186A0E19027C32E9066E0F86911F2176D (void);
// 0x000001A0 Grpc.Core.Metadata Grpc.Core.Internal.MetadataArraySafeHandle::ReadMetadataFromPtrUnsafe(System.IntPtr)
extern void MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_m29D26D4521B9BEA15EAA971FC8218D8C0EFA9A14 (void);
// 0x000001A1 System.Boolean Grpc.Core.Internal.MetadataArraySafeHandle::ReleaseHandle()
extern void MetadataArraySafeHandle_ReleaseHandle_mBA48C75CD4AF2132439A694508E1BD975322CEA6 (void);
// 0x000001A2 System.Void Grpc.Core.Internal.MetadataArraySafeHandle::.cctor()
extern void MetadataArraySafeHandle__cctor_m125DA06A0E439632B7E8B1639F3B4E26CE44E671 (void);
// 0x000001A3 System.Void Grpc.Core.Internal.NativeExtension::.ctor()
extern void NativeExtension__ctor_mB2EFF186C3B80CAE68F46BC3CA08D780D5947038 (void);
// 0x000001A4 Grpc.Core.Internal.NativeExtension Grpc.Core.Internal.NativeExtension::Get()
extern void NativeExtension_Get_m99941420928FDE2FC56257B564FAB4F37C510656 (void);
// 0x000001A5 Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeExtension::get_NativeMethods()
extern void NativeExtension_get_NativeMethods_mB7ED46F0C2E9206E27743B76CF3C667CC0AAB3DA (void);
// 0x000001A6 Grpc.Core.Internal.UnmanagedLibrary Grpc.Core.Internal.NativeExtension::Load()
extern void NativeExtension_Load_mA6FD9A6B6E0D2FD5DEDF16A29B0E53B2A8510D22 (void);
// 0x000001A7 System.String Grpc.Core.Internal.NativeExtension::GetAssemblyPath()
extern void NativeExtension_GetAssemblyPath_mF63A485267B8F0C0C15F3E46F30F52EF949CEA6F (void);
// 0x000001A8 System.Boolean Grpc.Core.Internal.NativeExtension::IsFileUri(System.String)
extern void NativeExtension_IsFileUri_m6B83DD5B60E93DF3E53097DC1DB94ECA40355003 (void);
// 0x000001A9 System.String Grpc.Core.Internal.NativeExtension::GetPlatformString()
extern void NativeExtension_GetPlatformString_m453DE7843758102D2D25E50F308BE655943BED21 (void);
// 0x000001AA System.String Grpc.Core.Internal.NativeExtension::GetArchitectureString()
extern void NativeExtension_GetArchitectureString_m07917AEE4E101B9DD8F2555BAB731B44733D5806 (void);
// 0x000001AB System.String Grpc.Core.Internal.NativeExtension::GetNativeLibraryFilename()
extern void NativeExtension_GetNativeLibraryFilename_mE863680E2B2DDDB3B482193C553792B449C8C949 (void);
// 0x000001AC System.Void Grpc.Core.Internal.NativeExtension::.cctor()
extern void NativeExtension__cctor_m2660EE0FC4E9F262D241150C343C2BA593A3DB9A (void);
// 0x000001AD System.Void Grpc.Core.Internal.GprLogDelegate::.ctor(System.Object,System.IntPtr)
extern void GprLogDelegate__ctor_m731816CC93A1148F36B3BF9FBAE798CD5D7F5B67 (void);
// 0x000001AE System.Void Grpc.Core.Internal.GprLogDelegate::Invoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void GprLogDelegate_Invoke_m7D9471F3101F6911E9C1D09F8A25E80C8773B4D4 (void);
// 0x000001AF System.IAsyncResult Grpc.Core.Internal.GprLogDelegate::BeginInvoke(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void GprLogDelegate_BeginInvoke_mF4E79C06A56E374733D3D0F20B99F4354D7F2E0A (void);
// 0x000001B0 System.Void Grpc.Core.Internal.GprLogDelegate::EndInvoke(System.IAsyncResult)
extern void GprLogDelegate_EndInvoke_mE9089AB3FB327071FD657FAC6DCF3855298CA7C5 (void);
// 0x000001B1 System.Void Grpc.Core.Internal.NativeLogRedirector::Redirect(Grpc.Core.Internal.NativeMethods)
extern void NativeLogRedirector_Redirect_m3576E42AC2DF4E5EF7E75765A99C46B204097D21 (void);
// 0x000001B2 System.Void Grpc.Core.Internal.NativeLogRedirector::HandleWrite(System.IntPtr,System.Int32,System.UInt64,System.IntPtr,System.IntPtr)
extern void NativeLogRedirector_HandleWrite_mCCFC557D1FC9F31F948469634309BF783FE7C78E (void);
// 0x000001B3 System.Void Grpc.Core.Internal.NativeLogRedirector::.cctor()
extern void NativeLogRedirector__cctor_mEFB5F4E7E4F334B3C9AAC1CF9A78BAD7BBBD3EDC (void);
// 0x000001B4 System.Void Grpc.Core.Internal.NativeMetadataInterceptor::.ctor(System.Object,System.IntPtr)
extern void NativeMetadataInterceptor__ctor_mCFF8D36FEFCFFEBDB16E4E6F1E94E4F061F01D04 (void);
// 0x000001B5 System.Void Grpc.Core.Internal.NativeMetadataInterceptor::Invoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean)
extern void NativeMetadataInterceptor_Invoke_mC7A4F58A16BF839517C1F0208375BB5676ECCA8D (void);
// 0x000001B6 System.IAsyncResult Grpc.Core.Internal.NativeMetadataInterceptor::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Boolean,System.AsyncCallback,System.Object)
extern void NativeMetadataInterceptor_BeginInvoke_mB0871CFE06F601E370297F7A5B34B91024C6E784 (void);
// 0x000001B7 System.Void Grpc.Core.Internal.NativeMetadataInterceptor::EndInvoke(System.IAsyncResult)
extern void NativeMetadataInterceptor_EndInvoke_m1874F365DC67C1250D09B2BC4ABE774A10D4066C (void);
// 0x000001B8 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::.ctor(System.Object,System.IntPtr)
extern void NativeCallbackTestDelegate__ctor_m9346CB0CC4D238109ABF9FA9169563FD75F6ECF4 (void);
// 0x000001B9 System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::Invoke(System.Boolean)
extern void NativeCallbackTestDelegate_Invoke_mCA69B5B83BF1747CA9FBD69034FACF9B86FBA005 (void);
// 0x000001BA System.IAsyncResult Grpc.Core.Internal.NativeCallbackTestDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern void NativeCallbackTestDelegate_BeginInvoke_m819503F7767168B929148540EDF7CC80A00E8D27 (void);
// 0x000001BB System.Void Grpc.Core.Internal.NativeCallbackTestDelegate::EndInvoke(System.IAsyncResult)
extern void NativeCallbackTestDelegate_EndInvoke_m134764FA8DACDEF55522D7A9FE5240F7ACF97D4C (void);
// 0x000001BC System.Void Grpc.Core.Internal.NativeMethods::.ctor(Grpc.Core.Internal.UnmanagedLibrary)
extern void NativeMethods__ctor_m816592ECB515D41ED5B4A447DC445AC6EC80E177 (void);
// 0x000001BD Grpc.Core.Internal.NativeMethods Grpc.Core.Internal.NativeMethods::Get()
extern void NativeMethods_Get_mE5663787C4D3E84B167DC3E64546E55DBE1E1ACC (void);
// 0x000001BE T Grpc.Core.Internal.NativeMethods::GetMethodDelegate(Grpc.Core.Internal.UnmanagedLibrary)
// 0x000001BF System.String Grpc.Core.Internal.NativeMethods::RemoveStringSuffix(System.String,System.String)
extern void NativeMethods_RemoveStringSuffix_mAC90E66554FAD83EBFF1990C6B4662A5D7F25079 (void);
// 0x000001C0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_init_delegate__ctor_m7B920F75CE6D8F052DC86AA818834F5DB8B7AC64 (void);
// 0x000001C1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::Invoke()
extern void grpcsharp_init_delegate_Invoke_m336CD2C9BA89CE5B8BAC1F55B7933C2469D308B8 (void);
// 0x000001C2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_init_delegate_BeginInvoke_m9F2AA0BE03F82BC15F75377AE3D90301DCC9B2CD (void);
// 0x000001C3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_init_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_init_delegate_EndInvoke_mDD4A70C37A95CDB7A84ECA63858CFEAE617D0BA6 (void);
// 0x000001C4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_shutdown_delegate__ctor_m241F2E47581EBDB79FB803C09B002910A2FB8E12 (void);
// 0x000001C5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::Invoke()
extern void grpcsharp_shutdown_delegate_Invoke_m2C4E227AF0326081D23576F83FCB2C06233281EC (void);
// 0x000001C6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_shutdown_delegate_BeginInvoke_mAF2ACA9DA017348C8C8BF3CB8136DBE307788741 (void);
// 0x000001C7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_shutdown_delegate_EndInvoke_m2E44B720F2E529C46F848DE8FC1AD75890E537C1 (void);
// 0x000001C8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_version_string_delegate__ctor_m3F0D5655AF7F351AAD391675F5FEA08737249B47 (void);
// 0x000001C9 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::Invoke()
extern void grpcsharp_version_string_delegate_Invoke_m6EF5955F756638102497CEB01EDF7C632F63B7C8 (void);
// 0x000001CA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_version_string_delegate_BeginInvoke_m0CAB945889B9BB0B4E96F2559373959D59309CCE (void);
// 0x000001CB System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_version_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_version_string_delegate_EndInvoke_mDFCDB2470E9A2D0639CC3A1B1A26B4235558D643 (void);
// 0x000001CC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_create_delegate__ctor_mA362A65DC19016221027452A4C495C647F444ED5 (void);
// 0x000001CD Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::Invoke()
extern void grpcsharp_batch_context_create_delegate_Invoke_m57AD142140F5B760022E2A822597D14BFC747EF9 (void);
// 0x000001CE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_create_delegate_BeginInvoke_m9E4A5D6EAE9BA385E57361FE391427679C05B138 (void);
// 0x000001CF Grpc.Core.Internal.BatchContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_create_delegate_EndInvoke_m45D2E5CB53D6C0890A082458F7AC12EBA0BBF7BE (void);
// 0x000001D0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_mEA8E3FA374617F6FC88B6A01DBA518EA69711E9E (void);
// 0x000001D1 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_mE7C392DAA90AF106897459D6AE5336F2453358D7 (void);
// 0x000001D2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_mB3D9CD5F5E4F1B4C2B9F2DBD38E3F93835A6D6E8 (void);
// 0x000001D3 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_mC5AA12CE722DEDA311DD28FAC02189E0F70F5C9E (void);
// 0x000001D4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_length_delegate__ctor_m524D51CE13C3D7C21D81C070A432A82C3922CFC5 (void);
// 0x000001D5 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_message_length_delegate_Invoke_m22EFA4148CBF1FAB8949440CA7DC6D4921313B14 (void);
// 0x000001D6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_mFEBB4ECB108E096BD62DC14125254A834BF6DCAC (void);
// 0x000001D7 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_length_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_mCF04D6AE39EBD24997E95455AD93EA80843D2CAC (void);
// 0x000001D8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate__ctor_m73156DBDC86ABF2728A80A1FB97BC0668396BD29 (void);
// 0x000001D9 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate_Invoke_mBC40F878ABF5FDBE89195CCBD1A51C78D2D0BC43 (void);
// 0x000001DA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate_BeginInvoke_mFE140CDF78F9CBA72707571F8FD5C2B5A1BA7470 (void);
// 0x000001DB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_message_to_buffer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_message_to_buffer_delegate_EndInvoke_m83A52EB60D2397DD60932DF2D3F60D0CF8128AAA (void);
// 0x000001DC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_m858185F93B8B9F20DB4CF50543100863BF92F6A4 (void);
// 0x000001DD Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_mD2236078D83242255848213B2FE1F5416063EC95 (void);
// 0x000001DE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_m547087184AD7906FAB8DAB9F3CBD12AFEAA17DA0 (void);
// 0x000001DF Grpc.Core.StatusCode Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m8CE2C6229327E9177BD085A6438CD7CEBE3785AC (void);
// 0x000001E0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_mD449A8D31530075C1F428B676B560650219FBA7A (void);
// 0x000001E1 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_m55E6EFD44EB8C44925FDE0BB2D873F110CC31C3A (void);
// 0x000001E2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_m00B06C67656B3CAFE16C562B2500DC6E53234C5C (void);
// 0x000001E3 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_details_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m23A4BC724B85790B1157F99CBAE61F6DC0054B48 (void);
// 0x000001E4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_m2CD584D945135A1E208741606A177DF6164F9AAD (void);
// 0x000001E5 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_m2E8A06B7BD43B0296D6105ED3F99944C5885FC55 (void);
// 0x000001E6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_m90750742A63EF1BEF6036E97DB1ABBEE96180A41 (void);
// 0x000001E7 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_m2079910490665051BDDC688DCFF75F792151ECDC (void);
// 0x000001E8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mC431A1DDDA0053FBDBC1D25F802EE617F638579E (void);
// 0x000001E9 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m97DB3D67EE72EA59B44C004E9573F3C284770FDE (void);
// 0x000001EA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_mDE016DEA6BC462B8403A72410479A286D781F270 (void);
// 0x000001EB System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_recv_close_on_server_cancelled_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m85972E0812686E9977BCA2857012285E1C5DA286 (void);
// 0x000001EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_reset_delegate__ctor_mD150906665399C3FE36C06B4611DCF1BD0194788 (void);
// 0x000001ED System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::Invoke(Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_batch_context_reset_delegate_Invoke_mABFBEDB9220434B2FD23D35C315E6753EAA5185F (void);
// 0x000001EE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_reset_delegate_BeginInvoke_mAEAA6C8B383169C18D7A3EB73C891920457AEBF3 (void);
// 0x000001EF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_reset_delegate_EndInvoke_m244846FB9214BBF1277105C7BA908AA15CB7DD65 (void);
// 0x000001F0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate__ctor_m7332FE9295EF5DD2D038AE56D21CA9F5EC349E1D (void);
// 0x000001F1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_batch_context_destroy_delegate_Invoke_mCCD3E46F3227DB79F8826D14B36160948CAF0B50 (void);
// 0x000001F2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_batch_context_destroy_delegate_BeginInvoke_m4907971F3715565E720AD29CEF25C8D3A4853FF3 (void);
// 0x000001F3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_batch_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_batch_context_destroy_delegate_EndInvoke_m325F68A13E0170BB8878F2B739C90FC8E36AF815 (void);
// 0x000001F4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_create_delegate__ctor_m98E46611720D1CD672CCFFB8A44E222F74CEA3F9 (void);
// 0x000001F5 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::Invoke()
extern void grpcsharp_request_call_context_create_delegate_Invoke_mEA6B1B47014563B49F4BAAD18CA60A9754D8718D (void);
// 0x000001F6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_create_delegate_BeginInvoke_m3465669260B3558FF3CA25A867DEF0247303FEDB (void);
// 0x000001F7 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_create_delegate_EndInvoke_m3A39DE41344D7B0CE58764FBD1E995C2C0229CA3 (void);
// 0x000001F8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_call_delegate__ctor_mFC91E1267E8882508D06424120B2BE7041462385 (void);
// 0x000001F9 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_call_delegate_Invoke_m6ECEC7E454A55F580E9B59F188195B9077078227 (void);
// 0x000001FA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_call_delegate_BeginInvoke_m5483C534B3C625113DA9F450D3F5B990E4FDA141 (void);
// 0x000001FB Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_call_delegate_EndInvoke_m8AFC775B29A0D019510C86E1D05C4CCAA807CEB3 (void);
// 0x000001FC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_method_delegate__ctor_m99426A0E4A6DBB2AEBC0A83078C872135C27DB03 (void);
// 0x000001FD System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_method_delegate_Invoke_m66D8A29CC4B9145EE86F1D6E5A2A0A2533FA87F1 (void);
// 0x000001FE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_method_delegate_BeginInvoke_m15686A06AAFE2D60ABB2C00FDDF1A212680B3C49 (void);
// 0x000001FF System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_method_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_method_delegate_EndInvoke_mFC323B215E0DE4F60AC5259F521C04415F5C48B2 (void);
// 0x00000200 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_host_delegate__ctor_mA22236A276E1004D5D0C876DB6948CF9C8495C30 (void);
// 0x00000201 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&)
extern void grpcsharp_request_call_context_host_delegate_Invoke_m06F3A7C0345DA560861FCE0F99594962186DC824 (void);
// 0x00000202 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_host_delegate_BeginInvoke_mEA667E78C64712B4570BA6451B402BAE515FBC35 (void);
// 0x00000203 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_host_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_request_call_context_host_delegate_EndInvoke_m59CA5432AF0B01F47E579DE7E58029F7CB32D633 (void);
// 0x00000204 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_deadline_delegate__ctor_m2F62CC15ADC4EB3A59E0B6E4C3E685E329D24CCF (void);
// 0x00000205 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_deadline_delegate_Invoke_m6E6D13A452BA5F0BE503A30B38AFD3945E5D8EC6 (void);
// 0x00000206 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_deadline_delegate_BeginInvoke_mCF559BD3115F610B97388A6E650953D63FAADF83 (void);
// 0x00000207 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_deadline_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_deadline_delegate_EndInvoke_m5C0C7B8B7523ABAAEB326CF6186808B8A28CBC07 (void);
// 0x00000208 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_request_metadata_delegate__ctor_mC4F5EA03629C01647CC92B00FD462458ABAA86F1 (void);
// 0x00000209 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_request_metadata_delegate_Invoke_mDF2BC33BDB2363BD5FBBDAF537E46921158A272C (void);
// 0x0000020A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_m12A0D2599C11D0A9CF5CBDBA67C04A257D39B866 (void);
// 0x0000020B System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_request_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_m035CBB874D76FE6B6E487BF3B112A141F7EE655A (void);
// 0x0000020C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_reset_delegate__ctor_m32E335B201829DAB3A112F9E8D49C5257A7262CF (void);
// 0x0000020D System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::Invoke(Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_request_call_context_reset_delegate_Invoke_mDF3B3897E9955BEA0990112F390EEA11E308D9A0 (void);
// 0x0000020E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::BeginInvoke(Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_reset_delegate_BeginInvoke_mE41C5D410C69BB42F04F0479631E01895960E6AF (void);
// 0x0000020F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_reset_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_reset_delegate_EndInvoke_mAC1D52E597AA5698E043409D29EC9CE207D00830 (void);
// 0x00000210 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate__ctor_m0F848007FE93F43D2E52FFD13AD2BC1FD241546F (void);
// 0x00000211 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_request_call_context_destroy_delegate_Invoke_mF54D4C64B7DCB861D8382CBEAEC661A8C9F258B6 (void);
// 0x00000212 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_request_call_context_destroy_delegate_BeginInvoke_m456E565F3021558BB0C8590C78CF961D7B1561BB (void);
// 0x00000213 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_request_call_context_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_request_call_context_destroy_delegate_EndInvoke_m33D95B438A5F4DB5B7854CD9C2DB35CCFEF30A4B (void);
// 0x00000214 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_call_credentials_create_delegate__ctor_mF1DAA0D761D0708FDD7EDDF9E205E808BF554F64 (void);
// 0x00000215 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::Invoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_call_credentials_create_delegate_Invoke_m6AEBC34AA073E63770F41067EE58CE5F54DB469E (void);
// 0x00000216 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.CallCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_m738CCC749825614320A85F2E99C53275D1841D17 (void);
// 0x00000217 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_call_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_call_credentials_create_delegate_EndInvoke_m267210AD2E67897AFED26357053C16842ADCFE4B (void);
// 0x00000218 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate__ctor_mEDCD59E3E34A62293974BD8D18A928D74720B610 (void);
// 0x00000219 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_credentials_release_delegate_Invoke_mC4A9689050C8F91AFC902679B41D2182C6507C00 (void);
// 0x0000021A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_credentials_release_delegate_BeginInvoke_mCA296A61498AA2E2E1573D177EB35090C65BC8DE (void);
// 0x0000021B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_credentials_release_delegate_EndInvoke_m55C4233F63DF40D86F22F5DE5873D7238AC8A495 (void);
// 0x0000021C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_delegate__ctor_mE755DC51350E6648277AE986A9A671835A6FE993 (void);
// 0x0000021D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_cancel_delegate_Invoke_mBDA6DF8B3BCCCEB1C5DE87197E5B026FA2E4C68E (void);
// 0x0000021E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_delegate_BeginInvoke_mD2D17467B6927D8458A7F6BDB08A1FA96A5139B8 (void);
// 0x0000021F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_delegate_EndInvoke_m0EE84A085957DA21E9E1DD480E4B8A7B92E5C040 (void);
// 0x00000220 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_cancel_with_status_delegate__ctor_mB48D3E0C8D593D927968419BF53A01A9E1F1C079 (void);
// 0x00000221 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_call_cancel_with_status_delegate_Invoke_m9B724AEE45577E7360810E691C5AA44C65146BFB (void);
// 0x00000222 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_call_cancel_with_status_delegate_BeginInvoke_m649E8629A5F32F853A367F6A78E350E884A53BFC (void);
// 0x00000223 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_cancel_with_status_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_cancel_with_status_delegate_EndInvoke_mD99169A5B91F9F2A64BBB6B6A895A6487CA52AF5 (void);
// 0x00000224 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_unary_delegate__ctor_m760E9C9078BC1995F8427C7BEEA93CE5A96FDCAA (void);
// 0x00000225 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_unary_delegate_Invoke_m6BB6C6D66622615ECB03BB092869D1084DA65D81 (void);
// 0x00000226 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_unary_delegate_BeginInvoke_m3FB9151E11029D8544918142B5FF38DF37D22A85 (void);
// 0x00000227 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_unary_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_unary_delegate_EndInvoke_mD71054292C05EBC02D6B85DDA38618E030D556ED (void);
// 0x00000228 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_client_streaming_delegate__ctor_m8285D1C2916BEC6C401F67B2E236209EC0A5BD3E (void);
// 0x00000229 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_client_streaming_delegate_Invoke_m75FA87B0A8444E22021403E51262727183C168F2 (void);
// 0x0000022A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_client_streaming_delegate_BeginInvoke_m20E2520C026E61B7BC38455836F2FC3076730ED0 (void);
// 0x0000022B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_client_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_client_streaming_delegate_EndInvoke_m90C6C4EB92ACB0709CF75B7B6030821847A28BAB (void);
// 0x0000022C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_server_streaming_delegate__ctor_mBC62DEAE80BE6EC63DC6608BA4A98F7877343FB4 (void);
// 0x0000022D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_server_streaming_delegate_Invoke_m7A64DAC7CB30409E6898D5377879A0E2A16D0F10 (void);
// 0x0000022E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_server_streaming_delegate_BeginInvoke_m100119D1ED8BDA7A1F461E7B83088C64583F2FAE (void);
// 0x0000022F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_server_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_server_streaming_delegate_EndInvoke_m4CA66609C89C40FE3A5632E60CB7B3EB6946D85A (void);
// 0x00000230 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_duplex_streaming_delegate__ctor_m63E121492F650BB1608410E8A3D36A0E09B17ED7 (void);
// 0x00000231 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags)
extern void grpcsharp_call_start_duplex_streaming_delegate_Invoke_m443F59ABA784B6B49FCF6CBC5BF18B06AD13C29E (void);
// 0x00000232 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.Internal.CallFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_mE27CC64BC00FAEEF87DEA1FFB475F8D0C2224797 (void);
// 0x00000233 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_duplex_streaming_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_mB96CE06C30AC9808311DFB01ACC6C8DC4AE0A337 (void);
// 0x00000234 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_message_delegate__ctor_m0C494C02D0B811B7AE5BD8367F6E391A482A06EE (void);
// 0x00000235 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,System.Int32)
extern void grpcsharp_call_send_message_delegate_Invoke_mD91B5BE164BDD95C1996FBA3230485ECFDE9CA0D (void);
// 0x00000236 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_message_delegate_BeginInvoke_m4855F16501AF0BF9AC552DA5C68079B3664C7C41 (void);
// 0x00000237 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_message_delegate_EndInvoke_mAD653A4CD91B5E49D2D10476B04EC26E33F4F6A2 (void);
// 0x00000238 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_close_from_client_delegate__ctor_m56F02905F50425E2BECFBCEBF247707B1F313908 (void);
// 0x00000239 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_send_close_from_client_delegate_Invoke_m2B4359309D818FEF52398FAF08B4422BAD37DE48 (void);
// 0x0000023A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_close_from_client_delegate_BeginInvoke_mD8A023570E20F2A126E136E2F72AC537E72030E3 (void);
// 0x0000023B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_close_from_client_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_close_from_client_delegate_EndInvoke_m4DFE190B7250782398BD084D664F9267A23EF5D8 (void);
// 0x0000023C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_status_from_server_delegate__ctor_m0EE47961C2CBE4E89FDAFD0D0E9F57B1588FCE48 (void);
// 0x0000023D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.Byte[],System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags)
extern void grpcsharp_call_send_status_from_server_delegate_Invoke_mA47224B2896E07F8BA42B6492A974360F46E5085 (void);
// 0x0000023E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.StatusCode,System.Byte[],System.UIntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,System.Int32,System.Byte[],System.UIntPtr,Grpc.Core.WriteFlags,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_status_from_server_delegate_BeginInvoke_mD36B2E5B39D3B8319F7CC1F5F8509DA143DCDAB7 (void);
// 0x0000023F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_status_from_server_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_status_from_server_delegate_EndInvoke_m63D860A7D81F84CEC1F504F72B89D65F1B310075 (void);
// 0x00000240 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_message_delegate__ctor_m316C927D2679D83945C75A7B7B0A9BD98B28886C (void);
// 0x00000241 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_message_delegate_Invoke_mE0349B1DFEEC27BA0DD36DEF2E6AB14297FD9B48 (void);
// 0x00000242 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_message_delegate_BeginInvoke_m0D37D3E0A1D22335428B55F8FEF1ADE9AF191ED5 (void);
// 0x00000243 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_message_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_message_delegate_EndInvoke_m4A67CA0EB66463A063C32FD7616D86E4C3B68FBE (void);
// 0x00000244 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_recv_initial_metadata_delegate__ctor_m1E7D77B10822D861246823B9C630FF6D65E8BEA2 (void);
// 0x00000245 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_recv_initial_metadata_delegate_Invoke_m5C9508F0F691951C4277AD44B4DAA9A5DD7AAAE2 (void);
// 0x00000246 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_m9DBBFE756645D58C02B3F88B96BCA59C512EECE3 (void);
// 0x00000247 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_recv_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_m6D67CC9EA0C144AA0E8855252CF1AA9F8F4D6BDD (void);
// 0x00000248 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_start_serverside_delegate__ctor_mB45BE3D5843A754BAEC085269645C6B9F2833CF1 (void);
// 0x00000249 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_call_start_serverside_delegate_Invoke_m996FA91A4580D111590E485EF6C5AFEABA74B8A8 (void);
// 0x0000024A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_start_serverside_delegate_BeginInvoke_mD5147E3F1D5E1AD13C121B3845845A13F257DE4F (void);
// 0x0000024B Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_start_serverside_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_start_serverside_delegate_EndInvoke_m71F19F2AED44008810C9141B23956E567D6F7E70 (void);
// 0x0000024C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_send_initial_metadata_delegate__ctor_m0405EE0C3ABA3ADE369F1A51C03B3B709A8CAF46 (void);
// 0x0000024D Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle)
extern void grpcsharp_call_send_initial_metadata_delegate_Invoke_mA63C31328877957CC25641B3290FF66F90893116 (void);
// 0x0000024E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,Grpc.Core.Internal.MetadataArraySafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m0B47BF603A550FC9B765D3EB5FEEFF765FC90E05 (void);
// 0x0000024F Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_send_initial_metadata_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_send_initial_metadata_delegate_EndInvoke_m7EA0F3A0A5680177BFE5AD9FF79118828AB2B4C1 (void);
// 0x00000250 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_set_credentials_delegate__ctor_m81E952E1130D4E7A12AB7656843B47E1752FF5A8 (void);
// 0x00000251 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_call_set_credentials_delegate_Invoke_m5C3E295DD1D133F22E6B9A68C272A7CD9461B2FB (void);
// 0x00000252 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_set_credentials_delegate_BeginInvoke_mC4856355A8D63D5CD0FEDAF477D8F130A221F9D7 (void);
// 0x00000253 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_set_credentials_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_set_credentials_delegate_EndInvoke_mA2CBDB1ED168D544828ADD9982726DB3E28EC104 (void);
// 0x00000254 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_get_peer_delegate__ctor_m6DE9AF27BFA0724663A6657BB5B464D8D654E1A0 (void);
// 0x00000255 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_get_peer_delegate_Invoke_mE35DD82B2300293A0A3CA8B1F960569736C5DED2 (void);
// 0x00000256 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_get_peer_delegate_BeginInvoke_mCE67B0473C93C9AEC6583F1ABFFB34CA8726BDD7 (void);
// 0x00000257 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_get_peer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_get_peer_delegate_EndInvoke_mA57FF15ADE62BB86C617DAEF0133F204621F1DC6 (void);
// 0x00000258 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_destroy_delegate__ctor_m17D2529FBD4B9C7CB8E4DD3ADA72BF99AE58181B (void);
// 0x00000259 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_call_destroy_delegate_Invoke_mAC0FAF7C98333AD6276688B7820436985E2D4C93 (void);
// 0x0000025A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_call_destroy_delegate_BeginInvoke_mB7C12E21C5658C2AFD7328BA803D89C67F4B5085 (void);
// 0x0000025B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_destroy_delegate_EndInvoke_mC5C74C445C0796A63A42A8223899D7F86CFF584F (void);
// 0x0000025C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_create_delegate__ctor_mBA921EACFD0AB5B9ABB66850DB46153C1EF3DC59 (void);
// 0x0000025D Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_channel_args_create_delegate_Invoke_mCDE7B0D48599E2EED729592807C11B16F181620B (void);
// 0x0000025E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_create_delegate_BeginInvoke_m7A4F3E27804A04A515E0D600749875CABD6C2C25 (void);
// 0x0000025F Grpc.Core.Internal.ChannelArgsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_create_delegate_EndInvoke_mED8830714E726549DDA53E1055BA1A95D3C48FE3 (void);
// 0x00000260 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_string_delegate__ctor_m6494CF27EAB24506690B5EF15E3E753B950E1670 (void);
// 0x00000261 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String)
extern void grpcsharp_channel_args_set_string_delegate_Invoke_m01AAA7194E7CC60EC5023EE55BD4B471E258EF00 (void);
// 0x00000262 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_string_delegate_BeginInvoke_mEF49C05EFA76AF55F07D0E80B25F0EF01DD29511 (void);
// 0x00000263 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_string_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_string_delegate_EndInvoke_mB6F8D340DB11950EA9268AD939E2CA926796D197 (void);
// 0x00000264 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_set_integer_delegate__ctor_mC4FB19A4A1F44C15D6152BE99D059C721D8F68DF (void);
// 0x00000265 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32)
extern void grpcsharp_channel_args_set_integer_delegate_Invoke_mD01176F9DE56700066B04644E1635211C1E90D21 (void);
// 0x00000266 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.UIntPtr,System.String,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_set_integer_delegate_BeginInvoke_mAF9D1FDC05DDC591EE7C35F8EC138C839A244BFC (void);
// 0x00000267 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_set_integer_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_set_integer_delegate_EndInvoke_m7F4406FEA9203F7CBDAA9F222D5B2F559A521AD2 (void);
// 0x00000268 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate__ctor_m7A93EA30AB39903DD2A7B1B4376D1EC96FFA2EE8 (void);
// 0x00000269 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_args_destroy_delegate_Invoke_m3B3FE1827A25ADB70772FF0D74D4305559BE29F4 (void);
// 0x0000026A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_args_destroy_delegate_BeginInvoke_mCABFAC9C0987F14D62C4539AAE4679B281330ADC (void);
// 0x0000026B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_args_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_args_destroy_delegate_EndInvoke_m7AC3E8083BED1A76E6163F1BEE31A479F21322C0 (void);
// 0x0000026C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_override_default_ssl_roots__ctor_m7448221344AE382B11ACF1014257C59EA4A7B48E (void);
// 0x0000026D System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::Invoke(System.String)
extern void grpcsharp_override_default_ssl_roots_Invoke_m9D9AA9B11814BF75D299B0F13FA6108BB1E2B7F0 (void);
// 0x0000026E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_override_default_ssl_roots_BeginInvoke_m6CB490C3431A41F3F4DD4437B37C64BD56E9C1F2 (void);
// 0x0000026F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_override_default_ssl_roots::EndInvoke(System.IAsyncResult)
extern void grpcsharp_override_default_ssl_roots_EndInvoke_mE7B07B86F22F7CFD3365E278BD73687E7DBEB5EE (void);
// 0x00000270 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_credentials_create_delegate__ctor_m0E3F9E68B2E702021C3F22C3A0AE997A16AA70DC (void);
// 0x00000271 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::Invoke(System.String,System.String,System.String)
extern void grpcsharp_ssl_credentials_create_delegate_Invoke_mF50BD6E82793CA61D3F215C64B6C604C9F63B95D (void);
// 0x00000272 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_credentials_create_delegate_BeginInvoke_m0F37BB056B09E58204F859E898DB86C1FEB24716 (void);
// 0x00000273 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_credentials_create_delegate_EndInvoke_m3B4267A0D69F7C67588A22B9F5E11BBFC662D29F (void);
// 0x00000274 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_composite_channel_credentials_create_delegate__ctor_m56814424DBE389D15F78715A01899269416C9BBD (void);
// 0x00000275 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle)
extern void grpcsharp_composite_channel_credentials_create_delegate_Invoke_m353E4994D5F8185C165117B0CD7FDB8271AE0B1B (void);
// 0x00000276 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,Grpc.Core.Internal.CallCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_m7299312891E43557C0B1DED538971C8581590B91 (void);
// 0x00000277 Grpc.Core.Internal.ChannelCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_composite_channel_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_m3D9EBBB6209F7BE5947151383C95B61854D97673 (void);
// 0x00000278 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate__ctor_m5AE923F9E6613F511FCEFF4EEED5BDE2D1A50878 (void);
// 0x00000279 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_credentials_release_delegate_Invoke_mE15A8E4724C36F2328F3E817DF3791C0F4096A2A (void);
// 0x0000027A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_credentials_release_delegate_BeginInvoke_m8382E35A56BB718EB08D3A94C637AA7D1AF32ED4 (void);
// 0x0000027B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_credentials_release_delegate_EndInvoke_mD15F5FCB0887A898BA705D9E6B360C68CB04E613 (void);
// 0x0000027C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_insecure_channel_create_delegate__ctor_m988A9A6954FE663BA88080E43B0A7EF6819C04D0 (void);
// 0x0000027D Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::Invoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_insecure_channel_create_delegate_Invoke_m5914B74BD0B26F25679EC68D55C9DA1EDEA24A57 (void);
// 0x0000027E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::BeginInvoke(System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_insecure_channel_create_delegate_BeginInvoke_m2C338DC4D130CD667649E05CFB3677D23E992B59 (void);
// 0x0000027F Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_insecure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_insecure_channel_create_delegate_EndInvoke_mF62C7D64C37FBAB4DB0D095496202709E077D5B3 (void);
// 0x00000280 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_secure_channel_create_delegate__ctor_m30F70DD9801D19D87C2377648929362D12FEA1A0 (void);
// 0x00000281 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::Invoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_secure_channel_create_delegate_Invoke_m87FEF9415D0075DABC390BAD24C207B7AA7A4B9B (void);
// 0x00000282 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelCredentialsSafeHandle,System.String,Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_secure_channel_create_delegate_BeginInvoke_m37247617D3170A0AFA397964C0683D039647A065 (void);
// 0x00000283 Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_secure_channel_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_secure_channel_create_delegate_EndInvoke_m562B7E11C6AE3EA666C6F9B1F37306B8351CC332 (void);
// 0x00000284 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_create_call_delegate__ctor_m8C86748C441A4C26FDC6F6BEED6B948E2880E02A (void);
// 0x00000285 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec)
extern void grpcsharp_channel_create_call_delegate_Invoke_m79121473CE8EE5E54182BAA9320722CB7C181D21 (void);
// 0x00000286 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.Internal.CallSafeHandle,Grpc.Core.ContextPropagationFlags,Grpc.Core.Internal.CompletionQueueSafeHandle,System.String,System.String,Grpc.Core.Internal.Timespec,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_create_call_delegate_BeginInvoke_m5377F1772B19DA79FB69C1B451D594118F31FAD9 (void);
// 0x00000287 Grpc.Core.Internal.CallSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_create_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_create_call_delegate_EndInvoke_m3D7599A2858DB84F255A2F97C01AAE755AA955FC (void);
// 0x00000288 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_check_connectivity_state_delegate__ctor_mEAD5EA6F42EAC929C6889EA066D040A3D3F1D583 (void);
// 0x00000289 Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32)
extern void grpcsharp_channel_check_connectivity_state_delegate_Invoke_m959AD06DEF06EAB6076CB8EACA064FAF2F3D2DC0 (void);
// 0x0000028A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m8C3F86FFD325E60114DFF2CCA362994249AA267A (void);
// 0x0000028B Grpc.Core.ChannelState Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_check_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_m3266648BCBEACB21E32B326BB8260633FA634E28 (void);
// 0x0000028C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_watch_connectivity_state_delegate__ctor_mFA61041233A6EC650534890C8BE258510B190EA6 (void);
// 0x0000028D System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_channel_watch_connectivity_state_delegate_Invoke_mCC453ABEC97A679F08CDA045C69D80955B4D9DE1 (void);
// 0x0000028E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,Grpc.Core.ChannelState,Grpc.Core.Internal.Timespec,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_mC8765CA25246CEF49EA584906B67FB4F0F87B5F8 (void);
// 0x0000028F System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_watch_connectivity_state_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mFE79B93DEC6E144CF62C4F32A0FCB63EAB91C6B0 (void);
// 0x00000290 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_get_target_delegate__ctor_m82A2644CE7EA513D00D6289E0A29F12DB5B79662 (void);
// 0x00000291 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::Invoke(Grpc.Core.Internal.ChannelSafeHandle)
extern void grpcsharp_channel_get_target_delegate_Invoke_m5E4728503813B0BF3C6D336965779BDEC9255D8C (void);
// 0x00000292 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::BeginInvoke(Grpc.Core.Internal.ChannelSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_get_target_delegate_BeginInvoke_mD093EF6AA4C5997120FB87E17B92B15E617BBA96 (void);
// 0x00000293 Grpc.Core.Internal.CStringSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_get_target_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_get_target_delegate_EndInvoke_m7179D39C1EFAFC2F0F1F451FBF5739F74A1C714F (void);
// 0x00000294 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_channel_destroy_delegate__ctor_mD727E63793C1E7FC471DF39FDCB7318C3BA76493 (void);
// 0x00000295 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_channel_destroy_delegate_Invoke_mBAC28E2DEA3941E550894775504EF49830AD9D87 (void);
// 0x00000296 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_channel_destroy_delegate_BeginInvoke_m85F79FD6DA293EF2023293498E0AB2649554D75B (void);
// 0x00000297 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_channel_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_channel_destroy_delegate_EndInvoke_mA9E3588BEEE019A2509B68B90B698665FDA5505F (void);
// 0x00000298 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_sizeof_grpc_event_delegate__ctor_mD4D25993A6D86DF2D15C852D70832A9600AF24A0 (void);
// 0x00000299 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::Invoke()
extern void grpcsharp_sizeof_grpc_event_delegate_Invoke_m2A49BD78B92D4BDB21DD2CA66A75BAB2E4A1F5E6 (void);
// 0x0000029A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m139C138BED0B804B1DD9517F38E9126F498D932D (void);
// 0x0000029B System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_sizeof_grpc_event_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m632A3AED35317DB67EEF72DBE621F26C9C450613 (void);
// 0x0000029C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_async_delegate__ctor_m428E3A9858CE7B23758B098955A688DA0AF59F9D (void);
// 0x0000029D Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::Invoke()
extern void grpcsharp_completion_queue_create_async_delegate_Invoke_m70DD1230F9FCAD6E3647F00A69A09463DADAC6CF (void);
// 0x0000029E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m1CABD9BD7DB6C0CE169B8827C76DA7FE3051FE99 (void);
// 0x0000029F Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_async_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_async_delegate_EndInvoke_m4A4794F98678C260A11EAB56332B5972FB597DD0 (void);
// 0x000002A0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_create_sync_delegate__ctor_m23CF7B13014AADB94385F0983329B9365E94F289 (void);
// 0x000002A1 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::Invoke()
extern void grpcsharp_completion_queue_create_sync_delegate_Invoke_m949D2B9E9DB0FA3A96F74883024FF6A4A1F4BE0D (void);
// 0x000002A2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_mFDB2D3451FA0298323A965E973BA99C4E5A9F6A1 (void);
// 0x000002A3 Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_create_sync_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mFA263CE13E3DBA71353AC8BD19528B1E4FB24704 (void);
// 0x000002A4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_shutdown_delegate__ctor_m4114F0CDE28AA0D8E75A09FFB14EBBBE93DCD0E2 (void);
// 0x000002A5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_shutdown_delegate_Invoke_mEF4695C5954F6C60CF59AB55E5B89D8D3694DEB0 (void);
// 0x000002A6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_m079C8DC57171FD2D3443306A344E13F41A04213F (void);
// 0x000002A7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_shutdown_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_shutdown_delegate_EndInvoke_m257C433D519F06D4B7FFCE518C136F9AF687D8F1 (void);
// 0x000002A8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_next_delegate__ctor_m5A38D77E30693987E81D4D22CB975E92785141BF (void);
// 0x000002A9 Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_completion_queue_next_delegate_Invoke_mE5D8475D3E529DD978800580EBC3BD0DEC62E274 (void);
// 0x000002AA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_next_delegate_BeginInvoke_m1F1C0506A01FBCD550779C9BC8D005972FDACC77 (void);
// 0x000002AB Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_next_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_next_delegate_EndInvoke_mAFBE3C6017CBB3D7FB0ED8294BDDAB86C33328BE (void);
// 0x000002AC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate__ctor_m5F21D01EE20546173224D384B97D70877CABDAE9 (void);
// 0x000002AD Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::Invoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr)
extern void grpcsharp_completion_queue_pluck_delegate_Invoke_mA63A2FD496BAAE05BFD203CE096422B1AD18724F (void);
// 0x000002AE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::BeginInvoke(Grpc.Core.Internal.CompletionQueueSafeHandle,System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mED3ACF422C1EDCD711E9575E24CA29B4418584AC (void);
// 0x000002AF Grpc.Core.Internal.CompletionQueueEvent Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_pluck_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_pluck_delegate_EndInvoke_m3B4353D09256FB872266F43CB52A2C6282F8D0F7 (void);
// 0x000002B0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate__ctor_m0F47411015B168BA6EEF7BA8A504F85F51ECFD72 (void);
// 0x000002B1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_completion_queue_destroy_delegate_Invoke_mA4F594D3C407176AD7D623A1B98947D1774AC418 (void);
// 0x000002B2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_completion_queue_destroy_delegate_BeginInvoke_mD0724BE37DF9FF183290001D586EB1B781AC41AF (void);
// 0x000002B3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_completion_queue_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_completion_queue_destroy_delegate_EndInvoke_m0869F1595A5F216EFB5480BD3C2EDF9719379B2B (void);
// 0x000002B4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_free_delegate__ctor_mFA763BEC95C747E68165CBE488F0B784DBEAC588 (void);
// 0x000002B5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::Invoke(System.IntPtr)
extern void gprsharp_free_delegate_Invoke_m01888C37742B5966B172B9179EE10E971219BE25 (void);
// 0x000002B6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void gprsharp_free_delegate_BeginInvoke_mFF9EC6D362FAECF84CC0248B5FCD0096B18790CD (void);
// 0x000002B7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_free_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_free_delegate_EndInvoke_m2FBBC9AC002F4248ADA1732E95525D8054948426 (void);
// 0x000002B8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_create_delegate__ctor_m744F760234C2A5F863F4C7D8739CAE6582C2DC71 (void);
// 0x000002B9 Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::Invoke(System.UIntPtr)
extern void grpcsharp_metadata_array_create_delegate_Invoke_m04E3EB2DF9E08F5D0C40FF1948EF11F79735A482 (void);
// 0x000002BA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::BeginInvoke(System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_create_delegate_BeginInvoke_m24F2FDC7F4CEDACA1C7E082AB54F89E8E228E499 (void);
// 0x000002BB Grpc.Core.Internal.MetadataArraySafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_create_delegate_EndInvoke_m6B2B079451BF6EDC20102F981D452D298B59276A (void);
// 0x000002BC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_add_delegate__ctor_mE2E5CF4655CC378DB58D5C5C5AD59523F29E647D (void);
// 0x000002BD System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::Invoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr)
extern void grpcsharp_metadata_array_add_delegate_Invoke_m1D22D94A1CA44B0BDEEEFFEBDA6CEA799A71B450 (void);
// 0x000002BE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::BeginInvoke(Grpc.Core.Internal.MetadataArraySafeHandle,System.String,System.Byte[],System.UIntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_add_delegate_BeginInvoke_m2045949050D70BD629518D163B339D11EB75C352 (void);
// 0x000002BF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_add_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_add_delegate_EndInvoke_m97D582225F1B3E2D7F7B7805F7DAFD82A9483C21 (void);
// 0x000002C0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate__ctor_m0328F7E8DF701B3B702895EAD5F2BD50C189862D (void);
// 0x000002C1 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_count_delegate_Invoke_mAFDFC48DEB61BE34D5B8D281BC600CFF9AFE8C53 (void);
// 0x000002C2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_count_delegate_BeginInvoke_m98CDA0710ECC0235B4564845A3217743A1BF127E (void);
// 0x000002C3 System.UIntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_count_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_count_delegate_EndInvoke_m65BB0C19058173C4EA9E3E6B3F1F422595DD6CB6 (void);
// 0x000002C4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_key_delegate__ctor_m0271F4E1E86F3EF32EDE157711FC012A73B15913 (void);
// 0x000002C5 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_key_delegate_Invoke_m4B0C6A34CE69982DCD4C70913EC569D540DF344D (void);
// 0x000002C6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_key_delegate_BeginInvoke_m2A26B30CB0FCCEDC7264821C1E2C98BCC20528FD (void);
// 0x000002C7 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_key_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_key_delegate_EndInvoke_mACFC5A234924CED6BD488586DE1E963660ADDA15 (void);
// 0x000002C8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_get_value_delegate__ctor_m8262E901E43CBC9D64E1F02FC5760B7F4B1084FC (void);
// 0x000002C9 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::Invoke(System.IntPtr,System.UIntPtr,System.UIntPtr&)
extern void grpcsharp_metadata_array_get_value_delegate_Invoke_m38DA6CEC26F37CD13A0D813BB72C8C16368B8618 (void);
// 0x000002CA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::BeginInvoke(System.IntPtr,System.UIntPtr,System.UIntPtr&,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m13A0B4B9587B7C2596E37A78BB55748D8B200720 (void);
// 0x000002CB System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_get_value_delegate::EndInvoke(System.UIntPtr&,System.IAsyncResult)
extern void grpcsharp_metadata_array_get_value_delegate_EndInvoke_mAEC77F856DFD864058CABE06B15A96FCC266CA12 (void);
// 0x000002CC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate__ctor_m33FA9BADFDE07682BACE132A3E76A13FA1C4F927 (void);
// 0x000002CD System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::Invoke(System.IntPtr)
extern void grpcsharp_metadata_array_destroy_full_delegate_Invoke_m62477116E0655D6AC21E6BEA3BC775076F5871B5 (void);
// 0x000002CE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_m82EA32DA5A9E7E7E685DEFA641365ADE0F1F291B (void);
// 0x000002CF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_array_destroy_full_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_mD4709ED910030CB4ED3D521787737ABFF41D1BE8 (void);
// 0x000002D0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_redirect_log_delegate__ctor_m7EBD3223059AA8412567830B67D6D3E90D38E688 (void);
// 0x000002D1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::Invoke(Grpc.Core.Internal.GprLogDelegate)
extern void grpcsharp_redirect_log_delegate_Invoke_m56A4FD6DA585945DC125A98647C91B5BDCCACF57 (void);
// 0x000002D2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::BeginInvoke(Grpc.Core.Internal.GprLogDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_redirect_log_delegate_BeginInvoke_m12AD4892E3E3F17CC34712730B5917CB38844D8F (void);
// 0x000002D3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_redirect_log_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_redirect_log_delegate_EndInvoke_mC4576B86F71B13769243587806457A97AAE04BB9 (void);
// 0x000002D4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_m3F28027026421A1736849FF35410D6F7720CBD3D (void);
// 0x000002D5 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::Invoke(Grpc.Core.Internal.NativeMetadataInterceptor)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_m8C6394F239045F6A1EC4FF7DF47FE089280D5BDF (void);
// 0x000002D6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::BeginInvoke(Grpc.Core.Internal.NativeMetadataInterceptor,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_mF644B990001289E045BFF71D1CA195B95F5BBC83 (void);
// 0x000002D7 Grpc.Core.Internal.CallCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_create_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m7297B5AC3B81BDDABC4079661EF29AC433C366ED (void);
// 0x000002D8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mBB233B77A04EF3D816AAAD7B6D52BE9BD5C9FA17 (void);
// 0x000002D9 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::Invoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_m75247CD7514FAA70C4A16C09F8FD085C5DC57954 (void);
// 0x000002DA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::BeginInvoke(System.IntPtr,System.IntPtr,Grpc.Core.Internal.MetadataArraySafeHandle,Grpc.Core.StatusCode,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m4E24C94571A4C14BE8020A6230A94F306BDE592C (void);
// 0x000002DB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_metadata_credentials_notify_from_plugin_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m4B4F6A98BF494871B119A370E2C2A0DF64FD0A16 (void);
// 0x000002DC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_ssl_server_credentials_create_delegate__ctor_m9A588CC327D15A2E7A49D6A3922EC5D67D07FBB1 (void);
// 0x000002DD Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::Invoke(System.String,System.String[],System.String[],System.UIntPtr,System.Int32)
extern void grpcsharp_ssl_server_credentials_create_delegate_Invoke_mFE552A5E5A45FDF121373AA3AD0B9774680565DF (void);
// 0x000002DE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::BeginInvoke(System.String,System.String[],System.String[],System.UIntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_mFF2B6DE11DC2116D9B7D0CE139D74884FD8078EC (void);
// 0x000002DF Grpc.Core.Internal.ServerCredentialsSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_ssl_server_credentials_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_m0E33A608D52CFA36985F0B4F9483726F986AA89E (void);
// 0x000002E0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate__ctor_m5F7023D4E7BB70FE562E39A90EC4334595088481 (void);
// 0x000002E1 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_credentials_release_delegate_Invoke_m6ACC002E8F582517346BA7FBE467AD1791D3E40F (void);
// 0x000002E2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_credentials_release_delegate_BeginInvoke_m4FD24B262CACBEC24962626DC752D87394B9B44D (void);
// 0x000002E3 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_credentials_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_credentials_release_delegate_EndInvoke_m743FC382EC00567A66F78D4B8BA4F3A31DE5FD5B (void);
// 0x000002E4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_create_delegate__ctor_mD383DBB251F5CE2AD1E6378C171C720254E93000 (void);
// 0x000002E5 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::Invoke(Grpc.Core.Internal.ChannelArgsSafeHandle)
extern void grpcsharp_server_create_delegate_Invoke_mA6305625871F560186C18EF2A461984BF2011825 (void);
// 0x000002E6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::BeginInvoke(Grpc.Core.Internal.ChannelArgsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_create_delegate_BeginInvoke_m51CB302EF057BC7C93F532B34D29B52742770936 (void);
// 0x000002E7 Grpc.Core.Internal.ServerSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_create_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_create_delegate_EndInvoke_mEE2ABC478EC38D223D1FD6D4016F23C10352D071 (void);
// 0x000002E8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_register_completion_queue_delegate__ctor_mBAD6E5598158427F4254CE06D8C1429DAD36FDA4 (void);
// 0x000002E9 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void grpcsharp_server_register_completion_queue_delegate_Invoke_m2F1AD0D600CF3856F24E6772D6097AAC135D957F (void);
// 0x000002EA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_register_completion_queue_delegate_BeginInvoke_mFC0612EAA9EF307CC0C5817D6E59063128290B68 (void);
// 0x000002EB System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_register_completion_queue_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_register_completion_queue_delegate_EndInvoke_m30A3CC6A19CEC79249BA6FD16ED3180AF41FD050 (void);
// 0x000002EC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_insecure_http2_port_delegate__ctor_m727B0B2A97A8ABC5EF6E84EE52EDBCF39CB7D670 (void);
// 0x000002ED System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String)
extern void grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m21EA700E86F6FF20BF899CA1D32D9597B94FBD04 (void);
// 0x000002EE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m6315FC1C3A150B3AECBE4390A5D6592BF602A9A2 (void);
// 0x000002EF System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_insecure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m0F3D612D5E4480F7D66A64AE0BC7E871BBCD530C (void);
// 0x000002F0 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_add_secure_http2_port_delegate__ctor_m1CE4EE9BB179E6A234D6609CDC2507C0190976A1 (void);
// 0x000002F1 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle)
extern void grpcsharp_server_add_secure_http2_port_delegate_Invoke_mCAB2726A51435FF66D2A1793604F8056C91F97FA (void);
// 0x000002F2 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.String,Grpc.Core.Internal.ServerCredentialsSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_m20806E53251F7BB10F80FC43C233A066570115B1 (void);
// 0x000002F3 System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_add_secure_http2_port_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_mA900F6B9D88A97CDEC446715903600078008526D (void);
// 0x000002F4 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_start_delegate__ctor_mF3B7DC550938171928E32809EE367ABE39DA24B0 (void);
// 0x000002F5 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_start_delegate_Invoke_mF411DF2C9C29814C757D4965ECB01634F8683935 (void);
// 0x000002F6 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_start_delegate_BeginInvoke_mEF2A053AF4BAF51F8A4743F6221825EAB8366E43 (void);
// 0x000002F7 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_start_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_start_delegate_EndInvoke_m60321FA63DBFD11BCBC8853EB3FB5EA233EBC012 (void);
// 0x000002F8 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_request_call_delegate__ctor_m37D00A99036C4BA2E6B37C99A545704FB6074C91 (void);
// 0x000002F9 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle)
extern void grpcsharp_server_request_call_delegate_Invoke_mFE277762B3D9894844A40F7D5E7922AEDD6519AC (void);
// 0x000002FA System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.RequestCallContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_request_call_delegate_BeginInvoke_m84FEAF05EB5A1A026F78EE9EAD90D8C19370DDD1 (void);
// 0x000002FB Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_request_call_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_request_call_delegate_EndInvoke_m0ACF75BF6704FE4863E94C77426779C1061EDDC4 (void);
// 0x000002FC System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_cancel_all_calls_delegate__ctor_m3D3092AB9DD2276D4B1E8F4A00C0D4AC23C67ACD (void);
// 0x000002FD System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle)
extern void grpcsharp_server_cancel_all_calls_delegate_Invoke_m9FAF1EBCD69688386BD6B8C8D22EB7FF4B521490 (void);
// 0x000002FE System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m4AC23BFF9584F52AFAAE979B5BC26DB60B8C05BF (void);
// 0x000002FF System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_cancel_all_calls_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mF4D68623799F5E6A1A6B24C32FE8580CBA2CF150 (void);
// 0x00000300 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m8E5F1C148C4834690823E41378D42FCEFDC5864F (void);
// 0x00000301 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::Invoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m370512FAA6FDE32DF64473FE45FD0F1C413052A7 (void);
// 0x00000302 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::BeginInvoke(Grpc.Core.Internal.ServerSafeHandle,Grpc.Core.Internal.CompletionQueueSafeHandle,Grpc.Core.Internal.BatchContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m05DEFDBB42D59910F3CC643F8877B9235CEA7042 (void);
// 0x00000303 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_shutdown_and_notify_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m8C6BC9AA886CBDB32D03D1EAEC26FD18DA44949F (void);
// 0x00000304 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_server_destroy_delegate__ctor_mC1C7B53C9BE06BBD6BE61CA7FFF40276CBCAAF56 (void);
// 0x00000305 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::Invoke(System.IntPtr)
extern void grpcsharp_server_destroy_delegate_Invoke_m8C8093ED3645E617B17C9697D36EED022A7374FC (void);
// 0x00000306 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_server_destroy_delegate_BeginInvoke_mECCC9B22C4DB5D70DA44462333995E7E301D21DF (void);
// 0x00000307 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_server_destroy_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_server_destroy_delegate_EndInvoke_m523196C48C318FB2E15B91109F0D2E0E0A8F89CD (void);
// 0x00000308 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_call_auth_context_delegate__ctor_mF5A45671CDBAD6A7802E121DEA9DD7D8D179922A (void);
// 0x00000309 Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::Invoke(Grpc.Core.Internal.CallSafeHandle)
extern void grpcsharp_call_auth_context_delegate_Invoke_mB4D6185306FBD2CE82A40F1FFD37C0C3AEAAB904 (void);
// 0x0000030A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::BeginInvoke(Grpc.Core.Internal.CallSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_call_auth_context_delegate_BeginInvoke_m542859754C5200B13C805F599AFE96033DF52F38 (void);
// 0x0000030B Grpc.Core.Internal.AuthContextSafeHandle Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_call_auth_context_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_call_auth_context_delegate_EndInvoke_m872F7D8B70BBB06DC452AB8F302933E4E878735C (void);
// 0x0000030C System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m0C931A957E9442276AF39F77D0FFD46532930798 (void);
// 0x0000030D System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_m7768E7D12B9B81BE62C2DD2C99585D4CD428D2D7 (void);
// 0x0000030E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_m2929E4AB72D876A8CF2EC8D1FD2458BBF77A6966 (void);
// 0x0000030F System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_peer_identity_property_name_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m9D0A782D5E041D01567096413944BE802D481B57 (void);
// 0x00000310 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_property_iterator_delegate__ctor_m1AA4A1944F9791643555E72932303322E1F7DED8 (void);
// 0x00000311 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle)
extern void grpcsharp_auth_context_property_iterator_delegate_Invoke_mC17445D254F1C027F46B65D2D936E599AA473D4C (void);
// 0x00000312 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_m9A5562CAF16FD87D040EDF992AE6121B0742DED4 (void);
// 0x00000313 Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_property_iterator_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_property_iterator_delegate_EndInvoke_m59B2DA6921688F0255F734E029BDAF08C8A75DCE (void);
// 0x00000314 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_property_iterator_next_delegate__ctor_m4E51C7F88F00FA1C20F0894A1296DBF2C994F5D3 (void);
// 0x00000315 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::Invoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&)
extern void grpcsharp_auth_property_iterator_next_delegate_Invoke_mCE6B9BC6334AA0D9C0317CAACE133134F893DD8B (void);
// 0x00000316 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::BeginInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mBC5247262E5D2D3D19C3A7E1BA7C2A64983191ED (void);
// 0x00000317 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_property_iterator_next_delegate::EndInvoke(Grpc.Core.Internal.AuthContextSafeHandle/NativeAuthPropertyIterator&,System.IAsyncResult)
extern void grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m2FE9373E7DFE88746B746AF46D8C92845762887E (void);
// 0x00000318 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_auth_context_release_delegate__ctor_m434D5EE873C633B03880950BAFBCAFC03E1CE23F (void);
// 0x00000319 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::Invoke(System.IntPtr)
extern void grpcsharp_auth_context_release_delegate_Invoke_m87E16D84D6C00066B603EB3717138A7CF45E704A (void);
// 0x0000031A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_auth_context_release_delegate_BeginInvoke_mF4346CC8DA2308EEAA305B60550A5F41268437C9 (void);
// 0x0000031B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_auth_context_release_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_auth_context_release_delegate_EndInvoke_m9B3AEC0A03AEA6B11FF36D5C2649C09DDDBF5BB4 (void);
// 0x0000031C System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_now_delegate__ctor_mD0984286C2A91A59B2AE521ED3B53A8FF0469736 (void);
// 0x0000031D Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_now_delegate_Invoke_m3800FDFC91300A89E6B0905EC5334220ADBCB9FA (void);
// 0x0000031E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_now_delegate_BeginInvoke_m5C72A606A3EA0C28CCA95963DCAEBBB2602BF418 (void);
// 0x0000031F Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_now_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_now_delegate_EndInvoke_mF62723955AC237CF807467197CB651BE737BE085 (void);
// 0x00000320 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_future_delegate__ctor_m89F377E91C37C1879354BAE7E267F6DEDC028D5D (void);
// 0x00000321 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_future_delegate_Invoke_m867810A531A391BED2887BA16C06AFF29B9AD153 (void);
// 0x00000322 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_future_delegate_BeginInvoke_mE8AD79D25710ECEBA5E138E067ED81F196F80FC3 (void);
// 0x00000323 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_future_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_future_delegate_EndInvoke_mAA933761EC6CAE450B5230E17B7E2B1C4C25C952 (void);
// 0x00000324 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_inf_past_delegate__ctor_mB089528EDA6F6D577E49FFA7E1C03D8956FB71D3 (void);
// 0x00000325 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::Invoke(Grpc.Core.Internal.ClockType)
extern void gprsharp_inf_past_delegate_Invoke_m8F355A85F7CFB25D8D25800C223E4655AEE06B16 (void);
// 0x00000326 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::BeginInvoke(Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_inf_past_delegate_BeginInvoke_m794529EC526621A0363616A7D26B954640E253CE (void);
// 0x00000327 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_inf_past_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_inf_past_delegate_EndInvoke_m45831C51DF6727B5AD872DC3B77232FD2ECA87C9 (void);
// 0x00000328 System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_convert_clock_type_delegate__ctor_m9A20F839ED8ED3E070DA5E1363D24EACBDD5F585 (void);
// 0x00000329 Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::Invoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType)
extern void gprsharp_convert_clock_type_delegate_Invoke_m57467B9AC31CD7EFD9F1E8D834272EAC07A08002 (void);
// 0x0000032A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::BeginInvoke(Grpc.Core.Internal.Timespec,Grpc.Core.Internal.ClockType,System.AsyncCallback,System.Object)
extern void gprsharp_convert_clock_type_delegate_BeginInvoke_m29A31A269B008C5660685F72DDE204B5B243F00B (void);
// 0x0000032B Grpc.Core.Internal.Timespec Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_convert_clock_type_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_convert_clock_type_delegate_EndInvoke_mD6E619ECF684D0B07900EAB1F003ED44F58627F0 (void);
// 0x0000032C System.Void Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::.ctor(System.Object,System.IntPtr)
extern void gprsharp_sizeof_timespec_delegate__ctor_m02E974F77F168CF128F699A3B4423777D27903E4 (void);
// 0x0000032D System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::Invoke()
extern void gprsharp_sizeof_timespec_delegate_Invoke_m64365C973B02C4E7DD4F8FD6D61FA83A3338E8FB (void);
// 0x0000032E System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::BeginInvoke(System.AsyncCallback,System.Object)
extern void gprsharp_sizeof_timespec_delegate_BeginInvoke_mFB8499779A2F5BF77DFD9D4D14AFD71C83CDED94 (void);
// 0x0000032F System.Int32 Grpc.Core.Internal.NativeMethods/Delegates/gprsharp_sizeof_timespec_delegate::EndInvoke(System.IAsyncResult)
extern void gprsharp_sizeof_timespec_delegate_EndInvoke_mF0289D6D8413C5C8DF7B022801ACFE65D2A4EFDB (void);
// 0x00000330 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_callback_delegate__ctor_m574051282C59DC4B15E6AD12D5B19D7A816F9D63 (void);
// 0x00000331 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::Invoke(Grpc.Core.Internal.NativeCallbackTestDelegate)
extern void grpcsharp_test_callback_delegate_Invoke_m4A120C3F39B5E5745DCA6468407732EA2905E2AC (void);
// 0x00000332 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::BeginInvoke(Grpc.Core.Internal.NativeCallbackTestDelegate,System.AsyncCallback,System.Object)
extern void grpcsharp_test_callback_delegate_BeginInvoke_m8EBFC59DD11BBF60AE92E47EFDDC42FF7AABB82B (void);
// 0x00000333 Grpc.Core.Internal.CallError Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_callback_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_callback_delegate_EndInvoke_mE2BBA8608E5ED717ED5EE1B2E7B34D4C0EDD689F (void);
// 0x00000334 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_nop_delegate__ctor_m316C8DBB17E294266B11F192D7ACF37A4EBD3899 (void);
// 0x00000335 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::Invoke(System.IntPtr)
extern void grpcsharp_test_nop_delegate_Invoke_mD4A2B9FCDF6C59DA1AA8A87718A7CD9C436CDC8C (void);
// 0x00000336 System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void grpcsharp_test_nop_delegate_BeginInvoke_mBBAE0FE6CA269BADD19E4AC709CC70287A6EC1D3 (void);
// 0x00000337 System.IntPtr Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_nop_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_nop_delegate_EndInvoke_m68FC8D0D624EA70F9F2540F4C2D1E34C666F06EC (void);
// 0x00000338 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::.ctor(System.Object,System.IntPtr)
extern void grpcsharp_test_override_method_delegate__ctor_m444B13CA6A14CCB6C6A9AC624A769FB1E0D726E4 (void);
// 0x00000339 System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::Invoke(System.String,System.String)
extern void grpcsharp_test_override_method_delegate_Invoke_m843DA4B46D3B42084DD3C77816FA534FE88200D0 (void);
// 0x0000033A System.IAsyncResult Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern void grpcsharp_test_override_method_delegate_BeginInvoke_mF0FE89AEB636B8CE5C0D26586883CF2D3D9A2ACE (void);
// 0x0000033B System.Void Grpc.Core.Internal.NativeMethods/Delegates/grpcsharp_test_override_method_delegate::EndInvoke(System.IAsyncResult)
extern void grpcsharp_test_override_method_delegate_EndInvoke_mCA982CFBA565C47E95FBA611950A7D8FDCED705D (void);
// 0x0000033C System.Void Grpc.Core.Internal.PlatformApis::.cctor()
extern void PlatformApis__cctor_m76645F6E42FABC07A899EEB15B7D11EAC8807923 (void);
// 0x0000033D System.Boolean Grpc.Core.Internal.PlatformApis::get_IsLinux()
extern void PlatformApis_get_IsLinux_mCD0BA3105E0DD123690A07CA1DCC0187BA7F5FBE (void);
// 0x0000033E System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMacOSX()
extern void PlatformApis_get_IsMacOSX_m45CC2EF94AFE40113BB7FD435423DF8E1BCBC896 (void);
// 0x0000033F System.Boolean Grpc.Core.Internal.PlatformApis::get_IsWindows()
extern void PlatformApis_get_IsWindows_m2F683015167168B8BA12B768066217D51728A8A9 (void);
// 0x00000340 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsMono()
extern void PlatformApis_get_IsMono_m815AD73FCC0B42A4C95EA004D675BCB53D12479E (void);
// 0x00000341 System.Boolean Grpc.Core.Internal.PlatformApis::get_IsNetCore()
extern void PlatformApis_get_IsNetCore_m259F016E4CA90B2DB5063A9270FA7CEBD95D8371 (void);
// 0x00000342 System.Boolean Grpc.Core.Internal.PlatformApis::get_Is64Bit()
extern void PlatformApis_get_Is64Bit_m910B60DF6F71D2D305F87F636A2538E975BB2981 (void);
// 0x00000343 System.Int32 Grpc.Core.Internal.PlatformApis::uname(System.IntPtr)
extern void PlatformApis_uname_m8158AFDB5565828A87DAE088F92F40823D1B4F52 (void);
// 0x00000344 System.String Grpc.Core.Internal.PlatformApis::GetUname()
extern void PlatformApis_GetUname_mAC8A27EF122D7A5889C8ECB38995B194B0130110 (void);
// 0x00000345 Grpc.Core.Internal.RequestCallContextSafeHandle Grpc.Core.Internal.RequestCallContextSafeHandle::Create()
extern void RequestCallContextSafeHandle_Create_m3B77F2F24939C3BEA513C6A8354EDA79D32A2E93 (void);
// 0x00000346 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::SetReturnToPoolAction(System.Action`1<Grpc.Core.Internal.RequestCallContextSafeHandle>)
extern void RequestCallContextSafeHandle_SetReturnToPoolAction_mE9C1A340E22262A9627AFD149F6C6EA63097D963 (void);
// 0x00000347 Grpc.Core.Internal.RequestCallCompletionDelegate Grpc.Core.Internal.RequestCallContextSafeHandle::get_CompletionCallback()
extern void RequestCallContextSafeHandle_get_CompletionCallback_mEA84153F0835BCB341E30EB7D4865B34492D8ED9 (void);
// 0x00000348 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::set_CompletionCallback(Grpc.Core.Internal.RequestCallCompletionDelegate)
extern void RequestCallContextSafeHandle_set_CompletionCallback_m26739C4139F09D52B92587E62B8A0BF44C257277 (void);
// 0x00000349 System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Recycle()
extern void RequestCallContextSafeHandle_Recycle_mD9A909DC28557297B376EE9E6D5EFBAE2B56C8C0 (void);
// 0x0000034A System.Boolean Grpc.Core.Internal.RequestCallContextSafeHandle::ReleaseHandle()
extern void RequestCallContextSafeHandle_ReleaseHandle_m2ECF12F405110941C82175F4D61225797797E85B (void);
// 0x0000034B System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::Grpc.Core.Internal.IOpCompletionCallback.OnComplete(System.Boolean)
extern void RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mB7993F1DCBAC4B188F0E60737A80FE4B896317AC (void);
// 0x0000034C System.Void Grpc.Core.Internal.RequestCallContextSafeHandle::.cctor()
extern void RequestCallContextSafeHandle__cctor_mA6C4F170A20A889BA19F05431671A47CFE658410 (void);
// 0x0000034D System.Void Grpc.Core.Internal.SafeHandleZeroIsInvalid::.ctor()
extern void SafeHandleZeroIsInvalid__ctor_m8B20752142A1E8AFCBBE00CF61228128E0375C00 (void);
// 0x0000034E System.Boolean Grpc.Core.Internal.SafeHandleZeroIsInvalid::get_IsInvalid()
extern void SafeHandleZeroIsInvalid_get_IsInvalid_mF5E9D8214DF0B506619DF14020B3A185BB085307 (void);
// 0x0000034F System.Boolean Grpc.Core.Internal.ServerCredentialsSafeHandle::ReleaseHandle()
extern void ServerCredentialsSafeHandle_ReleaseHandle_m9D6BD4E02703A68B1E0549FF1AF555F620518AC7 (void);
// 0x00000350 System.Void Grpc.Core.Internal.ServerCredentialsSafeHandle::.cctor()
extern void ServerCredentialsSafeHandle__cctor_m518AB0193DBCA8C21B57E3803990EFF1918969B3 (void);
// 0x00000351 System.Void Grpc.Core.Internal.ServerSafeHandle::ShutdownAndNotify(Grpc.Core.Internal.BatchCompletionDelegate,Grpc.Core.Internal.CompletionQueueSafeHandle)
extern void ServerSafeHandle_ShutdownAndNotify_m4A3738E79593B6C72C221CF8D3C6157332926A09 (void);
// 0x00000352 System.Boolean Grpc.Core.Internal.ServerSafeHandle::ReleaseHandle()
extern void ServerSafeHandle_ReleaseHandle_mA8E54872EF2DD7B3E1B839112A4863C383FB2610 (void);
// 0x00000353 System.Void Grpc.Core.Internal.ServerSafeHandle::CancelAllCalls()
extern void ServerSafeHandle_CancelAllCalls_m2CDE247D25354B9360EE3B95954492D6D928D384 (void);
// 0x00000354 System.Void Grpc.Core.Internal.ServerSafeHandle::.cctor()
extern void ServerSafeHandle__cctor_mA792F20D8FEB16AEC73CBF63787FF6707A2F90F0 (void);
// 0x00000355 System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32)
extern void Timespec__ctor_m95FEE6B79D4DE967D2D77CF1A9AEB4E50A9069B9 (void);
// 0x00000356 System.Void Grpc.Core.Internal.Timespec::.ctor(System.Int64,System.Int32,Grpc.Core.Internal.ClockType)
extern void Timespec__ctor_m762D316EE014E0F0E5D21F28C1A8BADC544C6BD3 (void);
// 0x00000357 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfFuture()
extern void Timespec_get_InfFuture_m4708CDCC145AC49325660E5D2C04676DABB4A422 (void);
// 0x00000358 Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_InfPast()
extern void Timespec_get_InfPast_mDDD355A720BD01DD75DDC9D66BA8DF29CA882D13 (void);
// 0x00000359 System.Int64 Grpc.Core.Internal.Timespec::get_TimevalSeconds()
extern void Timespec_get_TimevalSeconds_m9A08FBF014D7B26180D55576D0C2EDE72798D72A (void);
// 0x0000035A System.Int32 Grpc.Core.Internal.Timespec::get_TimevalNanos()
extern void Timespec_get_TimevalNanos_m8AEC2A71520F27DF56FA4F0DE8781116A4C55799 (void);
// 0x0000035B Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::FromDateTime(System.DateTime)
extern void Timespec_FromDateTime_m77B0510F98BB85927B1023C7B4A687DBAD462B28 (void);
// 0x0000035C Grpc.Core.Internal.Timespec Grpc.Core.Internal.Timespec::get_PreciseNow()
extern void Timespec_get_PreciseNow_m8CC76D9AE98B48A1EF0DD7CF1164A4872F138239 (void);
// 0x0000035D System.Void Grpc.Core.Internal.Timespec::.cctor()
extern void Timespec__cctor_mC91181CB27F3D51F0B8EB57EF3FDE867ACFB2FD3 (void);
// 0x0000035E System.Void Grpc.Core.Internal.UnmanagedLibrary::.ctor(System.String[])
extern void UnmanagedLibrary__ctor_mDAB0FED772ABD496C7D28E5C171C103C95D2C5BC (void);
// 0x0000035F System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::LoadSymbol(System.String)
extern void UnmanagedLibrary_LoadSymbol_m1B0DD121F59FC836F119C066163F7EAFCE7A1FAF (void);
// 0x00000360 T Grpc.Core.Internal.UnmanagedLibrary::GetNativeMethodDelegate(System.String)
// 0x00000361 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary::PlatformSpecificLoadLibrary(System.String)
extern void UnmanagedLibrary_PlatformSpecificLoadLibrary_mBFE74392C5A84FDD940A00576ECD44AE38377870 (void);
// 0x00000362 System.String Grpc.Core.Internal.UnmanagedLibrary::FirstValidLibraryPath(System.String[])
extern void UnmanagedLibrary_FirstValidLibraryPath_m6E72FEEF458A4409B24270B0D70F3A92063D9EE4 (void);
// 0x00000363 System.Void Grpc.Core.Internal.UnmanagedLibrary::.cctor()
extern void UnmanagedLibrary__cctor_m1B7BE4760CBC69FBF6E9B72A3E9671B1AE882818 (void);
// 0x00000364 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::LoadLibrary(System.String)
extern void Windows_LoadLibrary_m4F2837AC15FE4C7942F226F519A01A251403AE27 (void);
// 0x00000365 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Windows::GetProcAddress(System.IntPtr,System.String)
extern void Windows_GetProcAddress_mDEC41701BA0A659D200729A06387553DA94D5022 (void);
// 0x00000366 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlopen(System.String,System.Int32)
extern void Linux_dlopen_mF6EABF098CE675FE892151560A0B435E8B90E6DC (void);
// 0x00000367 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Linux::dlsym(System.IntPtr,System.String)
extern void Linux_dlsym_m2617CD06EE009DBE1688BD1763F00F24CE23C7A9 (void);
// 0x00000368 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlopen(System.String,System.Int32)
extern void MacOSX_dlopen_m01CCAD156E2006A710AE12384B82AC34D4526DAB (void);
// 0x00000369 System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/MacOSX::dlsym(System.IntPtr,System.String)
extern void MacOSX_dlsym_m819AF9A888D9F3AE223E240CA6BBFB1A9EEADFFA (void);
// 0x0000036A System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlopen(System.String,System.Int32)
extern void Mono_dlopen_m6D7ED796E1F0FBAEFA71B4B768653CE5987E6DCD (void);
// 0x0000036B System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/Mono::dlsym(System.IntPtr,System.String)
extern void Mono_dlsym_m70578AF522447A27F12C77E168B637520832F279 (void);
// 0x0000036C System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlopen(System.String,System.Int32)
extern void CoreCLR_dlopen_m3005E0B16247DAF501D78DBCC585FF80F1A056AE (void);
// 0x0000036D System.IntPtr Grpc.Core.Internal.UnmanagedLibrary/CoreCLR::dlsym(System.IntPtr,System.String)
extern void CoreCLR_dlsym_m81E7263222C9A3E6200CC3F593323285A3DAA1FC (void);
// 0x0000036E Grpc.Core.CallInvoker Grpc.Core.Interceptors.CallInvokerExtensions::Intercept(Grpc.Core.CallInvoker,Grpc.Core.Interceptors.Interceptor)
extern void CallInvokerExtensions_Intercept_mB7219EE5F4CF31CE2C7B045ACC8313581ED82403 (void);
// 0x0000036F System.Void Grpc.Core.Interceptors.ClientInterceptorContext`2::.ctor(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions)
// 0x00000370 Grpc.Core.Method`2<TRequest,TResponse> Grpc.Core.Interceptors.ClientInterceptorContext`2::get_Method()
// 0x00000371 System.String Grpc.Core.Interceptors.ClientInterceptorContext`2::get_Host()
// 0x00000372 Grpc.Core.CallOptions Grpc.Core.Interceptors.ClientInterceptorContext`2::get_Options()
// 0x00000373 System.Void Grpc.Core.Interceptors.InterceptingCallInvoker::.ctor(Grpc.Core.CallInvoker,Grpc.Core.Interceptors.Interceptor)
extern void InterceptingCallInvoker__ctor_mA2332CFB9B681F1F453421C86A729A70443783C3 (void);
// 0x00000374 TResponse Grpc.Core.Interceptors.InterceptingCallInvoker::BlockingUnaryCall(Grpc.Core.Method`2<TRequest,TResponse>,System.String,Grpc.Core.CallOptions,TRequest)
// 0x00000375 TResponse Grpc.Core.Interceptors.InterceptingCallInvoker::<BlockingUnaryCall>b__3_0(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>)
// 0x00000376 TResponse Grpc.Core.Interceptors.Interceptor::BlockingUnaryCall(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>,Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2<TRequest,TResponse>)
// 0x00000377 System.Void Grpc.Core.Interceptors.Interceptor::.ctor()
extern void Interceptor__ctor_m3DD2ED371DCBA06B0802A49BEFA0C35915AC1BBB (void);
// 0x00000378 System.Void Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::.ctor(System.Object,System.IntPtr)
// 0x00000379 TResponse Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::Invoke(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>)
// 0x0000037A System.IAsyncResult Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::BeginInvoke(TRequest,Grpc.Core.Interceptors.ClientInterceptorContext`2<TRequest,TResponse>,System.AsyncCallback,System.Object)
// 0x0000037B TResponse Grpc.Core.Interceptors.Interceptor/BlockingUnaryCallContinuation`2::EndInvoke(System.IAsyncResult)
static Il2CppMethodPointer s_methodPointers[891] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	CallInvoker__ctor_mCD1F67FA182B567E3FB4D70568F08DE10697ADFF,
	CallOptions__ctor_mF8C56883333EB9F403B5C6FC83DA1B0A7F55001C,
	CallOptions_get_Headers_m8976CF0E492FF184A1B485DFD1F6FF3D5C5C81EF,
	CallOptions_get_Deadline_m93D3472352264E20874552A3A530B35114325319,
	CallOptions_get_CancellationToken_m4D27FA3AD6E672D6F1AEED30842CBCBE40B0B700,
	CallOptions_get_WriteOptions_m36277D2343BE7F33FB912C76F028392F6C54B70E,
	CallOptions_get_PropagationToken_m152DD003E0C56F3B644ED4D29E70525BE185DF18,
	CallOptions_get_Credentials_mCCC9E74ED976CC9F2850FAC47DD44C5BFBB17A80,
	CallOptions_get_Flags_m0D17F9FD51511151963D48C63A4D35E25A0DB367,
	CallOptions_Normalize_m1D1E6D51D5DC4E37D8D491CA4A02AA9EA1381D4D,
	NULL,
	Channel__ctor_m8DFFE822D2EB167EDBFC91FFD6D87D5755D148DA,
	Channel__ctor_mD6B913FF7FC90D572A77D8378446D0390895AF89,
	Channel_get_State_m499484CE6AE2E6FAFFEE7FBDFB0C10744C0CC941,
	Channel_WaitForStateChangedInternalAsync_mA81CA9070CC981B6208883D06B01CA18D3B7DB31,
	Channel_ShutdownAsync_m11592C6DE9A6C0A849A6A040C33455E12FE9D73A,
	Channel_get_Handle_m5475964824CCE36F69E2B8D3D1AD72AD529F5B53,
	Channel_get_Environment_mDA14578BC71343282D37A7D3B6B277A8F7C83100,
	Channel_AddCallReference_mA79926FB0C858F5A2F2BA33A1C7DC7AAA89390D7,
	Channel_RemoveCallReference_m4FEC7EA375940E1BD92B95FC7F5FB834743F546E,
	Channel_GetConnectivityState_m8F9A1C25A3D51DD64A62387CCE7931050873A865,
	Channel_RunConnectivityWatcherAsync_mF03BE95A82ABF68EA46AA61FFCE414575EE6907F,
	Channel_EnsureUserAgentChannelOption_m4BC8F5C28EB3BF1F3D54A5416DB961A9BBF0BF40,
	Channel_CreateOptionsDictionary_mC8ACCDB6A317901198580E365875359F6DCADBFA,
	Channel__cctor_mAD3B7A76641F1C7E9F2205F36024C56721BD1065,
	U3CShutdownAsyncU3Ed__27_MoveNext_mF8848AFE4A4A1D411CA34AE3E20FF4FFBA35C02B,
	U3CShutdownAsyncU3Ed__27_SetStateMachine_m694C578D47C85AB6A0DE6FFB5B083F8776FFD15E,
	U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_m4685CB38D877AB61B6564A526B062CC1928723C5,
	U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m36805B0BD06F4A5049980CF4D03E33A28B4C6DA8,
	U3CU3Ec__cctor_m6F74E7C3804C8C25AC4165CF410B3ADC282ADD2A,
	U3CU3Ec__ctor_m386ED0F79EE31134110181B3477BBB56B986939C,
	U3CU3Ec_U3C_cctorU3Eb__40_0_mA6BDD93C22738F884E699EFB7FFB1C0A9188A3BF,
	ChannelCredentials_get_Insecure_m9A9A2980637CE1DDEF85F82E96364D7F5A705CDF,
	NULL,
	ChannelCredentials__ctor_mBB87E55E9B50952A13E6348CA754BEA97916DDDC,
	ChannelCredentials__cctor_m42DC3388E7EA04AB15D4442FB75AD72B5CC04DC5,
	InsecureCredentialsImpl_ToNativeCredentials_m6D4B7AD87DDE9B41687806DB5D85734A35652515,
	InsecureCredentialsImpl__ctor_m7FB454CB8322887314AE90E7D11FC8434351D3DB,
	ChannelOption__ctor_m87521DF73392994A0B5DE4B112CA9CBAEB77BB1A,
	ChannelOption_get_Type_m9C3FD393DD5B28A9AD1ADD4CDFABCE18CAB429A0,
	ChannelOption_get_Name_m494A398A3018AD7D2EF64CD00A4EDE31E9C7CA59,
	ChannelOption_get_IntValue_mEFAD871FD86A644FAD36531F7BBE163AE08D55B9,
	ChannelOption_get_StringValue_m66B07E9D9C91916FA8FBAAC9A525D7C107239807,
	ChannelOptions_CreateChannelArgs_mAEB4E88E49AD182D6C4B0D133CB96F77F643811C,
	NULL,
	ClientBase__ctor_m4E3C351AB35CB3704A21956840FB31A55964FE54,
	ClientBase__ctor_m0A580C97CB59132CAE82772867D1D08E721721F7,
	ClientBase__ctor_m05E23B5D549B11B59CD8036BC15D9122B89E3075,
	ClientBase_get_CallInvoker_m717EE393F9BA179088F999AFA81852EA4094287C,
	ClientBaseConfiguration__ctor_m41D14EA6147B05903EAC2CF5A42E6EEBEC3850BF,
	ClientBaseConfiguration_CreateDecoratedCallInvoker_m234DC1433558E56B72B1ECDD2D1CB5FF8413456E,
	ClientBaseConfiguration_U3CCreateDecoratedCallInvokerU3Eb__4_0_m02D84A3B2BB7C3D108480AF031E4C6CD8B08B41E,
	ClientBaseConfigurationInterceptor__ctor_m5CAFD684DEECEC7E553338453C2D99790C8CBD35,
	NULL,
	NULL,
	ContextPropagationToken_get_ParentCall_m9C1CA1CDB185F420336F4A96C5E4EF94F585E656,
	ContextPropagationToken_get_ParentDeadline_m9A8B1F2223F2C724C81093A7E804D0648E13F87D,
	ContextPropagationToken_get_ParentCancellationToken_m30BF5852CA213583B8CFBFA19F8E7D07FBF3CFD7,
	ContextPropagationToken_get_Options_mAB9343F0119C4B957E969846F3565335AD752889,
	ContextPropagationOptions__ctor_m06B8D692D7D68E9C57155600591223FAE0B9D0B5,
	ContextPropagationOptions_get_IsPropagateDeadline_mC9D40B9C75CC776000877DE49CFCFC1754CA6B76,
	ContextPropagationOptions_get_IsPropagateCancellation_mFBB0D7575EE0C360C49BAA6A15AA03E9DD6A99E6,
	ContextPropagationOptions__cctor_m60E62E164FD6244F8FC62B6327A1CB0819346829,
	DefaultCallInvoker__ctor_mCD7404D17B739D0F4B678D1F176D907F24F0E9FA,
	NULL,
	NULL,
	GrpcEnvironment_AddRef_mAEDBB3BA976285B8D9BE79CA0C12E18F7175DD3A,
	GrpcEnvironment_ReleaseAsync_m5CAFA4FCC9CB3B1EC620E5BD05F653EBF7C87DBE,
	GrpcEnvironment_RegisterChannel_m36175E45C4CF6D4153C299AAC40280EC917F8DF0,
	GrpcEnvironment_UnregisterChannel_mE2D567630D3B51934CA551C84950672CEF5A5F4F,
	GrpcEnvironment_UnregisterServer_m15DD81A732286D93F54E652EC5B52D4740A37C9C,
	GrpcEnvironment_ShutdownChannelsAsync_m8513B4DE5E4B2BCA12CD1D010FA2F7D1C1C8AEA0,
	GrpcEnvironment_KillServersAsync_m0A2CD7F34BA5C439BB0EAF73F1ED62EEAECB508E,
	GrpcEnvironment_get_Logger_m0BEF8A37DC4AE95F0082BCCCCC83BA2CD8239E1F,
	GrpcEnvironment__ctor_mE81F639E0D478627A6D51ECBAA61EE7A1E45CE1F,
	GrpcEnvironment_get_CompletionQueues_m9952B2B87342596DBC4A436CB329763E126EACF5,
	GrpcEnvironment_get_BatchContextPool_m74C153764AA9AF18D0710A10045847010721F999,
	GrpcEnvironment_get_RequestCallContextPool_m3C0D74C96DF0B80E2B2DDE2582F9ED5E6790B9D3,
	GrpcEnvironment_get_IsAlive_m785545075D5A857F81780430E6EF09403A61AB97,
	GrpcEnvironment_PickCompletionQueue_m82852B3C06E7C8CDD2FEB4708796B4A3D467FEA1,
	GrpcEnvironment_get_DebugStats_m224B1977EA7B6A8DCC346536E24ABF384C274944,
	GrpcEnvironment_GrpcNativeInit_mD66A39AAE9D695DC822B9CCA4F721D781EE74D0F,
	GrpcEnvironment_GrpcNativeShutdown_m44786903B22BF92F7B9D5E005B94445B5F84980B,
	GrpcEnvironment_ShutdownAsync_mCE1FE5DEE25BF595144D80BBCAD3B04C81DADE83,
	GrpcEnvironment_GetThreadPoolSizeOrDefault_m6F9A51351D082E71579BB65138DCBCEE8BE294C7,
	GrpcEnvironment_GetCompletionQueueCountOrDefault_m76C422D61AE3B9044D441C3B15959EF769BBE35A,
	GrpcEnvironment__cctor_m50B347CE1255239F36EA0B82A21D81419658E0A4,
	GrpcEnvironment_U3CShutdownAsyncU3Eb__59_0_mC3E8F4C18DD51BABA902B1A221583C96CBBFBCB1,
	ShutdownHooks_Register_mE16B566547B7491B3FFD0768B6089CF9C118EC80,
	ShutdownHooks_HandleShutdown_m3B8439F8EFB428395EE73DDA6FAD02C40F1C34D6,
	ShutdownHooks__cctor_m0FC23656E9AC7AA2D73F10888DCBD5881071B5F1,
	U3CU3Ec__cctor_mF565BE4F80CBE3900FDB7CECB4607C67CD8F8EEE,
	U3CU3Ec__ctor_m2CA860CA9CEE3CC98469FFAE24C0515E892B0B05,
	U3CU3Ec_U3CRegisterU3Eb__2_0_m6223F46FC1420C50A86ABA5074A9B284DD56CEFC,
	U3CU3Ec_U3CRegisterU3Eb__2_1_m2A090FA3BEE20386D03E38C04F118DE4531AB1BA,
	U3CReleaseAsyncU3Ed__25_MoveNext_mA72EAC6D03E6D49B162627F4B1F17EBDE66D67FD,
	U3CReleaseAsyncU3Ed__25_SetStateMachine_m4D4420EB99639C76F2FE31EF40F4524E9E292F9E,
	U3CU3Ec__cctor_mA7262BC21082C2993880E12D3001F8E8C57DC7A7,
	U3CU3Ec__ctor_m7A3DF675C629E3F387A06622F88334E4348E6B2C,
	U3CU3Ec_U3CShutdownChannelsAsyncU3Eb__31_0_m7558A537DCDFF9F0A78EFCE6264FA4CA1720D912,
	U3CU3Ec_U3CKillServersAsyncU3Eb__32_0_m34070D7E9FCE4C485CFA78BBD7B48B3EAEDFE73C,
	U3CU3Ec_U3C_ctorU3Eb__44_0_m33F9882BBADD3E6DCDD87DFED09F5E3B4D6951AC,
	U3CU3Ec_U3C_ctorU3Eb__44_1_m8528E58F88D442B4F17B8444B80A9350E490ED79,
	U3CShutdownAsyncU3Ed__59_MoveNext_m3CC7426593006A20DCB8ADFA6B4544862A1F2798,
	U3CShutdownAsyncU3Ed__59_SetStateMachine_mD9B8ECDA6C0015C6C894B3D2E8A7B9934F479D71,
	NULL,
	NULL,
	NULL,
	NULL,
	Metadata__ctor_m3CEC8D4E6C0B2946DFD7789F838793710B0FD689,
	Metadata_Freeze_m5BDA2FFCCC07864ABEE2A4661DA87D68EC0EBD30,
	Metadata_IndexOf_m62AAE1AB5734AABA460C07155355352D5B60AE91,
	Metadata_Insert_m371B5CB40511B58DD2C811C65A9502F8AF69E4CD,
	Metadata_RemoveAt_mC3F2190795610FA2FED3A022095322AA5079036E,
	Metadata_get_Item_m72760DE95A21D844F311FC462C809E7C5F949912,
	Metadata_set_Item_m85BEF0ECBB430662D1B5C7310B65AC6843A5A81E,
	Metadata_Add_mF1E0A1C30131CB5FF394F70A9D31750029F4DC25,
	Metadata_Clear_mDE0C9928E90D4ED0A3F5E41C71B92420FA473476,
	Metadata_Contains_mFB162D87EF4B07402770E9D1AF294E9BF31B1A41,
	Metadata_CopyTo_m92A791DD15067F43B44C95372B33FA4E14BF7A27,
	Metadata_get_Count_m83DAD9E767A25CF5DAE326C28E9B2858248A5086,
	Metadata_get_IsReadOnly_m801D2A2E8AB63F6952E884C98018A4D4028BDD9E,
	Metadata_Remove_m21E6A384B0FD21CDDCA7ED49A353513187452C87,
	Metadata_GetEnumerator_mAC1E8088525BFE199BE25364B56D86D5F8BA804D,
	Metadata_System_Collections_IEnumerable_GetEnumerator_m5BC66A61D7442F7847F41143B439BC2A7C786FC4,
	Metadata_CheckWriteable_m172CE925DDDAE87C6CEC9DAE4792CF33D2382DA5,
	Metadata__cctor_mA34734A71AAB45258A70BAC65195D532401F917A,
	Entry__ctor_m6DB44F9B03DED610E2139DD515FEDA5647E37676,
	Entry_get_Key_m8840C94B36045EB174A4455867E71D6D9559747D,
	Entry_get_IsBinary_mB1D360E75BC27A088BB07070026441D3458192F1,
	Entry_ToString_m7D1A87964FE4FF87CE0FFD7D4D58071F7869527D,
	Entry_GetSerializedValueUnsafe_mF71CF3999AFC72808A8BAAC644F31CF9B178030D,
	Entry_CreateUnsafe_m65328E47ABD4AC9971DE66A7B1670D3748561755,
	Entry_HasBinaryHeaderSuffix_m8479DC66A433F44634F6B245B9DD4B8EB3ABA875,
	Entry__cctor_mCAD54EE06A21481E6CB1CD747BC0E046D9DF50F6,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	RpcException__ctor_mBFCED350A89AC8399BF23D131DD3D63F81EA450E,
	RpcException_get_Status_m2B78A174FBB31967AB6ABD79B45DF093D8DD4138,
	Server_KillAsync_m014C52F0FE386C5DC022ECA5A6C9811CE9C32CC0,
	Server_ShutdownInternalAsync_m7C9E75AC534A131882BEBF4168C388D6A4F40F0E,
	Server_ShutdownCompleteOrEnvironmentDeadAsync_m2C4A5ACBE20C77ADEF28DA5892BB1D7C5C8C1E72,
	Server_DisposeHandle_mA476FEB23D7D72AF35820133A997E6AF4B3F9B78,
	Server_HandleServerShutdown_mACFEF91015E69956B60327ED89AF17531A259300,
	Server__cctor_m65130F4A72C8BB29D8309B5C1E9D49EF6DC491E5,
	U3CShutdownInternalAsyncU3Ed__32_MoveNext_m4F3FBAA5AF712B9EFBE461E0DF3FE55369AA1697,
	U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mAD9E26D66092DB13D12B48418376BC462CBBA31F,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m4839A82CC55051F059919BFB5A6A26C9E40F2BC4,
	U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mFC7CDA22989636BFDDBAF8754F0FFAECB706EB5E,
	Status__ctor_mDA2F89D0711AF59EB9B8633BEA22DAF91F8CD9EE,
	Status_get_StatusCode_mC0CAB9A67D6D5B8CA659FD834E3D77EC1A258054,
	Status_get_Detail_m304E4CCE7B0AD754FB9B00B9792A925931FA1D4F,
	Status_ToString_m07F5926D4D70C0D55D6067841EBA76C59653D77B,
	Status__cctor_m7100753806DA1D271557934354719AA850F2EB15,
	WriteOptions__ctor_m13496EA760803C44D513BB05BB6140DF29E31816,
	WriteOptions_get_Flags_m74EB3F07E36014E6A2BBCC9B564A734189955157,
	WriteOptions__cctor_mE19D957BA4B63B5FFBF404FB752B2ECB2FD24305,
	GrpcPreconditions_CheckArgument_mF6112774C50ACE47FE9A27105A809DD268E1DDD4,
	GrpcPreconditions_CheckArgument_mD3E4736A70E242676C1ADDF58D82F791E09DD003,
	NULL,
	NULL,
	GrpcPreconditions_CheckState_m82846BE59F78927837E8C58C7741EA799904A3B9,
	GrpcPreconditions_CheckState_mA537C6FFEDC5169E6BF88D4BC9423AA75F434F39,
	NULL,
	NULL,
	ProfilerEntry__ctor_m51372D6EF4E0A77EBCDF66E91AB827C8D4DFD6EB,
	ProfilerEntry_ToString_mA89E97C6C403703B633037913AF5F7AEE2996920,
	ProfilerEntry_GetTypeAbbreviation_m9DB8CD80DFF0BB2F2EDDE6405EDCBC9A99D3F6B9,
	Profilers_ForCurrentThread_m2BFA82E8B0B025D325543DB5F817CBFA28245CBE,
	Profilers_SetForCurrentThread_m448081CA2995E04208A9AE2B1138FCA23C793BFE,
	Profilers_NewScope_m92A8B4A50C45CFA1AAAA394E774435B23BAE7C71,
	Profilers__cctor_m1B0AC1275033C146A4D13479B876B002885F387D,
	NopProfiler_Begin_m171D6A620B9362D41796209698C0E068CEF6C3F5,
	NopProfiler_End_mAC29B4407939FF2C26EFA04DD2F5C73414B8697C,
	NopProfiler__ctor_m3ADEF58D3E56B01F1788C8520EABA9152803C0A9,
	BasicProfiler_Begin_mDB116112C975FC7837996973EFDE6C5DCCD214A7,
	BasicProfiler_End_m0444EDA0CF04B981037BCCEE6872C46F43C836C4,
	BasicProfiler_Dump_mD27FD949DA1E692FB848CBFD2033E3293BE45B2D,
	BasicProfiler_Dump_mD74AE62BB7A5C84E8A9B3CBF1E0A57FAAD62681D,
	BasicProfiler_AddEntry_m7635C734E036CA1363B3B163118D6098387F78A1,
	ProfilerScope__ctor_m94126261F4A3138B4DE9E6F7B429BEF0CB941725,
	ProfilerScope_Dispose_mA8E37D1B4C3765839213FA0AFA7DFDCFB549AF65,
	ConsoleLogger__ctor_m021CFA520385DD63E22905DA500C7B7BD388260C,
	ConsoleLogger__ctor_m6085F148C8FFB88345591E58A753E3DD053156C7,
	NULL,
	U3CU3Ec__cctor_m7589246363A54958C5FAF7D0A90E73FA6BF8A0CF,
	U3CU3Ec__ctor_m7633D0CA2749095E992A385FE98826251ACAE445,
	U3CU3Ec_U3C_ctorU3Eb__1_0_mEB73261E527E774143EAA4053619FE79F70EC860,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LogLevelFilterLogger__ctor_m67617E99AA6BB3C3A244EC510FBA8A2B63C9CECC,
	LogLevelFilterLogger__ctor_m881898E94AD77D9035A4DF9A380D59FD924A389C,
	NULL,
	LogLevelFilterLogger_Debug_m1328B49DA965B5033891C6BF84124616C85391DC,
	LogLevelFilterLogger_Debug_mE3D23E6B737AD29A0B07F50D3FBFE8DE3499D368,
	LogLevelFilterLogger_Info_m6B3AA3B0070185BA5E73B16FB92ACBC5DE6FA218,
	LogLevelFilterLogger_Warning_m1D2F6D195CB22217E232C9D5FCB812C3B7576FBE,
	LogLevelFilterLogger_Error_mA57A147338E6395CE2FE9A6CAE00AC5C8ABCDBCE,
	LogLevelFilterLogger_Error_mFF938C622FF60D74D0A49745499D09ADA0675286,
	LogLevelFilterLogger_GetLogLevelFromEnvironment_m5D1BF19159D3FB3DA14B2C222C6E0F9056F0843A,
	TextWriterLogger__ctor_mEF686C979122A3BB78A2DE64EDAB5B9B28150D94,
	NULL,
	TextWriterLogger_Debug_mD97043C8C454FCB47C4445B3EF650B82369EEFBE,
	TextWriterLogger_Debug_m68AFE2644554539E74A8DF5498FFBC5B717CDB07,
	TextWriterLogger_Info_mBBA4ECF0AC3E4C9066C7A25C01461D148E0E7793,
	TextWriterLogger_Warning_mA0E897032E3D098D0E31EB432938A326D1F3AE31,
	TextWriterLogger_Warning_mDA06C7D150C570F88439F17DDB7D44482F9514F7,
	TextWriterLogger_Error_m35EC80C0ED193ECD48761513340F49D440F67AD7,
	TextWriterLogger_Error_m3D611FC761BCDF421C105EB2F9A4146D8A01751C,
	TextWriterLogger_get_AssociatedType_mE6DC903CB0A330AB281C1D15FF9A423266C87CDD,
	TextWriterLogger_Log_mDDDB3E73DFA3EDA9213327FC282EEEF2D592F55F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AtomicCounter__ctor_mE0E08C43AC2F7B4E9C37000E2C53A4F94E6E19B0,
	AtomicCounter_Increment_mAEE3E578062594AA427C1155CB611DBFE9ED1421,
	AtomicCounter_IncrementIfNonzero_m85213E168DF50ACC8BF55AEB54FA6A7CA210DCD8,
	AtomicCounter_Decrement_mC537964EF45F37381D7537CE7E9F97FB974AC4EF,
	AtomicCounter_get_Count_m6124B5FD6885F256883936D90DAAF343A479B2AA,
	AuthContextSafeHandle_ReleaseHandle_m2755C22C25D470FA3D2B7374A1E62FC3AA88EF3D,
	AuthContextSafeHandle__cctor_m606E19E9CE3741F8F13468ECB1FA9C5D35BE720E,
	NULL,
	BatchContextSafeHandle_Create_mB4AC3FE7E16F4EFD94684C3DF25AC33BEABAB6CC,
	BatchContextSafeHandle_get_Handle_m76630540B833E3DBBF1D235137A8C8F797A0516C,
	BatchContextSafeHandle_SetReturnToPoolAction_m0447794758AA54A6DDB3FC9ACCA4042E0ADF85F9,
	BatchContextSafeHandle_SetCompletionCallback_mF4E678B089D1EEA4F467CDF41444B002021201D7,
	BatchContextSafeHandle_GetReceivedInitialMetadata_mC5E5D67B3A70657444F073F350932B104E32C1E7,
	BatchContextSafeHandle_GetReceivedStatusOnClient_m28B929FDC7CF70D0E658DCA592DEACD35CBB7684,
	BatchContextSafeHandle_GetReceivedMessage_m6BCA1A53023472AD693A263DFB3E7142235937E5,
	BatchContextSafeHandle_GetReceivedCloseOnServerCancelled_mB781F2C349E9D949D9EC1B4635612A5E7390F743,
	BatchContextSafeHandle_Recycle_m3FBA74C4DB223275EF3EA8C18FD132487148EBB8,
	BatchContextSafeHandle_ReleaseHandle_mEEB1316F08EA9A548388ACD38980BF442E0F3AAC,
	BatchContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mE72AC3EAD8755C29763A55D68C043E0426E56A8C,
	BatchContextSafeHandle__cctor_mEFBAD84565CDD24AC749CA3013A0414BC8340C9D,
	CompletionCallbackData__ctor_mB64711B2AA741620F54325DEF003FB870ECA22C4,
	CompletionCallbackData_get_Callback_m52A5FB56BF0A105FA230A41C0676D6227538E273,
	CompletionCallbackData_get_State_m3CAA8F5A8E8E689A0DE4C258AB5F93E3093AFECD,
	CallCredentialsSafeHandle_ReleaseHandle_mAD67F0D45D45E0F19B85130238C522702B16AD69,
	CallCredentialsSafeHandle__cctor_m2D97B9058822A357FE4134021243E2D45E1D7F67,
	CallErrorExtensions_CheckOk_mB87CB9AEEC252E93471B4B52F63C3FC211545BE8,
	CallSafeHandle__ctor_mFC03FF19D4ED82B0C88C66AAE0A46CE17F95C028,
	CallSafeHandle_Initialize_m7D747B881AA8887F877AFC2CEB4ABCE1BD0FFE97,
	CallSafeHandle_SetCredentials_mB2EF1629921925FC5697F6882528ECFD3654FD2E,
	CallSafeHandle_StartUnary_m5A4C02A10D9552633AC71E63336242EF13C1058E,
	CallSafeHandle_Cancel_m8E53318BD9895FDC102E688C13CD0A3339BB22B9,
	CallSafeHandle_CancelWithStatus_mE30CA3CEE9E8201335826AD40D71A1A24211BC10,
	CallSafeHandle_ReleaseHandle_m4AAD68819A005DDDB2467FDF759FBB12949CEBE3,
	CallSafeHandle__cctor_mF21C78E2E295FB578A2E3F7932C8283AC3C4FD22,
	U3CU3Ec__cctor_m21ADD842B2D2C9D59066989ECE40963D4BBFA316,
	U3CU3Ec__ctor_m90C1508424A7014A36D29487F899FCDA69961704,
	U3CU3Ec_U3C_cctorU3Eb__33_0_m754CDAABECE6F70DBD160532B70A3B4941D2B7AE,
	U3CU3Ec_U3C_cctorU3Eb__33_1_mF0D931D960C132935C26784631B7C922772D8F6A,
	U3CU3Ec_U3C_cctorU3Eb__33_2_m9407191C0B723D8B73DAFB05A60B71D2ABC0EAEA,
	U3CU3Ec_U3C_cctorU3Eb__33_3_mB39AA929197C5FFFFDE68517D47F3A6BEC1802BA,
	U3CU3Ec_U3C_cctorU3Eb__33_4_mEFBF4F5A52B84FFA0E19BA6094F72FF88E1BD224,
	U3CU3Ec_U3C_cctorU3Eb__33_5_m53C3551E34DE1D0A156952E32E4A2DBA6CD702C2,
	U3CU3Ec_U3C_cctorU3Eb__33_6_mF1D813B22F73D9EFBF2568334F85260A2BEDC3D0,
	ChannelArgsSafeHandle__ctor_m11E7C819C013E825B106EBC6D51EF69D409CF4F7,
	ChannelArgsSafeHandle_CreateNull_mAC7086A8486B6B76393565E661E56523B3D7A687,
	ChannelArgsSafeHandle_Create_mE8BB97CC42501D12852D20D974685E5760A6FD30,
	ChannelArgsSafeHandle_SetString_m8B7D88EB0935EBF23606D07736BEA4A1F79248ED,
	ChannelArgsSafeHandle_SetInteger_m144AC20B1C62F95B03AE26B70543EBBDAFE16BCC,
	ChannelArgsSafeHandle_ReleaseHandle_m8AFC85D009FA1F07BD287B2D6129B487F5AD211F,
	ChannelArgsSafeHandle__cctor_m6908F2D7CE5EC98A06E9A6E315F402604F3DD547,
	ChannelCredentialsSafeHandle_ReleaseHandle_mD5028109E4BBC168C0A0AA0EBC335E91EE10122F,
	ChannelCredentialsSafeHandle__cctor_mE2A307F5E1F4FC10A2E3859327DE474C727F57A0,
	ChannelSafeHandle_CreateInsecure_m7148B212372EDDAB59DD6B0ED5AFC3BFC64D8687,
	ChannelSafeHandle_CreateSecure_m8F7757A40278AF04D33AA8BF3AAD34AFC7F2F531,
	ChannelSafeHandle_CreateCall_m04317411E56DC8692B96EA917767EEB39FABA4FF,
	ChannelSafeHandle_CheckConnectivityState_mF544E4A2799C6588AF1357041C70EFEC9A040141,
	ChannelSafeHandle_WatchConnectivityState_m33DDA48710CA7F8ED04FDF69A06ACF3FCAF3B7FB,
	ChannelSafeHandle_ReleaseHandle_mBC031877B037E873383FA57CE8D53068C851E5F6,
	ChannelSafeHandle__cctor_m3D3931EFB2890593B0B32B23CA14129DF23B590A,
	ClientSideStatus__ctor_mF2B0E195E5D71A346E723548EE40369EF553C510,
	ClientSideStatus_get_Status_m218E9065B0C36620CDA01A167E2287669A897193,
	ClientSideStatus_get_Trailers_mF84F181401CFADA53E5C070736385AE0C55023F7,
	CompletionQueueEvent__cctor_mC5DBC5EB96CF4A8D3E33D09F2A72E4A36602C98B,
	CompletionQueueSafeHandle_CreateSync_m2C2472220880A8D3E02D902A5D24BECFAE7FAF7A,
	CompletionQueueSafeHandle_CreateAsync_mD747C96186EE79C50BF4035809B4AA14AAC20D4C,
	CompletionQueueSafeHandle_Next_m9C347800C9C5B3B95EAEB0979B2D0996AB14AC17,
	CompletionQueueSafeHandle_Pluck_mFE7984F69B061FA485BD8C0F0BBD6A59154202B0,
	CompletionQueueSafeHandle_NewScope_m5EADE3D4895E78B5CD5EC03F28155AA0616049EA,
	CompletionQueueSafeHandle_Shutdown_m0B056CFE2EF29B72F32CCC21DD4F6E96761CDFFA,
	CompletionQueueSafeHandle_get_CompletionRegistry_m0640C236F79E4B674461F040BFF0C41B2B866B86,
	CompletionQueueSafeHandle_ReleaseHandle_m6AB69BBFF631F413427A5C32D53827E34DE711C2,
	CompletionQueueSafeHandle_DecrementShutdownRefcount_mDCF9E4418A680DA65823E98BAD10AF886DDE1B63,
	CompletionQueueSafeHandle_BeginOp_m7AE79AAFD991F96F155C1C1EA65F13910D6226F2,
	CompletionQueueSafeHandle_EndOp_mBB98F57D5DA229EB5395C0C49F51E20F9F41BA00,
	CompletionQueueSafeHandle__cctor_mA7904BF3E043473B9F0A12F024C7BAED646D3A2A,
	UsageScope__ctor_m365D9BEEBB3E3410274408F3DAB4286A779590EF,
	UsageScope_Dispose_m0AA11ED37C8A7E00DDDB8B8FBF632B49F4DF8445,
	BatchCompletionDelegate__ctor_mBE15BFD3ECD9A6C2A9E8F54942D2C0E826041074,
	BatchCompletionDelegate_Invoke_m8ADCDF00C08A7306EDB17C8C7979141737D02AA5,
	BatchCompletionDelegate_BeginInvoke_mDDD621F1E8829BCF78163AE365A54CE58E5CFAB1,
	BatchCompletionDelegate_EndInvoke_mA5F70A0AFBF4EE8DD7BDD50D767543578AAF1EB7,
	RequestCallCompletionDelegate__ctor_mFC109CC786AA0BF384831CEB8E566D3812A1B041,
	RequestCallCompletionDelegate_Invoke_m9AA919418CD2D783884DBF7FFCC04121FA175B9C,
	RequestCallCompletionDelegate_BeginInvoke_m8DBB9D1D39784417E3497E8A991680D2CD1CB95F,
	RequestCallCompletionDelegate_EndInvoke_mA1AEFDC4F667588A3ABC7D7E428EE9294CBDCC05,
	CompletionRegistry__ctor_mF4EBED000C8CC4EF276ED0E63CD363B14732023F,
	CompletionRegistry_Register_m2BF4005A3222273B84718AA8D343665112B273D8,
	CompletionRegistry_RegisterBatchCompletion_m64F64DFB5CD145BF438C7817922570DD6351BECB,
	CompletionRegistry_Extract_mF9D8820D57DC09A94C105496733437165F89B71B,
	CompletionRegistry__cctor_m7A56BFB79181E4F41E5D0919BB04D3418F3FF601,
	IntPtrComparer_Equals_mE3E7B531523248226CEF9C0D6AE2EE7E9DD928EC,
	IntPtrComparer_GetHashCode_m3DAE0C5EC2D347A22FFBA3C5B4C58B5AD38B209C,
	IntPtrComparer__ctor_m1334BA15604BC3F9D3139133CD8A72B625AB4B7D,
	CStringSafeHandle_ReleaseHandle_mAE75E95CC4A2DF87361E01A505CDCE4548A3F3AE,
	CStringSafeHandle__cctor_m036B07A8EEAA4432B353D127A8877065E4695C19,
	DebugStats_CheckOK_m3B586EE449A70C76C87C1593BAF657E0C692753C,
	DebugStats_DebugWarning_m640ED3B5C92A90073F22B80B5C09380E900BFF9C,
	DebugStats__ctor_m4BDBC05DBED2B6663E43A3FFAE05B0DF7612C980,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DefaultSslRootsOverride_Override_mA6D3245B4ED4A9D2D84E2ECE87814ABAF566803F,
	DefaultSslRootsOverride__cctor_mBA77775AC6EEEF68D246F9EB224C81BE2F38ADD5,
	GrpcThreadPool__ctor_m6F899111D8D6F214478747AC0B92F93A0F26BAD9,
	GrpcThreadPool_Start_m1206087A927C88DF77D8FED20510B316BF936DF7,
	GrpcThreadPool_StopAsync_m4BC773D2516625BA5AF6551BCB75F906F7F4C778,
	GrpcThreadPool_get_IsAlive_m2EE41F016E63D486139CEB23C6856A17C04DA768,
	GrpcThreadPool_get_CompletionQueues_m791ABD76B887D935B1FF06504A1FB26BEAF2E699,
	GrpcThreadPool_CreateAndStartThread_m4948A1B5A5FB9314B5E81B21AD8A13CDFFE4E6B5,
	GrpcThreadPool_RunHandlerLoop_m97FA3195B428003D4A39ECC0D57AB7BFA7E62EC5,
	GrpcThreadPool_CreateCompletionQueueList_m7482874DF7EA8398C0540D91E5AFB662C5C8811E,
	GrpcThreadPool_RunCompletionQueueEventCallback_m39A1D77ADA89DA8430748392D74672BED9FAD57E,
	GrpcThreadPool__cctor_m2819570A5CD4D1FC157FDB35C2FC467BCC62C40C,
	GrpcThreadPool_U3C_ctorU3Eb__15_0_m440D949B780EECBBB7E0ECA750D6A357AAC5BFD3,
	GrpcThreadPool_U3C_ctorU3Eb__15_1_mC25D9AE36CC4E511D6C63B7A52DB81B351121F23,
	GrpcThreadPool_U3CStopAsyncU3Eb__17_0_mB0B1CF9007D7F365567023D5E5618A030DFBDBBD,
	U3CU3Ec__cctor_mF3C7DD79D7F30FFA279AA0693EC0465ABB519D76,
	U3CU3Ec__ctor_mAB5F29D0B08A84399356FF6B0F5DDE45D0F500F7,
	U3CU3Ec_U3Cget_IsAliveU3Eb__19_0_mB9CCED19F073763C4A8063DA97AC8FB731CC3EAB,
	U3CU3Ec__DisplayClass22_0__ctor_m401472715865CBDB7FC5986439B2E211E8469E41,
	U3CU3Ec__DisplayClass22_0_U3CCreateAndStartThreadU3Eb__0_mA5338078025A37EA515EED03FAA2985F8346DCF6,
	U3CU3Ec__DisplayClass24_0__ctor_m7356E4177C9DC97DDFAD2A48D8FEB6C0647E124C,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__0_m28DE366C5D89A82BC039FCB3FD9B9A7EDA3A1CA0,
	U3CU3Ec__DisplayClass24_0_U3CCreateCompletionQueueListU3Eb__1_mD40B4DC7284616DC4310F5923959037C2B9ED733,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MarshalUtils_PtrToStringUTF8_mD4ECFA1F871D8AED5A3DA04856A42CF162FEB249,
	MarshalUtils_GetBytesASCII_m6A3F9E187322DD70D90C657B9A1E05CAABB421EC,
	MarshalUtils_GetStringASCII_mDF203D013FC5D674B152F43792C5F3E36BEF0272,
	MarshalUtils__cctor_m564447B61B086BBC4C7EC1D8B47BBE3C01ECD966,
	MetadataArraySafeHandle__ctor_m1EC6AC7F84DBD9DBB41BC1E4FD14A67C92FD86FD,
	MetadataArraySafeHandle_Create_mEEE2787186A0E19027C32E9066E0F86911F2176D,
	MetadataArraySafeHandle_ReadMetadataFromPtrUnsafe_m29D26D4521B9BEA15EAA971FC8218D8C0EFA9A14,
	MetadataArraySafeHandle_ReleaseHandle_mBA48C75CD4AF2132439A694508E1BD975322CEA6,
	MetadataArraySafeHandle__cctor_m125DA06A0E439632B7E8B1639F3B4E26CE44E671,
	NativeExtension__ctor_mB2EFF186C3B80CAE68F46BC3CA08D780D5947038,
	NativeExtension_Get_m99941420928FDE2FC56257B564FAB4F37C510656,
	NativeExtension_get_NativeMethods_mB7ED46F0C2E9206E27743B76CF3C667CC0AAB3DA,
	NativeExtension_Load_mA6FD9A6B6E0D2FD5DEDF16A29B0E53B2A8510D22,
	NativeExtension_GetAssemblyPath_mF63A485267B8F0C0C15F3E46F30F52EF949CEA6F,
	NativeExtension_IsFileUri_m6B83DD5B60E93DF3E53097DC1DB94ECA40355003,
	NativeExtension_GetPlatformString_m453DE7843758102D2D25E50F308BE655943BED21,
	NativeExtension_GetArchitectureString_m07917AEE4E101B9DD8F2555BAB731B44733D5806,
	NativeExtension_GetNativeLibraryFilename_mE863680E2B2DDDB3B482193C553792B449C8C949,
	NativeExtension__cctor_m2660EE0FC4E9F262D241150C343C2BA593A3DB9A,
	GprLogDelegate__ctor_m731816CC93A1148F36B3BF9FBAE798CD5D7F5B67,
	GprLogDelegate_Invoke_m7D9471F3101F6911E9C1D09F8A25E80C8773B4D4,
	GprLogDelegate_BeginInvoke_mF4E79C06A56E374733D3D0F20B99F4354D7F2E0A,
	GprLogDelegate_EndInvoke_mE9089AB3FB327071FD657FAC6DCF3855298CA7C5,
	NativeLogRedirector_Redirect_m3576E42AC2DF4E5EF7E75765A99C46B204097D21,
	NativeLogRedirector_HandleWrite_mCCFC557D1FC9F31F948469634309BF783FE7C78E,
	NativeLogRedirector__cctor_mEFB5F4E7E4F334B3C9AAC1CF9A78BAD7BBBD3EDC,
	NativeMetadataInterceptor__ctor_mCFF8D36FEFCFFEBDB16E4E6F1E94E4F061F01D04,
	NativeMetadataInterceptor_Invoke_mC7A4F58A16BF839517C1F0208375BB5676ECCA8D,
	NativeMetadataInterceptor_BeginInvoke_mB0871CFE06F601E370297F7A5B34B91024C6E784,
	NativeMetadataInterceptor_EndInvoke_m1874F365DC67C1250D09B2BC4ABE774A10D4066C,
	NativeCallbackTestDelegate__ctor_m9346CB0CC4D238109ABF9FA9169563FD75F6ECF4,
	NativeCallbackTestDelegate_Invoke_mCA69B5B83BF1747CA9FBD69034FACF9B86FBA005,
	NativeCallbackTestDelegate_BeginInvoke_m819503F7767168B929148540EDF7CC80A00E8D27,
	NativeCallbackTestDelegate_EndInvoke_m134764FA8DACDEF55522D7A9FE5240F7ACF97D4C,
	NativeMethods__ctor_m816592ECB515D41ED5B4A447DC445AC6EC80E177,
	NativeMethods_Get_mE5663787C4D3E84B167DC3E64546E55DBE1E1ACC,
	NULL,
	NativeMethods_RemoveStringSuffix_mAC90E66554FAD83EBFF1990C6B4662A5D7F25079,
	grpcsharp_init_delegate__ctor_m7B920F75CE6D8F052DC86AA818834F5DB8B7AC64,
	grpcsharp_init_delegate_Invoke_m336CD2C9BA89CE5B8BAC1F55B7933C2469D308B8,
	grpcsharp_init_delegate_BeginInvoke_m9F2AA0BE03F82BC15F75377AE3D90301DCC9B2CD,
	grpcsharp_init_delegate_EndInvoke_mDD4A70C37A95CDB7A84ECA63858CFEAE617D0BA6,
	grpcsharp_shutdown_delegate__ctor_m241F2E47581EBDB79FB803C09B002910A2FB8E12,
	grpcsharp_shutdown_delegate_Invoke_m2C4E227AF0326081D23576F83FCB2C06233281EC,
	grpcsharp_shutdown_delegate_BeginInvoke_mAF2ACA9DA017348C8C8BF3CB8136DBE307788741,
	grpcsharp_shutdown_delegate_EndInvoke_m2E44B720F2E529C46F848DE8FC1AD75890E537C1,
	grpcsharp_version_string_delegate__ctor_m3F0D5655AF7F351AAD391675F5FEA08737249B47,
	grpcsharp_version_string_delegate_Invoke_m6EF5955F756638102497CEB01EDF7C632F63B7C8,
	grpcsharp_version_string_delegate_BeginInvoke_m0CAB945889B9BB0B4E96F2559373959D59309CCE,
	grpcsharp_version_string_delegate_EndInvoke_mDFCDB2470E9A2D0639CC3A1B1A26B4235558D643,
	grpcsharp_batch_context_create_delegate__ctor_mA362A65DC19016221027452A4C495C647F444ED5,
	grpcsharp_batch_context_create_delegate_Invoke_m57AD142140F5B760022E2A822597D14BFC747EF9,
	grpcsharp_batch_context_create_delegate_BeginInvoke_m9E4A5D6EAE9BA385E57361FE391427679C05B138,
	grpcsharp_batch_context_create_delegate_EndInvoke_m45D2E5CB53D6C0890A082458F7AC12EBA0BBF7BE,
	grpcsharp_batch_context_recv_initial_metadata_delegate__ctor_mEA8E3FA374617F6FC88B6A01DBA518EA69711E9E,
	grpcsharp_batch_context_recv_initial_metadata_delegate_Invoke_mE7C392DAA90AF106897459D6AE5336F2453358D7,
	grpcsharp_batch_context_recv_initial_metadata_delegate_BeginInvoke_mB3D9CD5F5E4F1B4C2B9F2DBD38E3F93835A6D6E8,
	grpcsharp_batch_context_recv_initial_metadata_delegate_EndInvoke_mC5AA12CE722DEDA311DD28FAC02189E0F70F5C9E,
	grpcsharp_batch_context_recv_message_length_delegate__ctor_m524D51CE13C3D7C21D81C070A432A82C3922CFC5,
	grpcsharp_batch_context_recv_message_length_delegate_Invoke_m22EFA4148CBF1FAB8949440CA7DC6D4921313B14,
	grpcsharp_batch_context_recv_message_length_delegate_BeginInvoke_mFEBB4ECB108E096BD62DC14125254A834BF6DCAC,
	grpcsharp_batch_context_recv_message_length_delegate_EndInvoke_mCF04D6AE39EBD24997E95455AD93EA80843D2CAC,
	grpcsharp_batch_context_recv_message_to_buffer_delegate__ctor_m73156DBDC86ABF2728A80A1FB97BC0668396BD29,
	grpcsharp_batch_context_recv_message_to_buffer_delegate_Invoke_mBC40F878ABF5FDBE89195CCBD1A51C78D2D0BC43,
	grpcsharp_batch_context_recv_message_to_buffer_delegate_BeginInvoke_mFE140CDF78F9CBA72707571F8FD5C2B5A1BA7470,
	grpcsharp_batch_context_recv_message_to_buffer_delegate_EndInvoke_m83A52EB60D2397DD60932DF2D3F60D0CF8128AAA,
	grpcsharp_batch_context_recv_status_on_client_status_delegate__ctor_m858185F93B8B9F20DB4CF50543100863BF92F6A4,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_Invoke_mD2236078D83242255848213B2FE1F5416063EC95,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_BeginInvoke_m547087184AD7906FAB8DAB9F3CBD12AFEAA17DA0,
	grpcsharp_batch_context_recv_status_on_client_status_delegate_EndInvoke_m8CE2C6229327E9177BD085A6438CD7CEBE3785AC,
	grpcsharp_batch_context_recv_status_on_client_details_delegate__ctor_mD449A8D31530075C1F428B676B560650219FBA7A,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_Invoke_m55E6EFD44EB8C44925FDE0BB2D873F110CC31C3A,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_BeginInvoke_m00B06C67656B3CAFE16C562B2500DC6E53234C5C,
	grpcsharp_batch_context_recv_status_on_client_details_delegate_EndInvoke_m23A4BC724B85790B1157F99CBAE61F6DC0054B48,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate__ctor_m2CD584D945135A1E208741606A177DF6164F9AAD,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_Invoke_m2E8A06B7BD43B0296D6105ED3F99944C5885FC55,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_BeginInvoke_m90750742A63EF1BEF6036E97DB1ABBEE96180A41,
	grpcsharp_batch_context_recv_status_on_client_trailing_metadata_delegate_EndInvoke_m2079910490665051BDDC688DCFF75F792151ECDC,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate__ctor_mC431A1DDDA0053FBDBC1D25F802EE617F638579E,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_Invoke_m97DB3D67EE72EA59B44C004E9573F3C284770FDE,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_BeginInvoke_mDE016DEA6BC462B8403A72410479A286D781F270,
	grpcsharp_batch_context_recv_close_on_server_cancelled_delegate_EndInvoke_m85972E0812686E9977BCA2857012285E1C5DA286,
	grpcsharp_batch_context_reset_delegate__ctor_mD150906665399C3FE36C06B4611DCF1BD0194788,
	grpcsharp_batch_context_reset_delegate_Invoke_mABFBEDB9220434B2FD23D35C315E6753EAA5185F,
	grpcsharp_batch_context_reset_delegate_BeginInvoke_mAEAA6C8B383169C18D7A3EB73C891920457AEBF3,
	grpcsharp_batch_context_reset_delegate_EndInvoke_m244846FB9214BBF1277105C7BA908AA15CB7DD65,
	grpcsharp_batch_context_destroy_delegate__ctor_m7332FE9295EF5DD2D038AE56D21CA9F5EC349E1D,
	grpcsharp_batch_context_destroy_delegate_Invoke_mCCD3E46F3227DB79F8826D14B36160948CAF0B50,
	grpcsharp_batch_context_destroy_delegate_BeginInvoke_m4907971F3715565E720AD29CEF25C8D3A4853FF3,
	grpcsharp_batch_context_destroy_delegate_EndInvoke_m325F68A13E0170BB8878F2B739C90FC8E36AF815,
	grpcsharp_request_call_context_create_delegate__ctor_m98E46611720D1CD672CCFFB8A44E222F74CEA3F9,
	grpcsharp_request_call_context_create_delegate_Invoke_mEA6B1B47014563B49F4BAAD18CA60A9754D8718D,
	grpcsharp_request_call_context_create_delegate_BeginInvoke_m3465669260B3558FF3CA25A867DEF0247303FEDB,
	grpcsharp_request_call_context_create_delegate_EndInvoke_m3A39DE41344D7B0CE58764FBD1E995C2C0229CA3,
	grpcsharp_request_call_context_call_delegate__ctor_mFC91E1267E8882508D06424120B2BE7041462385,
	grpcsharp_request_call_context_call_delegate_Invoke_m6ECEC7E454A55F580E9B59F188195B9077078227,
	grpcsharp_request_call_context_call_delegate_BeginInvoke_m5483C534B3C625113DA9F450D3F5B990E4FDA141,
	grpcsharp_request_call_context_call_delegate_EndInvoke_m8AFC775B29A0D019510C86E1D05C4CCAA807CEB3,
	grpcsharp_request_call_context_method_delegate__ctor_m99426A0E4A6DBB2AEBC0A83078C872135C27DB03,
	grpcsharp_request_call_context_method_delegate_Invoke_m66D8A29CC4B9145EE86F1D6E5A2A0A2533FA87F1,
	grpcsharp_request_call_context_method_delegate_BeginInvoke_m15686A06AAFE2D60ABB2C00FDDF1A212680B3C49,
	grpcsharp_request_call_context_method_delegate_EndInvoke_mFC323B215E0DE4F60AC5259F521C04415F5C48B2,
	grpcsharp_request_call_context_host_delegate__ctor_mA22236A276E1004D5D0C876DB6948CF9C8495C30,
	grpcsharp_request_call_context_host_delegate_Invoke_m06F3A7C0345DA560861FCE0F99594962186DC824,
	grpcsharp_request_call_context_host_delegate_BeginInvoke_mEA667E78C64712B4570BA6451B402BAE515FBC35,
	grpcsharp_request_call_context_host_delegate_EndInvoke_m59CA5432AF0B01F47E579DE7E58029F7CB32D633,
	grpcsharp_request_call_context_deadline_delegate__ctor_m2F62CC15ADC4EB3A59E0B6E4C3E685E329D24CCF,
	grpcsharp_request_call_context_deadline_delegate_Invoke_m6E6D13A452BA5F0BE503A30B38AFD3945E5D8EC6,
	grpcsharp_request_call_context_deadline_delegate_BeginInvoke_mCF559BD3115F610B97388A6E650953D63FAADF83,
	grpcsharp_request_call_context_deadline_delegate_EndInvoke_m5C0C7B8B7523ABAAEB326CF6186808B8A28CBC07,
	grpcsharp_request_call_context_request_metadata_delegate__ctor_mC4F5EA03629C01647CC92B00FD462458ABAA86F1,
	grpcsharp_request_call_context_request_metadata_delegate_Invoke_mDF2BC33BDB2363BD5FBBDAF537E46921158A272C,
	grpcsharp_request_call_context_request_metadata_delegate_BeginInvoke_m12A0D2599C11D0A9CF5CBDBA67C04A257D39B866,
	grpcsharp_request_call_context_request_metadata_delegate_EndInvoke_m035CBB874D76FE6B6E487BF3B112A141F7EE655A,
	grpcsharp_request_call_context_reset_delegate__ctor_m32E335B201829DAB3A112F9E8D49C5257A7262CF,
	grpcsharp_request_call_context_reset_delegate_Invoke_mDF3B3897E9955BEA0990112F390EEA11E308D9A0,
	grpcsharp_request_call_context_reset_delegate_BeginInvoke_mE41C5D410C69BB42F04F0479631E01895960E6AF,
	grpcsharp_request_call_context_reset_delegate_EndInvoke_mAC1D52E597AA5698E043409D29EC9CE207D00830,
	grpcsharp_request_call_context_destroy_delegate__ctor_m0F848007FE93F43D2E52FFD13AD2BC1FD241546F,
	grpcsharp_request_call_context_destroy_delegate_Invoke_mF54D4C64B7DCB861D8382CBEAEC661A8C9F258B6,
	grpcsharp_request_call_context_destroy_delegate_BeginInvoke_m456E565F3021558BB0C8590C78CF961D7B1561BB,
	grpcsharp_request_call_context_destroy_delegate_EndInvoke_m33D95B438A5F4DB5B7854CD9C2DB35CCFEF30A4B,
	grpcsharp_composite_call_credentials_create_delegate__ctor_mF1DAA0D761D0708FDD7EDDF9E205E808BF554F64,
	grpcsharp_composite_call_credentials_create_delegate_Invoke_m6AEBC34AA073E63770F41067EE58CE5F54DB469E,
	grpcsharp_composite_call_credentials_create_delegate_BeginInvoke_m738CCC749825614320A85F2E99C53275D1841D17,
	grpcsharp_composite_call_credentials_create_delegate_EndInvoke_m267210AD2E67897AFED26357053C16842ADCFE4B,
	grpcsharp_call_credentials_release_delegate__ctor_mEDCD59E3E34A62293974BD8D18A928D74720B610,
	grpcsharp_call_credentials_release_delegate_Invoke_mC4A9689050C8F91AFC902679B41D2182C6507C00,
	grpcsharp_call_credentials_release_delegate_BeginInvoke_mCA296A61498AA2E2E1573D177EB35090C65BC8DE,
	grpcsharp_call_credentials_release_delegate_EndInvoke_m55C4233F63DF40D86F22F5DE5873D7238AC8A495,
	grpcsharp_call_cancel_delegate__ctor_mE755DC51350E6648277AE986A9A671835A6FE993,
	grpcsharp_call_cancel_delegate_Invoke_mBDA6DF8B3BCCCEB1C5DE87197E5B026FA2E4C68E,
	grpcsharp_call_cancel_delegate_BeginInvoke_mD2D17467B6927D8458A7F6BDB08A1FA96A5139B8,
	grpcsharp_call_cancel_delegate_EndInvoke_m0EE84A085957DA21E9E1DD480E4B8A7B92E5C040,
	grpcsharp_call_cancel_with_status_delegate__ctor_mB48D3E0C8D593D927968419BF53A01A9E1F1C079,
	grpcsharp_call_cancel_with_status_delegate_Invoke_m9B724AEE45577E7360810E691C5AA44C65146BFB,
	grpcsharp_call_cancel_with_status_delegate_BeginInvoke_m649E8629A5F32F853A367F6A78E350E884A53BFC,
	grpcsharp_call_cancel_with_status_delegate_EndInvoke_mD99169A5B91F9F2A64BBB6B6A895A6487CA52AF5,
	grpcsharp_call_start_unary_delegate__ctor_m760E9C9078BC1995F8427C7BEEA93CE5A96FDCAA,
	grpcsharp_call_start_unary_delegate_Invoke_m6BB6C6D66622615ECB03BB092869D1084DA65D81,
	grpcsharp_call_start_unary_delegate_BeginInvoke_m3FB9151E11029D8544918142B5FF38DF37D22A85,
	grpcsharp_call_start_unary_delegate_EndInvoke_mD71054292C05EBC02D6B85DDA38618E030D556ED,
	grpcsharp_call_start_client_streaming_delegate__ctor_m8285D1C2916BEC6C401F67B2E236209EC0A5BD3E,
	grpcsharp_call_start_client_streaming_delegate_Invoke_m75FA87B0A8444E22021403E51262727183C168F2,
	grpcsharp_call_start_client_streaming_delegate_BeginInvoke_m20E2520C026E61B7BC38455836F2FC3076730ED0,
	grpcsharp_call_start_client_streaming_delegate_EndInvoke_m90C6C4EB92ACB0709CF75B7B6030821847A28BAB,
	grpcsharp_call_start_server_streaming_delegate__ctor_mBC62DEAE80BE6EC63DC6608BA4A98F7877343FB4,
	grpcsharp_call_start_server_streaming_delegate_Invoke_m7A64DAC7CB30409E6898D5377879A0E2A16D0F10,
	grpcsharp_call_start_server_streaming_delegate_BeginInvoke_m100119D1ED8BDA7A1F461E7B83088C64583F2FAE,
	grpcsharp_call_start_server_streaming_delegate_EndInvoke_m4CA66609C89C40FE3A5632E60CB7B3EB6946D85A,
	grpcsharp_call_start_duplex_streaming_delegate__ctor_m63E121492F650BB1608410E8A3D36A0E09B17ED7,
	grpcsharp_call_start_duplex_streaming_delegate_Invoke_m443F59ABA784B6B49FCF6CBC5BF18B06AD13C29E,
	grpcsharp_call_start_duplex_streaming_delegate_BeginInvoke_mE27CC64BC00FAEEF87DEA1FFB475F8D0C2224797,
	grpcsharp_call_start_duplex_streaming_delegate_EndInvoke_mB96CE06C30AC9808311DFB01ACC6C8DC4AE0A337,
	grpcsharp_call_send_message_delegate__ctor_m0C494C02D0B811B7AE5BD8367F6E391A482A06EE,
	grpcsharp_call_send_message_delegate_Invoke_mD91B5BE164BDD95C1996FBA3230485ECFDE9CA0D,
	grpcsharp_call_send_message_delegate_BeginInvoke_m4855F16501AF0BF9AC552DA5C68079B3664C7C41,
	grpcsharp_call_send_message_delegate_EndInvoke_mAD653A4CD91B5E49D2D10476B04EC26E33F4F6A2,
	grpcsharp_call_send_close_from_client_delegate__ctor_m56F02905F50425E2BECFBCEBF247707B1F313908,
	grpcsharp_call_send_close_from_client_delegate_Invoke_m2B4359309D818FEF52398FAF08B4422BAD37DE48,
	grpcsharp_call_send_close_from_client_delegate_BeginInvoke_mD8A023570E20F2A126E136E2F72AC537E72030E3,
	grpcsharp_call_send_close_from_client_delegate_EndInvoke_m4DFE190B7250782398BD084D664F9267A23EF5D8,
	grpcsharp_call_send_status_from_server_delegate__ctor_m0EE47961C2CBE4E89FDAFD0D0E9F57B1588FCE48,
	grpcsharp_call_send_status_from_server_delegate_Invoke_mA47224B2896E07F8BA42B6492A974360F46E5085,
	grpcsharp_call_send_status_from_server_delegate_BeginInvoke_mD36B2E5B39D3B8319F7CC1F5F8509DA143DCDAB7,
	grpcsharp_call_send_status_from_server_delegate_EndInvoke_m63D860A7D81F84CEC1F504F72B89D65F1B310075,
	grpcsharp_call_recv_message_delegate__ctor_m316C927D2679D83945C75A7B7B0A9BD98B28886C,
	grpcsharp_call_recv_message_delegate_Invoke_mE0349B1DFEEC27BA0DD36DEF2E6AB14297FD9B48,
	grpcsharp_call_recv_message_delegate_BeginInvoke_m0D37D3E0A1D22335428B55F8FEF1ADE9AF191ED5,
	grpcsharp_call_recv_message_delegate_EndInvoke_m4A67CA0EB66463A063C32FD7616D86E4C3B68FBE,
	grpcsharp_call_recv_initial_metadata_delegate__ctor_m1E7D77B10822D861246823B9C630FF6D65E8BEA2,
	grpcsharp_call_recv_initial_metadata_delegate_Invoke_m5C9508F0F691951C4277AD44B4DAA9A5DD7AAAE2,
	grpcsharp_call_recv_initial_metadata_delegate_BeginInvoke_m9DBBFE756645D58C02B3F88B96BCA59C512EECE3,
	grpcsharp_call_recv_initial_metadata_delegate_EndInvoke_m6D67CC9EA0C144AA0E8855252CF1AA9F8F4D6BDD,
	grpcsharp_call_start_serverside_delegate__ctor_mB45BE3D5843A754BAEC085269645C6B9F2833CF1,
	grpcsharp_call_start_serverside_delegate_Invoke_m996FA91A4580D111590E485EF6C5AFEABA74B8A8,
	grpcsharp_call_start_serverside_delegate_BeginInvoke_mD5147E3F1D5E1AD13C121B3845845A13F257DE4F,
	grpcsharp_call_start_serverside_delegate_EndInvoke_m71F19F2AED44008810C9141B23956E567D6F7E70,
	grpcsharp_call_send_initial_metadata_delegate__ctor_m0405EE0C3ABA3ADE369F1A51C03B3B709A8CAF46,
	grpcsharp_call_send_initial_metadata_delegate_Invoke_mA63C31328877957CC25641B3290FF66F90893116,
	grpcsharp_call_send_initial_metadata_delegate_BeginInvoke_m0B47BF603A550FC9B765D3EB5FEEFF765FC90E05,
	grpcsharp_call_send_initial_metadata_delegate_EndInvoke_m7EA0F3A0A5680177BFE5AD9FF79118828AB2B4C1,
	grpcsharp_call_set_credentials_delegate__ctor_m81E952E1130D4E7A12AB7656843B47E1752FF5A8,
	grpcsharp_call_set_credentials_delegate_Invoke_m5C3E295DD1D133F22E6B9A68C272A7CD9461B2FB,
	grpcsharp_call_set_credentials_delegate_BeginInvoke_mC4856355A8D63D5CD0FEDAF477D8F130A221F9D7,
	grpcsharp_call_set_credentials_delegate_EndInvoke_mA2CBDB1ED168D544828ADD9982726DB3E28EC104,
	grpcsharp_call_get_peer_delegate__ctor_m6DE9AF27BFA0724663A6657BB5B464D8D654E1A0,
	grpcsharp_call_get_peer_delegate_Invoke_mE35DD82B2300293A0A3CA8B1F960569736C5DED2,
	grpcsharp_call_get_peer_delegate_BeginInvoke_mCE67B0473C93C9AEC6583F1ABFFB34CA8726BDD7,
	grpcsharp_call_get_peer_delegate_EndInvoke_mA57FF15ADE62BB86C617DAEF0133F204621F1DC6,
	grpcsharp_call_destroy_delegate__ctor_m17D2529FBD4B9C7CB8E4DD3ADA72BF99AE58181B,
	grpcsharp_call_destroy_delegate_Invoke_mAC0FAF7C98333AD6276688B7820436985E2D4C93,
	grpcsharp_call_destroy_delegate_BeginInvoke_mB7C12E21C5658C2AFD7328BA803D89C67F4B5085,
	grpcsharp_call_destroy_delegate_EndInvoke_mC5C74C445C0796A63A42A8223899D7F86CFF584F,
	grpcsharp_channel_args_create_delegate__ctor_mBA921EACFD0AB5B9ABB66850DB46153C1EF3DC59,
	grpcsharp_channel_args_create_delegate_Invoke_mCDE7B0D48599E2EED729592807C11B16F181620B,
	grpcsharp_channel_args_create_delegate_BeginInvoke_m7A4F3E27804A04A515E0D600749875CABD6C2C25,
	grpcsharp_channel_args_create_delegate_EndInvoke_mED8830714E726549DDA53E1055BA1A95D3C48FE3,
	grpcsharp_channel_args_set_string_delegate__ctor_m6494CF27EAB24506690B5EF15E3E753B950E1670,
	grpcsharp_channel_args_set_string_delegate_Invoke_m01AAA7194E7CC60EC5023EE55BD4B471E258EF00,
	grpcsharp_channel_args_set_string_delegate_BeginInvoke_mEF49C05EFA76AF55F07D0E80B25F0EF01DD29511,
	grpcsharp_channel_args_set_string_delegate_EndInvoke_mB6F8D340DB11950EA9268AD939E2CA926796D197,
	grpcsharp_channel_args_set_integer_delegate__ctor_mC4FB19A4A1F44C15D6152BE99D059C721D8F68DF,
	grpcsharp_channel_args_set_integer_delegate_Invoke_mD01176F9DE56700066B04644E1635211C1E90D21,
	grpcsharp_channel_args_set_integer_delegate_BeginInvoke_mAF9D1FDC05DDC591EE7C35F8EC138C839A244BFC,
	grpcsharp_channel_args_set_integer_delegate_EndInvoke_m7F4406FEA9203F7CBDAA9F222D5B2F559A521AD2,
	grpcsharp_channel_args_destroy_delegate__ctor_m7A93EA30AB39903DD2A7B1B4376D1EC96FFA2EE8,
	grpcsharp_channel_args_destroy_delegate_Invoke_m3B3FE1827A25ADB70772FF0D74D4305559BE29F4,
	grpcsharp_channel_args_destroy_delegate_BeginInvoke_mCABFAC9C0987F14D62C4539AAE4679B281330ADC,
	grpcsharp_channel_args_destroy_delegate_EndInvoke_m7AC3E8083BED1A76E6163F1BEE31A479F21322C0,
	grpcsharp_override_default_ssl_roots__ctor_m7448221344AE382B11ACF1014257C59EA4A7B48E,
	grpcsharp_override_default_ssl_roots_Invoke_m9D9AA9B11814BF75D299B0F13FA6108BB1E2B7F0,
	grpcsharp_override_default_ssl_roots_BeginInvoke_m6CB490C3431A41F3F4DD4437B37C64BD56E9C1F2,
	grpcsharp_override_default_ssl_roots_EndInvoke_mE7B07B86F22F7CFD3365E278BD73687E7DBEB5EE,
	grpcsharp_ssl_credentials_create_delegate__ctor_m0E3F9E68B2E702021C3F22C3A0AE997A16AA70DC,
	grpcsharp_ssl_credentials_create_delegate_Invoke_mF50BD6E82793CA61D3F215C64B6C604C9F63B95D,
	grpcsharp_ssl_credentials_create_delegate_BeginInvoke_m0F37BB056B09E58204F859E898DB86C1FEB24716,
	grpcsharp_ssl_credentials_create_delegate_EndInvoke_m3B4267A0D69F7C67588A22B9F5E11BBFC662D29F,
	grpcsharp_composite_channel_credentials_create_delegate__ctor_m56814424DBE389D15F78715A01899269416C9BBD,
	grpcsharp_composite_channel_credentials_create_delegate_Invoke_m353E4994D5F8185C165117B0CD7FDB8271AE0B1B,
	grpcsharp_composite_channel_credentials_create_delegate_BeginInvoke_m7299312891E43557C0B1DED538971C8581590B91,
	grpcsharp_composite_channel_credentials_create_delegate_EndInvoke_m3D9EBBB6209F7BE5947151383C95B61854D97673,
	grpcsharp_channel_credentials_release_delegate__ctor_m5AE923F9E6613F511FCEFF4EEED5BDE2D1A50878,
	grpcsharp_channel_credentials_release_delegate_Invoke_mE15A8E4724C36F2328F3E817DF3791C0F4096A2A,
	grpcsharp_channel_credentials_release_delegate_BeginInvoke_m8382E35A56BB718EB08D3A94C637AA7D1AF32ED4,
	grpcsharp_channel_credentials_release_delegate_EndInvoke_mD15F5FCB0887A898BA705D9E6B360C68CB04E613,
	grpcsharp_insecure_channel_create_delegate__ctor_m988A9A6954FE663BA88080E43B0A7EF6819C04D0,
	grpcsharp_insecure_channel_create_delegate_Invoke_m5914B74BD0B26F25679EC68D55C9DA1EDEA24A57,
	grpcsharp_insecure_channel_create_delegate_BeginInvoke_m2C338DC4D130CD667649E05CFB3677D23E992B59,
	grpcsharp_insecure_channel_create_delegate_EndInvoke_mF62C7D64C37FBAB4DB0D095496202709E077D5B3,
	grpcsharp_secure_channel_create_delegate__ctor_m30F70DD9801D19D87C2377648929362D12FEA1A0,
	grpcsharp_secure_channel_create_delegate_Invoke_m87FEF9415D0075DABC390BAD24C207B7AA7A4B9B,
	grpcsharp_secure_channel_create_delegate_BeginInvoke_m37247617D3170A0AFA397964C0683D039647A065,
	grpcsharp_secure_channel_create_delegate_EndInvoke_m562B7E11C6AE3EA666C6F9B1F37306B8351CC332,
	grpcsharp_channel_create_call_delegate__ctor_m8C86748C441A4C26FDC6F6BEED6B948E2880E02A,
	grpcsharp_channel_create_call_delegate_Invoke_m79121473CE8EE5E54182BAA9320722CB7C181D21,
	grpcsharp_channel_create_call_delegate_BeginInvoke_m5377F1772B19DA79FB69C1B451D594118F31FAD9,
	grpcsharp_channel_create_call_delegate_EndInvoke_m3D7599A2858DB84F255A2F97C01AAE755AA955FC,
	grpcsharp_channel_check_connectivity_state_delegate__ctor_mEAD5EA6F42EAC929C6889EA066D040A3D3F1D583,
	grpcsharp_channel_check_connectivity_state_delegate_Invoke_m959AD06DEF06EAB6076CB8EACA064FAF2F3D2DC0,
	grpcsharp_channel_check_connectivity_state_delegate_BeginInvoke_m8C3F86FFD325E60114DFF2CCA362994249AA267A,
	grpcsharp_channel_check_connectivity_state_delegate_EndInvoke_m3266648BCBEACB21E32B326BB8260633FA634E28,
	grpcsharp_channel_watch_connectivity_state_delegate__ctor_mFA61041233A6EC650534890C8BE258510B190EA6,
	grpcsharp_channel_watch_connectivity_state_delegate_Invoke_mCC453ABEC97A679F08CDA045C69D80955B4D9DE1,
	grpcsharp_channel_watch_connectivity_state_delegate_BeginInvoke_mC8765CA25246CEF49EA584906B67FB4F0F87B5F8,
	grpcsharp_channel_watch_connectivity_state_delegate_EndInvoke_mFE79B93DEC6E144CF62C4F32A0FCB63EAB91C6B0,
	grpcsharp_channel_get_target_delegate__ctor_m82A2644CE7EA513D00D6289E0A29F12DB5B79662,
	grpcsharp_channel_get_target_delegate_Invoke_m5E4728503813B0BF3C6D336965779BDEC9255D8C,
	grpcsharp_channel_get_target_delegate_BeginInvoke_mD093EF6AA4C5997120FB87E17B92B15E617BBA96,
	grpcsharp_channel_get_target_delegate_EndInvoke_m7179D39C1EFAFC2F0F1F451FBF5739F74A1C714F,
	grpcsharp_channel_destroy_delegate__ctor_mD727E63793C1E7FC471DF39FDCB7318C3BA76493,
	grpcsharp_channel_destroy_delegate_Invoke_mBAC28E2DEA3941E550894775504EF49830AD9D87,
	grpcsharp_channel_destroy_delegate_BeginInvoke_m85F79FD6DA293EF2023293498E0AB2649554D75B,
	grpcsharp_channel_destroy_delegate_EndInvoke_mA9E3588BEEE019A2509B68B90B698665FDA5505F,
	grpcsharp_sizeof_grpc_event_delegate__ctor_mD4D25993A6D86DF2D15C852D70832A9600AF24A0,
	grpcsharp_sizeof_grpc_event_delegate_Invoke_m2A49BD78B92D4BDB21DD2CA66A75BAB2E4A1F5E6,
	grpcsharp_sizeof_grpc_event_delegate_BeginInvoke_m139C138BED0B804B1DD9517F38E9126F498D932D,
	grpcsharp_sizeof_grpc_event_delegate_EndInvoke_m632A3AED35317DB67EEF72DBE621F26C9C450613,
	grpcsharp_completion_queue_create_async_delegate__ctor_m428E3A9858CE7B23758B098955A688DA0AF59F9D,
	grpcsharp_completion_queue_create_async_delegate_Invoke_m70DD1230F9FCAD6E3647F00A69A09463DADAC6CF,
	grpcsharp_completion_queue_create_async_delegate_BeginInvoke_m1CABD9BD7DB6C0CE169B8827C76DA7FE3051FE99,
	grpcsharp_completion_queue_create_async_delegate_EndInvoke_m4A4794F98678C260A11EAB56332B5972FB597DD0,
	grpcsharp_completion_queue_create_sync_delegate__ctor_m23CF7B13014AADB94385F0983329B9365E94F289,
	grpcsharp_completion_queue_create_sync_delegate_Invoke_m949D2B9E9DB0FA3A96F74883024FF6A4A1F4BE0D,
	grpcsharp_completion_queue_create_sync_delegate_BeginInvoke_mFDB2D3451FA0298323A965E973BA99C4E5A9F6A1,
	grpcsharp_completion_queue_create_sync_delegate_EndInvoke_mFA263CE13E3DBA71353AC8BD19528B1E4FB24704,
	grpcsharp_completion_queue_shutdown_delegate__ctor_m4114F0CDE28AA0D8E75A09FFB14EBBBE93DCD0E2,
	grpcsharp_completion_queue_shutdown_delegate_Invoke_mEF4695C5954F6C60CF59AB55E5B89D8D3694DEB0,
	grpcsharp_completion_queue_shutdown_delegate_BeginInvoke_m079C8DC57171FD2D3443306A344E13F41A04213F,
	grpcsharp_completion_queue_shutdown_delegate_EndInvoke_m257C433D519F06D4B7FFCE518C136F9AF687D8F1,
	grpcsharp_completion_queue_next_delegate__ctor_m5A38D77E30693987E81D4D22CB975E92785141BF,
	grpcsharp_completion_queue_next_delegate_Invoke_mE5D8475D3E529DD978800580EBC3BD0DEC62E274,
	grpcsharp_completion_queue_next_delegate_BeginInvoke_m1F1C0506A01FBCD550779C9BC8D005972FDACC77,
	grpcsharp_completion_queue_next_delegate_EndInvoke_mAFBE3C6017CBB3D7FB0ED8294BDDAB86C33328BE,
	grpcsharp_completion_queue_pluck_delegate__ctor_m5F21D01EE20546173224D384B97D70877CABDAE9,
	grpcsharp_completion_queue_pluck_delegate_Invoke_mA63A2FD496BAAE05BFD203CE096422B1AD18724F,
	grpcsharp_completion_queue_pluck_delegate_BeginInvoke_mED3ACF422C1EDCD711E9575E24CA29B4418584AC,
	grpcsharp_completion_queue_pluck_delegate_EndInvoke_m3B4353D09256FB872266F43CB52A2C6282F8D0F7,
	grpcsharp_completion_queue_destroy_delegate__ctor_m0F47411015B168BA6EEF7BA8A504F85F51ECFD72,
	grpcsharp_completion_queue_destroy_delegate_Invoke_mA4F594D3C407176AD7D623A1B98947D1774AC418,
	grpcsharp_completion_queue_destroy_delegate_BeginInvoke_mD0724BE37DF9FF183290001D586EB1B781AC41AF,
	grpcsharp_completion_queue_destroy_delegate_EndInvoke_m0869F1595A5F216EFB5480BD3C2EDF9719379B2B,
	gprsharp_free_delegate__ctor_mFA763BEC95C747E68165CBE488F0B784DBEAC588,
	gprsharp_free_delegate_Invoke_m01888C37742B5966B172B9179EE10E971219BE25,
	gprsharp_free_delegate_BeginInvoke_mFF9EC6D362FAECF84CC0248B5FCD0096B18790CD,
	gprsharp_free_delegate_EndInvoke_m2FBBC9AC002F4248ADA1732E95525D8054948426,
	grpcsharp_metadata_array_create_delegate__ctor_m744F760234C2A5F863F4C7D8739CAE6582C2DC71,
	grpcsharp_metadata_array_create_delegate_Invoke_m04E3EB2DF9E08F5D0C40FF1948EF11F79735A482,
	grpcsharp_metadata_array_create_delegate_BeginInvoke_m24F2FDC7F4CEDACA1C7E082AB54F89E8E228E499,
	grpcsharp_metadata_array_create_delegate_EndInvoke_m6B2B079451BF6EDC20102F981D452D298B59276A,
	grpcsharp_metadata_array_add_delegate__ctor_mE2E5CF4655CC378DB58D5C5C5AD59523F29E647D,
	grpcsharp_metadata_array_add_delegate_Invoke_m1D22D94A1CA44B0BDEEEFFEBDA6CEA799A71B450,
	grpcsharp_metadata_array_add_delegate_BeginInvoke_m2045949050D70BD629518D163B339D11EB75C352,
	grpcsharp_metadata_array_add_delegate_EndInvoke_m97D582225F1B3E2D7F7B7805F7DAFD82A9483C21,
	grpcsharp_metadata_array_count_delegate__ctor_m0328F7E8DF701B3B702895EAD5F2BD50C189862D,
	grpcsharp_metadata_array_count_delegate_Invoke_mAFDFC48DEB61BE34D5B8D281BC600CFF9AFE8C53,
	grpcsharp_metadata_array_count_delegate_BeginInvoke_m98CDA0710ECC0235B4564845A3217743A1BF127E,
	grpcsharp_metadata_array_count_delegate_EndInvoke_m65BB0C19058173C4EA9E3E6B3F1F422595DD6CB6,
	grpcsharp_metadata_array_get_key_delegate__ctor_m0271F4E1E86F3EF32EDE157711FC012A73B15913,
	grpcsharp_metadata_array_get_key_delegate_Invoke_m4B0C6A34CE69982DCD4C70913EC569D540DF344D,
	grpcsharp_metadata_array_get_key_delegate_BeginInvoke_m2A26B30CB0FCCEDC7264821C1E2C98BCC20528FD,
	grpcsharp_metadata_array_get_key_delegate_EndInvoke_mACFC5A234924CED6BD488586DE1E963660ADDA15,
	grpcsharp_metadata_array_get_value_delegate__ctor_m8262E901E43CBC9D64E1F02FC5760B7F4B1084FC,
	grpcsharp_metadata_array_get_value_delegate_Invoke_m38DA6CEC26F37CD13A0D813BB72C8C16368B8618,
	grpcsharp_metadata_array_get_value_delegate_BeginInvoke_m13A0B4B9587B7C2596E37A78BB55748D8B200720,
	grpcsharp_metadata_array_get_value_delegate_EndInvoke_mAEC77F856DFD864058CABE06B15A96FCC266CA12,
	grpcsharp_metadata_array_destroy_full_delegate__ctor_m33FA9BADFDE07682BACE132A3E76A13FA1C4F927,
	grpcsharp_metadata_array_destroy_full_delegate_Invoke_m62477116E0655D6AC21E6BEA3BC775076F5871B5,
	grpcsharp_metadata_array_destroy_full_delegate_BeginInvoke_m82EA32DA5A9E7E7E685DEFA641365ADE0F1F291B,
	grpcsharp_metadata_array_destroy_full_delegate_EndInvoke_mD4709ED910030CB4ED3D521787737ABFF41D1BE8,
	grpcsharp_redirect_log_delegate__ctor_m7EBD3223059AA8412567830B67D6D3E90D38E688,
	grpcsharp_redirect_log_delegate_Invoke_m56A4FD6DA585945DC125A98647C91B5BDCCACF57,
	grpcsharp_redirect_log_delegate_BeginInvoke_m12AD4892E3E3F17CC34712730B5917CB38844D8F,
	grpcsharp_redirect_log_delegate_EndInvoke_mC4576B86F71B13769243587806457A97AAE04BB9,
	grpcsharp_metadata_credentials_create_from_plugin_delegate__ctor_m3F28027026421A1736849FF35410D6F7720CBD3D,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_Invoke_m8C6394F239045F6A1EC4FF7DF47FE089280D5BDF,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_BeginInvoke_mF644B990001289E045BFF71D1CA195B95F5BBC83,
	grpcsharp_metadata_credentials_create_from_plugin_delegate_EndInvoke_m7297B5AC3B81BDDABC4079661EF29AC433C366ED,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate__ctor_mBB233B77A04EF3D816AAAD7B6D52BE9BD5C9FA17,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_Invoke_m75247CD7514FAA70C4A16C09F8FD085C5DC57954,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_BeginInvoke_m4E24C94571A4C14BE8020A6230A94F306BDE592C,
	grpcsharp_metadata_credentials_notify_from_plugin_delegate_EndInvoke_m4B4F6A98BF494871B119A370E2C2A0DF64FD0A16,
	grpcsharp_ssl_server_credentials_create_delegate__ctor_m9A588CC327D15A2E7A49D6A3922EC5D67D07FBB1,
	grpcsharp_ssl_server_credentials_create_delegate_Invoke_mFE552A5E5A45FDF121373AA3AD0B9774680565DF,
	grpcsharp_ssl_server_credentials_create_delegate_BeginInvoke_mFF2B6DE11DC2116D9B7D0CE139D74884FD8078EC,
	grpcsharp_ssl_server_credentials_create_delegate_EndInvoke_m0E33A608D52CFA36985F0B4F9483726F986AA89E,
	grpcsharp_server_credentials_release_delegate__ctor_m5F7023D4E7BB70FE562E39A90EC4334595088481,
	grpcsharp_server_credentials_release_delegate_Invoke_m6ACC002E8F582517346BA7FBE467AD1791D3E40F,
	grpcsharp_server_credentials_release_delegate_BeginInvoke_m4FD24B262CACBEC24962626DC752D87394B9B44D,
	grpcsharp_server_credentials_release_delegate_EndInvoke_m743FC382EC00567A66F78D4B8BA4F3A31DE5FD5B,
	grpcsharp_server_create_delegate__ctor_mD383DBB251F5CE2AD1E6378C171C720254E93000,
	grpcsharp_server_create_delegate_Invoke_mA6305625871F560186C18EF2A461984BF2011825,
	grpcsharp_server_create_delegate_BeginInvoke_m51CB302EF057BC7C93F532B34D29B52742770936,
	grpcsharp_server_create_delegate_EndInvoke_mEE2ABC478EC38D223D1FD6D4016F23C10352D071,
	grpcsharp_server_register_completion_queue_delegate__ctor_mBAD6E5598158427F4254CE06D8C1429DAD36FDA4,
	grpcsharp_server_register_completion_queue_delegate_Invoke_m2F1AD0D600CF3856F24E6772D6097AAC135D957F,
	grpcsharp_server_register_completion_queue_delegate_BeginInvoke_mFC0612EAA9EF307CC0C5817D6E59063128290B68,
	grpcsharp_server_register_completion_queue_delegate_EndInvoke_m30A3CC6A19CEC79249BA6FD16ED3180AF41FD050,
	grpcsharp_server_add_insecure_http2_port_delegate__ctor_m727B0B2A97A8ABC5EF6E84EE52EDBCF39CB7D670,
	grpcsharp_server_add_insecure_http2_port_delegate_Invoke_m21EA700E86F6FF20BF899CA1D32D9597B94FBD04,
	grpcsharp_server_add_insecure_http2_port_delegate_BeginInvoke_m6315FC1C3A150B3AECBE4390A5D6592BF602A9A2,
	grpcsharp_server_add_insecure_http2_port_delegate_EndInvoke_m0F3D612D5E4480F7D66A64AE0BC7E871BBCD530C,
	grpcsharp_server_add_secure_http2_port_delegate__ctor_m1CE4EE9BB179E6A234D6609CDC2507C0190976A1,
	grpcsharp_server_add_secure_http2_port_delegate_Invoke_mCAB2726A51435FF66D2A1793604F8056C91F97FA,
	grpcsharp_server_add_secure_http2_port_delegate_BeginInvoke_m20806E53251F7BB10F80FC43C233A066570115B1,
	grpcsharp_server_add_secure_http2_port_delegate_EndInvoke_mA900F6B9D88A97CDEC446715903600078008526D,
	grpcsharp_server_start_delegate__ctor_mF3B7DC550938171928E32809EE367ABE39DA24B0,
	grpcsharp_server_start_delegate_Invoke_mF411DF2C9C29814C757D4965ECB01634F8683935,
	grpcsharp_server_start_delegate_BeginInvoke_mEF2A053AF4BAF51F8A4743F6221825EAB8366E43,
	grpcsharp_server_start_delegate_EndInvoke_m60321FA63DBFD11BCBC8853EB3FB5EA233EBC012,
	grpcsharp_server_request_call_delegate__ctor_m37D00A99036C4BA2E6B37C99A545704FB6074C91,
	grpcsharp_server_request_call_delegate_Invoke_mFE277762B3D9894844A40F7D5E7922AEDD6519AC,
	grpcsharp_server_request_call_delegate_BeginInvoke_m84FEAF05EB5A1A026F78EE9EAD90D8C19370DDD1,
	grpcsharp_server_request_call_delegate_EndInvoke_m0ACF75BF6704FE4863E94C77426779C1061EDDC4,
	grpcsharp_server_cancel_all_calls_delegate__ctor_m3D3092AB9DD2276D4B1E8F4A00C0D4AC23C67ACD,
	grpcsharp_server_cancel_all_calls_delegate_Invoke_m9FAF1EBCD69688386BD6B8C8D22EB7FF4B521490,
	grpcsharp_server_cancel_all_calls_delegate_BeginInvoke_m4AC23BFF9584F52AFAAE979B5BC26DB60B8C05BF,
	grpcsharp_server_cancel_all_calls_delegate_EndInvoke_mF4D68623799F5E6A1A6B24C32FE8580CBA2CF150,
	grpcsharp_server_shutdown_and_notify_callback_delegate__ctor_m8E5F1C148C4834690823E41378D42FCEFDC5864F,
	grpcsharp_server_shutdown_and_notify_callback_delegate_Invoke_m370512FAA6FDE32DF64473FE45FD0F1C413052A7,
	grpcsharp_server_shutdown_and_notify_callback_delegate_BeginInvoke_m05DEFDBB42D59910F3CC643F8877B9235CEA7042,
	grpcsharp_server_shutdown_and_notify_callback_delegate_EndInvoke_m8C6BC9AA886CBDB32D03D1EAEC26FD18DA44949F,
	grpcsharp_server_destroy_delegate__ctor_mC1C7B53C9BE06BBD6BE61CA7FFF40276CBCAAF56,
	grpcsharp_server_destroy_delegate_Invoke_m8C8093ED3645E617B17C9697D36EED022A7374FC,
	grpcsharp_server_destroy_delegate_BeginInvoke_mECCC9B22C4DB5D70DA44462333995E7E301D21DF,
	grpcsharp_server_destroy_delegate_EndInvoke_m523196C48C318FB2E15B91109F0D2E0E0A8F89CD,
	grpcsharp_call_auth_context_delegate__ctor_mF5A45671CDBAD6A7802E121DEA9DD7D8D179922A,
	grpcsharp_call_auth_context_delegate_Invoke_mB4D6185306FBD2CE82A40F1FFD37C0C3AEAAB904,
	grpcsharp_call_auth_context_delegate_BeginInvoke_m542859754C5200B13C805F599AFE96033DF52F38,
	grpcsharp_call_auth_context_delegate_EndInvoke_m872F7D8B70BBB06DC452AB8F302933E4E878735C,
	grpcsharp_auth_context_peer_identity_property_name_delegate__ctor_m0C931A957E9442276AF39F77D0FFD46532930798,
	grpcsharp_auth_context_peer_identity_property_name_delegate_Invoke_m7768E7D12B9B81BE62C2DD2C99585D4CD428D2D7,
	grpcsharp_auth_context_peer_identity_property_name_delegate_BeginInvoke_m2929E4AB72D876A8CF2EC8D1FD2458BBF77A6966,
	grpcsharp_auth_context_peer_identity_property_name_delegate_EndInvoke_m9D0A782D5E041D01567096413944BE802D481B57,
	grpcsharp_auth_context_property_iterator_delegate__ctor_m1AA4A1944F9791643555E72932303322E1F7DED8,
	grpcsharp_auth_context_property_iterator_delegate_Invoke_mC17445D254F1C027F46B65D2D936E599AA473D4C,
	grpcsharp_auth_context_property_iterator_delegate_BeginInvoke_m9A5562CAF16FD87D040EDF992AE6121B0742DED4,
	grpcsharp_auth_context_property_iterator_delegate_EndInvoke_m59B2DA6921688F0255F734E029BDAF08C8A75DCE,
	grpcsharp_auth_property_iterator_next_delegate__ctor_m4E51C7F88F00FA1C20F0894A1296DBF2C994F5D3,
	grpcsharp_auth_property_iterator_next_delegate_Invoke_mCE6B9BC6334AA0D9C0317CAACE133134F893DD8B,
	grpcsharp_auth_property_iterator_next_delegate_BeginInvoke_mBC5247262E5D2D3D19C3A7E1BA7C2A64983191ED,
	grpcsharp_auth_property_iterator_next_delegate_EndInvoke_m2FE9373E7DFE88746B746AF46D8C92845762887E,
	grpcsharp_auth_context_release_delegate__ctor_m434D5EE873C633B03880950BAFBCAFC03E1CE23F,
	grpcsharp_auth_context_release_delegate_Invoke_m87E16D84D6C00066B603EB3717138A7CF45E704A,
	grpcsharp_auth_context_release_delegate_BeginInvoke_mF4346CC8DA2308EEAA305B60550A5F41268437C9,
	grpcsharp_auth_context_release_delegate_EndInvoke_m9B3AEC0A03AEA6B11FF36D5C2649C09DDDBF5BB4,
	gprsharp_now_delegate__ctor_mD0984286C2A91A59B2AE521ED3B53A8FF0469736,
	gprsharp_now_delegate_Invoke_m3800FDFC91300A89E6B0905EC5334220ADBCB9FA,
	gprsharp_now_delegate_BeginInvoke_m5C72A606A3EA0C28CCA95963DCAEBBB2602BF418,
	gprsharp_now_delegate_EndInvoke_mF62723955AC237CF807467197CB651BE737BE085,
	gprsharp_inf_future_delegate__ctor_m89F377E91C37C1879354BAE7E267F6DEDC028D5D,
	gprsharp_inf_future_delegate_Invoke_m867810A531A391BED2887BA16C06AFF29B9AD153,
	gprsharp_inf_future_delegate_BeginInvoke_mE8AD79D25710ECEBA5E138E067ED81F196F80FC3,
	gprsharp_inf_future_delegate_EndInvoke_mAA933761EC6CAE450B5230E17B7E2B1C4C25C952,
	gprsharp_inf_past_delegate__ctor_mB089528EDA6F6D577E49FFA7E1C03D8956FB71D3,
	gprsharp_inf_past_delegate_Invoke_m8F355A85F7CFB25D8D25800C223E4655AEE06B16,
	gprsharp_inf_past_delegate_BeginInvoke_m794529EC526621A0363616A7D26B954640E253CE,
	gprsharp_inf_past_delegate_EndInvoke_m45831C51DF6727B5AD872DC3B77232FD2ECA87C9,
	gprsharp_convert_clock_type_delegate__ctor_m9A20F839ED8ED3E070DA5E1363D24EACBDD5F585,
	gprsharp_convert_clock_type_delegate_Invoke_m57467B9AC31CD7EFD9F1E8D834272EAC07A08002,
	gprsharp_convert_clock_type_delegate_BeginInvoke_m29A31A269B008C5660685F72DDE204B5B243F00B,
	gprsharp_convert_clock_type_delegate_EndInvoke_mD6E619ECF684D0B07900EAB1F003ED44F58627F0,
	gprsharp_sizeof_timespec_delegate__ctor_m02E974F77F168CF128F699A3B4423777D27903E4,
	gprsharp_sizeof_timespec_delegate_Invoke_m64365C973B02C4E7DD4F8FD6D61FA83A3338E8FB,
	gprsharp_sizeof_timespec_delegate_BeginInvoke_mFB8499779A2F5BF77DFD9D4D14AFD71C83CDED94,
	gprsharp_sizeof_timespec_delegate_EndInvoke_mF0289D6D8413C5C8DF7B022801ACFE65D2A4EFDB,
	grpcsharp_test_callback_delegate__ctor_m574051282C59DC4B15E6AD12D5B19D7A816F9D63,
	grpcsharp_test_callback_delegate_Invoke_m4A120C3F39B5E5745DCA6468407732EA2905E2AC,
	grpcsharp_test_callback_delegate_BeginInvoke_m8EBFC59DD11BBF60AE92E47EFDDC42FF7AABB82B,
	grpcsharp_test_callback_delegate_EndInvoke_mE2BBA8608E5ED717ED5EE1B2E7B34D4C0EDD689F,
	grpcsharp_test_nop_delegate__ctor_m316C8DBB17E294266B11F192D7ACF37A4EBD3899,
	grpcsharp_test_nop_delegate_Invoke_mD4A2B9FCDF6C59DA1AA8A87718A7CD9C436CDC8C,
	grpcsharp_test_nop_delegate_BeginInvoke_mBBAE0FE6CA269BADD19E4AC709CC70287A6EC1D3,
	grpcsharp_test_nop_delegate_EndInvoke_m68FC8D0D624EA70F9F2540F4C2D1E34C666F06EC,
	grpcsharp_test_override_method_delegate__ctor_m444B13CA6A14CCB6C6A9AC624A769FB1E0D726E4,
	grpcsharp_test_override_method_delegate_Invoke_m843DA4B46D3B42084DD3C77816FA534FE88200D0,
	grpcsharp_test_override_method_delegate_BeginInvoke_mF0FE89AEB636B8CE5C0D26586883CF2D3D9A2ACE,
	grpcsharp_test_override_method_delegate_EndInvoke_mCA982CFBA565C47E95FBA611950A7D8FDCED705D,
	PlatformApis__cctor_m76645F6E42FABC07A899EEB15B7D11EAC8807923,
	PlatformApis_get_IsLinux_mCD0BA3105E0DD123690A07CA1DCC0187BA7F5FBE,
	PlatformApis_get_IsMacOSX_m45CC2EF94AFE40113BB7FD435423DF8E1BCBC896,
	PlatformApis_get_IsWindows_m2F683015167168B8BA12B768066217D51728A8A9,
	PlatformApis_get_IsMono_m815AD73FCC0B42A4C95EA004D675BCB53D12479E,
	PlatformApis_get_IsNetCore_m259F016E4CA90B2DB5063A9270FA7CEBD95D8371,
	PlatformApis_get_Is64Bit_m910B60DF6F71D2D305F87F636A2538E975BB2981,
	PlatformApis_uname_m8158AFDB5565828A87DAE088F92F40823D1B4F52,
	PlatformApis_GetUname_mAC8A27EF122D7A5889C8ECB38995B194B0130110,
	RequestCallContextSafeHandle_Create_m3B77F2F24939C3BEA513C6A8354EDA79D32A2E93,
	RequestCallContextSafeHandle_SetReturnToPoolAction_mE9C1A340E22262A9627AFD149F6C6EA63097D963,
	RequestCallContextSafeHandle_get_CompletionCallback_mEA84153F0835BCB341E30EB7D4865B34492D8ED9,
	RequestCallContextSafeHandle_set_CompletionCallback_m26739C4139F09D52B92587E62B8A0BF44C257277,
	RequestCallContextSafeHandle_Recycle_mD9A909DC28557297B376EE9E6D5EFBAE2B56C8C0,
	RequestCallContextSafeHandle_ReleaseHandle_m2ECF12F405110941C82175F4D61225797797E85B,
	RequestCallContextSafeHandle_Grpc_Core_Internal_IOpCompletionCallback_OnComplete_mB7993F1DCBAC4B188F0E60737A80FE4B896317AC,
	RequestCallContextSafeHandle__cctor_mA6C4F170A20A889BA19F05431671A47CFE658410,
	SafeHandleZeroIsInvalid__ctor_m8B20752142A1E8AFCBBE00CF61228128E0375C00,
	SafeHandleZeroIsInvalid_get_IsInvalid_mF5E9D8214DF0B506619DF14020B3A185BB085307,
	ServerCredentialsSafeHandle_ReleaseHandle_m9D6BD4E02703A68B1E0549FF1AF555F620518AC7,
	ServerCredentialsSafeHandle__cctor_m518AB0193DBCA8C21B57E3803990EFF1918969B3,
	ServerSafeHandle_ShutdownAndNotify_m4A3738E79593B6C72C221CF8D3C6157332926A09,
	ServerSafeHandle_ReleaseHandle_mA8E54872EF2DD7B3E1B839112A4863C383FB2610,
	ServerSafeHandle_CancelAllCalls_m2CDE247D25354B9360EE3B95954492D6D928D384,
	ServerSafeHandle__cctor_mA792F20D8FEB16AEC73CBF63787FF6707A2F90F0,
	Timespec__ctor_m95FEE6B79D4DE967D2D77CF1A9AEB4E50A9069B9,
	Timespec__ctor_m762D316EE014E0F0E5D21F28C1A8BADC544C6BD3,
	Timespec_get_InfFuture_m4708CDCC145AC49325660E5D2C04676DABB4A422,
	Timespec_get_InfPast_mDDD355A720BD01DD75DDC9D66BA8DF29CA882D13,
	Timespec_get_TimevalSeconds_m9A08FBF014D7B26180D55576D0C2EDE72798D72A,
	Timespec_get_TimevalNanos_m8AEC2A71520F27DF56FA4F0DE8781116A4C55799,
	Timespec_FromDateTime_m77B0510F98BB85927B1023C7B4A687DBAD462B28,
	Timespec_get_PreciseNow_m8CC76D9AE98B48A1EF0DD7CF1164A4872F138239,
	Timespec__cctor_mC91181CB27F3D51F0B8EB57EF3FDE867ACFB2FD3,
	UnmanagedLibrary__ctor_mDAB0FED772ABD496C7D28E5C171C103C95D2C5BC,
	UnmanagedLibrary_LoadSymbol_m1B0DD121F59FC836F119C066163F7EAFCE7A1FAF,
	NULL,
	UnmanagedLibrary_PlatformSpecificLoadLibrary_mBFE74392C5A84FDD940A00576ECD44AE38377870,
	UnmanagedLibrary_FirstValidLibraryPath_m6E72FEEF458A4409B24270B0D70F3A92063D9EE4,
	UnmanagedLibrary__cctor_m1B7BE4760CBC69FBF6E9B72A3E9671B1AE882818,
	Windows_LoadLibrary_m4F2837AC15FE4C7942F226F519A01A251403AE27,
	Windows_GetProcAddress_mDEC41701BA0A659D200729A06387553DA94D5022,
	Linux_dlopen_mF6EABF098CE675FE892151560A0B435E8B90E6DC,
	Linux_dlsym_m2617CD06EE009DBE1688BD1763F00F24CE23C7A9,
	MacOSX_dlopen_m01CCAD156E2006A710AE12384B82AC34D4526DAB,
	MacOSX_dlsym_m819AF9A888D9F3AE223E240CA6BBFB1A9EEADFFA,
	Mono_dlopen_m6D7ED796E1F0FBAEFA71B4B768653CE5987E6DCD,
	Mono_dlsym_m70578AF522447A27F12C77E168B637520832F279,
	CoreCLR_dlopen_m3005E0B16247DAF501D78DBCC585FF80F1A056AE,
	CoreCLR_dlsym_m81E7263222C9A3E6200CC3F593323285A3DAA1FC,
	CallInvokerExtensions_Intercept_mB7219EE5F4CF31CE2C7B045ACC8313581ED82403,
	NULL,
	NULL,
	NULL,
	NULL,
	InterceptingCallInvoker__ctor_mA2332CFB9B681F1F453421C86A729A70443783C3,
	NULL,
	NULL,
	NULL,
	Interceptor__ctor_m3DD2ED371DCBA06B0802A49BEFA0C35915AC1BBB,
	NULL,
	NULL,
	NULL,
	NULL,
};
extern void CallOptions__ctor_mF8C56883333EB9F403B5C6FC83DA1B0A7F55001C_AdjustorThunk (void);
extern void CallOptions_get_Headers_m8976CF0E492FF184A1B485DFD1F6FF3D5C5C81EF_AdjustorThunk (void);
extern void CallOptions_get_Deadline_m93D3472352264E20874552A3A530B35114325319_AdjustorThunk (void);
extern void CallOptions_get_CancellationToken_m4D27FA3AD6E672D6F1AEED30842CBCBE40B0B700_AdjustorThunk (void);
extern void CallOptions_get_WriteOptions_m36277D2343BE7F33FB912C76F028392F6C54B70E_AdjustorThunk (void);
extern void CallOptions_get_PropagationToken_m152DD003E0C56F3B644ED4D29E70525BE185DF18_AdjustorThunk (void);
extern void CallOptions_get_Credentials_mCCC9E74ED976CC9F2850FAC47DD44C5BFBB17A80_AdjustorThunk (void);
extern void CallOptions_get_Flags_m0D17F9FD51511151963D48C63A4D35E25A0DB367_AdjustorThunk (void);
extern void CallOptions_Normalize_m1D1E6D51D5DC4E37D8D491CA4A02AA9EA1381D4D_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__27_MoveNext_mF8848AFE4A4A1D411CA34AE3E20FF4FFBA35C02B_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__27_SetStateMachine_m694C578D47C85AB6A0DE6FFB5B083F8776FFD15E_AdjustorThunk (void);
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_m4685CB38D877AB61B6564A526B062CC1928723C5_AdjustorThunk (void);
extern void U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m36805B0BD06F4A5049980CF4D03E33A28B4C6DA8_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__25_MoveNext_mA72EAC6D03E6D49B162627F4B1F17EBDE66D67FD_AdjustorThunk (void);
extern void U3CReleaseAsyncU3Ed__25_SetStateMachine_m4D4420EB99639C76F2FE31EF40F4524E9E292F9E_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__59_MoveNext_m3CC7426593006A20DCB8ADFA6B4544862A1F2798_AdjustorThunk (void);
extern void U3CShutdownAsyncU3Ed__59_SetStateMachine_mD9B8ECDA6C0015C6C894B3D2E8A7B9934F479D71_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_MoveNext_m4F3FBAA5AF712B9EFBE461E0DF3FE55369AA1697_AdjustorThunk (void);
extern void U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mAD9E26D66092DB13D12B48418376BC462CBBA31F_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m4839A82CC55051F059919BFB5A6A26C9E40F2BC4_AdjustorThunk (void);
extern void U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mFC7CDA22989636BFDDBAF8754F0FFAECB706EB5E_AdjustorThunk (void);
extern void Status__ctor_mDA2F89D0711AF59EB9B8633BEA22DAF91F8CD9EE_AdjustorThunk (void);
extern void Status_get_StatusCode_mC0CAB9A67D6D5B8CA659FD834E3D77EC1A258054_AdjustorThunk (void);
extern void Status_get_Detail_m304E4CCE7B0AD754FB9B00B9792A925931FA1D4F_AdjustorThunk (void);
extern void Status_ToString_m07F5926D4D70C0D55D6067841EBA76C59653D77B_AdjustorThunk (void);
extern void ProfilerEntry__ctor_m51372D6EF4E0A77EBCDF66E91AB827C8D4DFD6EB_AdjustorThunk (void);
extern void ProfilerEntry_ToString_mA89E97C6C403703B633037913AF5F7AEE2996920_AdjustorThunk (void);
extern void ProfilerScope__ctor_m94126261F4A3138B4DE9E6F7B429BEF0CB941725_AdjustorThunk (void);
extern void ProfilerScope_Dispose_mA8E37D1B4C3765839213FA0AFA7DFDCFB549AF65_AdjustorThunk (void);
extern void CompletionCallbackData__ctor_mB64711B2AA741620F54325DEF003FB870ECA22C4_AdjustorThunk (void);
extern void CompletionCallbackData_get_Callback_m52A5FB56BF0A105FA230A41C0676D6227538E273_AdjustorThunk (void);
extern void CompletionCallbackData_get_State_m3CAA8F5A8E8E689A0DE4C258AB5F93E3093AFECD_AdjustorThunk (void);
extern void ClientSideStatus__ctor_mF2B0E195E5D71A346E723548EE40369EF553C510_AdjustorThunk (void);
extern void ClientSideStatus_get_Status_m218E9065B0C36620CDA01A167E2287669A897193_AdjustorThunk (void);
extern void ClientSideStatus_get_Trailers_mF84F181401CFADA53E5C070736385AE0C55023F7_AdjustorThunk (void);
extern void UsageScope__ctor_m365D9BEEBB3E3410274408F3DAB4286A779590EF_AdjustorThunk (void);
extern void UsageScope_Dispose_m0AA11ED37C8A7E00DDDB8B8FBF632B49F4DF8445_AdjustorThunk (void);
extern void Timespec__ctor_m95FEE6B79D4DE967D2D77CF1A9AEB4E50A9069B9_AdjustorThunk (void);
extern void Timespec__ctor_m762D316EE014E0F0E5D21F28C1A8BADC544C6BD3_AdjustorThunk (void);
extern void Timespec_get_TimevalSeconds_m9A08FBF014D7B26180D55576D0C2EDE72798D72A_AdjustorThunk (void);
extern void Timespec_get_TimevalNanos_m8AEC2A71520F27DF56FA4F0DE8781116A4C55799_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[41] = 
{
	{ 0x0600000D, CallOptions__ctor_mF8C56883333EB9F403B5C6FC83DA1B0A7F55001C_AdjustorThunk },
	{ 0x0600000E, CallOptions_get_Headers_m8976CF0E492FF184A1B485DFD1F6FF3D5C5C81EF_AdjustorThunk },
	{ 0x0600000F, CallOptions_get_Deadline_m93D3472352264E20874552A3A530B35114325319_AdjustorThunk },
	{ 0x06000010, CallOptions_get_CancellationToken_m4D27FA3AD6E672D6F1AEED30842CBCBE40B0B700_AdjustorThunk },
	{ 0x06000011, CallOptions_get_WriteOptions_m36277D2343BE7F33FB912C76F028392F6C54B70E_AdjustorThunk },
	{ 0x06000012, CallOptions_get_PropagationToken_m152DD003E0C56F3B644ED4D29E70525BE185DF18_AdjustorThunk },
	{ 0x06000013, CallOptions_get_Credentials_mCCC9E74ED976CC9F2850FAC47DD44C5BFBB17A80_AdjustorThunk },
	{ 0x06000014, CallOptions_get_Flags_m0D17F9FD51511151963D48C63A4D35E25A0DB367_AdjustorThunk },
	{ 0x06000015, CallOptions_Normalize_m1D1E6D51D5DC4E37D8D491CA4A02AA9EA1381D4D_AdjustorThunk },
	{ 0x06000025, U3CShutdownAsyncU3Ed__27_MoveNext_mF8848AFE4A4A1D411CA34AE3E20FF4FFBA35C02B_AdjustorThunk },
	{ 0x06000026, U3CShutdownAsyncU3Ed__27_SetStateMachine_m694C578D47C85AB6A0DE6FFB5B083F8776FFD15E_AdjustorThunk },
	{ 0x06000027, U3CRunConnectivityWatcherAsyncU3Ed__37_MoveNext_m4685CB38D877AB61B6564A526B062CC1928723C5_AdjustorThunk },
	{ 0x06000028, U3CRunConnectivityWatcherAsyncU3Ed__37_SetStateMachine_m36805B0BD06F4A5049980CF4D03E33A28B4C6DA8_AdjustorThunk },
	{ 0x0600006B, U3CReleaseAsyncU3Ed__25_MoveNext_mA72EAC6D03E6D49B162627F4B1F17EBDE66D67FD_AdjustorThunk },
	{ 0x0600006C, U3CReleaseAsyncU3Ed__25_SetStateMachine_m4D4420EB99639C76F2FE31EF40F4524E9E292F9E_AdjustorThunk },
	{ 0x06000073, U3CShutdownAsyncU3Ed__59_MoveNext_m3CC7426593006A20DCB8ADFA6B4544862A1F2798_AdjustorThunk },
	{ 0x06000074, U3CShutdownAsyncU3Ed__59_SetStateMachine_mD9B8ECDA6C0015C6C894B3D2E8A7B9934F479D71_AdjustorThunk },
	{ 0x060000A0, U3CShutdownInternalAsyncU3Ed__32_MoveNext_m4F3FBAA5AF712B9EFBE461E0DF3FE55369AA1697_AdjustorThunk },
	{ 0x060000A1, U3CShutdownInternalAsyncU3Ed__32_SetStateMachine_mAD9E26D66092DB13D12B48418376BC462CBBA31F_AdjustorThunk },
	{ 0x060000A2, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_MoveNext_m4839A82CC55051F059919BFB5A6A26C9E40F2BC4_AdjustorThunk },
	{ 0x060000A3, U3CShutdownCompleteOrEnvironmentDeadAsyncU3Ed__33_SetStateMachine_mFC7CDA22989636BFDDBAF8754F0FFAECB706EB5E_AdjustorThunk },
	{ 0x060000A4, Status__ctor_mDA2F89D0711AF59EB9B8633BEA22DAF91F8CD9EE_AdjustorThunk },
	{ 0x060000A5, Status_get_StatusCode_mC0CAB9A67D6D5B8CA659FD834E3D77EC1A258054_AdjustorThunk },
	{ 0x060000A6, Status_get_Detail_m304E4CCE7B0AD754FB9B00B9792A925931FA1D4F_AdjustorThunk },
	{ 0x060000A7, Status_ToString_m07F5926D4D70C0D55D6067841EBA76C59653D77B_AdjustorThunk },
	{ 0x060000B4, ProfilerEntry__ctor_m51372D6EF4E0A77EBCDF66E91AB827C8D4DFD6EB_AdjustorThunk },
	{ 0x060000B5, ProfilerEntry_ToString_mA89E97C6C403703B633037913AF5F7AEE2996920_AdjustorThunk },
	{ 0x060000C3, ProfilerScope__ctor_m94126261F4A3138B4DE9E6F7B429BEF0CB941725_AdjustorThunk },
	{ 0x060000C4, ProfilerScope_Dispose_mA8E37D1B4C3765839213FA0AFA7DFDCFB549AF65_AdjustorThunk },
	{ 0x0600011C, CompletionCallbackData__ctor_mB64711B2AA741620F54325DEF003FB870ECA22C4_AdjustorThunk },
	{ 0x0600011D, CompletionCallbackData_get_Callback_m52A5FB56BF0A105FA230A41C0676D6227538E273_AdjustorThunk },
	{ 0x0600011E, CompletionCallbackData_get_State_m3CAA8F5A8E8E689A0DE4C258AB5F93E3093AFECD_AdjustorThunk },
	{ 0x06000143, ClientSideStatus__ctor_mF2B0E195E5D71A346E723548EE40369EF553C510_AdjustorThunk },
	{ 0x06000144, ClientSideStatus_get_Status_m218E9065B0C36620CDA01A167E2287669A897193_AdjustorThunk },
	{ 0x06000145, ClientSideStatus_get_Trailers_mF84F181401CFADA53E5C070736385AE0C55023F7_AdjustorThunk },
	{ 0x06000153, UsageScope__ctor_m365D9BEEBB3E3410274408F3DAB4286A779590EF_AdjustorThunk },
	{ 0x06000154, UsageScope_Dispose_m0AA11ED37C8A7E00DDDB8B8FBF632B49F4DF8445_AdjustorThunk },
	{ 0x06000355, Timespec__ctor_m95FEE6B79D4DE967D2D77CF1A9AEB4E50A9069B9_AdjustorThunk },
	{ 0x06000356, Timespec__ctor_m762D316EE014E0F0E5D21F28C1A8BADC544C6BD3_AdjustorThunk },
	{ 0x06000359, Timespec_get_TimevalSeconds_m9A08FBF014D7B26180D55576D0C2EDE72798D72A_AdjustorThunk },
	{ 0x0600035A, Timespec_get_TimevalNanos_m8AEC2A71520F27DF56FA4F0DE8781116A4C55799_AdjustorThunk },
};
static const int32_t s_InvokerIndices[891] = 
{
	7817,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	7952,
	295,
	7817,
	7500,
	7686,
	7817,
	7817,
	7817,
	7778,
	7685,
	-1,
	3303,
	1491,
	7778,
	2010,
	7817,
	7817,
	7817,
	6334,
	6334,
	4520,
	7817,
	13139,
	12987,
	13334,
	7952,
	6334,
	7952,
	6334,
	13334,
	7952,
	1518,
	13313,
	7817,
	7952,
	13334,
	7817,
	7952,
	3303,
	7778,
	7817,
	7778,
	7817,
	12987,
	-1,
	6334,
	6334,
	6334,
	7817,
	3303,
	7817,
	1155,
	6334,
	-1,
	-1,
	7817,
	7726,
	7686,
	7817,
	3328,
	7899,
	7899,
	13334,
	6334,
	-1,
	-1,
	13313,
	13313,
	13139,
	13139,
	13139,
	13313,
	13313,
	13313,
	7952,
	7817,
	7817,
	7817,
	7899,
	7817,
	7817,
	13334,
	13334,
	7817,
	7778,
	7778,
	13334,
	7952,
	13334,
	13334,
	13334,
	13334,
	7952,
	3303,
	3303,
	7952,
	6334,
	13334,
	7952,
	4788,
	4788,
	7817,
	7817,
	7952,
	6334,
	-1,
	-1,
	-1,
	-1,
	7952,
	7817,
	4452,
	3027,
	6294,
	4784,
	3027,
	6334,
	7952,
	5528,
	3299,
	7778,
	7899,
	5528,
	7817,
	7817,
	7952,
	13334,
	1491,
	7817,
	7899,
	7817,
	7817,
	11737,
	13031,
	13334,
	-1,
	-1,
	-1,
	-1,
	-1,
	3341,
	7925,
	7817,
	4790,
	7817,
	7952,
	1518,
	13334,
	7952,
	6334,
	7952,
	6334,
	3027,
	7778,
	7817,
	7817,
	13334,
	6294,
	7778,
	13334,
	13148,
	12353,
	-1,
	-1,
	13148,
	12353,
	6334,
	6334,
	1530,
	7817,
	12984,
	13313,
	13139,
	11793,
	13334,
	6334,
	6334,
	7952,
	6334,
	6334,
	6334,
	6334,
	6375,
	3303,
	7952,
	7952,
	6334,
	-1,
	13334,
	7952,
	7817,
	-1,
	6334,
	3303,
	6334,
	3303,
	6334,
	3303,
	3299,
	1479,
	-1,
	6334,
	3303,
	6334,
	3303,
	6334,
	3303,
	11574,
	3303,
	-1,
	6334,
	3303,
	6334,
	6334,
	3303,
	6334,
	3303,
	7817,
	3303,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6295,
	7779,
	6167,
	7779,
	7779,
	7899,
	13334,
	6416,
	13313,
	7780,
	6334,
	3303,
	7817,
	7693,
	7817,
	7899,
	7952,
	7899,
	6416,
	13334,
	3303,
	7817,
	7817,
	7899,
	13334,
	13132,
	7952,
	6334,
	6334,
	509,
	7952,
	6440,
	7899,
	13334,
	13334,
	7952,
	1518,
	1518,
	1518,
	1518,
	1518,
	1518,
	1518,
	7952,
	13313,
	12984,
	1437,
	1435,
	7899,
	13334,
	7899,
	13334,
	11737,
	10624,
	133,
	4520,
	480,
	7899,
	13334,
	3341,
	7925,
	7817,
	13334,
	13313,
	12987,
	7705,
	3957,
	7991,
	7952,
	7817,
	7899,
	7952,
	7952,
	7952,
	13334,
	6334,
	7952,
	3301,
	1518,
	414,
	6334,
	3301,
	3327,
	783,
	6334,
	1491,
	3263,
	2029,
	4786,
	13334,
	2237,
	4423,
	7952,
	7899,
	13334,
	7952,
	6334,
	7952,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	13139,
	13334,
	941,
	7952,
	7817,
	7899,
	7817,
	2015,
	3303,
	11732,
	3306,
	13334,
	6334,
	6334,
	7952,
	13334,
	7952,
	5528,
	7952,
	7952,
	7952,
	7817,
	7817,
	992,
	3324,
	3327,
	3327,
	6416,
	6416,
	3328,
	7952,
	6440,
	509,
	-1,
	-1,
	11724,
	12987,
	12987,
	13334,
	7952,
	12987,
	12986,
	7899,
	13334,
	7952,
	13313,
	7817,
	13313,
	13313,
	13031,
	13313,
	13313,
	13313,
	13334,
	3301,
	482,
	125,
	6334,
	13139,
	9257,
	13334,
	3301,
	294,
	70,
	6334,
	3301,
	6416,
	1179,
	6334,
	6334,
	13313,
	-1,
	11737,
	3301,
	7952,
	2029,
	6334,
	3301,
	7952,
	2029,
	6334,
	3301,
	7780,
	2029,
	4708,
	3301,
	7817,
	2029,
	4788,
	3301,
	4708,
	1158,
	4708,
	3301,
	4708,
	1158,
	4708,
	3301,
	1490,
	398,
	6334,
	3301,
	4452,
	1158,
	4452,
	3301,
	1986,
	735,
	1984,
	3301,
	4708,
	1158,
	4708,
	3301,
	4452,
	1158,
	4452,
	3301,
	6334,
	1158,
	6334,
	3301,
	6296,
	1141,
	6334,
	3301,
	7817,
	2029,
	4788,
	3301,
	4788,
	1158,
	4788,
	3301,
	1986,
	735,
	1984,
	3301,
	1986,
	735,
	1984,
	3301,
	5860,
	1158,
	5860,
	3301,
	4708,
	1158,
	4708,
	3301,
	6334,
	1158,
	6334,
	3301,
	6296,
	1141,
	6334,
	3301,
	2029,
	759,
	4788,
	3301,
	6296,
	1141,
	6334,
	3301,
	4452,
	1158,
	4452,
	3301,
	1065,
	391,
	4452,
	3301,
	118,
	37,
	4452,
	3301,
	611,
	237,
	4452,
	3301,
	118,
	37,
	4452,
	3301,
	611,
	237,
	4452,
	3301,
	209,
	75,
	4452,
	3301,
	1929,
	759,
	4452,
	3301,
	24,
	13,
	4452,
	3301,
	1929,
	759,
	4452,
	3301,
	1929,
	759,
	4452,
	3301,
	1929,
	759,
	4452,
	3301,
	1069,
	402,
	4452,
	3301,
	1929,
	759,
	4452,
	3301,
	4788,
	1158,
	4788,
	3301,
	6296,
	1141,
	6334,
	3301,
	4786,
	1141,
	4788,
	3301,
	951,
	235,
	6334,
	3301,
	950,
	234,
	6334,
	3301,
	6296,
	1141,
	6334,
	3301,
	6334,
	1158,
	6334,
	3301,
	1158,
	402,
	4788,
	3301,
	2029,
	759,
	4788,
	3301,
	6296,
	1141,
	6334,
	3301,
	2029,
	759,
	4788,
	3301,
	1158,
	402,
	4788,
	3301,
	135,
	36,
	4788,
	3301,
	1928,
	745,
	4452,
	3301,
	503,
	134,
	6334,
	3301,
	4788,
	1158,
	4788,
	3301,
	6296,
	1141,
	6334,
	3301,
	7778,
	2029,
	4452,
	3301,
	7817,
	2029,
	4788,
	3301,
	7817,
	2029,
	4788,
	3301,
	6334,
	1158,
	6334,
	3301,
	3958,
	1158,
	3958,
	3301,
	1848,
	749,
	3958,
	3301,
	6296,
	1141,
	6334,
	3301,
	6296,
	1141,
	6334,
	3301,
	4786,
	1141,
	4788,
	3301,
	964,
	239,
	6334,
	3301,
	4707,
	1141,
	4708,
	3301,
	1078,
	383,
	1984,
	3301,
	1078,
	383,
	1984,
	3301,
	6296,
	1141,
	6334,
	3301,
	6334,
	1158,
	6334,
	3301,
	4788,
	1158,
	4788,
	3301,
	486,
	129,
	6334,
	3301,
	400,
	137,
	4788,
	3301,
	6296,
	1141,
	6334,
	3301,
	4788,
	1158,
	4788,
	3301,
	3303,
	759,
	6334,
	3301,
	1929,
	759,
	4452,
	3301,
	1069,
	402,
	4452,
	3301,
	6334,
	1158,
	6334,
	3301,
	1069,
	402,
	4452,
	3301,
	6334,
	1158,
	6334,
	3301,
	1491,
	402,
	6334,
	3301,
	6296,
	1141,
	6334,
	3301,
	4788,
	1158,
	4788,
	3301,
	4708,
	1158,
	4708,
	3301,
	6644,
	1158,
	6644,
	3301,
	4705,
	1099,
	1984,
	3301,
	6296,
	1141,
	6334,
	3301,
	5859,
	1137,
	5860,
	3301,
	5859,
	1137,
	5860,
	3301,
	5859,
	1137,
	5860,
	3301,
	2355,
	796,
	5860,
	3301,
	7778,
	2029,
	4452,
	3301,
	4452,
	1158,
	4452,
	3301,
	4707,
	1141,
	4708,
	3301,
	3303,
	759,
	6334,
	13334,
	13324,
	13324,
	13324,
	13324,
	13324,
	13324,
	12852,
	13313,
	13313,
	6334,
	7817,
	6334,
	7952,
	7899,
	6416,
	13334,
	7952,
	7899,
	7899,
	13334,
	3303,
	7899,
	7952,
	13334,
	3256,
	1448,
	13329,
	13329,
	7779,
	7778,
	13077,
	13329,
	13334,
	6334,
	4708,
	-1,
	12933,
	12987,
	13334,
	12933,
	11612,
	11614,
	11612,
	11614,
	11612,
	11614,
	11612,
	11614,
	11612,
	11737,
	-1,
	-1,
	-1,
	-1,
	3303,
	-1,
	-1,
	-1,
	7952,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[24] = 
{
	{ 0x02000003, { 0, 6 } },
	{ 0x0200001F, { 20, 2 } },
	{ 0x02000025, { 24, 4 } },
	{ 0x0200003C, { 33, 34 } },
	{ 0x0200003D, { 67, 17 } },
	{ 0x02000059, { 84, 27 } },
	{ 0x0200005A, { 111, 2 } },
	{ 0x0200005B, { 113, 2 } },
	{ 0x06000016, { 6, 3 } },
	{ 0x06000041, { 9, 5 } },
	{ 0x06000042, { 14, 2 } },
	{ 0x0600004C, { 16, 2 } },
	{ 0x0600004D, { 18, 2 } },
	{ 0x06000078, { 22, 2 } },
	{ 0x060000AE, { 28, 1 } },
	{ 0x060000AF, { 29, 1 } },
	{ 0x060000C7, { 30, 1 } },
	{ 0x060000D4, { 31, 1 } },
	{ 0x060000DD, { 32, 1 } },
	{ 0x060001BE, { 115, 2 } },
	{ 0x06000360, { 117, 2 } },
	{ 0x06000374, { 119, 6 } },
	{ 0x06000375, { 125, 4 } },
	{ 0x06000376, { 129, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[130] = 
{
	{ (Il2CppRGCTXDataType)3, 31345 },
	{ (Il2CppRGCTXDataType)3, 31346 },
	{ (Il2CppRGCTXDataType)3, 31347 },
	{ (Il2CppRGCTXDataType)3, 2927 },
	{ (Il2CppRGCTXDataType)3, 59300 },
	{ (Il2CppRGCTXDataType)3, 59302 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)3, 2246 },
	{ (Il2CppRGCTXDataType)3, 2247 },
	{ (Il2CppRGCTXDataType)3, 3323 },
	{ (Il2CppRGCTXDataType)3, 3322 },
	{ (Il2CppRGCTXDataType)3, 3324 },
	{ (Il2CppRGCTXDataType)2, 3481 },
	{ (Il2CppRGCTXDataType)3, 3321 },
	{ (Il2CppRGCTXDataType)3, 67941 },
	{ (Il2CppRGCTXDataType)3, 2740 },
	{ (Il2CppRGCTXDataType)3, 58011 },
	{ (Il2CppRGCTXDataType)3, 57315 },
	{ (Il2CppRGCTXDataType)2, 3467 },
	{ (Il2CppRGCTXDataType)3, 2919 },
	{ (Il2CppRGCTXDataType)3, 59297 },
	{ (Il2CppRGCTXDataType)3, 59298 },
	{ (Il2CppRGCTXDataType)2, 9057 },
	{ (Il2CppRGCTXDataType)3, 31246 },
	{ (Il2CppRGCTXDataType)3, 59301 },
	{ (Il2CppRGCTXDataType)3, 59303 },
	{ (Il2CppRGCTXDataType)3, 31348 },
	{ (Il2CppRGCTXDataType)2, 9205 },
	{ (Il2CppRGCTXDataType)2, 362 },
	{ (Il2CppRGCTXDataType)2, 363 },
	{ (Il2CppRGCTXDataType)1, 181 },
	{ (Il2CppRGCTXDataType)3, 59586 },
	{ (Il2CppRGCTXDataType)1, 646 },
	{ (Il2CppRGCTXDataType)3, 2925 },
	{ (Il2CppRGCTXDataType)3, 31247 },
	{ (Il2CppRGCTXDataType)3, 2926 },
	{ (Il2CppRGCTXDataType)3, 31248 },
	{ (Il2CppRGCTXDataType)3, 2221 },
	{ (Il2CppRGCTXDataType)2, 3362 },
	{ (Il2CppRGCTXDataType)3, 2924 },
	{ (Il2CppRGCTXDataType)3, 2920 },
	{ (Il2CppRGCTXDataType)3, 2229 },
	{ (Il2CppRGCTXDataType)2, 10245 },
	{ (Il2CppRGCTXDataType)3, 46313 },
	{ (Il2CppRGCTXDataType)3, 2254 },
	{ (Il2CppRGCTXDataType)3, 2921 },
	{ (Il2CppRGCTXDataType)3, 2250 },
	{ (Il2CppRGCTXDataType)3, 2253 },
	{ (Il2CppRGCTXDataType)2, 3364 },
	{ (Il2CppRGCTXDataType)3, 46316 },
	{ (Il2CppRGCTXDataType)3, 46485 },
	{ (Il2CppRGCTXDataType)3, 46257 },
	{ (Il2CppRGCTXDataType)3, 2249 },
	{ (Il2CppRGCTXDataType)3, 2226 },
	{ (Il2CppRGCTXDataType)3, 2255 },
	{ (Il2CppRGCTXDataType)3, 2923 },
	{ (Il2CppRGCTXDataType)3, 2922 },
	{ (Il2CppRGCTXDataType)3, 2248 },
	{ (Il2CppRGCTXDataType)3, 2228 },
	{ (Il2CppRGCTXDataType)3, 2227 },
	{ (Il2CppRGCTXDataType)3, 2223 },
	{ (Il2CppRGCTXDataType)3, 46314 },
	{ (Il2CppRGCTXDataType)3, 46315 },
	{ (Il2CppRGCTXDataType)3, 2251 },
	{ (Il2CppRGCTXDataType)3, 2252 },
	{ (Il2CppRGCTXDataType)3, 59588 },
	{ (Il2CppRGCTXDataType)3, 2222 },
	{ (Il2CppRGCTXDataType)3, 59286 },
	{ (Il2CppRGCTXDataType)3, 59287 },
	{ (Il2CppRGCTXDataType)3, 2217 },
	{ (Il2CppRGCTXDataType)3, 2216 },
	{ (Il2CppRGCTXDataType)3, 19590 },
	{ (Il2CppRGCTXDataType)3, 19675 },
	{ (Il2CppRGCTXDataType)3, 2220 },
	{ (Il2CppRGCTXDataType)3, 2218 },
	{ (Il2CppRGCTXDataType)3, 2213 },
	{ (Il2CppRGCTXDataType)3, 2219 },
	{ (Il2CppRGCTXDataType)2, 3361 },
	{ (Il2CppRGCTXDataType)3, 2212 },
	{ (Il2CppRGCTXDataType)3, 46311 },
	{ (Il2CppRGCTXDataType)3, 46312 },
	{ (Il2CppRGCTXDataType)3, 2215 },
	{ (Il2CppRGCTXDataType)3, 2214 },
	{ (Il2CppRGCTXDataType)3, 59587 },
	{ (Il2CppRGCTXDataType)2, 2900 },
	{ (Il2CppRGCTXDataType)3, 521 },
	{ (Il2CppRGCTXDataType)3, 6310 },
	{ (Il2CppRGCTXDataType)2, 2967 },
	{ (Il2CppRGCTXDataType)3, 997 },
	{ (Il2CppRGCTXDataType)3, 59296 },
	{ (Il2CppRGCTXDataType)2, 9959 },
	{ (Il2CppRGCTXDataType)3, 42378 },
	{ (Il2CppRGCTXDataType)3, 522 },
	{ (Il2CppRGCTXDataType)2, 5267 },
	{ (Il2CppRGCTXDataType)3, 19462 },
	{ (Il2CppRGCTXDataType)2, 10337 },
	{ (Il2CppRGCTXDataType)3, 46753 },
	{ (Il2CppRGCTXDataType)3, 6309 },
	{ (Il2CppRGCTXDataType)2, 976 },
	{ (Il2CppRGCTXDataType)2, 7390 },
	{ (Il2CppRGCTXDataType)3, 46754 },
	{ (Il2CppRGCTXDataType)3, 46733 },
	{ (Il2CppRGCTXDataType)3, 42381 },
	{ (Il2CppRGCTXDataType)3, 42379 },
	{ (Il2CppRGCTXDataType)3, 46731 },
	{ (Il2CppRGCTXDataType)3, 46734 },
	{ (Il2CppRGCTXDataType)3, 19441 },
	{ (Il2CppRGCTXDataType)3, 42380 },
	{ (Il2CppRGCTXDataType)3, 59282 },
	{ (Il2CppRGCTXDataType)3, 46732 },
	{ (Il2CppRGCTXDataType)3, 46735 },
	{ (Il2CppRGCTXDataType)2, 9961 },
	{ (Il2CppRGCTXDataType)3, 42385 },
	{ (Il2CppRGCTXDataType)2, 10334 },
	{ (Il2CppRGCTXDataType)3, 46736 },
	{ (Il2CppRGCTXDataType)1, 542 },
	{ (Il2CppRGCTXDataType)3, 63715 },
	{ (Il2CppRGCTXDataType)1, 656 },
	{ (Il2CppRGCTXDataType)2, 656 },
	{ (Il2CppRGCTXDataType)2, 3479 },
	{ (Il2CppRGCTXDataType)3, 3320 },
	{ (Il2CppRGCTXDataType)3, 59621 },
	{ (Il2CppRGCTXDataType)2, 3433 },
	{ (Il2CppRGCTXDataType)3, 2738 },
	{ (Il2CppRGCTXDataType)3, 59624 },
	{ (Il2CppRGCTXDataType)3, 3318 },
	{ (Il2CppRGCTXDataType)3, 3317 },
	{ (Il2CppRGCTXDataType)3, 3319 },
	{ (Il2CppRGCTXDataType)3, 57312 },
	{ (Il2CppRGCTXDataType)3, 2739 },
};
extern const CustomAttributesCacheGenerator g_Grpc_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Grpc_Core_CodeGenModule;
const Il2CppCodeGenModule g_Grpc_Core_CodeGenModule = 
{
	"Grpc.Core.dll",
	891,
	s_methodPointers,
	41,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	24,
	s_rgctxIndices,
	130,
	s_rgctxValues,
	NULL,
	g_Grpc_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
