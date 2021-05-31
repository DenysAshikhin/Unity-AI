#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Comparison`1<Unity.MLAgents.Actuators.IActuator>
struct Comparison_1_t0B66B8628EF8944180D099A46BD78DED931513E6;
// System.Comparison`1<Unity.MLAgents.Sensors.ISensor>
struct Comparison_1_t40B902041AF53B3CECF3719ACF7A512C1720485E;
// System.Comparison`1<Unity.MLAgents.Inference.TensorProxy>
struct Comparison_1_tDF41318C0AA5F8BF1FD156025713BBBC0F8DC651;
// System.Converter`2<System.Single,System.Int32>
struct Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE;
// System.Collections.Generic.Dictionary`2<System.Type,System.ValueTuple`2<System.Int32,System.Type>>
struct Dictionary_2_tD4F075281A4C56041DA7B5FE9A6772A8833B684E;
// System.Collections.Generic.Dictionary`2<Unity.MLAgents.Inference.TensorProxy/TensorType,System.Type>
struct Dictionary_2_t58F1ECCA0062AAF00F205246C5F8138813258AA7;
// System.Func`1<System.Single>
struct Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Int64>
struct Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck>
struct Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>>
struct IEnumerator_1_t20C4CBF028A6D2F29F71DE7D7C6BAEB281B600AA;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>>
struct IEnumerator_1_tAC37C4BFD3255557199498F157420F47AEC3229A;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5918C99D6FA69C530D0287467B91ADE56FA3D7AF;
// System.Collections.Generic.IList`1<System.Func`1<System.Single>>
struct IList_1_t876C0B6881822B039062295527A34C91A9BF19E8;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// Unity.MLAgents.Sensors.ISensor[]
struct ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Unity.MLAgents.Policies.BrainParameters
struct BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Unity.MLAgents.Actuators.IActuator
struct IActuator_t40E8C381F15B2A47B1760E93CF0C1A0005D6B602;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Unity.MLAgents.Sensors.ISensor
struct ISensor_tC2B90E5D17A94CD1FAA71C7060D5C48F7169321E;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.MLAgents.Inference.Utils.Multinomial
struct Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Unity.MLAgents.Sensors.Reflection.ObservableAttribute
struct ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Unity.MLAgents.Inference.Utils.RandomNormal
struct RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// Unity.Barracuda.Tensor
struct Tensor_tE3868A2BF820890883C87B1CD963B579182561EE;
// Unity.MLAgents.Inference.TensorProxy
struct TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.MLAgents.Actuators.ActionBuffers/<>c
struct U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31;
// Unity.MLAgents.Actuators.ActuatorManager/<>c
struct U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0;
// Unity.MLAgents.Analytics.AnalyticsUtils/DisableAnalyticsSending
struct DisableAnalyticsSending_t0310CA6D65D0757D7C93FF9B81FE15D1C6E615FA;
// Unity.MLAgents.Inference.BarracudaModelExtensions/<>c
struct U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5;
// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c
struct U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF;
// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t52AC2CA8C7207D99D8FC0B16E738C56A782D05B9;
// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F;
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck
struct FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668;
// Unity.MLAgents.Policies.BehaviorParameters/<>c
struct U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3;
// Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated
struct PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B;
// Unity.MLAgents.Sensors.CompressionSpec/<>c
struct U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC;
// Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c
struct U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090;
// Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t26B0808316B2AF2DDE2122989C72FD85F84C9730;
// Unity.MLAgents.Policies.HeuristicPolicy/NullList
struct NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E;
// Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5
struct U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447;
// Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6
struct U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E;
// Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10;
// Unity.MLAgents.SamplerFactory/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t36766385215EE498D604EC585F59E807155E38DF;
// Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE;
// Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1
struct U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790;
// Unity.MLAgents.Sensors.SensorUtils/<>c
struct U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659;

IL2CPP_EXTERN_C RuntimeClass* AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActuator_t40E8C381F15B2A47B1760E93CF0C1A0005D6B602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t876C0B6881822B039062295527A34C91A9BF19E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISensor_tC2B90E5D17A94CD1FAA71C7060D5C48F7169321E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15A599B69271A694A96A187FB5327D477E4D02BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5D20699D2E876A250B5CB78DE31D977F6CAF925D;
IL2CPP_EXTERN_C String_t* _stringLiteral99FE398A32E0CBF4AD19E96882973AB3866C6D5F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF11DA8FF02989A263DBD778BAA709DAAF6BCE10;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullList_CopyTo_m47AA0259A8423DE34B0F82B0A23F2E78A2D7E4E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullList_GetEnumerator_m3DCC2AFAF0BBF5FD0F754CFE5E2A9223DC7A4663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetObservableFieldsU3Ed__5_System_Collections_IEnumerator_Reset_m4F957FF22D46F3F2048B7F25FB5236263ECF14D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetObservablePropertiesU3Ed__6_System_Collections_IEnumerator_Reset_m554B34EC3FA7464C61F7F67695CCACC222DE7CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mD5F7F88311AFF6E2331AC31EB3BDCA5B94675B1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mEECECC35EA338EDBE1DF833017E22570627A3F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Unity.MLAgents.Analytics.AnalyticsUtils
struct AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411  : public RuntimeObject
{
public:

public:
};

struct AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_StaticFields
{
public:
	// System.Boolean Unity.MLAgents.Analytics.AnalyticsUtils::s_SendEditorAnalytics
	bool ___s_SendEditorAnalytics_0;

public:
	inline static int32_t get_offset_of_s_SendEditorAnalytics_0() { return static_cast<int32_t>(offsetof(AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_StaticFields, ___s_SendEditorAnalytics_0)); }
	inline bool get_s_SendEditorAnalytics_0() const { return ___s_SendEditorAnalytics_0; }
	inline bool* get_address_of_s_SendEditorAnalytics_0() { return &___s_SendEditorAnalytics_0; }
	inline void set_s_SendEditorAnalytics_0(bool value)
	{
		___s_SendEditorAnalytics_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.MLAgents.Inference.Utils.Multinomial
struct Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD  : public RuntimeObject
{
public:
	// System.Random Unity.MLAgents.Inference.Utils.Multinomial::m_Random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___m_Random_0;

public:
	inline static int32_t get_offset_of_m_Random_0() { return static_cast<int32_t>(offsetof(Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD, ___m_Random_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_m_Random_0() const { return ___m_Random_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_m_Random_0() { return &___m_Random_0; }
	inline void set_m_Random_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___m_Random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Random_0), (void*)value);
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_2), (void*)value);
	}
};


// Unity.MLAgents.Inference.Utils.RandomNormal
struct RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B  : public RuntimeObject
{
public:
	// System.Double Unity.MLAgents.Inference.Utils.RandomNormal::m_Mean
	double ___m_Mean_0;
	// System.Double Unity.MLAgents.Inference.Utils.RandomNormal::m_Stddev
	double ___m_Stddev_1;
	// System.Random Unity.MLAgents.Inference.Utils.RandomNormal::m_Random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___m_Random_2;
	// System.Boolean Unity.MLAgents.Inference.Utils.RandomNormal::m_HasSpare
	bool ___m_HasSpare_3;
	// System.Double Unity.MLAgents.Inference.Utils.RandomNormal::m_SpareUnscaled
	double ___m_SpareUnscaled_4;

public:
	inline static int32_t get_offset_of_m_Mean_0() { return static_cast<int32_t>(offsetof(RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B, ___m_Mean_0)); }
	inline double get_m_Mean_0() const { return ___m_Mean_0; }
	inline double* get_address_of_m_Mean_0() { return &___m_Mean_0; }
	inline void set_m_Mean_0(double value)
	{
		___m_Mean_0 = value;
	}

	inline static int32_t get_offset_of_m_Stddev_1() { return static_cast<int32_t>(offsetof(RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B, ___m_Stddev_1)); }
	inline double get_m_Stddev_1() const { return ___m_Stddev_1; }
	inline double* get_address_of_m_Stddev_1() { return &___m_Stddev_1; }
	inline void set_m_Stddev_1(double value)
	{
		___m_Stddev_1 = value;
	}

	inline static int32_t get_offset_of_m_Random_2() { return static_cast<int32_t>(offsetof(RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B, ___m_Random_2)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_m_Random_2() const { return ___m_Random_2; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_m_Random_2() { return &___m_Random_2; }
	inline void set_m_Random_2(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___m_Random_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Random_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasSpare_3() { return static_cast<int32_t>(offsetof(RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B, ___m_HasSpare_3)); }
	inline bool get_m_HasSpare_3() const { return ___m_HasSpare_3; }
	inline bool* get_address_of_m_HasSpare_3() { return &___m_HasSpare_3; }
	inline void set_m_HasSpare_3(bool value)
	{
		___m_HasSpare_3 = value;
	}

	inline static int32_t get_offset_of_m_SpareUnscaled_4() { return static_cast<int32_t>(offsetof(RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B, ___m_SpareUnscaled_4)); }
	inline double get_m_SpareUnscaled_4() const { return ___m_SpareUnscaled_4; }
	inline double* get_address_of_m_SpareUnscaled_4() { return &___m_SpareUnscaled_4; }
	inline void set_m_SpareUnscaled_4(double value)
	{
		___m_SpareUnscaled_4 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Unity.MLAgents.Actuators.ActionBuffers/<>c
struct U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_StaticFields
{
public:
	// Unity.MLAgents.Actuators.ActionBuffers/<>c Unity.MLAgents.Actuators.ActionBuffers/<>c::<>9
	U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * ___U3CU3E9_0;
	// System.Converter`2<System.Single,System.Int32> Unity.MLAgents.Actuators.ActionBuffers/<>c::<>9__7_0
	Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// Unity.MLAgents.Actuators.ActuatorManager/<>c
struct U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_StaticFields
{
public:
	// Unity.MLAgents.Actuators.ActuatorManager/<>c Unity.MLAgents.Actuators.ActuatorManager/<>c::<>9
	U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * ___U3CU3E9_0;
	// System.Comparison`1<Unity.MLAgents.Actuators.IActuator> Unity.MLAgents.Actuators.ActuatorManager/<>c::<>9__35_0
	Comparison_1_t0B66B8628EF8944180D099A46BD78DED931513E6 * ___U3CU3E9__35_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_StaticFields, ___U3CU3E9__35_0_1)); }
	inline Comparison_1_t0B66B8628EF8944180D099A46BD78DED931513E6 * get_U3CU3E9__35_0_1() const { return ___U3CU3E9__35_0_1; }
	inline Comparison_1_t0B66B8628EF8944180D099A46BD78DED931513E6 ** get_address_of_U3CU3E9__35_0_1() { return &___U3CU3E9__35_0_1; }
	inline void set_U3CU3E9__35_0_1(Comparison_1_t0B66B8628EF8944180D099A46BD78DED931513E6 * value)
	{
		___U3CU3E9__35_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_1), (void*)value);
	}
};


// Unity.MLAgents.Analytics.AnalyticsUtils/DisableAnalyticsSending
struct DisableAnalyticsSending_t0310CA6D65D0757D7C93FF9B81FE15D1C6E615FA  : public RuntimeObject
{
public:
	// System.Boolean Unity.MLAgents.Analytics.AnalyticsUtils/DisableAnalyticsSending::m_PreviousSendEditorAnalytics
	bool ___m_PreviousSendEditorAnalytics_0;

public:
	inline static int32_t get_offset_of_m_PreviousSendEditorAnalytics_0() { return static_cast<int32_t>(offsetof(DisableAnalyticsSending_t0310CA6D65D0757D7C93FF9B81FE15D1C6E615FA, ___m_PreviousSendEditorAnalytics_0)); }
	inline bool get_m_PreviousSendEditorAnalytics_0() const { return ___m_PreviousSendEditorAnalytics_0; }
	inline bool* get_address_of_m_PreviousSendEditorAnalytics_0() { return &___m_PreviousSendEditorAnalytics_0; }
	inline void set_m_PreviousSendEditorAnalytics_0(bool value)
	{
		___m_PreviousSendEditorAnalytics_0 = value;
	}
};


// Unity.MLAgents.Inference.BarracudaModelExtensions/<>c
struct U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_StaticFields
{
public:
	// Unity.MLAgents.Inference.BarracudaModelExtensions/<>c Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::<>9
	U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Int64> Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::<>9__2_1
	Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * ___U3CU3E9__2_1_1;
	// System.Comparison`1<Unity.MLAgents.Inference.TensorProxy> Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::<>9__2_0
	Comparison_1_tDF41318C0AA5F8BF1FD156025713BBBC0F8DC651 * ___U3CU3E9__2_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_StaticFields, ___U3CU3E9__2_1_1)); }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * get_U3CU3E9__2_1_1() const { return ___U3CU3E9__2_1_1; }
	inline Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 ** get_address_of_U3CU3E9__2_1_1() { return &___U3CU3E9__2_1_1; }
	inline void set_U3CU3E9__2_1_1(Func_2_tAB99B2018719C6ADFD37FB04A207F07169AE46E0 * value)
	{
		___U3CU3E9__2_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_StaticFields, ___U3CU3E9__2_0_2)); }
	inline Comparison_1_tDF41318C0AA5F8BF1FD156025713BBBC0F8DC651 * get_U3CU3E9__2_0_2() const { return ___U3CU3E9__2_0_2; }
	inline Comparison_1_tDF41318C0AA5F8BF1FD156025713BBBC0F8DC651 ** get_address_of_U3CU3E9__2_0_2() { return &___U3CU3E9__2_0_2; }
	inline void set_U3CU3E9__2_0_2(Comparison_1_tDF41318C0AA5F8BF1FD156025713BBBC0F8DC651 * value)
	{
		___U3CU3E9__2_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_2), (void*)value);
	}
};


// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c
struct U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields
{
public:
	// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9
	U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__4_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__4_0_1;
	// System.Func`2<System.String,System.Boolean> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__4_1
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__4_1_2;
	// System.Func`2<System.String,System.Boolean> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__5_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__5_0_3;
	// System.Func`2<System.String,System.Boolean> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__6_0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__6_0_4;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__10_0
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__10_0_5;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__10_1
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__10_1_6;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__10_2
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__10_2_7;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__10_3
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__10_3_8;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__10_4
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__10_4_9;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__12_0
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__12_0_10;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__12_1
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__12_1_11;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__12_2
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__12_2_12;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__12_3
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__12_3_13;
	// System.Func`5<Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32,Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck> Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<>9__12_4
	Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * ___U3CU3E9__12_4_14;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__4_1_2)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__4_1_2() const { return ___U3CU3E9__4_1_2; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__4_1_2() { return &___U3CU3E9__4_1_2; }
	inline void set_U3CU3E9__4_1_2(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__4_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__5_0_3)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__5_0_3() const { return ___U3CU3E9__5_0_3; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__5_0_3() { return &___U3CU3E9__5_0_3; }
	inline void set_U3CU3E9__5_0_3(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__5_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__6_0_4)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__6_0_4() const { return ___U3CU3E9__6_0_4; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__6_0_4() { return &___U3CU3E9__6_0_4; }
	inline void set_U3CU3E9__6_0_4(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__6_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__10_0_5)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__10_0_5() const { return ___U3CU3E9__10_0_5; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__10_0_5() { return &___U3CU3E9__10_0_5; }
	inline void set_U3CU3E9__10_0_5(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__10_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__10_1_6)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__10_1_6() const { return ___U3CU3E9__10_1_6; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__10_1_6() { return &___U3CU3E9__10_1_6; }
	inline void set_U3CU3E9__10_1_6(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__10_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_2_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__10_2_7)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__10_2_7() const { return ___U3CU3E9__10_2_7; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__10_2_7() { return &___U3CU3E9__10_2_7; }
	inline void set_U3CU3E9__10_2_7(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__10_2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_3_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__10_3_8)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__10_3_8() const { return ___U3CU3E9__10_3_8; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__10_3_8() { return &___U3CU3E9__10_3_8; }
	inline void set_U3CU3E9__10_3_8(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__10_3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_3_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_4_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__10_4_9)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__10_4_9() const { return ___U3CU3E9__10_4_9; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__10_4_9() { return &___U3CU3E9__10_4_9; }
	inline void set_U3CU3E9__10_4_9(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__10_4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_4_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__12_0_10)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__12_0_10() const { return ___U3CU3E9__12_0_10; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__12_0_10() { return &___U3CU3E9__12_0_10; }
	inline void set_U3CU3E9__12_0_10(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__12_0_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_1_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__12_1_11)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__12_1_11() const { return ___U3CU3E9__12_1_11; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__12_1_11() { return &___U3CU3E9__12_1_11; }
	inline void set_U3CU3E9__12_1_11(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__12_1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_1_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_2_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__12_2_12)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__12_2_12() const { return ___U3CU3E9__12_2_12; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__12_2_12() { return &___U3CU3E9__12_2_12; }
	inline void set_U3CU3E9__12_2_12(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__12_2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_2_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_3_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__12_3_13)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__12_3_13() const { return ___U3CU3E9__12_3_13; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__12_3_13() { return &___U3CU3E9__12_3_13; }
	inline void set_U3CU3E9__12_3_13(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__12_3_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_3_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_4_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields, ___U3CU3E9__12_4_14)); }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * get_U3CU3E9__12_4_14() const { return ___U3CU3E9__12_4_14; }
	inline Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF ** get_address_of_U3CU3E9__12_4_14() { return &___U3CU3E9__12_4_14; }
	inline void set_U3CU3E9__12_4_14(Func_5_tB9F63E5A921B90A87C864522F99858D3474338EF * value)
	{
		___U3CU3E9__12_4_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_4_14), (void*)value);
	}
};


// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t52AC2CA8C7207D99D8FC0B16E738C56A782D05B9  : public RuntimeObject
{
public:
	// Unity.MLAgents.Sensors.ISensor Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass10_0::sens
	RuntimeObject* ___sens_0;

public:
	inline static int32_t get_offset_of_sens_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_t52AC2CA8C7207D99D8FC0B16E738C56A782D05B9, ___sens_0)); }
	inline RuntimeObject* get_sens_0() const { return ___sens_0; }
	inline RuntimeObject** get_address_of_sens_0() { return &___sens_0; }
	inline void set_sens_0(RuntimeObject* value)
	{
		___sens_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sens_0), (void*)value);
	}
};


// Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F  : public RuntimeObject
{
public:
	// Unity.MLAgents.Sensors.ISensor Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0::sens
	RuntimeObject* ___sens_0;

public:
	inline static int32_t get_offset_of_sens_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F, ___sens_0)); }
	inline RuntimeObject* get_sens_0() const { return ___sens_0; }
	inline RuntimeObject** get_address_of_sens_0() { return &___sens_0; }
	inline void set_sens_0(RuntimeObject* value)
	{
		___sens_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sens_0), (void*)value);
	}
};


// Unity.MLAgents.Policies.BehaviorParameters/<>c
struct U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_StaticFields
{
public:
	// Unity.MLAgents.Policies.BehaviorParameters/<>c Unity.MLAgents.Policies.BehaviorParameters/<>c::<>9
	U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * ___U3CU3E9_0;
	// Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated Unity.MLAgents.Policies.BehaviorParameters/<>c::<>9__39_0
	PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * ___U3CU3E9__39_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_StaticFields, ___U3CU3E9__39_0_1)); }
	inline PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * get_U3CU3E9__39_0_1() const { return ___U3CU3E9__39_0_1; }
	inline PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B ** get_address_of_U3CU3E9__39_0_1() { return &___U3CU3E9__39_0_1; }
	inline void set_U3CU3E9__39_0_1(PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * value)
	{
		___U3CU3E9__39_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_1), (void*)value);
	}
};


// Unity.MLAgents.Sensors.CompressionSpec/<>c
struct U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_StaticFields
{
public:
	// Unity.MLAgents.Sensors.CompressionSpec/<>c Unity.MLAgents.Sensors.CompressionSpec/<>c::<>9
	U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Boolean> Unity.MLAgents.Sensors.CompressionSpec/<>c::<>9__8_0
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__8_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_StaticFields, ___U3CU3E9__8_0_1)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__8_0_1() const { return ___U3CU3E9__8_0_1; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__8_0_1() { return &___U3CU3E9__8_0_1; }
	inline void set_U3CU3E9__8_0_1(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__8_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_1), (void*)value);
	}
};


// Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c
struct U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_StaticFields
{
public:
	// Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c::<>9
	U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * ___U3CU3E9_0;
	// System.Func`1<System.Single> Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c::<>9__4_1
	Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * ___U3CU3E9__4_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_StaticFields, ___U3CU3E9__4_1_1)); }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * get_U3CU3E9__4_1_1() const { return ___U3CU3E9__4_1_1; }
	inline Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 ** get_address_of_U3CU3E9__4_1_1() { return &___U3CU3E9__4_1_1; }
	inline void set_U3CU3E9__4_1_1(Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * value)
	{
		___U3CU3E9__4_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_1), (void*)value);
	}
};


// Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t26B0808316B2AF2DDE2122989C72FD85F84C9730  : public RuntimeObject
{
public:
	// System.Single Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c__DisplayClass4_0::value
	float ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t26B0808316B2AF2DDE2122989C72FD85F84C9730, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}
};


// Unity.MLAgents.Policies.HeuristicPolicy/NullList
struct NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E  : public RuntimeObject
{
public:
	// System.Int32 Unity.MLAgents.Policies.HeuristicPolicy/NullList::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// System.Boolean Unity.MLAgents.Policies.HeuristicPolicy/NullList::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E, ___U3CCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CCountU3Ek__BackingField_0() const { return ___U3CCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_0() { return &___U3CCountU3Ek__BackingField_0; }
	inline void set_U3CCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsReadOnlyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E, ___U3CIsReadOnlyU3Ek__BackingField_1)); }
	inline bool get_U3CIsReadOnlyU3Ek__BackingField_1() const { return ___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsReadOnlyU3Ek__BackingField_1() { return &___U3CIsReadOnlyU3Ek__BackingField_1; }
	inline void set_U3CIsReadOnlyU3Ek__BackingField_1(bool value)
	{
		___U3CIsReadOnlyU3Ek__BackingField_1 = value;
	}
};


// Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10  : public RuntimeObject
{
public:
	// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0::min
	float ___min_0;
	// System.Random Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0::distr
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___distr_1;
	// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0::max
	float ___max_2;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_distr_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10, ___distr_1)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_distr_1() const { return ___distr_1; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_distr_1() { return &___distr_1; }
	inline void set_distr_1(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___distr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distr_1), (void*)value);
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10, ___max_2)); }
	inline float get_max_2() const { return ___max_2; }
	inline float* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(float value)
	{
		___max_2 = value;
	}
};


// Unity.MLAgents.SamplerFactory/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t36766385215EE498D604EC585F59E807155E38DF  : public RuntimeObject
{
public:
	// Unity.MLAgents.Inference.Utils.RandomNormal Unity.MLAgents.SamplerFactory/<>c__DisplayClass1_0::distr
	RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B * ___distr_0;

public:
	inline static int32_t get_offset_of_distr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t36766385215EE498D604EC585F59E807155E38DF, ___distr_0)); }
	inline RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B * get_distr_0() const { return ___distr_0; }
	inline RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B ** get_address_of_distr_0() { return &___distr_0; }
	inline void set_distr_0(RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B * value)
	{
		___distr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distr_0), (void*)value);
	}
};


// Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE  : public RuntimeObject
{
public:
	// System.Random Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0::distr
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___distr_0;
	// Unity.MLAgents.Inference.Utils.Multinomial Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0::intervalDistr
	Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD * ___intervalDistr_1;
	// System.Single[] Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0::intervalSizes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___intervalSizes_2;
	// System.Collections.Generic.IList`1<System.Func`1<System.Single>> Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0::intervalFuncs
	RuntimeObject* ___intervalFuncs_3;

public:
	inline static int32_t get_offset_of_distr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE, ___distr_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_distr_0() const { return ___distr_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_distr_0() { return &___distr_0; }
	inline void set_distr_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___distr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___distr_0), (void*)value);
	}

	inline static int32_t get_offset_of_intervalDistr_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE, ___intervalDistr_1)); }
	inline Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD * get_intervalDistr_1() const { return ___intervalDistr_1; }
	inline Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD ** get_address_of_intervalDistr_1() { return &___intervalDistr_1; }
	inline void set_intervalDistr_1(Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD * value)
	{
		___intervalDistr_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intervalDistr_1), (void*)value);
	}

	inline static int32_t get_offset_of_intervalSizes_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE, ___intervalSizes_2)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_intervalSizes_2() const { return ___intervalSizes_2; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_intervalSizes_2() { return &___intervalSizes_2; }
	inline void set_intervalSizes_2(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___intervalSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intervalSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_intervalFuncs_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE, ___intervalFuncs_3)); }
	inline RuntimeObject* get_intervalFuncs_3() const { return ___intervalFuncs_3; }
	inline RuntimeObject** get_address_of_intervalFuncs_3() { return &___intervalFuncs_3; }
	inline void set_intervalFuncs_3(RuntimeObject* value)
	{
		___intervalFuncs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___intervalFuncs_3), (void*)value);
	}
};


// Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1
struct U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790  : public RuntimeObject
{
public:
	// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1::min
	float ___min_0;
	// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1::intervalSize
	float ___intervalSize_1;
	// Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0 Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE * ___CSU24U3CU3E8__locals1_2;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_intervalSize_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790, ___intervalSize_1)); }
	inline float get_intervalSize_1() const { return ___intervalSize_1; }
	inline float* get_address_of_intervalSize_1() { return &___intervalSize_1; }
	inline void set_intervalSize_1(float value)
	{
		___intervalSize_1 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790, ___CSU24U3CU3E8__locals1_2)); }
	inline U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE * get_CSU24U3CU3E8__locals1_2() const { return ___CSU24U3CU3E8__locals1_2; }
	inline U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE ** get_address_of_CSU24U3CU3E8__locals1_2() { return &___CSU24U3CU3E8__locals1_2; }
	inline void set_CSU24U3CU3E8__locals1_2(U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE * value)
	{
		___CSU24U3CU3E8__locals1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_2), (void*)value);
	}
};


// Unity.MLAgents.Sensors.SensorUtils/<>c
struct U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_StaticFields
{
public:
	// Unity.MLAgents.Sensors.SensorUtils/<>c Unity.MLAgents.Sensors.SensorUtils/<>c::<>9
	U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * ___U3CU3E9_0;
	// System.Comparison`1<Unity.MLAgents.Sensors.ISensor> Unity.MLAgents.Sensors.SensorUtils/<>c::<>9__0_0
	Comparison_1_t40B902041AF53B3CECF3719ACF7A512C1720485E * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Comparison_1_t40B902041AF53B3CECF3719ACF7A512C1720485E * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Comparison_1_t40B902041AF53B3CECF3719ACF7A512C1720485E ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Comparison_1_t40B902041AF53B3CECF3719ACF7A512C1720485E * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>
struct ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299 
{
public:
	// T1 System.ValueTuple`2::Item1
	FieldInfo_t * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299, ___Item1_0)); }
	inline FieldInfo_t * get_Item1_0() const { return ___Item1_0; }
	inline FieldInfo_t ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(FieldInfo_t * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299, ___Item2_1)); }
	inline ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * get_Item2_1() const { return ___Item2_1; }
	inline ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>
struct ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4 
{
public:
	// T1 System.ValueTuple`2::Item1
	PropertyInfo_t * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4, ___Item1_0)); }
	inline PropertyInfo_t * get_Item1_0() const { return ___Item1_0; }
	inline PropertyInfo_t ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(PropertyInfo_t * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4, ___Item2_1)); }
	inline ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * get_Item2_1() const { return ___Item2_1; }
	inline ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// Unity.MLAgents.Actuators.ActionSpec
struct ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0 
{
public:
	// System.Int32 Unity.MLAgents.Actuators.ActionSpec::m_NumContinuousActions
	int32_t ___m_NumContinuousActions_0;
	// System.Int32[] Unity.MLAgents.Actuators.ActionSpec::BranchSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___BranchSizes_1;

public:
	inline static int32_t get_offset_of_m_NumContinuousActions_0() { return static_cast<int32_t>(offsetof(ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0, ___m_NumContinuousActions_0)); }
	inline int32_t get_m_NumContinuousActions_0() const { return ___m_NumContinuousActions_0; }
	inline int32_t* get_address_of_m_NumContinuousActions_0() { return &___m_NumContinuousActions_0; }
	inline void set_m_NumContinuousActions_0(int32_t value)
	{
		___m_NumContinuousActions_0 = value;
	}

	inline static int32_t get_offset_of_BranchSizes_1() { return static_cast<int32_t>(offsetof(ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0, ___BranchSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_BranchSizes_1() const { return ___BranchSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_BranchSizes_1() { return &___BranchSizes_1; }
	inline void set_BranchSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___BranchSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BranchSizes_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.MLAgents.Actuators.ActionSpec
struct ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0_marshaled_pinvoke
{
	int32_t ___m_NumContinuousActions_0;
	Il2CppSafeArray/*NONE*/* ___BranchSizes_1;
};
// Native definition for COM marshalling of Unity.MLAgents.Actuators.ActionSpec
struct ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0_marshaled_com
{
	int32_t ___m_NumContinuousActions_0;
	Il2CppSafeArray/*NONE*/* ___BranchSizes_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// UnityEngine.Hash128
struct Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.MLAgents.Agent/AgentParameters
struct AgentParameters_tE428926AD1CD4ADB9385A83BC166FCEE691FB770 
{
public:
	// System.Int32 Unity.MLAgents.Agent/AgentParameters::maxStep
	int32_t ___maxStep_0;

public:
	inline static int32_t get_offset_of_maxStep_0() { return static_cast<int32_t>(offsetof(AgentParameters_tE428926AD1CD4ADB9385A83BC166FCEE691FB770, ___maxStep_0)); }
	inline int32_t get_maxStep_0() const { return ___maxStep_0; }
	inline int32_t* get_address_of_maxStep_0() { return &___maxStep_0; }
	inline void set_maxStep_0(int32_t value)
	{
		___maxStep_0 = value;
	}
};


// Unity.MLAgents.DecisionRequester/DecisionRequestContext
struct DecisionRequestContext_t3C0E476709637A162571F1605857AD95A2A4DC54 
{
public:
	// System.Int32 Unity.MLAgents.DecisionRequester/DecisionRequestContext::AcademyStepCount
	int32_t ___AcademyStepCount_0;

public:
	inline static int32_t get_offset_of_AcademyStepCount_0() { return static_cast<int32_t>(offsetof(DecisionRequestContext_t3C0E476709637A162571F1605857AD95A2A4DC54, ___AcademyStepCount_0)); }
	inline int32_t get_AcademyStepCount_0() const { return ___AcademyStepCount_0; }
	inline int32_t* get_address_of_AcademyStepCount_0() { return &___AcademyStepCount_0; }
	inline void set_AcademyStepCount_0(int32_t value)
	{
		___AcademyStepCount_0 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.MLAgents.Policies.SpaceType
struct SpaceType_t132E73F782D8FADB1BD097AC3627FD9A66332E45 
{
public:
	// System.Int32 Unity.MLAgents.Policies.SpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpaceType_t132E73F782D8FADB1BD097AC3627FD9A66332E45, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.Agent/DoneReason
struct DoneReason_tA35F092C849B354562C624D66B0833CAF7113097 
{
public:
	// System.Int32 Unity.MLAgents.Agent/DoneReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DoneReason_tA35F092C849B354562C624D66B0833CAF7113097, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.Inference.BarracudaModelParamLoader/ModelApiVersion
struct ModelApiVersion_t00ACA86E0DED03E7CBADABF651FD2AB2638BC76D 
{
public:
	// System.Int32 Unity.MLAgents.Inference.BarracudaModelParamLoader/ModelApiVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModelApiVersion_t00ACA86E0DED03E7CBADABF651FD2AB2638BC76D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.SideChannels.EngineConfigurationChannel/ConfigurationType
struct ConfigurationType_tD2D22425289CF1F9D4C4366B44D40A26D3976A06 
{
public:
	// System.Int32 Unity.MLAgents.SideChannels.EngineConfigurationChannel/ConfigurationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConfigurationType_tD2D22425289CF1F9D4C4366B44D40A26D3976A06, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128
struct MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 
{
public:
	// UnityEngine.Hash128 Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::m_Hash
	Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  ___m_Hash_0;

public:
	inline static int32_t get_offset_of_m_Hash_0() { return static_cast<int32_t>(offsetof(MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244, ___m_Hash_0)); }
	inline Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  get_m_Hash_0() const { return ___m_Hash_0; }
	inline Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * get_address_of_m_Hash_0() { return &___m_Hash_0; }
	inline void set_m_Hash_0(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  value)
	{
		___m_Hash_0 = value;
	}
};


// Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5
struct U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447  : public RuntimeObject
{
public:
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>2__current
	ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  ___U3CU3E2__current_1;
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::excludeInherited
	bool ___excludeInherited_3;
	// System.Boolean Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>3__excludeInherited
	bool ___U3CU3E3__excludeInherited_4;
	// System.Object Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::o
	RuntimeObject * ___o_5;
	// System.Object Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>3__o
	RuntimeObject * ___U3CU3E3__o_6;
	// System.Reflection.FieldInfo[] Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>7__wrap1
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ___U3CU3E7__wrap1_7;
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_excludeInherited_3() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___excludeInherited_3)); }
	inline bool get_excludeInherited_3() const { return ___excludeInherited_3; }
	inline bool* get_address_of_excludeInherited_3() { return &___excludeInherited_3; }
	inline void set_excludeInherited_3(bool value)
	{
		___excludeInherited_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__excludeInherited_4() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3E3__excludeInherited_4)); }
	inline bool get_U3CU3E3__excludeInherited_4() const { return ___U3CU3E3__excludeInherited_4; }
	inline bool* get_address_of_U3CU3E3__excludeInherited_4() { return &___U3CU3E3__excludeInherited_4; }
	inline void set_U3CU3E3__excludeInherited_4(bool value)
	{
		___U3CU3E3__excludeInherited_4 = value;
	}

	inline static int32_t get_offset_of_o_5() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___o_5)); }
	inline RuntimeObject * get_o_5() const { return ___o_5; }
	inline RuntimeObject ** get_address_of_o_5() { return &___o_5; }
	inline void set_o_5(RuntimeObject * value)
	{
		___o_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__o_6() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3E3__o_6)); }
	inline RuntimeObject * get_U3CU3E3__o_6() const { return ___U3CU3E3__o_6; }
	inline RuntimeObject ** get_address_of_U3CU3E3__o_6() { return &___U3CU3E3__o_6; }
	inline void set_U3CU3E3__o_6(RuntimeObject * value)
	{
		___U3CU3E3__o_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__o_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3E7__wrap1_7)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447, ___U3CU3E7__wrap2_8)); }
	inline int32_t get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(int32_t value)
	{
		___U3CU3E7__wrap2_8 = value;
	}
};


// Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6
struct U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E  : public RuntimeObject
{
public:
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>2__current
	ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  ___U3CU3E2__current_1;
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::excludeInherited
	bool ___excludeInherited_3;
	// System.Boolean Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>3__excludeInherited
	bool ___U3CU3E3__excludeInherited_4;
	// System.Object Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::o
	RuntimeObject * ___o_5;
	// System.Object Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>3__o
	RuntimeObject * ___U3CU3E3__o_6;
	// System.Reflection.PropertyInfo[] Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>7__wrap1
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* ___U3CU3E7__wrap1_7;
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3E2__current_1)); }
	inline ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_excludeInherited_3() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___excludeInherited_3)); }
	inline bool get_excludeInherited_3() const { return ___excludeInherited_3; }
	inline bool* get_address_of_excludeInherited_3() { return &___excludeInherited_3; }
	inline void set_excludeInherited_3(bool value)
	{
		___excludeInherited_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__excludeInherited_4() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3E3__excludeInherited_4)); }
	inline bool get_U3CU3E3__excludeInherited_4() const { return ___U3CU3E3__excludeInherited_4; }
	inline bool* get_address_of_U3CU3E3__excludeInherited_4() { return &___U3CU3E3__excludeInherited_4; }
	inline void set_U3CU3E3__excludeInherited_4(bool value)
	{
		___U3CU3E3__excludeInherited_4 = value;
	}

	inline static int32_t get_offset_of_o_5() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___o_5)); }
	inline RuntimeObject * get_o_5() const { return ___o_5; }
	inline RuntimeObject ** get_address_of_o_5() { return &___o_5; }
	inline void set_o_5(RuntimeObject * value)
	{
		___o_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___o_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__o_6() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3E3__o_6)); }
	inline RuntimeObject * get_U3CU3E3__o_6() const { return ___U3CU3E3__o_6; }
	inline RuntimeObject ** get_address_of_U3CU3E3__o_6() { return &___U3CU3E3__o_6; }
	inline void set_U3CU3E3__o_6(RuntimeObject * value)
	{
		___U3CU3E3__o_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__o_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_7() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3E7__wrap1_7)); }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* get_U3CU3E7__wrap1_7() const { return ___U3CU3E7__wrap1_7; }
	inline PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A** get_address_of_U3CU3E7__wrap1_7() { return &___U3CU3E7__wrap1_7; }
	inline void set_U3CU3E7__wrap1_7(PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* value)
	{
		___U3CU3E7__wrap1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_8() { return static_cast<int32_t>(offsetof(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E, ___U3CU3E7__wrap2_8)); }
	inline int32_t get_U3CU3E7__wrap2_8() const { return ___U3CU3E7__wrap2_8; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_8() { return &___U3CU3E7__wrap2_8; }
	inline void set_U3CU3E7__wrap2_8(int32_t value)
	{
		___U3CU3E7__wrap2_8 = value;
	}
};


// Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
struct RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 
{
public:
	// System.Boolean Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::HasHit
	bool ___HasHit_0;
	// System.Boolean Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::HitTaggedObject
	bool ___HitTaggedObject_1;
	// System.Int32 Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::HitTagIndex
	int32_t ___HitTagIndex_2;
	// System.Single Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::HitFraction
	float ___HitFraction_3;
	// UnityEngine.GameObject Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::HitGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HitGameObject_4;
	// UnityEngine.Vector3 Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::StartPositionWorld
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPositionWorld_5;
	// UnityEngine.Vector3 Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::EndPositionWorld
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___EndPositionWorld_6;
	// System.Single Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::ScaledCastRadius
	float ___ScaledCastRadius_7;

public:
	inline static int32_t get_offset_of_HasHit_0() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___HasHit_0)); }
	inline bool get_HasHit_0() const { return ___HasHit_0; }
	inline bool* get_address_of_HasHit_0() { return &___HasHit_0; }
	inline void set_HasHit_0(bool value)
	{
		___HasHit_0 = value;
	}

	inline static int32_t get_offset_of_HitTaggedObject_1() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___HitTaggedObject_1)); }
	inline bool get_HitTaggedObject_1() const { return ___HitTaggedObject_1; }
	inline bool* get_address_of_HitTaggedObject_1() { return &___HitTaggedObject_1; }
	inline void set_HitTaggedObject_1(bool value)
	{
		___HitTaggedObject_1 = value;
	}

	inline static int32_t get_offset_of_HitTagIndex_2() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___HitTagIndex_2)); }
	inline int32_t get_HitTagIndex_2() const { return ___HitTagIndex_2; }
	inline int32_t* get_address_of_HitTagIndex_2() { return &___HitTagIndex_2; }
	inline void set_HitTagIndex_2(int32_t value)
	{
		___HitTagIndex_2 = value;
	}

	inline static int32_t get_offset_of_HitFraction_3() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___HitFraction_3)); }
	inline float get_HitFraction_3() const { return ___HitFraction_3; }
	inline float* get_address_of_HitFraction_3() { return &___HitFraction_3; }
	inline void set_HitFraction_3(float value)
	{
		___HitFraction_3 = value;
	}

	inline static int32_t get_offset_of_HitGameObject_4() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___HitGameObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HitGameObject_4() const { return ___HitGameObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HitGameObject_4() { return &___HitGameObject_4; }
	inline void set_HitGameObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HitGameObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HitGameObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_StartPositionWorld_5() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___StartPositionWorld_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_StartPositionWorld_5() const { return ___StartPositionWorld_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_StartPositionWorld_5() { return &___StartPositionWorld_5; }
	inline void set_StartPositionWorld_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___StartPositionWorld_5 = value;
	}

	inline static int32_t get_offset_of_EndPositionWorld_6() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___EndPositionWorld_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_EndPositionWorld_6() const { return ___EndPositionWorld_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_EndPositionWorld_6() { return &___EndPositionWorld_6; }
	inline void set_EndPositionWorld_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___EndPositionWorld_6 = value;
	}

	inline static int32_t get_offset_of_ScaledCastRadius_7() { return static_cast<int32_t>(offsetof(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1, ___ScaledCastRadius_7)); }
	inline float get_ScaledCastRadius_7() const { return ___ScaledCastRadius_7; }
	inline float* get_address_of_ScaledCastRadius_7() { return &___ScaledCastRadius_7; }
	inline void set_ScaledCastRadius_7(float value)
	{
		___ScaledCastRadius_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
struct RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_pinvoke
{
	int32_t ___HasHit_0;
	int32_t ___HitTaggedObject_1;
	int32_t ___HitTagIndex_2;
	float ___HitFraction_3;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HitGameObject_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPositionWorld_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___EndPositionWorld_6;
	float ___ScaledCastRadius_7;
};
// Native definition for COM marshalling of Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
struct RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_com
{
	int32_t ___HasHit_0;
	int32_t ___HitTaggedObject_1;
	int32_t ___HitTagIndex_2;
	float ___HitFraction_3;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HitGameObject_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPositionWorld_5;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___EndPositionWorld_6;
	float ___ScaledCastRadius_7;
};

// Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
struct CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B 
{
public:
	// System.Guid Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage::ChannelId
	Guid_t  ___ChannelId_0;
	// System.Byte[] Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage::Message
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Message_1;

public:
	inline static int32_t get_offset_of_ChannelId_0() { return static_cast<int32_t>(offsetof(CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B, ___ChannelId_0)); }
	inline Guid_t  get_ChannelId_0() const { return ___ChannelId_0; }
	inline Guid_t * get_address_of_ChannelId_0() { return &___ChannelId_0; }
	inline void set_ChannelId_0(Guid_t  value)
	{
		___ChannelId_0 = value;
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B, ___Message_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Message_1() const { return ___Message_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
struct CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_pinvoke
{
	Guid_t  ___ChannelId_0;
	Il2CppSafeArray/*NONE*/* ___Message_1;
};
// Native definition for COM marshalling of Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
struct CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_com
{
	Guid_t  ___ChannelId_0;
	Il2CppSafeArray/*NONE*/* ___Message_1;
};

// Unity.MLAgents.Inference.TensorProxy/TensorType
struct TensorType_t33E9D474A77C34B8B5C65795A7E76128DB5EB6E0 
{
public:
	// System.Int32 Unity.MLAgents.Inference.TensorProxy/TensorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TensorType_t33E9D474A77C34B8B5C65795A7E76128DB5EB6E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck/CheckTypeEnum
struct CheckTypeEnum_t6196C8217370DA45BBE0EA218E73D0D04255E513 
{
public:
	// System.Int32 Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck/CheckTypeEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CheckTypeEnum_t6196C8217370DA45BBE0EA218E73D0D04255E513, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.Policies.BrainParameters
struct BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88  : public RuntimeObject
{
public:
	// System.Int32 Unity.MLAgents.Policies.BrainParameters::VectorObservationSize
	int32_t ___VectorObservationSize_0;
	// System.Int32 Unity.MLAgents.Policies.BrainParameters::NumStackedVectorObservations
	int32_t ___NumStackedVectorObservations_1;
	// Unity.MLAgents.Actuators.ActionSpec Unity.MLAgents.Policies.BrainParameters::m_ActionSpec
	ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0  ___m_ActionSpec_2;
	// System.Int32[] Unity.MLAgents.Policies.BrainParameters::VectorActionSize
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___VectorActionSize_3;
	// System.String[] Unity.MLAgents.Policies.BrainParameters::VectorActionDescriptions
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___VectorActionDescriptions_4;
	// Unity.MLAgents.Policies.SpaceType Unity.MLAgents.Policies.BrainParameters::VectorActionSpaceType
	int32_t ___VectorActionSpaceType_5;
	// System.Boolean Unity.MLAgents.Policies.BrainParameters::hasUpgradedBrainParametersWithActionSpec
	bool ___hasUpgradedBrainParametersWithActionSpec_6;

public:
	inline static int32_t get_offset_of_VectorObservationSize_0() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___VectorObservationSize_0)); }
	inline int32_t get_VectorObservationSize_0() const { return ___VectorObservationSize_0; }
	inline int32_t* get_address_of_VectorObservationSize_0() { return &___VectorObservationSize_0; }
	inline void set_VectorObservationSize_0(int32_t value)
	{
		___VectorObservationSize_0 = value;
	}

	inline static int32_t get_offset_of_NumStackedVectorObservations_1() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___NumStackedVectorObservations_1)); }
	inline int32_t get_NumStackedVectorObservations_1() const { return ___NumStackedVectorObservations_1; }
	inline int32_t* get_address_of_NumStackedVectorObservations_1() { return &___NumStackedVectorObservations_1; }
	inline void set_NumStackedVectorObservations_1(int32_t value)
	{
		___NumStackedVectorObservations_1 = value;
	}

	inline static int32_t get_offset_of_m_ActionSpec_2() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___m_ActionSpec_2)); }
	inline ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0  get_m_ActionSpec_2() const { return ___m_ActionSpec_2; }
	inline ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0 * get_address_of_m_ActionSpec_2() { return &___m_ActionSpec_2; }
	inline void set_m_ActionSpec_2(ActionSpec_t6781E258FDEB81293931DC3750BF1A6B6A577CB0  value)
	{
		___m_ActionSpec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionSpec_2))->___BranchSizes_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_VectorActionSize_3() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___VectorActionSize_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_VectorActionSize_3() const { return ___VectorActionSize_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_VectorActionSize_3() { return &___VectorActionSize_3; }
	inline void set_VectorActionSize_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___VectorActionSize_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VectorActionSize_3), (void*)value);
	}

	inline static int32_t get_offset_of_VectorActionDescriptions_4() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___VectorActionDescriptions_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_VectorActionDescriptions_4() const { return ___VectorActionDescriptions_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_VectorActionDescriptions_4() { return &___VectorActionDescriptions_4; }
	inline void set_VectorActionDescriptions_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___VectorActionDescriptions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VectorActionDescriptions_4), (void*)value);
	}

	inline static int32_t get_offset_of_VectorActionSpaceType_5() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___VectorActionSpaceType_5)); }
	inline int32_t get_VectorActionSpaceType_5() const { return ___VectorActionSpaceType_5; }
	inline int32_t* get_address_of_VectorActionSpaceType_5() { return &___VectorActionSpaceType_5; }
	inline void set_VectorActionSpaceType_5(int32_t value)
	{
		___VectorActionSpaceType_5 = value;
	}

	inline static int32_t get_offset_of_hasUpgradedBrainParametersWithActionSpec_6() { return static_cast<int32_t>(offsetof(BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88, ___hasUpgradedBrainParametersWithActionSpec_6)); }
	inline bool get_hasUpgradedBrainParametersWithActionSpec_6() const { return ___hasUpgradedBrainParametersWithActionSpec_6; }
	inline bool* get_address_of_hasUpgradedBrainParametersWithActionSpec_6() { return &___hasUpgradedBrainParametersWithActionSpec_6; }
	inline void set_hasUpgradedBrainParametersWithActionSpec_6(bool value)
	{
		___hasUpgradedBrainParametersWithActionSpec_6 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Unity.MLAgents.Sensors.Reflection.ObservableAttribute
struct ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Unity.MLAgents.Sensors.Reflection.ObservableAttribute::m_Name
	String_t* ___m_Name_0;
	// System.Int32 Unity.MLAgents.Sensors.Reflection.ObservableAttribute::m_NumStackedObservations
	int32_t ___m_NumStackedObservations_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumStackedObservations_1() { return static_cast<int32_t>(offsetof(ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914, ___m_NumStackedObservations_1)); }
	inline int32_t get_m_NumStackedObservations_1() const { return ___m_NumStackedObservations_1; }
	inline int32_t* get_address_of_m_NumStackedObservations_1() { return &___m_NumStackedObservations_1; }
	inline void set_m_NumStackedObservations_1(int32_t value)
	{
		___m_NumStackedObservations_1 = value;
	}
};

struct ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.ValueTuple`2<System.Int32,System.Type>> Unity.MLAgents.Sensors.Reflection.ObservableAttribute::s_TypeToSensorInfo
	Dictionary_2_tD4F075281A4C56041DA7B5FE9A6772A8833B684E * ___s_TypeToSensorInfo_3;

public:
	inline static int32_t get_offset_of_s_TypeToSensorInfo_3() { return static_cast<int32_t>(offsetof(ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_StaticFields, ___s_TypeToSensorInfo_3)); }
	inline Dictionary_2_tD4F075281A4C56041DA7B5FE9A6772A8833B684E * get_s_TypeToSensorInfo_3() const { return ___s_TypeToSensorInfo_3; }
	inline Dictionary_2_tD4F075281A4C56041DA7B5FE9A6772A8833B684E ** get_address_of_s_TypeToSensorInfo_3() { return &___s_TypeToSensorInfo_3; }
	inline void set_s_TypeToSensorInfo_3(Dictionary_2_tD4F075281A4C56041DA7B5FE9A6772A8833B684E * value)
	{
		___s_TypeToSensorInfo_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TypeToSensorInfo_3), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Unity.MLAgents.Inference.TensorProxy
struct TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71  : public RuntimeObject
{
public:
	// System.String Unity.MLAgents.Inference.TensorProxy::name
	String_t* ___name_1;
	// Unity.MLAgents.Inference.TensorProxy/TensorType Unity.MLAgents.Inference.TensorProxy::valueType
	int32_t ___valueType_2;
	// System.Int64[] Unity.MLAgents.Inference.TensorProxy::shape
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* ___shape_3;
	// Unity.Barracuda.Tensor Unity.MLAgents.Inference.TensorProxy::data
	Tensor_tE3868A2BF820890883C87B1CD963B579182561EE * ___data_4;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueType_2() { return static_cast<int32_t>(offsetof(TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71, ___valueType_2)); }
	inline int32_t get_valueType_2() const { return ___valueType_2; }
	inline int32_t* get_address_of_valueType_2() { return &___valueType_2; }
	inline void set_valueType_2(int32_t value)
	{
		___valueType_2 = value;
	}

	inline static int32_t get_offset_of_shape_3() { return static_cast<int32_t>(offsetof(TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71, ___shape_3)); }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* get_shape_3() const { return ___shape_3; }
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** get_address_of_shape_3() { return &___shape_3; }
	inline void set_shape_3(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		___shape_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape_3), (void*)value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71, ___data_4)); }
	inline Tensor_tE3868A2BF820890883C87B1CD963B579182561EE * get_data_4() const { return ___data_4; }
	inline Tensor_tE3868A2BF820890883C87B1CD963B579182561EE ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(Tensor_tE3868A2BF820890883C87B1CD963B579182561EE * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}
};

struct TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Unity.MLAgents.Inference.TensorProxy/TensorType,System.Type> Unity.MLAgents.Inference.TensorProxy::k_TypeMap
	Dictionary_2_t58F1ECCA0062AAF00F205246C5F8138813258AA7 * ___k_TypeMap_0;

public:
	inline static int32_t get_offset_of_k_TypeMap_0() { return static_cast<int32_t>(offsetof(TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71_StaticFields, ___k_TypeMap_0)); }
	inline Dictionary_2_t58F1ECCA0062AAF00F205246C5F8138813258AA7 * get_k_TypeMap_0() const { return ___k_TypeMap_0; }
	inline Dictionary_2_t58F1ECCA0062AAF00F205246C5F8138813258AA7 ** get_address_of_k_TypeMap_0() { return &___k_TypeMap_0; }
	inline void set_k_TypeMap_0(Dictionary_2_t58F1ECCA0062AAF00F205246C5F8138813258AA7 * value)
	{
		___k_TypeMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_TypeMap_0), (void*)value);
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck
struct FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668  : public RuntimeObject
{
public:
	// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck/CheckTypeEnum Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::CheckType
	int32_t ___CheckType_0;
	// System.String Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::Message
	String_t* ___Message_1;

public:
	inline static int32_t get_offset_of_CheckType_0() { return static_cast<int32_t>(offsetof(FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668, ___CheckType_0)); }
	inline int32_t get_CheckType_0() const { return ___CheckType_0; }
	inline int32_t* get_address_of_CheckType_0() { return &___CheckType_0; }
	inline void set_CheckType_0(int32_t value)
	{
		___CheckType_0 = value;
	}

	inline static int32_t get_offset_of_Message_1() { return static_cast<int32_t>(offsetof(FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668, ___Message_1)); }
	inline String_t* get_Message_1() const { return ___Message_1; }
	inline String_t** get_address_of_Message_1() { return &___Message_1; }
	inline void set_Message_1(String_t* value)
	{
		___Message_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_1), (void*)value);
	}
};


// System.Func`1<System.Single>
struct Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated
struct PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.MLAgents.Sensors.ISensor[]
struct ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Hash128::Append<System.Single>(!!0[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63_gshared (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method);
// !0 System.Func`1<System.Single>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36_gshared (Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * __this, const RuntimeMethod* method);

// System.Void Unity.MLAgents.Actuators.ActionBuffers/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m61246E91F7A206B82AEBE713ABFD326323877B1A (U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Actuators.ActuatorManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82F5B9C146D1A2A69D23408EE2375D22D29769AF (U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * __this, const RuntimeMethod* method);
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD (String_t* ___strA0, String_t* ___strB1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F7259F23A641BD0CFAA389574B3F4922CAFCC75 (U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m354203D46CBE11F61FAD6FF03D967FCAF3D0A81E (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader::CheckVisualObsShape(Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * BarracudaModelParamLoader_CheckVisualObsShape_m5E23C2091F901010B66E2BDB7A9767C79EBE0311 (TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensorProxy0, RuntimeObject* ___sensor1, const RuntimeMethod* method);
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader::CheckRankTwoObsShape(Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * BarracudaModelParamLoader_CheckRankTwoObsShape_m71F2F9DD094B139F18C54134B199E5630192689D (TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensorProxy0, RuntimeObject* ___sensor1, const RuntimeMethod* method);
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader::CheckRankOneObsShape(Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * BarracudaModelParamLoader_CheckRankOneObsShape_m5A67307191461A9A3061EBA8E2CD8A24EFD4BA43 (TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensorProxy0, RuntimeObject* ___sensor1, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedCheck__ctor_m5FF2263120944B2859BFF2BD2F701657380D3125 (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Policies.BehaviorParameters/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m21B81556503C3AA896DA5A7EE17B95A534E683C6 (U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Sensors.CompressionSpec/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDC58A37E6A064A68563C79497A54DF084E7567A8 (U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5C34B06AF95A2D71F79CF22BB6FCE314E8FFEDA (U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Single> Unity.MLAgents.Policies.HeuristicPolicy/NullList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullList_GetEnumerator_m3DCC2AFAF0BBF5FD0F754CFE5E2A9223DC7A4663 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Hash128::Append<System.Single>(!!0[],System.Int32,System.Int32)
inline void Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63 (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___start1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, int32_t, int32_t, const RuntimeMethod*))Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63_gshared)(__this, ___data0, ___start1, ___count2, method);
}
// System.Void Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::Append(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLAgentsHash128_Append_m4953FA88F8EE42FB075D95B256EFB5FEE6AD9C8A (MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, int32_t ___count1, const RuntimeMethod* method);
// UnityEngine.Hash128 UnityEngine.Hash128::Compute(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  Hash128_Compute_m6A62DCDE72D17F89013487150F0D7B469AEDDC6A (String_t* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.HashUtilities::AppendHash(UnityEngine.Hash128&,UnityEngine.Hash128&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashUtilities_AppendHash_m44257AB4D5157D258954140DEE3F9A305CE9A051 (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * ___inHash0, Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * ___outHash1, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLAgentsHash128_Append_m8C02B25DAAE585265D069BBFFECA56C99F00AD0C (MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Hash128::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Hash128_ToString_mE6E0973B9B42A6AB9BEB8ACC679291CDAD2D03AC (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * __this, const RuntimeMethod* method);
// System.String Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MLAgentsHash128_ToString_mFE201F4129C517E31625AAA59B9F3F30D2238816 (MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25 (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mEECECC35EA338EDBE1DF833017E22570627A3F3E (ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299 * __this, FieldInfo_t * ___item10, ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299 *, FieldInfo_t *, ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 *, const RuntimeMethod*))ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservableFieldsU3Ed__5__ctor_mA3E5AF8C353D9EF61FCB7E6E46109A24EB14441A (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.Collections.Generic.IEnumerable<(System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObservableFieldsU3Ed__5_System_Collections_Generic_IEnumerableU3CU28System_Reflection_FieldInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_GetEnumerator_mF86B1474FE00B38C5DFC705282BD320933CAA841 (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>::.ctor(!0,!1)
inline void ValueTuple_2__ctor_mD5F7F88311AFF6E2331AC31EB3BDCA5B94675B1B (ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4 * __this, PropertyInfo_t * ___item10, ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4 *, PropertyInfo_t *, ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 *, const RuntimeMethod*))ValueTuple_2__ctor_m7200D87E35146B328553F6054EF895C48674919C_gshared)(__this, ___item10, ___item21, method);
}
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservablePropertiesU3Ed__6__ctor_m9934A587530DB5392DB70A5E4E2FAC2194241AC0 (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.Collections.Generic.IEnumerable<(System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObservablePropertiesU3Ed__6_System_Collections_Generic_IEnumerableU3CU28System_Reflection_PropertyInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_GetEnumerator_mE956541B8A42866B34599E1B4FA53B272E5F31ED (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Single Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::get_ScaledRayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RayOutput_get_ScaledRayLength_m7914360D41DCDD670ECF88C9CD473A9861D2EB25 (RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::ToFloatArray(System.Int32,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayOutput_ToFloatArray_mFBF1C5D2B629F1E34C2D0B1D7486EB892B5452A7 (RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 * __this, int32_t ___numDetectableTags0, int32_t ___rayIndex1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buffer2, const RuntimeMethod* method);
// System.Double Unity.MLAgents.Inference.Utils.RandomNormal::NextDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RandomNormal_NextDouble_m9E20A3307BF09B0B5B60E8C03D17C49AF905EEEE (RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B * __this, const RuntimeMethod* method);
// System.Int32 Unity.MLAgents.Inference.Utils.Multinomial::Sample(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Multinomial_Sample_mEAAF0B81679006001D559081E6C166F5488EA029 (Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cmf0, const RuntimeMethod* method);
// !0 System.Func`1<System.Single>::Invoke()
inline float Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36 (Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 *, const RuntimeMethod*))Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36_gshared)(__this, method);
}
// System.Void Unity.MLAgents.Sensors.SensorUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0105B24059FCFE6ECAF192DB0CE42EC14460E63B (U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Actuators.ActionBuffers/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFF6505AF1B90EAC060DBE16B7D903492FAF19A59 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * L_0 = (U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 *)il2cpp_codegen_object_new(U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m61246E91F7A206B82AEBE713ABFD326323877B1A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Actuators.ActionBuffers/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m61246E91F7A206B82AEBE713ABFD326323877B1A (U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.MLAgents.Actuators.ActionBuffers/<>c::<FromDiscreteActions>b__7_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFromDiscreteActionsU3Eb__7_0_m6CE3F0391966FDD8CDDC8B4CA9EBDB7FB4A87D58 (U3CU3Ec_t02BCAA20D0D6271A9B2FF3C16E2632C8A87FFF31 * __this, float ___x0, const RuntimeMethod* method)
{
	{
		// x => (int)x)));
		float L_0 = ___x0;
		return ((int32_t)((int32_t)L_0));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Actuators.ActuatorManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9E422C8B582D3241AEABF263DF5EB14410773181 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * L_0 = (U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 *)il2cpp_codegen_object_new(U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82F5B9C146D1A2A69D23408EE2375D22D29769AF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Actuators.ActuatorManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82F5B9C146D1A2A69D23408EE2375D22D29769AF (U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.MLAgents.Actuators.ActuatorManager/<>c::<SortActuators>b__35_0(Unity.MLAgents.Actuators.IActuator,Unity.MLAgents.Actuators.IActuator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortActuatorsU3Eb__35_0_m362440C8050F1D84617F8F193C96634324B4007B (U3CU3Ec_tAE579B2322D1722C67A0F5BA3C0D7721218318E0 * __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActuator_t40E8C381F15B2A47B1760E93CF0C1A0005D6B602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// actuators.Sort((x, y) => string.Compare(x.Name, y.Name, StringComparison.InvariantCulture));
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Unity.MLAgents.Actuators.IActuator::get_Name() */, IActuator_t40E8C381F15B2A47B1760E93CF0C1A0005D6B602_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___y1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Unity.MLAgents.Actuators.IActuator::get_Name() */, IActuator_t40E8C381F15B2A47B1760E93CF0C1A0005D6B602_il2cpp_TypeInfo_var, L_2);
		int32_t L_4;
		L_4 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_1, L_3, 2, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Analytics.AnalyticsUtils/DisableAnalyticsSending::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableAnalyticsSending__ctor_mD2F79B59B0E9D3B63B5CBED96F18BD7C2FA09A0F (DisableAnalyticsSending_t0310CA6D65D0757D7C93FF9B81FE15D1C6E615FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DisableAnalyticsSending()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_PreviousSendEditorAnalytics = s_SendEditorAnalytics;
		IL2CPP_RUNTIME_CLASS_INIT(AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var);
		bool L_0 = ((AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var))->get_s_SendEditorAnalytics_0();
		__this->set_m_PreviousSendEditorAnalytics_0(L_0);
		// s_SendEditorAnalytics = false;
		((AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var))->set_s_SendEditorAnalytics_0((bool)0);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.Analytics.AnalyticsUtils/DisableAnalyticsSending::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableAnalyticsSending_Dispose_m0C3868BD4FD871CD724C94A7DD9D7A9C034D318D (DisableAnalyticsSending_t0310CA6D65D0757D7C93FF9B81FE15D1C6E615FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SendEditorAnalytics = m_PreviousSendEditorAnalytics;
		bool L_0 = __this->get_m_PreviousSendEditorAnalytics_0();
		IL2CPP_RUNTIME_CLASS_INIT(AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var);
		((AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsUtils_tFE2C4A7986819B36D252764D14AD0650453FA411_il2cpp_TypeInfo_var))->set_s_SendEditorAnalytics_0(L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB5AB548FA88F5F772FBD113B8BE429F0057C5975 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * L_0 = (U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 *)il2cpp_codegen_object_new(U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1F7259F23A641BD0CFAA389574B3F4922CAFCC75(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F7259F23A641BD0CFAA389574B3F4922CAFCC75 (U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::<GetInputTensors>b__2_1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CGetInputTensorsU3Eb__2_1_mD33E1FB3BD858179BF6847BD746B2169C41C8037 (U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// shape = input.shape.Select(i => (long)i).ToArray()
		int32_t L_0 = ___i0;
		return ((int64_t)((int64_t)L_0));
	}
}
// System.Int32 Unity.MLAgents.Inference.BarracudaModelExtensions/<>c::<GetInputTensors>b__2_0(Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Inference.TensorProxy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetInputTensorsU3Eb__2_0_m8969D3712DC795C153841E21672DBFA68DC8A301 (U3CU3Ec_tB0409E03640F6DA8E6E4E47469098520AD94D5C5 * __this, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___el10, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___el21, const RuntimeMethod* method)
{
	{
		// tensors.Sort((el1, el2) => string.Compare(el1.name, el2.name, StringComparison.InvariantCulture));
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_0 = ___el10;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_1();
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_2 = ___el21;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_1();
		int32_t L_4;
		L_4 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_1, L_3, 2, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5D973B90DBCA997C29F8339058EE20614B7CE1E8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * L_0 = (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF *)il2cpp_codegen_object_new(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m354203D46CBE11F61FAD6FF03D967FCAF3D0A81E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m354203D46CBE11F61FAD6FF03D967FCAF3D0A81E (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorPresenceLegacy>b__4_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCheckInputTensorPresenceLegacyU3Eb__4_0_mBACCE766AA2DA2F9D58F8B7BE878F64DD1D9F3C9 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99FE398A32E0CBF4AD19E96882973AB3866C6D5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!tensorsNames.Any(x => x.EndsWith("_h")) ||
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_0, _stringLiteral99FE398A32E0CBF4AD19E96882973AB3866C6D5F, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorPresenceLegacy>b__4_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCheckInputTensorPresenceLegacyU3Eb__4_1_mB9F6B228CBE3E242717A81A5FDEB4A49CA71FF2A (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF11DA8FF02989A263DBD778BAA709DAAF6BCE10);
		s_Il2CppMethodInitialized = true;
	}
	{
		// !tensorsNames.Any(x => x.EndsWith("_c")))
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_0, _stringLiteralDF11DA8FF02989A263DBD778BAA709DAAF6BCE10, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorPresence>b__5_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCheckInputTensorPresenceU3Eb__5_0_mE6DED3B7FE8F7B297726451485184D4F2BD19D8A (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D20699D2E876A250B5CB78DE31D977F6CAF925D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!tensorsNames.Any(x => x == TensorNames.RecurrentInPlaceholder))
		String_t* L_0 = ___x0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral5D20699D2E876A250B5CB78DE31D977F6CAF925D, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckOutputTensorPresence>b__6_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCheckOutputTensorPresenceU3Eb__6_0_m57B5F750FFEF6B8018EFDC8FB4523A2505968329 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15A599B69271A694A96A187FB5327D477E4D02BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!allOutputs.Any(x => x == TensorNames.RecurrentOutput))
		String_t* L_0 = ___x0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteral15A599B69271A694A96A187FB5327D477E4D02BC, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShapeLegacy>b__10_0(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeLegacyU3Eb__10_0_mE7DCAB6B5E432CCF80DBB3E4337E05B44EFFC303 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.RandomNormalEpsilonPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShapeLegacy>b__10_1(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeLegacyU3Eb__10_1_m780A39FFBD2427F9E9221564D97891201430375D (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.ActionMaskPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShapeLegacy>b__10_2(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeLegacyU3Eb__10_2_m764F0C1AA0B933203C8EB3D9A0139FACE6158FC7 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.SequenceLengthPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShapeLegacy>b__10_3(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeLegacyU3Eb__10_3_mA9F6DD694EB69E6A76D4C858E83927BC69803A95 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.RecurrentInPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShapeLegacy>b__10_4(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeLegacyU3Eb__10_4_m422A93D59DC6B8E4E121BBEC1331339DB29ECA19 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// tensorTester[mem.input] = ((bp, tensor, scs, i) => null);
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShape>b__12_0(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeU3Eb__12_0_mF49C8F26F07272FFC029D87B58A219C3A34F8601 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.RandomNormalEpsilonPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShape>b__12_1(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeU3Eb__12_1_m59F5050B866323BFB70618E7E119B145191C1C51 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.ActionMaskPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShape>b__12_2(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeU3Eb__12_2_m279C032B4A1EED34C9F0128A47C04400232751A4 (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.SequenceLengthPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShape>b__12_3(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeU3Eb__12_3_m76DCBF67AD2B4406D719BA925080B1A64FA9186F (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// {TensorNames.RecurrentInPlaceholder, ((bp, tensor, scs, i) => null)},
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c::<CheckInputTensorShape>b__12_4(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec_U3CCheckInputTensorShapeU3Eb__12_4_mC44CC78F5846D99775379EB73362D61894BA17BD (U3CU3Ec_t29DC22282629E30A354C030BB33EE8BE3ADD34AF * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// tensorTester[mem.input] = ((bp, tensor, scs, i) => null);
		return (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m4F347E7975C99829281C943032C7205FE2AEC054 (U3CU3Ec__DisplayClass10_0_t52AC2CA8C7207D99D8FC0B16E738C56A782D05B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass10_0::<CheckInputTensorShapeLegacy>b__5(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec__DisplayClass10_0_U3CCheckInputTensorShapeLegacyU3Eb__5_m48DD60CDCEB1B5D748D24C91833FB5FB19FB5048 (U3CU3Ec__DisplayClass10_0_t52AC2CA8C7207D99D8FC0B16E738C56A782D05B9 * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// (bp, tensor, scs, i) => CheckVisualObsShape(tensor, sens);
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_0 = ___tensor1;
		RuntimeObject* L_1 = __this->get_sens_0();
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2;
		L_2 = BarracudaModelParamLoader_CheckVisualObsShape_m5E23C2091F901010B66E2BDB7A9767C79EBE0311(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass10_0::<CheckInputTensorShapeLegacy>b__6(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec__DisplayClass10_0_U3CCheckInputTensorShapeLegacyU3Eb__6_m1430939B2F3F7581D1DA4DDFE683E57BFAD9234E (U3CU3Ec__DisplayClass10_0_t52AC2CA8C7207D99D8FC0B16E738C56A782D05B9 * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// (bp, tensor, scs, i) => CheckRankTwoObsShape(tensor, sens);
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_0 = ___tensor1;
		RuntimeObject* L_1 = __this->get_sens_0();
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2;
		L_2 = BarracudaModelParamLoader_CheckRankTwoObsShape_m71F2F9DD094B139F18C54134B199E5630192689D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m28D90F3378AFF3754B338FA2D7E5BBD806B50C09 (U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0::<CheckInputTensorShape>b__5(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec__DisplayClass12_0_U3CCheckInputTensorShapeU3Eb__5_mC53F5BF628CFF2EDD8EB7F2C8C18738165DF30A2 (U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// (bp, tensor, scs, i) => CheckVisualObsShape(tensor, sens);
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_0 = ___tensor1;
		RuntimeObject* L_1 = __this->get_sens_0();
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2;
		L_2 = BarracudaModelParamLoader_CheckVisualObsShape_m5E23C2091F901010B66E2BDB7A9767C79EBE0311(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0::<CheckInputTensorShape>b__6(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec__DisplayClass12_0_U3CCheckInputTensorShapeU3Eb__6_mB57163B162B57A0D7DFC8B4907306C6F72813D35 (U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// (bp, tensor, scs, i) => CheckRankTwoObsShape(tensor, sens);
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_0 = ___tensor1;
		RuntimeObject* L_1 = __this->get_sens_0();
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2;
		L_2 = BarracudaModelParamLoader_CheckRankTwoObsShape_m71F2F9DD094B139F18C54134B199E5630192689D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/<>c__DisplayClass12_0::<CheckInputTensorShape>b__7(Unity.MLAgents.Policies.BrainParameters,Unity.MLAgents.Inference.TensorProxy,Unity.MLAgents.Sensors.ISensor[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * U3CU3Ec__DisplayClass12_0_U3CCheckInputTensorShapeU3Eb__7_m04160EFC9654222BBED8F2BB4754AE2C373E77A5 (U3CU3Ec__DisplayClass12_0_t3CE26399D77AA490D93627DE4C567F11A481385F * __this, BrainParameters_t6FF3679061BD96EB86F4A7CEA62138CDD1F3FD88 * ___bp0, TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * ___tensor1, ISensorU5BU5D_t5B8797125DAF2971ADB537A14B2D5D244A30150A* ___scs2, int32_t ___i3, const RuntimeMethod* method)
{
	{
		// (bp, tensor, scs, i) => CheckRankOneObsShape(tensor, sens);
		TensorProxy_t4CA88C7F55BF5FABA6BC3F095EF5A10FCD849D71 * L_0 = ___tensor1;
		RuntimeObject* L_1 = __this->get_sens_0();
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2;
		L_2 = BarracudaModelParamLoader_CheckRankOneObsShape_m5A67307191461A9A3061EBA8E2CD8A24EFD4BA43(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::Info(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * FailedCheck_Info_m002189D197A12E915A8AC7ED235ED0D13E8E0321 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FailedCheck { CheckType = CheckTypeEnum.Info, Message = message };
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_0 = (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)il2cpp_codegen_object_new(FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var);
		FailedCheck__ctor_m5FF2263120944B2859BFF2BD2F701657380D3125(L_0, /*hidden argument*/NULL);
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_CheckType_0(0);
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_Message_1(L_3);
		return L_2;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * FailedCheck_Warning_mFD2A63CA24DF74C1472C518B6E42101949476309 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FailedCheck { CheckType = CheckTypeEnum.Warning, Message = message };
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_0 = (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)il2cpp_codegen_object_new(FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var);
		FailedCheck__ctor_m5FF2263120944B2859BFF2BD2F701657380D3125(L_0, /*hidden argument*/NULL);
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_CheckType_0(1);
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_Message_1(L_3);
		return L_2;
	}
}
// Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * FailedCheck_Error_m5D1ED4DBD610D0F65D37BBD3E84E1A61ED0D7D20 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new FailedCheck { CheckType = CheckTypeEnum.Error, Message = message };
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_0 = (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 *)il2cpp_codegen_object_new(FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668_il2cpp_TypeInfo_var);
		FailedCheck__ctor_m5FF2263120944B2859BFF2BD2F701657380D3125(L_0, /*hidden argument*/NULL);
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_CheckType_0(2);
		FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->set_Message_1(L_3);
		return L_2;
	}
}
// System.Void Unity.MLAgents.Inference.BarracudaModelParamLoader/FailedCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailedCheck__ctor_m5FF2263120944B2859BFF2BD2F701657380D3125 (FailedCheck_t50D800BC3AFC07650F1E41D2C23154D90357C668 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Policies.BehaviorParameters/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0FF315D7B53738BF35D4020C10F6197C9AAEA055 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * L_0 = (U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 *)il2cpp_codegen_object_new(U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m21B81556503C3AA896DA5A7EE17B95A534E683C6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Policies.BehaviorParameters/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m21B81556503C3AA896DA5A7EE17B95A534E683C6 (U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.MLAgents.Policies.BehaviorParameters/<>c::<Awake>b__39_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__39_0_m0FCAEE4FFE05A6E27F58ADFC85F65720A5969D9D (U3CU3Ec_t1F96590B1CFC700115C4A71F0EBBCB634D5A4AD3 * __this, bool ___mode0, const RuntimeMethod* method)
{
	{
		// OnPolicyUpdated += mode => { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B (PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * __this, bool ___isInHeuristicMode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___isInHeuristicMode0));

}
// System.Void Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolicyUpdated__ctor_m82573D7CFB13263EA144A127A372740D2C480A5C (PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolicyUpdated_Invoke_mE019DBC1AC964ED6BC0FBD72296F3198F4CD2A69 (PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * __this, bool ___isInHeuristicMode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___isInHeuristicMode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isInHeuristicMode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isInHeuristicMode0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___isInHeuristicMode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___isInHeuristicMode0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___isInHeuristicMode0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___isInHeuristicMode0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PolicyUpdated_BeginInvoke_m2AD3B872FF1A57001059288B6BF50E917E721D42 (PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * __this, bool ___isInHeuristicMode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___isInHeuristicMode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Unity.MLAgents.Policies.BehaviorParameters/PolicyUpdated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PolicyUpdated_EndInvoke_mCFB50F188665D8D508B0BD8537914A295DDC2014 (PolicyUpdated_t283B7FE5F21890914FA3082376E419E7C6E86E1B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Sensors.CompressionSpec/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7B8C4DAEF68B442E8E4C0E3FE99A2A0B8C5E0DE6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * L_0 = (U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC *)il2cpp_codegen_object_new(U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDC58A37E6A064A68563C79497A54DF084E7567A8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Sensors.CompressionSpec/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDC58A37E6A064A68563C79497A54DF084E7567A8 (U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.MLAgents.Sensors.CompressionSpec/<>c::<IsTrivialMapping>b__8_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsTrivialMappingU3Eb__8_0_m8C5A5F85E87A040BB4F8FC9C0AF644827C305242 (U3CU3Ec_t8F830CD2EDA927065B1FED83DCCB98626B25EEBC * __this, int32_t ___m0, const RuntimeMethod* method)
{
	{
		// if (mapping.Length == 3 && mapping.All(m => m == 0))
		int32_t L_0 = ___m0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD70845EDDB64C97A818DBC5D5A03B64ACC811EC6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * L_0 = (U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 *)il2cpp_codegen_object_new(U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB5C34B06AF95A2D71F79CF22BB6FCE314E8FFEDA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB5C34B06AF95A2D71F79CF22BB6FCE314E8FFEDA (U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c::<OnMessageReceived>b__4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3COnMessageReceivedU3Eb__4_1_m8E2B4B4FA8DE8AD65C441C36AA69FA99ECDD37A8 (U3CU3Ec_t7FFC12417A5E3FC6F383C8FCC3F833B591176090 * __this, const RuntimeMethod* method)
{
	{
		// Func<float> sampler = () => 0.0f;
		return (0.0f);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m969F83C5958C1A1E7CB728B2584647E9A3475223 (U3CU3Ec__DisplayClass4_0_t26B0808316B2AF2DDE2122989C72FD85F84C9730 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.MLAgents.SideChannels.EnvironmentParametersChannel/<>c__DisplayClass4_0::<OnMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass4_0_U3COnMessageReceivedU3Eb__0_m771AE451C55C97623AC9E7AD1D9C76813279E0CA (U3CU3Ec__DisplayClass4_0_t26B0808316B2AF2DDE2122989C72FD85F84C9730 * __this, const RuntimeMethod* method)
{
	{
		// m_Parameters[key] = () => value;
		float L_0 = __this->get_value_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerator`1<System.Single> Unity.MLAgents.Policies.HeuristicPolicy/NullList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullList_GetEnumerator_m3DCC2AFAF0BBF5FD0F754CFE5E2A9223DC7A4663 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullList_GetEnumerator_m3DCC2AFAF0BBF5FD0F754CFE5E2A9223DC7A4663_RuntimeMethod_var)));
	}
}
// System.Collections.IEnumerator Unity.MLAgents.Policies.HeuristicPolicy/NullList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullList_System_Collections_IEnumerable_GetEnumerator_m1CC1526FF0BFB4F8131E120EF172D2CC6B965300 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = NullList_GetEnumerator_m3DCC2AFAF0BBF5FD0F754CFE5E2A9223DC7A4663(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList_Add_mF4155C3AAE4307AE165668796D18A6540BF230DC (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList_Clear_m7956919118A86C520FDAF8AD97A11AC5561EB464 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean Unity.MLAgents.Policies.HeuristicPolicy/NullList::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullList_Contains_mC0F56821FBB03F01CCA6F47FBB10E747AB4E0836 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList_CopyTo_m47AA0259A8423DE34B0F82B0A23F2E78A2D7E4E2 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullList_CopyTo_m47AA0259A8423DE34B0F82B0A23F2E78A2D7E4E2_RuntimeMethod_var)));
	}
}
// System.Boolean Unity.MLAgents.Policies.HeuristicPolicy/NullList::Remove(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullList_Remove_mF81BF4BEDE1E5C065D7617974D21512849F3D2A1 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Int32 Unity.MLAgents.Policies.HeuristicPolicy/NullList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullList_get_Count_m0FD3FCCD5524FBA12A389F97EF005BFCB3F0E1EB (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get; }
		int32_t L_0 = __this->get_U3CCountU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean Unity.MLAgents.Policies.HeuristicPolicy/NullList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullList_get_IsReadOnly_m733340201168D2043BBBF34DD40924A66A82CC82 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get; }
		bool L_0 = __this->get_U3CIsReadOnlyU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Int32 Unity.MLAgents.Policies.HeuristicPolicy/NullList::IndexOf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullList_IndexOf_m7A970A9F799DACBA3B47B46629D42CCC28D1082B (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return -1;
		return (-1);
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::Insert(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList_Insert_m61274866F5CFC8F964DB5ED6E4721A623FDFD552 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, int32_t ___index0, float ___item1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList_RemoveAt_m43BB2FF40BBEDB111F1B24CECC2CC357908ACB92 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single Unity.MLAgents.Policies.HeuristicPolicy/NullList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NullList_get_Item_m860E31AB2CA32FECC52771DBBCA943DDAA56E543 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// get { return 0.0f; }
		return (0.0f);
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList_set_Item_mA396B28DD038D4B879E272B9D8AA7561C241C490 (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Void Unity.MLAgents.Policies.HeuristicPolicy/NullList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullList__ctor_mAC456AB223832EFB0B322D425D2A3CE6CD2F392C (NullList_t9E518EF4B6D2E33BE0F4917AE522D916E5B8964E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::Append(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLAgentsHash128_Append_m4953FA88F8EE42FB075D95B256EFB5FEE6AD9C8A (MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (values == null)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = ___values0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// m_Hash.Append(values, 0, count);
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * L_1 = __this->get_address_of_m_Hash_0();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___values0;
		int32_t L_3 = ___count1;
		Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63((Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)L_1, L_2, 0, L_3, /*hidden argument*/Hash128_Append_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mFA6137D0D7CBE195DB96F70490DF58F7DF190E63_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MLAgentsHash128_Append_m4953FA88F8EE42FB075D95B256EFB5FEE6AD9C8A_AdjustorThunk (RuntimeObject * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___values0, int32_t ___count1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * _thisAdjusted = reinterpret_cast<MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 *>(__this + _offset);
	MLAgentsHash128_Append_m4953FA88F8EE42FB075D95B256EFB5FEE6AD9C8A(_thisAdjusted, ___values0, ___count1, method);
}
// System.Void Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MLAgentsHash128_Append_m8C02B25DAAE585265D069BBFFECA56C99F00AD0C (MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tempHash = Hash128.Compute(value);
		String_t* L_0 = ___value0;
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  L_1;
		L_1 = Hash128_Compute_m6A62DCDE72D17F89013487150F0D7B469AEDDC6A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// HashUtilities.AppendHash(ref tempHash, ref m_Hash);
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * L_2 = __this->get_address_of_m_Hash_0();
		HashUtilities_AppendHash_m44257AB4D5157D258954140DEE3F9A305CE9A051((Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)(&V_0), (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MLAgentsHash128_Append_m8C02B25DAAE585265D069BBFFECA56C99F00AD0C_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * _thisAdjusted = reinterpret_cast<MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 *>(__this + _offset);
	MLAgentsHash128_Append_m8C02B25DAAE585265D069BBFFECA56C99F00AD0C(_thisAdjusted, ___value0, method);
}
// System.String Unity.MLAgents.Analytics.InferenceAnalytics/MLAgentsHash128::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MLAgentsHash128_ToString_mFE201F4129C517E31625AAA59B9F3F30D2238816 (MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * __this, const RuntimeMethod* method)
{
	{
		// return m_Hash.ToString();
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * L_0 = __this->get_address_of_m_Hash_0();
		String_t* L_1;
		L_1 = Hash128_ToString_mE6E0973B9B42A6AB9BEB8ACC679291CDAD2D03AC((Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* MLAgentsHash128_ToString_mFE201F4129C517E31625AAA59B9F3F30D2238816_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 * _thisAdjusted = reinterpret_cast<MLAgentsHash128_tDAC56A34CEA92FD3875FFBB6188A90CB5A0DA244 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MLAgentsHash128_ToString_mFE201F4129C517E31625AAA59B9F3F30D2238816(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservableFieldsU3Ed__5__ctor_mA3E5AF8C353D9EF61FCB7E6E46109A24EB14441A (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservableFieldsU3Ed__5_System_IDisposable_Dispose_m9F65E1C84EC92A9F61B7C4B9A09B5A65B553793D (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetObservableFieldsU3Ed__5_MoveNext_m2AF011FBCA7EE98061F2E75FD73359C03C825C07 (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mEECECC35EA338EDBE1DF833017E22570627A3F3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_2 = NULL;
	FieldInfo_t * V_3 = NULL;
	ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * V_4 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var bindingFlags = k_BindingFlags | (excludeInherited ? BindingFlags.DeclaredOnly : 0);
		bool L_3 = __this->get_excludeInherited_3();
		G_B4_0 = ((int32_t)52);
		if (L_3)
		{
			G_B5_0 = ((int32_t)52);
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 2;
		G_B6_1 = G_B5_0;
	}

IL_0025:
	{
		V_1 = ((int32_t)((int32_t)G_B6_1|(int32_t)G_B6_0));
		// var fields = o.GetType().GetFields(bindingFlags);
		RuntimeObject * L_4 = __this->get_o_5();
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_7;
		L_7 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_5, L_6);
		V_2 = L_7;
		// foreach (var field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_8 = V_2;
		__this->set_U3CU3E7__wrap1_7(L_8);
		__this->set_U3CU3E7__wrap2_8(0);
		goto IL_009e;
	}

IL_0049:
	{
		// foreach (var field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_9 = __this->get_U3CU3E7__wrap1_7();
		int32_t L_10 = __this->get_U3CU3E7__wrap2_8();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		FieldInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// var attr = (ObservableAttribute)GetCustomAttribute(field, typeof(ObservableAttribute));
		FieldInfo_t * L_13 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_16;
		L_16 = Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25(L_13, L_15, /*hidden argument*/NULL);
		V_4 = ((ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 *)CastclassClass((RuntimeObject*)L_16, ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_il2cpp_TypeInfo_var));
		// if (attr != null)
		ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// yield return (field, attr);
		FieldInfo_t * L_18 = V_3;
		ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * L_19 = V_4;
		ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ValueTuple_2__ctor_mEECECC35EA338EDBE1DF833017E22570627A3F3E((&L_20), L_18, L_19, /*hidden argument*/ValueTuple_2__ctor_mEECECC35EA338EDBE1DF833017E22570627A3F3E_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0089:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0090:
	{
		int32_t L_21 = __this->get_U3CU3E7__wrap2_8();
		__this->set_U3CU3E7__wrap2_8(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_009e:
	{
		// foreach (var field in fields)
		int32_t L_22 = __this->get_U3CU3E7__wrap2_8();
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_23 = __this->get_U3CU3E7__wrap1_7();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_7((FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*)NULL);
		// }
		return (bool)0;
	}
}
// System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.Collections.Generic.IEnumerator<(System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  U3CGetObservableFieldsU3Ed__5_System_Collections_Generic_IEnumeratorU3CU28System_Reflection_FieldInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_get_Current_mAD25CB2E3460D3C2A93FA1880782F9849BD0304E (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservableFieldsU3Ed__5_System_Collections_IEnumerator_Reset_m4F957FF22D46F3F2048B7F25FB5236263ECF14D1 (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetObservableFieldsU3Ed__5_System_Collections_IEnumerator_Reset_m4F957FF22D46F3F2048B7F25FB5236263ECF14D1_RuntimeMethod_var)));
	}
}
// System.Object Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetObservableFieldsU3Ed__5_System_Collections_IEnumerator_get_Current_m6AB3272CB768908F1C132A17B6EDEFB21BE3E61E (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_tFA9067EF9730A69A9F4EF8BF59806957C0BF2299_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.Collections.Generic.IEnumerable<(System.Reflection.FieldInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObservableFieldsU3Ed__5_System_Collections_Generic_IEnumerableU3CU28System_Reflection_FieldInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_GetEnumerator_mF86B1474FE00B38C5DFC705282BD320933CAA841 (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * L_3 = (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 *)il2cpp_codegen_object_new(U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447_il2cpp_TypeInfo_var);
		U3CGetObservableFieldsU3Ed__5__ctor_mA3E5AF8C353D9EF61FCB7E6E46109A24EB14441A(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * L_4 = V_0;
		RuntimeObject * L_5 = __this->get_U3CU3E3__o_6();
		NullCheck(L_4);
		L_4->set_o_5(L_5);
		U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__excludeInherited_4();
		NullCheck(L_6);
		L_6->set_excludeInherited_3(L_7);
		U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableFields>d__5::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObservableFieldsU3Ed__5_System_Collections_IEnumerable_GetEnumerator_mF66E88A9F15C6463799B9ED1BD161A0AB7468669 (U3CGetObservableFieldsU3Ed__5_t1EF88D636664F52942B9D0CBDB1024F57AD9E447 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetObservableFieldsU3Ed__5_System_Collections_Generic_IEnumerableU3CU28System_Reflection_FieldInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_GetEnumerator_mF86B1474FE00B38C5DFC705282BD320933CAA841(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservablePropertiesU3Ed__6__ctor_m9934A587530DB5392DB70A5E4E2FAC2194241AC0 (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservablePropertiesU3Ed__6_System_IDisposable_Dispose_mEAD0F64A0E73CA7298F5C78144A0E974BAC2E9E9 (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetObservablePropertiesU3Ed__6_MoveNext_m2FB6C08002DCBF65AF58DE605EF273E7ECC6941D (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mD5F7F88311AFF6E2331AC31EB3BDCA5B94675B1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_2 = NULL;
	PropertyInfo_t * V_3 = NULL;
	ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * V_4 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var bindingFlags = k_BindingFlags | (excludeInherited ? BindingFlags.DeclaredOnly : 0);
		bool L_3 = __this->get_excludeInherited_3();
		G_B4_0 = ((int32_t)52);
		if (L_3)
		{
			G_B5_0 = ((int32_t)52);
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 2;
		G_B6_1 = G_B5_0;
	}

IL_0025:
	{
		V_1 = ((int32_t)((int32_t)G_B6_1|(int32_t)G_B6_0));
		// var properties = o.GetType().GetProperties(bindingFlags);
		RuntimeObject * L_4 = __this->get_o_5();
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_7;
		L_7 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_5, L_6);
		V_2 = L_7;
		// foreach (var prop in properties)
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_8 = V_2;
		__this->set_U3CU3E7__wrap1_7(L_8);
		__this->set_U3CU3E7__wrap2_8(0);
		goto IL_009e;
	}

IL_0049:
	{
		// foreach (var prop in properties)
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_9 = __this->get_U3CU3E7__wrap1_7();
		int32_t L_10 = __this->get_U3CU3E7__wrap2_8();
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		// var attr = (ObservableAttribute)GetCustomAttribute(prop, typeof(ObservableAttribute));
		PropertyInfo_t * L_13 = V_3;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_16;
		L_16 = Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25(L_13, L_15, /*hidden argument*/NULL);
		V_4 = ((ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 *)CastclassClass((RuntimeObject*)L_16, ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914_il2cpp_TypeInfo_var));
		// if (attr != null)
		ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// yield return (prop, attr);
		PropertyInfo_t * L_18 = V_3;
		ObservableAttribute_tF98CCD28E8D02875C34F3CD9DFB7043C3F6B2914 * L_19 = V_4;
		ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  L_20;
		memset((&L_20), 0, sizeof(L_20));
		ValueTuple_2__ctor_mD5F7F88311AFF6E2331AC31EB3BDCA5B94675B1B((&L_20), L_18, L_19, /*hidden argument*/ValueTuple_2__ctor_mD5F7F88311AFF6E2331AC31EB3BDCA5B94675B1B_RuntimeMethod_var);
		__this->set_U3CU3E2__current_1(L_20);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0089:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0090:
	{
		int32_t L_21 = __this->get_U3CU3E7__wrap2_8();
		__this->set_U3CU3E7__wrap2_8(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_009e:
	{
		// foreach (var prop in properties)
		int32_t L_22 = __this->get_U3CU3E7__wrap2_8();
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_23 = __this->get_U3CU3E7__wrap1_7();
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_7((PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*)NULL);
		// }
		return (bool)0;
	}
}
// System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.Collections.Generic.IEnumerator<(System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute)>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  U3CGetObservablePropertiesU3Ed__6_System_Collections_Generic_IEnumeratorU3CU28System_Reflection_PropertyInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_get_Current_m83FF8A704213624C14468F5A8F7B453BFE14B95C (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetObservablePropertiesU3Ed__6_System_Collections_IEnumerator_Reset_m554B34EC3FA7464C61F7F67695CCACC222DE7CFB (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetObservablePropertiesU3Ed__6_System_Collections_IEnumerator_Reset_m554B34EC3FA7464C61F7F67695CCACC222DE7CFB_RuntimeMethod_var)));
	}
}
// System.Object Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetObservablePropertiesU3Ed__6_System_Collections_IEnumerator_get_Current_mF0B1E9D088A12E5DEA953EFE5AAA7B5C1EC9CC40 (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  L_0 = __this->get_U3CU3E2__current_1();
		ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4  L_1 = L_0;
		RuntimeObject * L_2 = Box(ValueTuple_2_tE9F57E8747AD4B83548DDD55D49E93D8C05211E4_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute>> Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.Collections.Generic.IEnumerable<(System.Reflection.PropertyInfo,Unity.MLAgents.Sensors.Reflection.ObservableAttribute)>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObservablePropertiesU3Ed__6_System_Collections_Generic_IEnumerableU3CU28System_Reflection_PropertyInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_GetEnumerator_mE956541B8A42866B34599E1B4FA53B272E5F31ED (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * L_3 = (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E *)il2cpp_codegen_object_new(U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E_il2cpp_TypeInfo_var);
		U3CGetObservablePropertiesU3Ed__6__ctor_m9934A587530DB5392DB70A5E4E2FAC2194241AC0(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * L_4 = V_0;
		RuntimeObject * L_5 = __this->get_U3CU3E3__o_6();
		NullCheck(L_4);
		L_4->set_o_5(L_5);
		U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__excludeInherited_4();
		NullCheck(L_6);
		L_6->set_excludeInherited_3(L_7);
		U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.MLAgents.Sensors.Reflection.ObservableAttribute/<GetObservableProperties>d__6::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetObservablePropertiesU3Ed__6_System_Collections_IEnumerable_GetEnumerator_m390A03DBAC5AD1F9B89881AF08AC00B54A9831B9 (U3CGetObservablePropertiesU3Ed__6_tAF6C561E9F30ABEE656481300919FD0B2D806A1E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetObservablePropertiesU3Ed__6_System_Collections_Generic_IEnumerableU3CU28System_Reflection_PropertyInfoU2CUnity_MLAgents_Sensors_Reflection_ObservableAttributeU29U3E_GetEnumerator_mE956541B8A42866B34599E1B4FA53B272E5F31ED(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
IL2CPP_EXTERN_C void RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshal_pinvoke(const RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1& unmarshaled, RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___HitGameObject_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'HitGameObject' of type 'RayOutput': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___HitGameObject_4Exception, NULL);
}
IL2CPP_EXTERN_C void RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshal_pinvoke_back(const RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_pinvoke& marshaled, RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1& unmarshaled)
{
	Exception_t* ___HitGameObject_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'HitGameObject' of type 'RayOutput': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___HitGameObject_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
IL2CPP_EXTERN_C void RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshal_pinvoke_cleanup(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
IL2CPP_EXTERN_C void RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshal_com(const RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1& unmarshaled, RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_com& marshaled)
{
	Exception_t* ___HitGameObject_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'HitGameObject' of type 'RayOutput': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___HitGameObject_4Exception, NULL);
}
IL2CPP_EXTERN_C void RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshal_com_back(const RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_com& marshaled, RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1& unmarshaled)
{
	Exception_t* ___HitGameObject_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'HitGameObject' of type 'RayOutput': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___HitGameObject_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput
IL2CPP_EXTERN_C void RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshal_com_cleanup(RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1_marshaled_com& marshaled)
{
}
// System.Single Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::get_ScaledRayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RayOutput_get_ScaledRayLength_m7914360D41DCDD670ECF88C9CD473A9861D2EB25 (RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var rayDirection = EndPositionWorld - StartPositionWorld;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_EndPositionWorld_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_StartPositionWorld_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return rayDirection.magnitude;
		float L_3;
		L_3 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  float RayOutput_get_ScaledRayLength_m7914360D41DCDD670ECF88C9CD473A9861D2EB25_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 * _thisAdjusted = reinterpret_cast<RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 *>(__this + _offset);
	float _returnValue;
	_returnValue = RayOutput_get_ScaledRayLength_m7914360D41DCDD670ECF88C9CD473A9861D2EB25(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.MLAgents.Sensors.RayPerceptionOutput/RayOutput::ToFloatArray(System.Int32,System.Int32,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayOutput_ToFloatArray_mFBF1C5D2B629F1E34C2D0B1D7486EB892B5452A7 (RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 * __this, int32_t ___numDetectableTags0, int32_t ___rayIndex1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buffer2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	int32_t G_B5_1 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* G_B5_2 = NULL;
	{
		// var bufferOffset = (numDetectableTags + 2) * rayIndex;
		int32_t L_0 = ___numDetectableTags0;
		int32_t L_1 = ___rayIndex1;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2)), (int32_t)L_1));
		// if (HitTaggedObject)
		bool L_2 = __this->get_HitTaggedObject_1();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// buffer[bufferOffset + HitTagIndex] = 1f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___buffer2;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_HitTagIndex_2();
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))), (float)(1.0f));
	}

IL_001d:
	{
		// buffer[bufferOffset + numDetectableTags] = HasHit ? 0f : 1f;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___buffer2;
		int32_t L_7 = V_0;
		int32_t L_8 = ___numDetectableTags0;
		bool L_9 = __this->get_HasHit_0();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		G_B3_1 = L_6;
		if (L_9)
		{
			G_B4_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
			G_B4_1 = L_6;
			goto IL_0030;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0035;
	}

IL_0030:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0035:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (float)G_B5_0);
		// buffer[bufferOffset + numDetectableTags + 1] = HitFraction;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = ___buffer2;
		int32_t L_11 = V_0;
		int32_t L_12 = ___numDetectableTags0;
		float L_13 = __this->get_HitFraction_3();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), (int32_t)1))), (float)L_13);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RayOutput_ToFloatArray_mFBF1C5D2B629F1E34C2D0B1D7486EB892B5452A7_AdjustorThunk (RuntimeObject * __this, int32_t ___numDetectableTags0, int32_t ___rayIndex1, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___buffer2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 * _thisAdjusted = reinterpret_cast<RayOutput_t6BEC5FD4C333FC0B59BD305738751CCEE7568EB1 *>(__this + _offset);
	RayOutput_ToFloatArray_mFBF1C5D2B629F1E34C2D0B1D7486EB892B5452A7(_thisAdjusted, ___numDetectableTags0, ___rayIndex1, ___buffer2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m42A68522AEB97D341903380D71A7A0E9ABD7CA6E (U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass0_0::<CreateUniformSampler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass0_0_U3CCreateUniformSamplerU3Eb__0_mA79296E52AE44953BF91768110FEA2CFD0D7449E (U3CU3Ec__DisplayClass0_0_t8C0A17B8EA8543A823ECC6E0E9FB6EE9F63AEA10 * __this, const RuntimeMethod* method)
{
	{
		// return () => min + (float)distr.NextDouble() * (max - min);
		float L_0 = __this->get_min_0();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = __this->get_distr_1();
		NullCheck(L_1);
		double L_2;
		L_2 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_1);
		float L_3 = __this->get_max_2();
		float L_4 = __this->get_min_0();
		return ((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_2)), (float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.SamplerFactory/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mBCC5867D418012F9081B1A66BE3C4D15C4931080 (U3CU3Ec__DisplayClass1_0_t36766385215EE498D604EC585F59E807155E38DF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass1_0::<CreateGaussianSampler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass1_0_U3CCreateGaussianSamplerU3Eb__0_m8B8C5C369C2B2EA9212483C8D33F788DFCDF5E4F (U3CU3Ec__DisplayClass1_0_t36766385215EE498D604EC585F59E807155E38DF * __this, const RuntimeMethod* method)
{
	{
		// return () => (float)distr.NextDouble();
		RandomNormal_tF5018743CCA93C5B77A86122774B1038D493653B * L_0 = __this->get_distr_0();
		NullCheck(L_0);
		double L_1;
		L_1 = RandomNormal_NextDouble_m9E20A3307BF09B0B5B60E8C03D17C49AF905EEEE(L_0, /*hidden argument*/NULL);
		return ((float)((float)L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m84535F177BBE6EBD1E7203A2FF08695A716698B9 (U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_0::<CreateMultiRangeUniformSampler>g__MultiRange|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass2_0_U3CCreateMultiRangeUniformSamplerU3Eg__MultiRangeU7C0_mC51EE8A1EF6211A551CA86374861E318EECE8B48 (U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t876C0B6881822B039062295527A34C91A9BF19E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int sampledInterval = intervalDistr.Sample(intervalSizes);
		Multinomial_tDE081F26809A24F8A7493FF3462293E4545AD3AD * L_0 = __this->get_intervalDistr_1();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_intervalSizes_2();
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Multinomial_Sample_mEAAF0B81679006001D559081E6C166F5488EA029(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return intervalFuncs[sampledInterval].Invoke();
		RuntimeObject* L_3 = __this->get_intervalFuncs_3();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 * L_5;
		L_5 = InterfaceFuncInvoker1< Func_1_tC701B36C6B4955F26580F8E98470FE5E8B3A0740 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Func`1<System.Single>>::get_Item(System.Int32) */, IList_1_t876C0B6881822B039062295527A34C91A9BF19E8_il2cpp_TypeInfo_var, L_3, L_4);
		NullCheck(L_5);
		float L_6;
		L_6 = Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36(L_5, /*hidden argument*/Func_1_Invoke_m4E9D5F4972EB90B5E743AE7F1E0AFF84FE3A7E36_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_1__ctor_m89D962F9D0DC6B4969790733204EB2AA15630007 (U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.MLAgents.SamplerFactory/<>c__DisplayClass2_1::<CreateMultiRangeUniformSampler>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass2_1_U3CCreateMultiRangeUniformSamplerU3Eb__1_mEF8B989B96C966AC470ACDDA7594881B9DD27D42 (U3CU3Ec__DisplayClass2_1_t5825491A2ACEBDDBC9174E138E5003245F35F790 * __this, const RuntimeMethod* method)
{
	{
		// intervalFuncs[i] = () => min + (float)distr.NextDouble() * intervalSize;
		float L_0 = __this->get_min_0();
		U3CU3Ec__DisplayClass2_0_tA6C3F97083AEB7D0F695632B4672196B6C793EBE * L_1 = __this->get_CSU24U3CU3E8__locals1_2();
		NullCheck(L_1);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = L_1->get_distr_0();
		NullCheck(L_2);
		double L_3;
		L_3 = VirtFuncInvoker0< double >::Invoke(7 /* System.Double System.Random::NextDouble() */, L_2);
		float L_4 = __this->get_intervalSize_1();
		return ((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_4))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.Sensors.SensorUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6FBE9ED255ED9F6C683693CF3D6514E6F897BCD0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * L_0 = (U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 *)il2cpp_codegen_object_new(U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0105B24059FCFE6ECAF192DB0CE42EC14460E63B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.Sensors.SensorUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0105B24059FCFE6ECAF192DB0CE42EC14460E63B (U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.MLAgents.Sensors.SensorUtils/<>c::<SortSensors>b__0_0(Unity.MLAgents.Sensors.ISensor,Unity.MLAgents.Sensors.ISensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSortSensorsU3Eb__0_0_mF6F10BDD1127BA2742D88AAD36CE93AE92358202 (U3CU3Ec_t97C10520AF5BD8983333D3427CDF22095D13C659 * __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISensor_tC2B90E5D17A94CD1FAA71C7060D5C48F7169321E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sensors.Sort((x, y) => string.Compare(x.GetName(), y.GetName(), StringComparison.InvariantCulture));
		RuntimeObject* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Unity.MLAgents.Sensors.ISensor::GetName() */, ISensor_tC2B90E5D17A94CD1FAA71C7060D5C48F7169321E_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___y1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String Unity.MLAgents.Sensors.ISensor::GetName() */, ISensor_tC2B90E5D17A94CD1FAA71C7060D5C48F7169321E_il2cpp_TypeInfo_var, L_2);
		int32_t L_4;
		L_4 = String_Compare_mDAE9D10BC450FF38960C691874EBFC3EAF6A39DD(L_1, L_3, 2, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
IL2CPP_EXTERN_C void CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshal_pinvoke(const CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B& unmarshaled, CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_pinvoke& marshaled)
{
	marshaled.___ChannelId_0 = unmarshaled.get_ChannelId_0();
	marshaled.___Message_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_Message_1());
}
IL2CPP_EXTERN_C void CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshal_pinvoke_back(const CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_pinvoke& marshaled, CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  unmarshaled_ChannelId_temp_0;
	memset((&unmarshaled_ChannelId_temp_0), 0, sizeof(unmarshaled_ChannelId_temp_0));
	unmarshaled_ChannelId_temp_0 = marshaled.___ChannelId_0;
	unmarshaled.set_ChannelId_0(unmarshaled_ChannelId_temp_0);
	unmarshaled.set_Message_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___Message_1));
}
// Conversion method for clean up from marshalling of: Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
IL2CPP_EXTERN_C void CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshal_pinvoke_cleanup(CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Message_1);
	marshaled.___Message_1 = NULL;
}
// Conversion methods for marshalling of: Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
IL2CPP_EXTERN_C void CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshal_com(const CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B& unmarshaled, CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_com& marshaled)
{
	marshaled.___ChannelId_0 = unmarshaled.get_ChannelId_0();
	marshaled.___Message_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.get_Message_1());
}
IL2CPP_EXTERN_C void CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshal_com_back(const CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_com& marshaled, CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  unmarshaled_ChannelId_temp_0;
	memset((&unmarshaled_ChannelId_temp_0), 0, sizeof(unmarshaled_ChannelId_temp_0));
	unmarshaled_ChannelId_temp_0 = marshaled.___ChannelId_0;
	unmarshaled.set_ChannelId_0(unmarshaled_ChannelId_temp_0);
	unmarshaled.set_Message_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, marshaled.___Message_1));
}
// Conversion method for clean up from marshalling of: Unity.MLAgents.SideChannels.SideChannelManager/CachedSideChannelMessage
IL2CPP_EXTERN_C void CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshal_com_cleanup(CachedSideChannelMessage_tEE4AFC825AEC1A649D2D8D9BF4F3F59B8F22567B_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Message_1);
	marshaled.___Message_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
