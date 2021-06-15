#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData
struct UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82;
// Unity.Collections.LowLevel.Unsafe.UnsafeStream
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Collections.WordStorage/<>c
struct U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45;
// Unity.Collections.xxHash3/_dlg_Hash128Long
struct _dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C;
// Unity.Collections.xxHash3/_dlg_Hash64Long
struct _dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03;
// Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$PostfixBurstDelegate
struct _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17;
// Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$PostfixBurstDelegate
struct _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC;
// Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$PostfixBurstDelegate
struct Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0;
// Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$PostfixBurstDelegate
struct Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA ;
struct UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ;
struct UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 ;
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0;;
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com;
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com;;
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke;
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
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

// Unity.Collections.xxHash3
struct xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B  : public RuntimeObject
{
public:

public:
};

struct xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_StaticFields
{
public:
	// System.Boolean Unity.Collections.xxHash3::_initialized
	bool ____initialized_0;
	// Unity.Collections.xxHash3/_dlg_Hash64Long Unity.Collections.xxHash3::_bfp_Hash64Long
	_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * ____bfp_Hash64Long_1;
	// Unity.Collections.xxHash3/_dlg_Hash128Long Unity.Collections.xxHash3::_bfp_Hash128Long
	_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * ____bfp_Hash128Long_2;

public:
	inline static int32_t get_offset_of__initialized_0() { return static_cast<int32_t>(offsetof(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_StaticFields, ____initialized_0)); }
	inline bool get__initialized_0() const { return ____initialized_0; }
	inline bool* get_address_of__initialized_0() { return &____initialized_0; }
	inline void set__initialized_0(bool value)
	{
		____initialized_0 = value;
	}

	inline static int32_t get_offset_of__bfp_Hash64Long_1() { return static_cast<int32_t>(offsetof(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_StaticFields, ____bfp_Hash64Long_1)); }
	inline _dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * get__bfp_Hash64Long_1() const { return ____bfp_Hash64Long_1; }
	inline _dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 ** get_address_of__bfp_Hash64Long_1() { return &____bfp_Hash64Long_1; }
	inline void set__bfp_Hash64Long_1(_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * value)
	{
		____bfp_Hash64Long_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bfp_Hash64Long_1), (void*)value);
	}

	inline static int32_t get_offset_of__bfp_Hash128Long_2() { return static_cast<int32_t>(offsetof(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_StaticFields, ____bfp_Hash128Long_2)); }
	inline _dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * get__bfp_Hash128Long_2() const { return ____bfp_Hash128Long_2; }
	inline _dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C ** get_address_of__bfp_Hash128Long_2() { return &____bfp_Hash128Long_2; }
	inline void set__bfp_Hash128Long_2(_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * value)
	{
		____bfp_Hash128Long_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bfp_Hash128Long_2), (void*)value);
	}
};


// Unity.Collections.xxHashDefaultKey
struct xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761  : public RuntimeObject
{
public:

public:
};

struct xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_StaticFields
{
public:
	// System.Byte[] Unity.Collections.xxHashDefaultKey::kSecret
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___kSecret_0;

public:
	inline static int32_t get_offset_of_kSecret_0() { return static_cast<int32_t>(offsetof(xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_StaticFields, ___kSecret_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_kSecret_0() const { return ___kSecret_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_kSecret_0() { return &___kSecret_0; }
	inline void set_kSecret_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___kSecret_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSecret_0), (void*)value);
	}
};


// Unity.Collections.WordStorage/<>c
struct U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_StaticFields
{
public:
	// Unity.Collections.WordStorage/<>c Unity.Collections.WordStorage/<>c::<>9
	U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * ___U3CU3E9_0;
	// System.EventHandler Unity.Collections.WordStorage/<>c::<>9__13_0
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_StaticFields, ___U3CU3E9__13_0_1)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}
};


// Unity.Burst.SharedStatic`1<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>
struct SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955 
{
public:
	// System.Void* Unity.Burst.SharedStatic`1::_buffer
	void* ____buffer_0;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955, ____buffer_0)); }
	inline void* get__buffer_0() const { return ____buffer_0; }
	inline void** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(void* value)
	{
		____buffer_0 = value;
	}
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

// Unity.Collections.FixedBytes16
struct FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte Unity.Collections.FixedBytes16::byte0000
					uint8_t ___byte0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_1_OffsetPadding[1];
					// System.Byte Unity.Collections.FixedBytes16::byte0001
					uint8_t ___byte0001_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_2_OffsetPadding[2];
					// System.Byte Unity.Collections.FixedBytes16::byte0002
					uint8_t ___byte0002_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_3_OffsetPadding[3];
					// System.Byte Unity.Collections.FixedBytes16::byte0003
					uint8_t ___byte0003_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_4_OffsetPadding[4];
					// System.Byte Unity.Collections.FixedBytes16::byte0004
					uint8_t ___byte0004_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_5_OffsetPadding[5];
					// System.Byte Unity.Collections.FixedBytes16::byte0005
					uint8_t ___byte0005_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_6_OffsetPadding[6];
					// System.Byte Unity.Collections.FixedBytes16::byte0006
					uint8_t ___byte0006_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_6_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_7_OffsetPadding[7];
					// System.Byte Unity.Collections.FixedBytes16::byte0007
					uint8_t ___byte0007_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_7_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_8_OffsetPadding[8];
					// System.Byte Unity.Collections.FixedBytes16::byte0008
					uint8_t ___byte0008_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_8_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_9_OffsetPadding[9];
					// System.Byte Unity.Collections.FixedBytes16::byte0009
					uint8_t ___byte0009_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_9_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_10_OffsetPadding[10];
					// System.Byte Unity.Collections.FixedBytes16::byte0010
					uint8_t ___byte0010_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_10_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_11_OffsetPadding[11];
					// System.Byte Unity.Collections.FixedBytes16::byte0011
					uint8_t ___byte0011_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_11_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_12_OffsetPadding[12];
					// System.Byte Unity.Collections.FixedBytes16::byte0012
					uint8_t ___byte0012_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_12_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_13_OffsetPadding[13];
					// System.Byte Unity.Collections.FixedBytes16::byte0013
					uint8_t ___byte0013_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_13_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_14_OffsetPadding[14];
					// System.Byte Unity.Collections.FixedBytes16::byte0014
					uint8_t ___byte0014_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_14_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_15_OffsetPadding[15];
					// System.Byte Unity.Collections.FixedBytes16::byte0015
					uint8_t ___byte0015_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_15_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_15_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37__padding[16];
	};

public:
	inline static int32_t get_offset_of_byte0000_0() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0000_0)); }
	inline uint8_t get_byte0000_0() const { return ___byte0000_0; }
	inline uint8_t* get_address_of_byte0000_0() { return &___byte0000_0; }
	inline void set_byte0000_0(uint8_t value)
	{
		___byte0000_0 = value;
	}

	inline static int32_t get_offset_of_byte0001_1() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0001_1)); }
	inline uint8_t get_byte0001_1() const { return ___byte0001_1; }
	inline uint8_t* get_address_of_byte0001_1() { return &___byte0001_1; }
	inline void set_byte0001_1(uint8_t value)
	{
		___byte0001_1 = value;
	}

	inline static int32_t get_offset_of_byte0002_2() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0002_2)); }
	inline uint8_t get_byte0002_2() const { return ___byte0002_2; }
	inline uint8_t* get_address_of_byte0002_2() { return &___byte0002_2; }
	inline void set_byte0002_2(uint8_t value)
	{
		___byte0002_2 = value;
	}

	inline static int32_t get_offset_of_byte0003_3() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0003_3)); }
	inline uint8_t get_byte0003_3() const { return ___byte0003_3; }
	inline uint8_t* get_address_of_byte0003_3() { return &___byte0003_3; }
	inline void set_byte0003_3(uint8_t value)
	{
		___byte0003_3 = value;
	}

	inline static int32_t get_offset_of_byte0004_4() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0004_4)); }
	inline uint8_t get_byte0004_4() const { return ___byte0004_4; }
	inline uint8_t* get_address_of_byte0004_4() { return &___byte0004_4; }
	inline void set_byte0004_4(uint8_t value)
	{
		___byte0004_4 = value;
	}

	inline static int32_t get_offset_of_byte0005_5() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0005_5)); }
	inline uint8_t get_byte0005_5() const { return ___byte0005_5; }
	inline uint8_t* get_address_of_byte0005_5() { return &___byte0005_5; }
	inline void set_byte0005_5(uint8_t value)
	{
		___byte0005_5 = value;
	}

	inline static int32_t get_offset_of_byte0006_6() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0006_6)); }
	inline uint8_t get_byte0006_6() const { return ___byte0006_6; }
	inline uint8_t* get_address_of_byte0006_6() { return &___byte0006_6; }
	inline void set_byte0006_6(uint8_t value)
	{
		___byte0006_6 = value;
	}

	inline static int32_t get_offset_of_byte0007_7() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0007_7)); }
	inline uint8_t get_byte0007_7() const { return ___byte0007_7; }
	inline uint8_t* get_address_of_byte0007_7() { return &___byte0007_7; }
	inline void set_byte0007_7(uint8_t value)
	{
		___byte0007_7 = value;
	}

	inline static int32_t get_offset_of_byte0008_8() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0008_8)); }
	inline uint8_t get_byte0008_8() const { return ___byte0008_8; }
	inline uint8_t* get_address_of_byte0008_8() { return &___byte0008_8; }
	inline void set_byte0008_8(uint8_t value)
	{
		___byte0008_8 = value;
	}

	inline static int32_t get_offset_of_byte0009_9() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0009_9)); }
	inline uint8_t get_byte0009_9() const { return ___byte0009_9; }
	inline uint8_t* get_address_of_byte0009_9() { return &___byte0009_9; }
	inline void set_byte0009_9(uint8_t value)
	{
		___byte0009_9 = value;
	}

	inline static int32_t get_offset_of_byte0010_10() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0010_10)); }
	inline uint8_t get_byte0010_10() const { return ___byte0010_10; }
	inline uint8_t* get_address_of_byte0010_10() { return &___byte0010_10; }
	inline void set_byte0010_10(uint8_t value)
	{
		___byte0010_10 = value;
	}

	inline static int32_t get_offset_of_byte0011_11() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0011_11)); }
	inline uint8_t get_byte0011_11() const { return ___byte0011_11; }
	inline uint8_t* get_address_of_byte0011_11() { return &___byte0011_11; }
	inline void set_byte0011_11(uint8_t value)
	{
		___byte0011_11 = value;
	}

	inline static int32_t get_offset_of_byte0012_12() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0012_12)); }
	inline uint8_t get_byte0012_12() const { return ___byte0012_12; }
	inline uint8_t* get_address_of_byte0012_12() { return &___byte0012_12; }
	inline void set_byte0012_12(uint8_t value)
	{
		___byte0012_12 = value;
	}

	inline static int32_t get_offset_of_byte0013_13() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0013_13)); }
	inline uint8_t get_byte0013_13() const { return ___byte0013_13; }
	inline uint8_t* get_address_of_byte0013_13() { return &___byte0013_13; }
	inline void set_byte0013_13(uint8_t value)
	{
		___byte0013_13 = value;
	}

	inline static int32_t get_offset_of_byte0014_14() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0014_14)); }
	inline uint8_t get_byte0014_14() const { return ___byte0014_14; }
	inline uint8_t* get_address_of_byte0014_14() { return &___byte0014_14; }
	inline void set_byte0014_14(uint8_t value)
	{
		___byte0014_14 = value;
	}

	inline static int32_t get_offset_of_byte0015_15() { return static_cast<int32_t>(offsetof(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37, ___byte0015_15)); }
	inline uint8_t get_byte0015_15() const { return ___byte0015_15; }
	inline uint8_t* get_address_of_byte0015_15() { return &___byte0015_15; }
	inline void set_byte0015_15(uint8_t value)
	{
		___byte0015_15 = value;
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::Block
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Block_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::OffsetInFirstBlock
	int32_t ___OffsetInFirstBlock_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::ElementCount
	int32_t ___ElementCount_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::LastOffset
	int32_t ___LastOffset_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange::NumberOfBlocks
	int32_t ___NumberOfBlocks_4;

public:
	inline static int32_t get_offset_of_Block_0() { return static_cast<int32_t>(offsetof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8, ___Block_0)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * get_Block_0() const { return ___Block_0; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_address_of_Block_0() { return &___Block_0; }
	inline void set_Block_0(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * value)
	{
		___Block_0 = value;
	}

	inline static int32_t get_offset_of_OffsetInFirstBlock_1() { return static_cast<int32_t>(offsetof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8, ___OffsetInFirstBlock_1)); }
	inline int32_t get_OffsetInFirstBlock_1() const { return ___OffsetInFirstBlock_1; }
	inline int32_t* get_address_of_OffsetInFirstBlock_1() { return &___OffsetInFirstBlock_1; }
	inline void set_OffsetInFirstBlock_1(int32_t value)
	{
		___OffsetInFirstBlock_1 = value;
	}

	inline static int32_t get_offset_of_ElementCount_2() { return static_cast<int32_t>(offsetof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8, ___ElementCount_2)); }
	inline int32_t get_ElementCount_2() const { return ___ElementCount_2; }
	inline int32_t* get_address_of_ElementCount_2() { return &___ElementCount_2; }
	inline void set_ElementCount_2(int32_t value)
	{
		___ElementCount_2 = value;
	}

	inline static int32_t get_offset_of_LastOffset_3() { return static_cast<int32_t>(offsetof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8, ___LastOffset_3)); }
	inline int32_t get_LastOffset_3() const { return ___LastOffset_3; }
	inline int32_t* get_address_of_LastOffset_3() { return &___LastOffset_3; }
	inline void set_LastOffset_3(int32_t value)
	{
		___LastOffset_3 = value;
	}

	inline static int32_t get_offset_of_NumberOfBlocks_4() { return static_cast<int32_t>(offsetof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8, ___NumberOfBlocks_4)); }
	inline int32_t get_NumberOfBlocks_4() const { return ___NumberOfBlocks_4; }
	inline int32_t* get_address_of_NumberOfBlocks_4() { return &___NumberOfBlocks_4; }
	inline void set_NumberOfBlocks_4(int32_t value)
	{
		___NumberOfBlocks_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8_marshaled_pinvoke
{
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Block_0;
	int32_t ___OffsetInFirstBlock_1;
	int32_t ___ElementCount_2;
	int32_t ___LastOffset_3;
	int32_t ___NumberOfBlocks_4;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8_marshaled_com
{
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Block_0;
	int32_t ___OffsetInFirstBlock_1;
	int32_t ___ElementCount_2;
	int32_t ___LastOffset_3;
	int32_t ___NumberOfBlocks_4;
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


// Unity.Mathematics.uint2
struct uint2_t31B88562B6681D249453803230869FBE9ED565E7 
{
public:
	// System.UInt32 Unity.Mathematics.uint2::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint2::y
	uint32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint2_t31B88562B6681D249453803230869FBE9ED565E7, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint2_t31B88562B6681D249453803230869FBE9ED565E7, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}
};


// Unity.Mathematics.uint4
struct uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};

struct uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_StaticFields
{
public:
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  ___zero_4;

public:
	inline static int32_t get_offset_of_zero_4() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_StaticFields, ___zero_4)); }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  get_zero_4() const { return ___zero_4; }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * get_address_of_zero_4() { return &___zero_4; }
	inline void set_zero_4(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  value)
	{
		___zero_4 = value;
	}
};


// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A 
{
public:
	// System.Int32 Unity.Collections.AllocatorManager/AllocatorHandle::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// Unity.Collections.AllocatorManager/BlockHandle
struct BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD 
{
public:
	// System.UInt16 Unity.Collections.AllocatorManager/BlockHandle::Value
	uint16_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD, ___Value_0)); }
	inline uint16_t get_Value_0() const { return ___Value_0; }
	inline uint16_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint16_t value)
	{
		___Value_0 = value;
	}
};


// Unity.Collections.AllocatorManager/SmallAllocatorHandle
struct SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD 
{
public:
	// System.UInt16 Unity.Collections.AllocatorManager/SmallAllocatorHandle::Value
	uint16_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD, ___Value_0)); }
	inline uint16_t get_Value_0() const { return ___Value_0; }
	inline uint16_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint16_t value)
	{
		___Value_0 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData/<firstFreeTLS>e__FixedBuffer
struct U3CfirstFreeTLSU3Ee__FixedBuffer_t157CC73718D14B7A8CBAE223B4682EF928527F0C 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData/<firstFreeTLS>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_t157CC73718D14B7A8CBAE223B4682EF928527F0C__padding[8192];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CfirstFreeTLSU3Ee__FixedBuffer_t157CC73718D14B7A8CBAE223B4682EF928527F0C, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_BlockStream
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_BlockStream_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentBlock
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_CurrentBlock_1;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentPtr
	uint8_t* ___m_CurrentPtr_2;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentBlockEnd
	uint8_t* ___m_CurrentBlockEnd_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_RemainingItemCount
	int32_t ___m_RemainingItemCount_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_LastBlockSize
	int32_t ___m_LastBlockSize_5;

public:
	inline static int32_t get_offset_of_m_BlockStream_0() { return static_cast<int32_t>(offsetof(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB, ___m_BlockStream_0)); }
	inline UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * get_m_BlockStream_0() const { return ___m_BlockStream_0; }
	inline UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA ** get_address_of_m_BlockStream_0() { return &___m_BlockStream_0; }
	inline void set_m_BlockStream_0(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * value)
	{
		___m_BlockStream_0 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBlock_1() { return static_cast<int32_t>(offsetof(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB, ___m_CurrentBlock_1)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * get_m_CurrentBlock_1() const { return ___m_CurrentBlock_1; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_address_of_m_CurrentBlock_1() { return &___m_CurrentBlock_1; }
	inline void set_m_CurrentBlock_1(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * value)
	{
		___m_CurrentBlock_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentPtr_2() { return static_cast<int32_t>(offsetof(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB, ___m_CurrentPtr_2)); }
	inline uint8_t* get_m_CurrentPtr_2() const { return ___m_CurrentPtr_2; }
	inline uint8_t** get_address_of_m_CurrentPtr_2() { return &___m_CurrentPtr_2; }
	inline void set_m_CurrentPtr_2(uint8_t* value)
	{
		___m_CurrentPtr_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBlockEnd_3() { return static_cast<int32_t>(offsetof(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB, ___m_CurrentBlockEnd_3)); }
	inline uint8_t* get_m_CurrentBlockEnd_3() const { return ___m_CurrentBlockEnd_3; }
	inline uint8_t** get_address_of_m_CurrentBlockEnd_3() { return &___m_CurrentBlockEnd_3; }
	inline void set_m_CurrentBlockEnd_3(uint8_t* value)
	{
		___m_CurrentBlockEnd_3 = value;
	}

	inline static int32_t get_offset_of_m_RemainingItemCount_4() { return static_cast<int32_t>(offsetof(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB, ___m_RemainingItemCount_4)); }
	inline int32_t get_m_RemainingItemCount_4() const { return ___m_RemainingItemCount_4; }
	inline int32_t* get_address_of_m_RemainingItemCount_4() { return &___m_RemainingItemCount_4; }
	inline void set_m_RemainingItemCount_4(int32_t value)
	{
		___m_RemainingItemCount_4 = value;
	}

	inline static int32_t get_offset_of_m_LastBlockSize_5() { return static_cast<int32_t>(offsetof(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB, ___m_LastBlockSize_5)); }
	inline int32_t get_m_LastBlockSize_5() const { return ___m_LastBlockSize_5; }
	inline int32_t* get_address_of_m_LastBlockSize_5() { return &___m_LastBlockSize_5; }
	inline void set_m_LastBlockSize_5(int32_t value)
	{
		___m_LastBlockSize_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_pinvoke
{
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_BlockStream_0;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_RemainingItemCount_4;
	int32_t ___m_LastBlockSize_5;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_com
{
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_BlockStream_0;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_RemainingItemCount_4;
	int32_t ___m_LastBlockSize_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_BlockStream
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_BlockStream_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentBlock
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_CurrentBlock_1;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentPtr
	uint8_t* ___m_CurrentPtr_2;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentBlockEnd
	uint8_t* ___m_CurrentBlockEnd_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ForeachIndex
	int32_t ___m_ForeachIndex_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ElementCount
	int32_t ___m_ElementCount_5;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_FirstBlock
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_FirstBlock_6;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_FirstOffset
	int32_t ___m_FirstOffset_7;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_NumberOfBlocks
	int32_t ___m_NumberOfBlocks_8;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ThreadIndex
	int32_t ___m_ThreadIndex_9;

public:
	inline static int32_t get_offset_of_m_BlockStream_0() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_BlockStream_0)); }
	inline UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * get_m_BlockStream_0() const { return ___m_BlockStream_0; }
	inline UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA ** get_address_of_m_BlockStream_0() { return &___m_BlockStream_0; }
	inline void set_m_BlockStream_0(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * value)
	{
		___m_BlockStream_0 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBlock_1() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_CurrentBlock_1)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * get_m_CurrentBlock_1() const { return ___m_CurrentBlock_1; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_address_of_m_CurrentBlock_1() { return &___m_CurrentBlock_1; }
	inline void set_m_CurrentBlock_1(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * value)
	{
		___m_CurrentBlock_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentPtr_2() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_CurrentPtr_2)); }
	inline uint8_t* get_m_CurrentPtr_2() const { return ___m_CurrentPtr_2; }
	inline uint8_t** get_address_of_m_CurrentPtr_2() { return &___m_CurrentPtr_2; }
	inline void set_m_CurrentPtr_2(uint8_t* value)
	{
		___m_CurrentPtr_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBlockEnd_3() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_CurrentBlockEnd_3)); }
	inline uint8_t* get_m_CurrentBlockEnd_3() const { return ___m_CurrentBlockEnd_3; }
	inline uint8_t** get_address_of_m_CurrentBlockEnd_3() { return &___m_CurrentBlockEnd_3; }
	inline void set_m_CurrentBlockEnd_3(uint8_t* value)
	{
		___m_CurrentBlockEnd_3 = value;
	}

	inline static int32_t get_offset_of_m_ForeachIndex_4() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_ForeachIndex_4)); }
	inline int32_t get_m_ForeachIndex_4() const { return ___m_ForeachIndex_4; }
	inline int32_t* get_address_of_m_ForeachIndex_4() { return &___m_ForeachIndex_4; }
	inline void set_m_ForeachIndex_4(int32_t value)
	{
		___m_ForeachIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_ElementCount_5() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_ElementCount_5)); }
	inline int32_t get_m_ElementCount_5() const { return ___m_ElementCount_5; }
	inline int32_t* get_address_of_m_ElementCount_5() { return &___m_ElementCount_5; }
	inline void set_m_ElementCount_5(int32_t value)
	{
		___m_ElementCount_5 = value;
	}

	inline static int32_t get_offset_of_m_FirstBlock_6() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_FirstBlock_6)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * get_m_FirstBlock_6() const { return ___m_FirstBlock_6; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_address_of_m_FirstBlock_6() { return &___m_FirstBlock_6; }
	inline void set_m_FirstBlock_6(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * value)
	{
		___m_FirstBlock_6 = value;
	}

	inline static int32_t get_offset_of_m_FirstOffset_7() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_FirstOffset_7)); }
	inline int32_t get_m_FirstOffset_7() const { return ___m_FirstOffset_7; }
	inline int32_t* get_address_of_m_FirstOffset_7() { return &___m_FirstOffset_7; }
	inline void set_m_FirstOffset_7(int32_t value)
	{
		___m_FirstOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfBlocks_8() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_NumberOfBlocks_8)); }
	inline int32_t get_m_NumberOfBlocks_8() const { return ___m_NumberOfBlocks_8; }
	inline int32_t* get_address_of_m_NumberOfBlocks_8() { return &___m_NumberOfBlocks_8; }
	inline void set_m_NumberOfBlocks_8(int32_t value)
	{
		___m_NumberOfBlocks_8 = value;
	}

	inline static int32_t get_offset_of_m_ThreadIndex_9() { return static_cast<int32_t>(offsetof(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A, ___m_ThreadIndex_9)); }
	inline int32_t get_m_ThreadIndex_9() const { return ___m_ThreadIndex_9; }
	inline int32_t* get_address_of_m_ThreadIndex_9() { return &___m_ThreadIndex_9; }
	inline void set_m_ThreadIndex_9(int32_t value)
	{
		___m_ThreadIndex_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_pinvoke
{
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_BlockStream_0;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_ForeachIndex_4;
	int32_t ___m_ElementCount_5;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_FirstBlock_6;
	int32_t ___m_FirstOffset_7;
	int32_t ___m_NumberOfBlocks_8;
	int32_t ___m_ThreadIndex_9;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_com
{
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_BlockStream_0;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_CurrentBlock_1;
	uint8_t* ___m_CurrentPtr_2;
	uint8_t* ___m_CurrentBlockEnd_3;
	int32_t ___m_ForeachIndex_4;
	int32_t ___m_ElementCount_5;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___m_FirstBlock_6;
	int32_t ___m_FirstOffset_7;
	int32_t ___m_NumberOfBlocks_8;
	int32_t ___m_ThreadIndex_9;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204 
{
public:
	union
	{
		struct
		{
			// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204__padding[1];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo
struct PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo::log2DefaultPageSize
	uint8_t ___log2DefaultPageSize_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo::availableLog2PageSizes
	int32_t ___availableLog2PageSizes_1;

public:
	inline static int32_t get_offset_of_log2DefaultPageSize_0() { return static_cast<int32_t>(offsetof(PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7, ___log2DefaultPageSize_0)); }
	inline uint8_t get_log2DefaultPageSize_0() const { return ___log2DefaultPageSize_0; }
	inline uint8_t* get_address_of_log2DefaultPageSize_0() { return &___log2DefaultPageSize_0; }
	inline void set_log2DefaultPageSize_0(uint8_t value)
	{
		___log2DefaultPageSize_0 = value;
	}

	inline static int32_t get_offset_of_availableLog2PageSizes_1() { return static_cast<int32_t>(offsetof(PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7, ___availableLog2PageSizes_1)); }
	inline int32_t get_availableLog2PageSizes_1() const { return ___availableLog2PageSizes_1; }
	inline int32_t* get_address_of_availableLog2PageSizes_1() { return &___availableLog2PageSizes_1; }
	inline void set_availableLog2PageSizes_1(int32_t value)
	{
		___availableLog2PageSizes_1 = value;
	}
};


// Unity.Collections.WordStorage/Entry
struct Entry_tC1267186156402C0D696F87F3CC2CD7CB99637BB 
{
public:
	// System.Int32 Unity.Collections.WordStorage/Entry::offset
	int32_t ___offset_0;
	// System.Int32 Unity.Collections.WordStorage/Entry::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(Entry_tC1267186156402C0D696F87F3CC2CD7CB99637BB, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(Entry_tC1267186156402C0D696F87F3CC2CD7CB99637BB, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};


// Unity.Mathematics.math/LongDoubleUnion
struct LongDoubleUnion_t4E62DA692E4065B3CC4025A9F719F76DC90D170B 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Mathematics.math/LongDoubleUnion::longValue
			int64_t ___longValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Mathematics.math/LongDoubleUnion::doubleValue
			double ___doubleValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_longValue_0() { return static_cast<int32_t>(offsetof(LongDoubleUnion_t4E62DA692E4065B3CC4025A9F719F76DC90D170B, ___longValue_0)); }
	inline int64_t get_longValue_0() const { return ___longValue_0; }
	inline int64_t* get_address_of_longValue_0() { return &___longValue_0; }
	inline void set_longValue_0(int64_t value)
	{
		___longValue_0 = value;
	}

	inline static int32_t get_offset_of_doubleValue_1() { return static_cast<int32_t>(offsetof(LongDoubleUnion_t4E62DA692E4065B3CC4025A9F719F76DC90D170B, ___doubleValue_1)); }
	inline double get_doubleValue_1() const { return ___doubleValue_1; }
	inline double* get_address_of_doubleValue_1() { return &___doubleValue_1; }
	inline void set_doubleValue_1(double value)
	{
		___doubleValue_1 = value;
	}
};


// Unity.Collections.xxHash3/ulong2
struct ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C 
{
public:
	// System.UInt64 Unity.Collections.xxHash3/ulong2::x
	uint64_t ___x_0;
	// System.UInt64 Unity.Collections.xxHash3/ulong2::y
	uint64_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C, ___x_0)); }
	inline uint64_t get_x_0() const { return ___x_0; }
	inline uint64_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint64_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C, ___y_1)); }
	inline uint64_t get_y_1() const { return ___y_1; }
	inline uint64_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint64_t value)
	{
		___y_1 = value;
	}
};


// Unity.Collections.Memory/Unmanaged/Array
struct Array_t75FDEB340BB6AD48CC32BBD39F096EF05E2C6719 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Array_t75FDEB340BB6AD48CC32BBD39F096EF05E2C6719__padding[1];
	};

public:
};


// Unity.Collections.xxHash3/StreamingState/StreamingStateData
struct StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::Acc
			uint64_t ___Acc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_1_OffsetPadding[64];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::Buffer
			uint8_t ___Buffer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_1_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_2_OffsetPadding[320];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::IsHash64
			int32_t ___IsHash64_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_2_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_3_OffsetPadding[324];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::BufferedSize
			int32_t ___BufferedSize_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_3_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding[328];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::NbStripesSoFar
			int32_t ___NbStripesSoFar_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_5_OffsetPadding[336];
			// System.Int64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::TotalLength
			int64_t ___TotalLength_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_5_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_6_OffsetPadding[344];
			// System.UInt64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::Seed
			uint64_t ___Seed_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_6_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_7_OffsetPadding[352];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::SecretKey
			uint8_t ___SecretKey_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_7_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_8_OffsetPadding[540];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::_PadEnd
			uint8_t ____PadEnd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_8_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Acc_0() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___Acc_0)); }
	inline uint64_t get_Acc_0() const { return ___Acc_0; }
	inline uint64_t* get_address_of_Acc_0() { return &___Acc_0; }
	inline void set_Acc_0(uint64_t value)
	{
		___Acc_0 = value;
	}

	inline static int32_t get_offset_of_Buffer_1() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___Buffer_1)); }
	inline uint8_t get_Buffer_1() const { return ___Buffer_1; }
	inline uint8_t* get_address_of_Buffer_1() { return &___Buffer_1; }
	inline void set_Buffer_1(uint8_t value)
	{
		___Buffer_1 = value;
	}

	inline static int32_t get_offset_of_IsHash64_2() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___IsHash64_2)); }
	inline int32_t get_IsHash64_2() const { return ___IsHash64_2; }
	inline int32_t* get_address_of_IsHash64_2() { return &___IsHash64_2; }
	inline void set_IsHash64_2(int32_t value)
	{
		___IsHash64_2 = value;
	}

	inline static int32_t get_offset_of_BufferedSize_3() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___BufferedSize_3)); }
	inline int32_t get_BufferedSize_3() const { return ___BufferedSize_3; }
	inline int32_t* get_address_of_BufferedSize_3() { return &___BufferedSize_3; }
	inline void set_BufferedSize_3(int32_t value)
	{
		___BufferedSize_3 = value;
	}

	inline static int32_t get_offset_of_NbStripesSoFar_4() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___NbStripesSoFar_4)); }
	inline int32_t get_NbStripesSoFar_4() const { return ___NbStripesSoFar_4; }
	inline int32_t* get_address_of_NbStripesSoFar_4() { return &___NbStripesSoFar_4; }
	inline void set_NbStripesSoFar_4(int32_t value)
	{
		___NbStripesSoFar_4 = value;
	}

	inline static int32_t get_offset_of_TotalLength_5() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___TotalLength_5)); }
	inline int64_t get_TotalLength_5() const { return ___TotalLength_5; }
	inline int64_t* get_address_of_TotalLength_5() { return &___TotalLength_5; }
	inline void set_TotalLength_5(int64_t value)
	{
		___TotalLength_5 = value;
	}

	inline static int32_t get_offset_of_Seed_6() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___Seed_6)); }
	inline uint64_t get_Seed_6() const { return ___Seed_6; }
	inline uint64_t* get_address_of_Seed_6() { return &___Seed_6; }
	inline void set_Seed_6(uint64_t value)
	{
		___Seed_6 = value;
	}

	inline static int32_t get_offset_of_SecretKey_7() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ___SecretKey_7)); }
	inline uint8_t get_SecretKey_7() const { return ___SecretKey_7; }
	inline uint8_t* get_address_of_SecretKey_7() { return &___SecretKey_7; }
	inline void set_SecretKey_7(uint8_t value)
	{
		___SecretKey_7 = value;
	}

	inline static int32_t get_offset_of__PadEnd_8() { return static_cast<int32_t>(offsetof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC, ____PadEnd_8)); }
	inline uint8_t get__PadEnd_8() const { return ____PadEnd_8; }
	inline uint8_t* get_address_of__PadEnd_8() { return &____PadEnd_8; }
	inline void set__PadEnd_8(uint8_t value)
	{
		____PadEnd_8 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
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

// Unity.Collections.FixedBytes4094
struct FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0000
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0000_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0000_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_1_OffsetPadding[16];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0016
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0016_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_1_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0016_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_2_OffsetPadding[32];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0032
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0032_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_2_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0032_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_3_OffsetPadding[48];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0048
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0048_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_3_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0048_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_4_OffsetPadding[64];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0064
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0064_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_4_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0064_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_5_OffsetPadding[80];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0080
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0080_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_5_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0080_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_6_OffsetPadding[96];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0096
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0096_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_6_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0096_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_7_OffsetPadding[112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0112
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0112_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_7_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0112_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_8_OffsetPadding[128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0128
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0128_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_8_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0128_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_9_OffsetPadding[144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0144
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0144_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_9_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0144_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_10_OffsetPadding[160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0160
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0160_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_10_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0160_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_11_OffsetPadding[176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0176
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0176_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_11_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0176_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_12_OffsetPadding[192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0192
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0192_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_12_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0192_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_13_OffsetPadding[208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0208
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0208_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_13_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0208_13_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_14_OffsetPadding[224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0224
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0224_14;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_14_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0224_14_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_15_OffsetPadding[240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0240
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0240_15;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_15_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0240_15_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_16_OffsetPadding[256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0256
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0256_16;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_16_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0256_16_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_17_OffsetPadding[272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0272
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0272_17;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_17_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0272_17_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_18_OffsetPadding[288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0288
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0288_18;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_18_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0288_18_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_19_OffsetPadding[304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0304
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0304_19;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_19_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0304_19_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_20_OffsetPadding[320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0320
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0320_20;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_20_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0320_20_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_21_OffsetPadding[336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0336
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0336_21;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_21_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0336_21_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_22_OffsetPadding[352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0352
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0352_22;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_22_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0352_22_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_23_OffsetPadding[368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0368
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0368_23;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_23_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0368_23_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_24_OffsetPadding[384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0384
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0384_24;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_24_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0384_24_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_25_OffsetPadding[400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0400
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0400_25;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_25_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0400_25_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_26_OffsetPadding[416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0416
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0416_26;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_26_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0416_26_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_27_OffsetPadding[432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0432
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0432_27;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_27_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0432_27_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_28_OffsetPadding[448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0448
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0448_28;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_28_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0448_28_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_29_OffsetPadding[464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0464
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0464_29;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_29_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0464_29_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_30_OffsetPadding[480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0480
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0480_30;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_30_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0480_30_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0496_31_OffsetPadding[496];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0496
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0496_31;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0496_31_OffsetPadding_forAlignmentOnly[496];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0496_31_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0512_32_OffsetPadding[512];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0512
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0512_32;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0512_32_OffsetPadding_forAlignmentOnly[512];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0512_32_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0528_33_OffsetPadding[528];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0528
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0528_33;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0528_33_OffsetPadding_forAlignmentOnly[528];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0528_33_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0544_34_OffsetPadding[544];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0544
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0544_34;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0544_34_OffsetPadding_forAlignmentOnly[544];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0544_34_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0560_35_OffsetPadding[560];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0560
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0560_35;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0560_35_OffsetPadding_forAlignmentOnly[560];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0560_35_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0576_36_OffsetPadding[576];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0576
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0576_36;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0576_36_OffsetPadding_forAlignmentOnly[576];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0576_36_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0592_37_OffsetPadding[592];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0592
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0592_37;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0592_37_OffsetPadding_forAlignmentOnly[592];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0592_37_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0608_38_OffsetPadding[608];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0608
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0608_38;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0608_38_OffsetPadding_forAlignmentOnly[608];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0608_38_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0624_39_OffsetPadding[624];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0624
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0624_39;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0624_39_OffsetPadding_forAlignmentOnly[624];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0624_39_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0640_40_OffsetPadding[640];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0640
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0640_40;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0640_40_OffsetPadding_forAlignmentOnly[640];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0640_40_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0656_41_OffsetPadding[656];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0656
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0656_41;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0656_41_OffsetPadding_forAlignmentOnly[656];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0656_41_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0672_42_OffsetPadding[672];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0672
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0672_42;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0672_42_OffsetPadding_forAlignmentOnly[672];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0672_42_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0688_43_OffsetPadding[688];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0688
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0688_43;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0688_43_OffsetPadding_forAlignmentOnly[688];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0688_43_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0704_44_OffsetPadding[704];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0704
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0704_44;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0704_44_OffsetPadding_forAlignmentOnly[704];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0704_44_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0720_45_OffsetPadding[720];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0720
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0720_45;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0720_45_OffsetPadding_forAlignmentOnly[720];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0720_45_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0736_46_OffsetPadding[736];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0736
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0736_46;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0736_46_OffsetPadding_forAlignmentOnly[736];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0736_46_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0752_47_OffsetPadding[752];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0752
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0752_47;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0752_47_OffsetPadding_forAlignmentOnly[752];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0752_47_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0768_48_OffsetPadding[768];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0768
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0768_48;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0768_48_OffsetPadding_forAlignmentOnly[768];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0768_48_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0784_49_OffsetPadding[784];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0784
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0784_49;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0784_49_OffsetPadding_forAlignmentOnly[784];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0784_49_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0800_50_OffsetPadding[800];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0800
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0800_50;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0800_50_OffsetPadding_forAlignmentOnly[800];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0800_50_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0816_51_OffsetPadding[816];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0816
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0816_51;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0816_51_OffsetPadding_forAlignmentOnly[816];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0816_51_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0832_52_OffsetPadding[832];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0832
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0832_52;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0832_52_OffsetPadding_forAlignmentOnly[832];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0832_52_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0848_53_OffsetPadding[848];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0848
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0848_53;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0848_53_OffsetPadding_forAlignmentOnly[848];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0848_53_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0864_54_OffsetPadding[864];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0864
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0864_54;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0864_54_OffsetPadding_forAlignmentOnly[864];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0864_54_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0880_55_OffsetPadding[880];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0880
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0880_55;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0880_55_OffsetPadding_forAlignmentOnly[880];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0880_55_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0896_56_OffsetPadding[896];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0896
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0896_56;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0896_56_OffsetPadding_forAlignmentOnly[896];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0896_56_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0912_57_OffsetPadding[912];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0912
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0912_57;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0912_57_OffsetPadding_forAlignmentOnly[912];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0912_57_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0928_58_OffsetPadding[928];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0928
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0928_58;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0928_58_OffsetPadding_forAlignmentOnly[928];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0928_58_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0944_59_OffsetPadding[944];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0944
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0944_59;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0944_59_OffsetPadding_forAlignmentOnly[944];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0944_59_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0960_60_OffsetPadding[960];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0960
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0960_60;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0960_60_OffsetPadding_forAlignmentOnly[960];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0960_60_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0976_61_OffsetPadding[976];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0976
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0976_61;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0976_61_OffsetPadding_forAlignmentOnly[976];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0976_61_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0992_62_OffsetPadding[992];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset0992
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0992_62;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0992_62_OffsetPadding_forAlignmentOnly[992];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset0992_62_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1008_63_OffsetPadding[1008];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1008
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1008_63;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1008_63_OffsetPadding_forAlignmentOnly[1008];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1008_63_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1024_64_OffsetPadding[1024];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1024
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1024_64;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1024_64_OffsetPadding_forAlignmentOnly[1024];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1024_64_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1040_65_OffsetPadding[1040];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1040
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1040_65;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1040_65_OffsetPadding_forAlignmentOnly[1040];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1040_65_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1056_66_OffsetPadding[1056];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1056
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1056_66;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1056_66_OffsetPadding_forAlignmentOnly[1056];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1056_66_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1072_67_OffsetPadding[1072];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1072
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1072_67;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1072_67_OffsetPadding_forAlignmentOnly[1072];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1072_67_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1088_68_OffsetPadding[1088];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1088
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1088_68;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1088_68_OffsetPadding_forAlignmentOnly[1088];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1088_68_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1104_69_OffsetPadding[1104];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1104
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1104_69;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1104_69_OffsetPadding_forAlignmentOnly[1104];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1104_69_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1120_70_OffsetPadding[1120];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1120
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1120_70;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1120_70_OffsetPadding_forAlignmentOnly[1120];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1120_70_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1136_71_OffsetPadding[1136];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1136
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1136_71;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1136_71_OffsetPadding_forAlignmentOnly[1136];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1136_71_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1152_72_OffsetPadding[1152];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1152
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1152_72;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1152_72_OffsetPadding_forAlignmentOnly[1152];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1152_72_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1168_73_OffsetPadding[1168];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1168
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1168_73;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1168_73_OffsetPadding_forAlignmentOnly[1168];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1168_73_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1184_74_OffsetPadding[1184];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1184
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1184_74;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1184_74_OffsetPadding_forAlignmentOnly[1184];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1184_74_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1200_75_OffsetPadding[1200];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1200
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1200_75;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1200_75_OffsetPadding_forAlignmentOnly[1200];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1200_75_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1216_76_OffsetPadding[1216];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1216
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1216_76;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1216_76_OffsetPadding_forAlignmentOnly[1216];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1216_76_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1232_77_OffsetPadding[1232];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1232
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1232_77;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1232_77_OffsetPadding_forAlignmentOnly[1232];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1232_77_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1248_78_OffsetPadding[1248];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1248
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1248_78;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1248_78_OffsetPadding_forAlignmentOnly[1248];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1248_78_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1264_79_OffsetPadding[1264];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1264
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1264_79;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1264_79_OffsetPadding_forAlignmentOnly[1264];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1264_79_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1280_80_OffsetPadding[1280];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1280
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1280_80;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1280_80_OffsetPadding_forAlignmentOnly[1280];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1280_80_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1296_81_OffsetPadding[1296];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1296
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1296_81;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1296_81_OffsetPadding_forAlignmentOnly[1296];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1296_81_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1312_82_OffsetPadding[1312];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1312
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1312_82;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1312_82_OffsetPadding_forAlignmentOnly[1312];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1312_82_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1328_83_OffsetPadding[1328];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1328
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1328_83;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1328_83_OffsetPadding_forAlignmentOnly[1328];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1328_83_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1344_84_OffsetPadding[1344];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1344
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1344_84;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1344_84_OffsetPadding_forAlignmentOnly[1344];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1344_84_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1360_85_OffsetPadding[1360];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1360
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1360_85;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1360_85_OffsetPadding_forAlignmentOnly[1360];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1360_85_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1376_86_OffsetPadding[1376];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1376
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1376_86;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1376_86_OffsetPadding_forAlignmentOnly[1376];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1376_86_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1392_87_OffsetPadding[1392];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1392
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1392_87;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1392_87_OffsetPadding_forAlignmentOnly[1392];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1392_87_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1408_88_OffsetPadding[1408];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1408
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1408_88;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1408_88_OffsetPadding_forAlignmentOnly[1408];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1408_88_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1424_89_OffsetPadding[1424];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1424
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1424_89;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1424_89_OffsetPadding_forAlignmentOnly[1424];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1424_89_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1440_90_OffsetPadding[1440];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1440
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1440_90;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1440_90_OffsetPadding_forAlignmentOnly[1440];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1440_90_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1456_91_OffsetPadding[1456];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1456
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1456_91;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1456_91_OffsetPadding_forAlignmentOnly[1456];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1456_91_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1472_92_OffsetPadding[1472];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1472
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1472_92;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1472_92_OffsetPadding_forAlignmentOnly[1472];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1472_92_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1488_93_OffsetPadding[1488];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1488
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1488_93;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1488_93_OffsetPadding_forAlignmentOnly[1488];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1488_93_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1504_94_OffsetPadding[1504];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1504
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1504_94;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1504_94_OffsetPadding_forAlignmentOnly[1504];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1504_94_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1520_95_OffsetPadding[1520];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1520
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1520_95;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1520_95_OffsetPadding_forAlignmentOnly[1520];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1520_95_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1536_96_OffsetPadding[1536];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1536
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1536_96;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1536_96_OffsetPadding_forAlignmentOnly[1536];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1536_96_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1552_97_OffsetPadding[1552];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1552
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1552_97;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1552_97_OffsetPadding_forAlignmentOnly[1552];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1552_97_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1568_98_OffsetPadding[1568];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1568
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1568_98;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1568_98_OffsetPadding_forAlignmentOnly[1568];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1568_98_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1584_99_OffsetPadding[1584];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1584
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1584_99;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1584_99_OffsetPadding_forAlignmentOnly[1584];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1584_99_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1600_100_OffsetPadding[1600];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1600
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1600_100;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1600_100_OffsetPadding_forAlignmentOnly[1600];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1600_100_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1616_101_OffsetPadding[1616];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1616
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1616_101;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1616_101_OffsetPadding_forAlignmentOnly[1616];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1616_101_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1632_102_OffsetPadding[1632];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1632
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1632_102;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1632_102_OffsetPadding_forAlignmentOnly[1632];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1632_102_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1648_103_OffsetPadding[1648];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1648
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1648_103;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1648_103_OffsetPadding_forAlignmentOnly[1648];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1648_103_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1664_104_OffsetPadding[1664];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1664
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1664_104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1664_104_OffsetPadding_forAlignmentOnly[1664];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1664_104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1680_105_OffsetPadding[1680];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1680
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1680_105;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1680_105_OffsetPadding_forAlignmentOnly[1680];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1680_105_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1696_106_OffsetPadding[1696];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1696
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1696_106;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1696_106_OffsetPadding_forAlignmentOnly[1696];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1696_106_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1712_107_OffsetPadding[1712];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1712
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1712_107;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1712_107_OffsetPadding_forAlignmentOnly[1712];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1712_107_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1728_108_OffsetPadding[1728];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1728
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1728_108;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1728_108_OffsetPadding_forAlignmentOnly[1728];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1728_108_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1744_109_OffsetPadding[1744];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1744
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1744_109;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1744_109_OffsetPadding_forAlignmentOnly[1744];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1744_109_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1760_110_OffsetPadding[1760];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1760
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1760_110;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1760_110_OffsetPadding_forAlignmentOnly[1760];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1760_110_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1776_111_OffsetPadding[1776];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1776
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1776_111;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1776_111_OffsetPadding_forAlignmentOnly[1776];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1776_111_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1792_112_OffsetPadding[1792];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1792
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1792_112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1792_112_OffsetPadding_forAlignmentOnly[1792];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1792_112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1808_113_OffsetPadding[1808];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1808
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1808_113;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1808_113_OffsetPadding_forAlignmentOnly[1808];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1808_113_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1824_114_OffsetPadding[1824];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1824
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1824_114;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1824_114_OffsetPadding_forAlignmentOnly[1824];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1824_114_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1840_115_OffsetPadding[1840];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1840
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1840_115;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1840_115_OffsetPadding_forAlignmentOnly[1840];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1840_115_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1856_116_OffsetPadding[1856];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1856
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1856_116;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1856_116_OffsetPadding_forAlignmentOnly[1856];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1856_116_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1872_117_OffsetPadding[1872];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1872
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1872_117;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1872_117_OffsetPadding_forAlignmentOnly[1872];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1872_117_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1888_118_OffsetPadding[1888];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1888
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1888_118;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1888_118_OffsetPadding_forAlignmentOnly[1888];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1888_118_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1904_119_OffsetPadding[1904];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1904
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1904_119;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1904_119_OffsetPadding_forAlignmentOnly[1904];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1904_119_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1920_120_OffsetPadding[1920];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1920
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1920_120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1920_120_OffsetPadding_forAlignmentOnly[1920];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1920_120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1936_121_OffsetPadding[1936];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1936
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1936_121;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1936_121_OffsetPadding_forAlignmentOnly[1936];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1936_121_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1952_122_OffsetPadding[1952];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1952
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1952_122;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1952_122_OffsetPadding_forAlignmentOnly[1952];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1952_122_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1968_123_OffsetPadding[1968];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1968
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1968_123;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1968_123_OffsetPadding_forAlignmentOnly[1968];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1968_123_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1984_124_OffsetPadding[1984];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset1984
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1984_124;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1984_124_OffsetPadding_forAlignmentOnly[1984];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset1984_124_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2000_125_OffsetPadding[2000];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2000
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2000_125;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2000_125_OffsetPadding_forAlignmentOnly[2000];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2000_125_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2016_126_OffsetPadding[2016];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2016
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2016_126;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2016_126_OffsetPadding_forAlignmentOnly[2016];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2016_126_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2032_127_OffsetPadding[2032];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2032
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2032_127;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2032_127_OffsetPadding_forAlignmentOnly[2032];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2032_127_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2048_128_OffsetPadding[2048];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2048
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2048_128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2048_128_OffsetPadding_forAlignmentOnly[2048];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2048_128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2064_129_OffsetPadding[2064];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2064
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2064_129;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2064_129_OffsetPadding_forAlignmentOnly[2064];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2064_129_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2080_130_OffsetPadding[2080];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2080
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2080_130;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2080_130_OffsetPadding_forAlignmentOnly[2080];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2080_130_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2096_131_OffsetPadding[2096];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2096
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2096_131;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2096_131_OffsetPadding_forAlignmentOnly[2096];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2096_131_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2112_132_OffsetPadding[2112];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2112
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2112_132;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2112_132_OffsetPadding_forAlignmentOnly[2112];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2112_132_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2128_133_OffsetPadding[2128];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2128
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2128_133;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2128_133_OffsetPadding_forAlignmentOnly[2128];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2128_133_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2144_134_OffsetPadding[2144];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2144
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2144_134;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2144_134_OffsetPadding_forAlignmentOnly[2144];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2144_134_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2160_135_OffsetPadding[2160];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2160
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2160_135;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2160_135_OffsetPadding_forAlignmentOnly[2160];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2160_135_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2176_136_OffsetPadding[2176];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2176
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2176_136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2176_136_OffsetPadding_forAlignmentOnly[2176];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2176_136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2192_137_OffsetPadding[2192];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2192
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2192_137;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2192_137_OffsetPadding_forAlignmentOnly[2192];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2192_137_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2208_138_OffsetPadding[2208];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2208
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2208_138;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2208_138_OffsetPadding_forAlignmentOnly[2208];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2208_138_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2224_139_OffsetPadding[2224];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2224
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2224_139;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2224_139_OffsetPadding_forAlignmentOnly[2224];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2224_139_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2240_140_OffsetPadding[2240];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2240
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2240_140;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2240_140_OffsetPadding_forAlignmentOnly[2240];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2240_140_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2256_141_OffsetPadding[2256];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2256
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2256_141;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2256_141_OffsetPadding_forAlignmentOnly[2256];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2256_141_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2272_142_OffsetPadding[2272];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2272
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2272_142;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2272_142_OffsetPadding_forAlignmentOnly[2272];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2272_142_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2288_143_OffsetPadding[2288];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2288
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2288_143;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2288_143_OffsetPadding_forAlignmentOnly[2288];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2288_143_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2304_144_OffsetPadding[2304];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2304
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2304_144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2304_144_OffsetPadding_forAlignmentOnly[2304];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2304_144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2320_145_OffsetPadding[2320];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2320
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2320_145;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2320_145_OffsetPadding_forAlignmentOnly[2320];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2320_145_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2336_146_OffsetPadding[2336];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2336
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2336_146;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2336_146_OffsetPadding_forAlignmentOnly[2336];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2336_146_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2352_147_OffsetPadding[2352];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2352
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2352_147;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2352_147_OffsetPadding_forAlignmentOnly[2352];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2352_147_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2368_148_OffsetPadding[2368];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2368
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2368_148;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2368_148_OffsetPadding_forAlignmentOnly[2368];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2368_148_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2384_149_OffsetPadding[2384];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2384
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2384_149;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2384_149_OffsetPadding_forAlignmentOnly[2384];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2384_149_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2400_150_OffsetPadding[2400];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2400
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2400_150;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2400_150_OffsetPadding_forAlignmentOnly[2400];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2400_150_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2416_151_OffsetPadding[2416];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2416
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2416_151;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2416_151_OffsetPadding_forAlignmentOnly[2416];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2416_151_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2432_152_OffsetPadding[2432];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2432
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2432_152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2432_152_OffsetPadding_forAlignmentOnly[2432];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2432_152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2448_153_OffsetPadding[2448];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2448
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2448_153;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2448_153_OffsetPadding_forAlignmentOnly[2448];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2448_153_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2464_154_OffsetPadding[2464];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2464
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2464_154;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2464_154_OffsetPadding_forAlignmentOnly[2464];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2464_154_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2480_155_OffsetPadding[2480];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2480
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2480_155;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2480_155_OffsetPadding_forAlignmentOnly[2480];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2480_155_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2496_156_OffsetPadding[2496];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2496
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2496_156;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2496_156_OffsetPadding_forAlignmentOnly[2496];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2496_156_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2512_157_OffsetPadding[2512];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2512
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2512_157;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2512_157_OffsetPadding_forAlignmentOnly[2512];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2512_157_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2528_158_OffsetPadding[2528];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2528
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2528_158;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2528_158_OffsetPadding_forAlignmentOnly[2528];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2528_158_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2544_159_OffsetPadding[2544];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2544
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2544_159;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2544_159_OffsetPadding_forAlignmentOnly[2544];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2544_159_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2560_160_OffsetPadding[2560];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2560
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2560_160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2560_160_OffsetPadding_forAlignmentOnly[2560];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2560_160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2576_161_OffsetPadding[2576];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2576
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2576_161;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2576_161_OffsetPadding_forAlignmentOnly[2576];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2576_161_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2592_162_OffsetPadding[2592];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2592
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2592_162;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2592_162_OffsetPadding_forAlignmentOnly[2592];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2592_162_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2608_163_OffsetPadding[2608];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2608
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2608_163;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2608_163_OffsetPadding_forAlignmentOnly[2608];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2608_163_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2624_164_OffsetPadding[2624];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2624
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2624_164;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2624_164_OffsetPadding_forAlignmentOnly[2624];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2624_164_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2640_165_OffsetPadding[2640];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2640
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2640_165;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2640_165_OffsetPadding_forAlignmentOnly[2640];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2640_165_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2656_166_OffsetPadding[2656];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2656
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2656_166;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2656_166_OffsetPadding_forAlignmentOnly[2656];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2656_166_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2672_167_OffsetPadding[2672];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2672
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2672_167;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2672_167_OffsetPadding_forAlignmentOnly[2672];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2672_167_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2688_168_OffsetPadding[2688];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2688
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2688_168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2688_168_OffsetPadding_forAlignmentOnly[2688];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2688_168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2704_169_OffsetPadding[2704];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2704
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2704_169;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2704_169_OffsetPadding_forAlignmentOnly[2704];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2704_169_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2720_170_OffsetPadding[2720];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2720
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2720_170;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2720_170_OffsetPadding_forAlignmentOnly[2720];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2720_170_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2736_171_OffsetPadding[2736];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2736
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2736_171;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2736_171_OffsetPadding_forAlignmentOnly[2736];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2736_171_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2752_172_OffsetPadding[2752];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2752
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2752_172;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2752_172_OffsetPadding_forAlignmentOnly[2752];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2752_172_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2768_173_OffsetPadding[2768];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2768
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2768_173;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2768_173_OffsetPadding_forAlignmentOnly[2768];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2768_173_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2784_174_OffsetPadding[2784];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2784
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2784_174;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2784_174_OffsetPadding_forAlignmentOnly[2784];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2784_174_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2800_175_OffsetPadding[2800];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2800
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2800_175;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2800_175_OffsetPadding_forAlignmentOnly[2800];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2800_175_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2816_176_OffsetPadding[2816];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2816
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2816_176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2816_176_OffsetPadding_forAlignmentOnly[2816];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2816_176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2832_177_OffsetPadding[2832];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2832
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2832_177;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2832_177_OffsetPadding_forAlignmentOnly[2832];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2832_177_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2848_178_OffsetPadding[2848];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2848
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2848_178;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2848_178_OffsetPadding_forAlignmentOnly[2848];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2848_178_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2864_179_OffsetPadding[2864];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2864
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2864_179;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2864_179_OffsetPadding_forAlignmentOnly[2864];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2864_179_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2880_180_OffsetPadding[2880];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2880
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2880_180;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2880_180_OffsetPadding_forAlignmentOnly[2880];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2880_180_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2896_181_OffsetPadding[2896];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2896
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2896_181;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2896_181_OffsetPadding_forAlignmentOnly[2896];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2896_181_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2912_182_OffsetPadding[2912];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2912
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2912_182;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2912_182_OffsetPadding_forAlignmentOnly[2912];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2912_182_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2928_183_OffsetPadding[2928];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2928
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2928_183;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2928_183_OffsetPadding_forAlignmentOnly[2928];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2928_183_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2944_184_OffsetPadding[2944];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2944
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2944_184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2944_184_OffsetPadding_forAlignmentOnly[2944];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2944_184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2960_185_OffsetPadding[2960];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2960
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2960_185;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2960_185_OffsetPadding_forAlignmentOnly[2960];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2960_185_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2976_186_OffsetPadding[2976];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2976
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2976_186;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2976_186_OffsetPadding_forAlignmentOnly[2976];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2976_186_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2992_187_OffsetPadding[2992];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset2992
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2992_187;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2992_187_OffsetPadding_forAlignmentOnly[2992];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset2992_187_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3008_188_OffsetPadding[3008];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3008
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3008_188;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3008_188_OffsetPadding_forAlignmentOnly[3008];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3008_188_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3024_189_OffsetPadding[3024];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3024
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3024_189;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3024_189_OffsetPadding_forAlignmentOnly[3024];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3024_189_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3040_190_OffsetPadding[3040];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3040
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3040_190;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3040_190_OffsetPadding_forAlignmentOnly[3040];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3040_190_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3056_191_OffsetPadding[3056];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3056
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3056_191;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3056_191_OffsetPadding_forAlignmentOnly[3056];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3056_191_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3072_192_OffsetPadding[3072];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3072
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3072_192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3072_192_OffsetPadding_forAlignmentOnly[3072];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3072_192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3088_193_OffsetPadding[3088];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3088
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3088_193;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3088_193_OffsetPadding_forAlignmentOnly[3088];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3088_193_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3104_194_OffsetPadding[3104];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3104
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3104_194;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3104_194_OffsetPadding_forAlignmentOnly[3104];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3104_194_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3120_195_OffsetPadding[3120];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3120
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3120_195;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3120_195_OffsetPadding_forAlignmentOnly[3120];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3120_195_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3136_196_OffsetPadding[3136];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3136
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3136_196;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3136_196_OffsetPadding_forAlignmentOnly[3136];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3136_196_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3152_197_OffsetPadding[3152];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3152
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3152_197;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3152_197_OffsetPadding_forAlignmentOnly[3152];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3152_197_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3168_198_OffsetPadding[3168];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3168
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3168_198;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3168_198_OffsetPadding_forAlignmentOnly[3168];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3168_198_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3184_199_OffsetPadding[3184];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3184
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3184_199;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3184_199_OffsetPadding_forAlignmentOnly[3184];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3184_199_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3200_200_OffsetPadding[3200];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3200
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3200_200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3200_200_OffsetPadding_forAlignmentOnly[3200];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3200_200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3216_201_OffsetPadding[3216];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3216
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3216_201;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3216_201_OffsetPadding_forAlignmentOnly[3216];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3216_201_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3232_202_OffsetPadding[3232];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3232
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3232_202;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3232_202_OffsetPadding_forAlignmentOnly[3232];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3232_202_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3248_203_OffsetPadding[3248];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3248
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3248_203;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3248_203_OffsetPadding_forAlignmentOnly[3248];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3248_203_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3264_204_OffsetPadding[3264];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3264
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3264_204;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3264_204_OffsetPadding_forAlignmentOnly[3264];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3264_204_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3280_205_OffsetPadding[3280];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3280
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3280_205;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3280_205_OffsetPadding_forAlignmentOnly[3280];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3280_205_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3296_206_OffsetPadding[3296];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3296
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3296_206;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3296_206_OffsetPadding_forAlignmentOnly[3296];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3296_206_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3312_207_OffsetPadding[3312];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3312
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3312_207;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3312_207_OffsetPadding_forAlignmentOnly[3312];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3312_207_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3328_208_OffsetPadding[3328];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3328
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3328_208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3328_208_OffsetPadding_forAlignmentOnly[3328];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3328_208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3344_209_OffsetPadding[3344];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3344
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3344_209;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3344_209_OffsetPadding_forAlignmentOnly[3344];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3344_209_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3360_210_OffsetPadding[3360];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3360
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3360_210;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3360_210_OffsetPadding_forAlignmentOnly[3360];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3360_210_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3376_211_OffsetPadding[3376];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3376
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3376_211;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3376_211_OffsetPadding_forAlignmentOnly[3376];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3376_211_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3392_212_OffsetPadding[3392];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3392
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3392_212;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3392_212_OffsetPadding_forAlignmentOnly[3392];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3392_212_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3408_213_OffsetPadding[3408];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3408
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3408_213;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3408_213_OffsetPadding_forAlignmentOnly[3408];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3408_213_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3424_214_OffsetPadding[3424];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3424
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3424_214;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3424_214_OffsetPadding_forAlignmentOnly[3424];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3424_214_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3440_215_OffsetPadding[3440];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3440
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3440_215;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3440_215_OffsetPadding_forAlignmentOnly[3440];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3440_215_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3456_216_OffsetPadding[3456];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3456
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3456_216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3456_216_OffsetPadding_forAlignmentOnly[3456];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3456_216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3472_217_OffsetPadding[3472];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3472
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3472_217;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3472_217_OffsetPadding_forAlignmentOnly[3472];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3472_217_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3488_218_OffsetPadding[3488];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3488
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3488_218;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3488_218_OffsetPadding_forAlignmentOnly[3488];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3488_218_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3504_219_OffsetPadding[3504];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3504
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3504_219;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3504_219_OffsetPadding_forAlignmentOnly[3504];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3504_219_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3520_220_OffsetPadding[3520];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3520
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3520_220;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3520_220_OffsetPadding_forAlignmentOnly[3520];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3520_220_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3536_221_OffsetPadding[3536];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3536
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3536_221;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3536_221_OffsetPadding_forAlignmentOnly[3536];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3536_221_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3552_222_OffsetPadding[3552];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3552
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3552_222;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3552_222_OffsetPadding_forAlignmentOnly[3552];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3552_222_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3568_223_OffsetPadding[3568];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3568
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3568_223;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3568_223_OffsetPadding_forAlignmentOnly[3568];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3568_223_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3584_224_OffsetPadding[3584];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3584
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3584_224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3584_224_OffsetPadding_forAlignmentOnly[3584];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3584_224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3600_225_OffsetPadding[3600];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3600
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3600_225;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3600_225_OffsetPadding_forAlignmentOnly[3600];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3600_225_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3616_226_OffsetPadding[3616];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3616
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3616_226;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3616_226_OffsetPadding_forAlignmentOnly[3616];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3616_226_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3632_227_OffsetPadding[3632];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3632
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3632_227;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3632_227_OffsetPadding_forAlignmentOnly[3632];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3632_227_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3648_228_OffsetPadding[3648];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3648
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3648_228;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3648_228_OffsetPadding_forAlignmentOnly[3648];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3648_228_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3664_229_OffsetPadding[3664];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3664
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3664_229;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3664_229_OffsetPadding_forAlignmentOnly[3664];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3664_229_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3680_230_OffsetPadding[3680];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3680
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3680_230;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3680_230_OffsetPadding_forAlignmentOnly[3680];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3680_230_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3696_231_OffsetPadding[3696];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3696
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3696_231;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3696_231_OffsetPadding_forAlignmentOnly[3696];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3696_231_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3712_232_OffsetPadding[3712];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3712
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3712_232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3712_232_OffsetPadding_forAlignmentOnly[3712];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3712_232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3728_233_OffsetPadding[3728];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3728
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3728_233;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3728_233_OffsetPadding_forAlignmentOnly[3728];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3728_233_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3744_234_OffsetPadding[3744];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3744
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3744_234;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3744_234_OffsetPadding_forAlignmentOnly[3744];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3744_234_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3760_235_OffsetPadding[3760];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3760
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3760_235;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3760_235_OffsetPadding_forAlignmentOnly[3760];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3760_235_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3776_236_OffsetPadding[3776];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3776
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3776_236;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3776_236_OffsetPadding_forAlignmentOnly[3776];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3776_236_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3792_237_OffsetPadding[3792];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3792
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3792_237;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3792_237_OffsetPadding_forAlignmentOnly[3792];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3792_237_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3808_238_OffsetPadding[3808];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3808
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3808_238;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3808_238_OffsetPadding_forAlignmentOnly[3808];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3808_238_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3824_239_OffsetPadding[3824];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3824
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3824_239;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3824_239_OffsetPadding_forAlignmentOnly[3824];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3824_239_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3840_240_OffsetPadding[3840];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3840
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3840_240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3840_240_OffsetPadding_forAlignmentOnly[3840];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3840_240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3856_241_OffsetPadding[3856];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3856
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3856_241;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3856_241_OffsetPadding_forAlignmentOnly[3856];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3856_241_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3872_242_OffsetPadding[3872];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3872
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3872_242;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3872_242_OffsetPadding_forAlignmentOnly[3872];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3872_242_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3888_243_OffsetPadding[3888];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3888
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3888_243;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3888_243_OffsetPadding_forAlignmentOnly[3888];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3888_243_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3904_244_OffsetPadding[3904];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3904
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3904_244;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3904_244_OffsetPadding_forAlignmentOnly[3904];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3904_244_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3920_245_OffsetPadding[3920];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3920
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3920_245;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3920_245_OffsetPadding_forAlignmentOnly[3920];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3920_245_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3936_246_OffsetPadding[3936];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3936
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3936_246;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3936_246_OffsetPadding_forAlignmentOnly[3936];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3936_246_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3952_247_OffsetPadding[3952];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3952
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3952_247;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3952_247_OffsetPadding_forAlignmentOnly[3952];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3952_247_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3968_248_OffsetPadding[3968];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3968
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3968_248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3968_248_OffsetPadding_forAlignmentOnly[3968];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3968_248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3984_249_OffsetPadding[3984];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset3984
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3984_249;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3984_249_OffsetPadding_forAlignmentOnly[3984];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset3984_249_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4000_250_OffsetPadding[4000];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4000
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4000_250;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4000_250_OffsetPadding_forAlignmentOnly[4000];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4000_250_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4016_251_OffsetPadding[4016];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4016
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4016_251;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4016_251_OffsetPadding_forAlignmentOnly[4016];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4016_251_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4032_252_OffsetPadding[4032];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4032
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4032_252;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4032_252_OffsetPadding_forAlignmentOnly[4032];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4032_252_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4048_253_OffsetPadding[4048];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4048
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4048_253;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4048_253_OffsetPadding_forAlignmentOnly[4048];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4048_253_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4064_254_OffsetPadding[4064];
					// Unity.Collections.FixedBytes16 Unity.Collections.FixedBytes4094::offset4064
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4064_254;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4064_254_OffsetPadding_forAlignmentOnly[4064];
					FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  ___offset4064_254_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4080_255_OffsetPadding[4080];
					// System.Byte Unity.Collections.FixedBytes4094::byte4080
					uint8_t ___byte4080_255;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4080_255_OffsetPadding_forAlignmentOnly[4080];
					uint8_t ___byte4080_255_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4081_256_OffsetPadding[4081];
					// System.Byte Unity.Collections.FixedBytes4094::byte4081
					uint8_t ___byte4081_256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4081_256_OffsetPadding_forAlignmentOnly[4081];
					uint8_t ___byte4081_256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4082_257_OffsetPadding[4082];
					// System.Byte Unity.Collections.FixedBytes4094::byte4082
					uint8_t ___byte4082_257;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4082_257_OffsetPadding_forAlignmentOnly[4082];
					uint8_t ___byte4082_257_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4083_258_OffsetPadding[4083];
					// System.Byte Unity.Collections.FixedBytes4094::byte4083
					uint8_t ___byte4083_258;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4083_258_OffsetPadding_forAlignmentOnly[4083];
					uint8_t ___byte4083_258_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4084_259_OffsetPadding[4084];
					// System.Byte Unity.Collections.FixedBytes4094::byte4084
					uint8_t ___byte4084_259;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4084_259_OffsetPadding_forAlignmentOnly[4084];
					uint8_t ___byte4084_259_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4085_260_OffsetPadding[4085];
					// System.Byte Unity.Collections.FixedBytes4094::byte4085
					uint8_t ___byte4085_260;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4085_260_OffsetPadding_forAlignmentOnly[4085];
					uint8_t ___byte4085_260_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4086_261_OffsetPadding[4086];
					// System.Byte Unity.Collections.FixedBytes4094::byte4086
					uint8_t ___byte4086_261;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4086_261_OffsetPadding_forAlignmentOnly[4086];
					uint8_t ___byte4086_261_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4087_262_OffsetPadding[4087];
					// System.Byte Unity.Collections.FixedBytes4094::byte4087
					uint8_t ___byte4087_262;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4087_262_OffsetPadding_forAlignmentOnly[4087];
					uint8_t ___byte4087_262_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4088_263_OffsetPadding[4088];
					// System.Byte Unity.Collections.FixedBytes4094::byte4088
					uint8_t ___byte4088_263;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4088_263_OffsetPadding_forAlignmentOnly[4088];
					uint8_t ___byte4088_263_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4089_264_OffsetPadding[4089];
					// System.Byte Unity.Collections.FixedBytes4094::byte4089
					uint8_t ___byte4089_264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4089_264_OffsetPadding_forAlignmentOnly[4089];
					uint8_t ___byte4089_264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4090_265_OffsetPadding[4090];
					// System.Byte Unity.Collections.FixedBytes4094::byte4090
					uint8_t ___byte4090_265;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4090_265_OffsetPadding_forAlignmentOnly[4090];
					uint8_t ___byte4090_265_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4091_266_OffsetPadding[4091];
					// System.Byte Unity.Collections.FixedBytes4094::byte4091
					uint8_t ___byte4091_266;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4091_266_OffsetPadding_forAlignmentOnly[4091];
					uint8_t ___byte4091_266_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4092_267_OffsetPadding[4092];
					// System.Byte Unity.Collections.FixedBytes4094::byte4092
					uint8_t ___byte4092_267;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4092_267_OffsetPadding_forAlignmentOnly[4092];
					uint8_t ___byte4092_267_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte4093_268_OffsetPadding[4093];
					// System.Byte Unity.Collections.FixedBytes4094::byte4093
					uint8_t ___byte4093_268;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte4093_268_OffsetPadding_forAlignmentOnly[4093];
					uint8_t ___byte4093_268_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150__padding[4094];
	};

public:
	inline static int32_t get_offset_of_offset0000_0() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0000_0)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0000_0() const { return ___offset0000_0; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0000_0() { return &___offset0000_0; }
	inline void set_offset0000_0(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0000_0 = value;
	}

	inline static int32_t get_offset_of_offset0016_1() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0016_1)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0016_1() const { return ___offset0016_1; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0016_1() { return &___offset0016_1; }
	inline void set_offset0016_1(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0016_1 = value;
	}

	inline static int32_t get_offset_of_offset0032_2() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0032_2)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0032_2() const { return ___offset0032_2; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0032_2() { return &___offset0032_2; }
	inline void set_offset0032_2(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0032_2 = value;
	}

	inline static int32_t get_offset_of_offset0048_3() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0048_3)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0048_3() const { return ___offset0048_3; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0048_3() { return &___offset0048_3; }
	inline void set_offset0048_3(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0048_3 = value;
	}

	inline static int32_t get_offset_of_offset0064_4() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0064_4)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0064_4() const { return ___offset0064_4; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0064_4() { return &___offset0064_4; }
	inline void set_offset0064_4(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0064_4 = value;
	}

	inline static int32_t get_offset_of_offset0080_5() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0080_5)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0080_5() const { return ___offset0080_5; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0080_5() { return &___offset0080_5; }
	inline void set_offset0080_5(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0080_5 = value;
	}

	inline static int32_t get_offset_of_offset0096_6() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0096_6)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0096_6() const { return ___offset0096_6; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0096_6() { return &___offset0096_6; }
	inline void set_offset0096_6(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0096_6 = value;
	}

	inline static int32_t get_offset_of_offset0112_7() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0112_7)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0112_7() const { return ___offset0112_7; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0112_7() { return &___offset0112_7; }
	inline void set_offset0112_7(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0112_7 = value;
	}

	inline static int32_t get_offset_of_offset0128_8() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0128_8)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0128_8() const { return ___offset0128_8; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0128_8() { return &___offset0128_8; }
	inline void set_offset0128_8(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0128_8 = value;
	}

	inline static int32_t get_offset_of_offset0144_9() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0144_9)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0144_9() const { return ___offset0144_9; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0144_9() { return &___offset0144_9; }
	inline void set_offset0144_9(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0144_9 = value;
	}

	inline static int32_t get_offset_of_offset0160_10() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0160_10)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0160_10() const { return ___offset0160_10; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0160_10() { return &___offset0160_10; }
	inline void set_offset0160_10(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0160_10 = value;
	}

	inline static int32_t get_offset_of_offset0176_11() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0176_11)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0176_11() const { return ___offset0176_11; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0176_11() { return &___offset0176_11; }
	inline void set_offset0176_11(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0176_11 = value;
	}

	inline static int32_t get_offset_of_offset0192_12() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0192_12)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0192_12() const { return ___offset0192_12; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0192_12() { return &___offset0192_12; }
	inline void set_offset0192_12(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0192_12 = value;
	}

	inline static int32_t get_offset_of_offset0208_13() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0208_13)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0208_13() const { return ___offset0208_13; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0208_13() { return &___offset0208_13; }
	inline void set_offset0208_13(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0208_13 = value;
	}

	inline static int32_t get_offset_of_offset0224_14() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0224_14)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0224_14() const { return ___offset0224_14; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0224_14() { return &___offset0224_14; }
	inline void set_offset0224_14(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0224_14 = value;
	}

	inline static int32_t get_offset_of_offset0240_15() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0240_15)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0240_15() const { return ___offset0240_15; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0240_15() { return &___offset0240_15; }
	inline void set_offset0240_15(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0240_15 = value;
	}

	inline static int32_t get_offset_of_offset0256_16() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0256_16)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0256_16() const { return ___offset0256_16; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0256_16() { return &___offset0256_16; }
	inline void set_offset0256_16(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0256_16 = value;
	}

	inline static int32_t get_offset_of_offset0272_17() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0272_17)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0272_17() const { return ___offset0272_17; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0272_17() { return &___offset0272_17; }
	inline void set_offset0272_17(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0272_17 = value;
	}

	inline static int32_t get_offset_of_offset0288_18() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0288_18)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0288_18() const { return ___offset0288_18; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0288_18() { return &___offset0288_18; }
	inline void set_offset0288_18(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0288_18 = value;
	}

	inline static int32_t get_offset_of_offset0304_19() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0304_19)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0304_19() const { return ___offset0304_19; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0304_19() { return &___offset0304_19; }
	inline void set_offset0304_19(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0304_19 = value;
	}

	inline static int32_t get_offset_of_offset0320_20() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0320_20)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0320_20() const { return ___offset0320_20; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0320_20() { return &___offset0320_20; }
	inline void set_offset0320_20(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0320_20 = value;
	}

	inline static int32_t get_offset_of_offset0336_21() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0336_21)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0336_21() const { return ___offset0336_21; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0336_21() { return &___offset0336_21; }
	inline void set_offset0336_21(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0336_21 = value;
	}

	inline static int32_t get_offset_of_offset0352_22() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0352_22)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0352_22() const { return ___offset0352_22; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0352_22() { return &___offset0352_22; }
	inline void set_offset0352_22(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0352_22 = value;
	}

	inline static int32_t get_offset_of_offset0368_23() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0368_23)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0368_23() const { return ___offset0368_23; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0368_23() { return &___offset0368_23; }
	inline void set_offset0368_23(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0368_23 = value;
	}

	inline static int32_t get_offset_of_offset0384_24() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0384_24)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0384_24() const { return ___offset0384_24; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0384_24() { return &___offset0384_24; }
	inline void set_offset0384_24(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0384_24 = value;
	}

	inline static int32_t get_offset_of_offset0400_25() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0400_25)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0400_25() const { return ___offset0400_25; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0400_25() { return &___offset0400_25; }
	inline void set_offset0400_25(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0400_25 = value;
	}

	inline static int32_t get_offset_of_offset0416_26() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0416_26)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0416_26() const { return ___offset0416_26; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0416_26() { return &___offset0416_26; }
	inline void set_offset0416_26(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0416_26 = value;
	}

	inline static int32_t get_offset_of_offset0432_27() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0432_27)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0432_27() const { return ___offset0432_27; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0432_27() { return &___offset0432_27; }
	inline void set_offset0432_27(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0432_27 = value;
	}

	inline static int32_t get_offset_of_offset0448_28() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0448_28)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0448_28() const { return ___offset0448_28; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0448_28() { return &___offset0448_28; }
	inline void set_offset0448_28(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0448_28 = value;
	}

	inline static int32_t get_offset_of_offset0464_29() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0464_29)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0464_29() const { return ___offset0464_29; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0464_29() { return &___offset0464_29; }
	inline void set_offset0464_29(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0464_29 = value;
	}

	inline static int32_t get_offset_of_offset0480_30() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0480_30)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0480_30() const { return ___offset0480_30; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0480_30() { return &___offset0480_30; }
	inline void set_offset0480_30(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0480_30 = value;
	}

	inline static int32_t get_offset_of_offset0496_31() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0496_31)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0496_31() const { return ___offset0496_31; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0496_31() { return &___offset0496_31; }
	inline void set_offset0496_31(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0496_31 = value;
	}

	inline static int32_t get_offset_of_offset0512_32() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0512_32)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0512_32() const { return ___offset0512_32; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0512_32() { return &___offset0512_32; }
	inline void set_offset0512_32(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0512_32 = value;
	}

	inline static int32_t get_offset_of_offset0528_33() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0528_33)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0528_33() const { return ___offset0528_33; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0528_33() { return &___offset0528_33; }
	inline void set_offset0528_33(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0528_33 = value;
	}

	inline static int32_t get_offset_of_offset0544_34() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0544_34)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0544_34() const { return ___offset0544_34; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0544_34() { return &___offset0544_34; }
	inline void set_offset0544_34(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0544_34 = value;
	}

	inline static int32_t get_offset_of_offset0560_35() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0560_35)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0560_35() const { return ___offset0560_35; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0560_35() { return &___offset0560_35; }
	inline void set_offset0560_35(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0560_35 = value;
	}

	inline static int32_t get_offset_of_offset0576_36() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0576_36)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0576_36() const { return ___offset0576_36; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0576_36() { return &___offset0576_36; }
	inline void set_offset0576_36(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0576_36 = value;
	}

	inline static int32_t get_offset_of_offset0592_37() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0592_37)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0592_37() const { return ___offset0592_37; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0592_37() { return &___offset0592_37; }
	inline void set_offset0592_37(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0592_37 = value;
	}

	inline static int32_t get_offset_of_offset0608_38() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0608_38)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0608_38() const { return ___offset0608_38; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0608_38() { return &___offset0608_38; }
	inline void set_offset0608_38(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0608_38 = value;
	}

	inline static int32_t get_offset_of_offset0624_39() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0624_39)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0624_39() const { return ___offset0624_39; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0624_39() { return &___offset0624_39; }
	inline void set_offset0624_39(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0624_39 = value;
	}

	inline static int32_t get_offset_of_offset0640_40() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0640_40)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0640_40() const { return ___offset0640_40; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0640_40() { return &___offset0640_40; }
	inline void set_offset0640_40(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0640_40 = value;
	}

	inline static int32_t get_offset_of_offset0656_41() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0656_41)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0656_41() const { return ___offset0656_41; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0656_41() { return &___offset0656_41; }
	inline void set_offset0656_41(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0656_41 = value;
	}

	inline static int32_t get_offset_of_offset0672_42() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0672_42)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0672_42() const { return ___offset0672_42; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0672_42() { return &___offset0672_42; }
	inline void set_offset0672_42(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0672_42 = value;
	}

	inline static int32_t get_offset_of_offset0688_43() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0688_43)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0688_43() const { return ___offset0688_43; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0688_43() { return &___offset0688_43; }
	inline void set_offset0688_43(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0688_43 = value;
	}

	inline static int32_t get_offset_of_offset0704_44() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0704_44)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0704_44() const { return ___offset0704_44; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0704_44() { return &___offset0704_44; }
	inline void set_offset0704_44(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0704_44 = value;
	}

	inline static int32_t get_offset_of_offset0720_45() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0720_45)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0720_45() const { return ___offset0720_45; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0720_45() { return &___offset0720_45; }
	inline void set_offset0720_45(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0720_45 = value;
	}

	inline static int32_t get_offset_of_offset0736_46() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0736_46)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0736_46() const { return ___offset0736_46; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0736_46() { return &___offset0736_46; }
	inline void set_offset0736_46(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0736_46 = value;
	}

	inline static int32_t get_offset_of_offset0752_47() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0752_47)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0752_47() const { return ___offset0752_47; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0752_47() { return &___offset0752_47; }
	inline void set_offset0752_47(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0752_47 = value;
	}

	inline static int32_t get_offset_of_offset0768_48() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0768_48)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0768_48() const { return ___offset0768_48; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0768_48() { return &___offset0768_48; }
	inline void set_offset0768_48(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0768_48 = value;
	}

	inline static int32_t get_offset_of_offset0784_49() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0784_49)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0784_49() const { return ___offset0784_49; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0784_49() { return &___offset0784_49; }
	inline void set_offset0784_49(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0784_49 = value;
	}

	inline static int32_t get_offset_of_offset0800_50() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0800_50)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0800_50() const { return ___offset0800_50; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0800_50() { return &___offset0800_50; }
	inline void set_offset0800_50(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0800_50 = value;
	}

	inline static int32_t get_offset_of_offset0816_51() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0816_51)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0816_51() const { return ___offset0816_51; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0816_51() { return &___offset0816_51; }
	inline void set_offset0816_51(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0816_51 = value;
	}

	inline static int32_t get_offset_of_offset0832_52() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0832_52)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0832_52() const { return ___offset0832_52; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0832_52() { return &___offset0832_52; }
	inline void set_offset0832_52(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0832_52 = value;
	}

	inline static int32_t get_offset_of_offset0848_53() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0848_53)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0848_53() const { return ___offset0848_53; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0848_53() { return &___offset0848_53; }
	inline void set_offset0848_53(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0848_53 = value;
	}

	inline static int32_t get_offset_of_offset0864_54() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0864_54)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0864_54() const { return ___offset0864_54; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0864_54() { return &___offset0864_54; }
	inline void set_offset0864_54(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0864_54 = value;
	}

	inline static int32_t get_offset_of_offset0880_55() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0880_55)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0880_55() const { return ___offset0880_55; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0880_55() { return &___offset0880_55; }
	inline void set_offset0880_55(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0880_55 = value;
	}

	inline static int32_t get_offset_of_offset0896_56() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0896_56)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0896_56() const { return ___offset0896_56; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0896_56() { return &___offset0896_56; }
	inline void set_offset0896_56(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0896_56 = value;
	}

	inline static int32_t get_offset_of_offset0912_57() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0912_57)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0912_57() const { return ___offset0912_57; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0912_57() { return &___offset0912_57; }
	inline void set_offset0912_57(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0912_57 = value;
	}

	inline static int32_t get_offset_of_offset0928_58() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0928_58)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0928_58() const { return ___offset0928_58; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0928_58() { return &___offset0928_58; }
	inline void set_offset0928_58(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0928_58 = value;
	}

	inline static int32_t get_offset_of_offset0944_59() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0944_59)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0944_59() const { return ___offset0944_59; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0944_59() { return &___offset0944_59; }
	inline void set_offset0944_59(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0944_59 = value;
	}

	inline static int32_t get_offset_of_offset0960_60() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0960_60)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0960_60() const { return ___offset0960_60; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0960_60() { return &___offset0960_60; }
	inline void set_offset0960_60(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0960_60 = value;
	}

	inline static int32_t get_offset_of_offset0976_61() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0976_61)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0976_61() const { return ___offset0976_61; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0976_61() { return &___offset0976_61; }
	inline void set_offset0976_61(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0976_61 = value;
	}

	inline static int32_t get_offset_of_offset0992_62() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset0992_62)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset0992_62() const { return ___offset0992_62; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset0992_62() { return &___offset0992_62; }
	inline void set_offset0992_62(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset0992_62 = value;
	}

	inline static int32_t get_offset_of_offset1008_63() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1008_63)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1008_63() const { return ___offset1008_63; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1008_63() { return &___offset1008_63; }
	inline void set_offset1008_63(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1008_63 = value;
	}

	inline static int32_t get_offset_of_offset1024_64() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1024_64)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1024_64() const { return ___offset1024_64; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1024_64() { return &___offset1024_64; }
	inline void set_offset1024_64(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1024_64 = value;
	}

	inline static int32_t get_offset_of_offset1040_65() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1040_65)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1040_65() const { return ___offset1040_65; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1040_65() { return &___offset1040_65; }
	inline void set_offset1040_65(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1040_65 = value;
	}

	inline static int32_t get_offset_of_offset1056_66() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1056_66)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1056_66() const { return ___offset1056_66; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1056_66() { return &___offset1056_66; }
	inline void set_offset1056_66(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1056_66 = value;
	}

	inline static int32_t get_offset_of_offset1072_67() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1072_67)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1072_67() const { return ___offset1072_67; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1072_67() { return &___offset1072_67; }
	inline void set_offset1072_67(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1072_67 = value;
	}

	inline static int32_t get_offset_of_offset1088_68() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1088_68)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1088_68() const { return ___offset1088_68; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1088_68() { return &___offset1088_68; }
	inline void set_offset1088_68(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1088_68 = value;
	}

	inline static int32_t get_offset_of_offset1104_69() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1104_69)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1104_69() const { return ___offset1104_69; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1104_69() { return &___offset1104_69; }
	inline void set_offset1104_69(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1104_69 = value;
	}

	inline static int32_t get_offset_of_offset1120_70() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1120_70)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1120_70() const { return ___offset1120_70; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1120_70() { return &___offset1120_70; }
	inline void set_offset1120_70(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1120_70 = value;
	}

	inline static int32_t get_offset_of_offset1136_71() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1136_71)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1136_71() const { return ___offset1136_71; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1136_71() { return &___offset1136_71; }
	inline void set_offset1136_71(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1136_71 = value;
	}

	inline static int32_t get_offset_of_offset1152_72() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1152_72)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1152_72() const { return ___offset1152_72; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1152_72() { return &___offset1152_72; }
	inline void set_offset1152_72(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1152_72 = value;
	}

	inline static int32_t get_offset_of_offset1168_73() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1168_73)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1168_73() const { return ___offset1168_73; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1168_73() { return &___offset1168_73; }
	inline void set_offset1168_73(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1168_73 = value;
	}

	inline static int32_t get_offset_of_offset1184_74() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1184_74)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1184_74() const { return ___offset1184_74; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1184_74() { return &___offset1184_74; }
	inline void set_offset1184_74(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1184_74 = value;
	}

	inline static int32_t get_offset_of_offset1200_75() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1200_75)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1200_75() const { return ___offset1200_75; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1200_75() { return &___offset1200_75; }
	inline void set_offset1200_75(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1200_75 = value;
	}

	inline static int32_t get_offset_of_offset1216_76() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1216_76)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1216_76() const { return ___offset1216_76; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1216_76() { return &___offset1216_76; }
	inline void set_offset1216_76(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1216_76 = value;
	}

	inline static int32_t get_offset_of_offset1232_77() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1232_77)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1232_77() const { return ___offset1232_77; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1232_77() { return &___offset1232_77; }
	inline void set_offset1232_77(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1232_77 = value;
	}

	inline static int32_t get_offset_of_offset1248_78() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1248_78)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1248_78() const { return ___offset1248_78; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1248_78() { return &___offset1248_78; }
	inline void set_offset1248_78(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1248_78 = value;
	}

	inline static int32_t get_offset_of_offset1264_79() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1264_79)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1264_79() const { return ___offset1264_79; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1264_79() { return &___offset1264_79; }
	inline void set_offset1264_79(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1264_79 = value;
	}

	inline static int32_t get_offset_of_offset1280_80() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1280_80)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1280_80() const { return ___offset1280_80; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1280_80() { return &___offset1280_80; }
	inline void set_offset1280_80(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1280_80 = value;
	}

	inline static int32_t get_offset_of_offset1296_81() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1296_81)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1296_81() const { return ___offset1296_81; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1296_81() { return &___offset1296_81; }
	inline void set_offset1296_81(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1296_81 = value;
	}

	inline static int32_t get_offset_of_offset1312_82() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1312_82)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1312_82() const { return ___offset1312_82; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1312_82() { return &___offset1312_82; }
	inline void set_offset1312_82(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1312_82 = value;
	}

	inline static int32_t get_offset_of_offset1328_83() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1328_83)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1328_83() const { return ___offset1328_83; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1328_83() { return &___offset1328_83; }
	inline void set_offset1328_83(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1328_83 = value;
	}

	inline static int32_t get_offset_of_offset1344_84() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1344_84)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1344_84() const { return ___offset1344_84; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1344_84() { return &___offset1344_84; }
	inline void set_offset1344_84(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1344_84 = value;
	}

	inline static int32_t get_offset_of_offset1360_85() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1360_85)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1360_85() const { return ___offset1360_85; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1360_85() { return &___offset1360_85; }
	inline void set_offset1360_85(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1360_85 = value;
	}

	inline static int32_t get_offset_of_offset1376_86() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1376_86)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1376_86() const { return ___offset1376_86; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1376_86() { return &___offset1376_86; }
	inline void set_offset1376_86(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1376_86 = value;
	}

	inline static int32_t get_offset_of_offset1392_87() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1392_87)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1392_87() const { return ___offset1392_87; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1392_87() { return &___offset1392_87; }
	inline void set_offset1392_87(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1392_87 = value;
	}

	inline static int32_t get_offset_of_offset1408_88() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1408_88)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1408_88() const { return ___offset1408_88; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1408_88() { return &___offset1408_88; }
	inline void set_offset1408_88(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1408_88 = value;
	}

	inline static int32_t get_offset_of_offset1424_89() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1424_89)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1424_89() const { return ___offset1424_89; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1424_89() { return &___offset1424_89; }
	inline void set_offset1424_89(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1424_89 = value;
	}

	inline static int32_t get_offset_of_offset1440_90() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1440_90)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1440_90() const { return ___offset1440_90; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1440_90() { return &___offset1440_90; }
	inline void set_offset1440_90(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1440_90 = value;
	}

	inline static int32_t get_offset_of_offset1456_91() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1456_91)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1456_91() const { return ___offset1456_91; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1456_91() { return &___offset1456_91; }
	inline void set_offset1456_91(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1456_91 = value;
	}

	inline static int32_t get_offset_of_offset1472_92() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1472_92)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1472_92() const { return ___offset1472_92; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1472_92() { return &___offset1472_92; }
	inline void set_offset1472_92(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1472_92 = value;
	}

	inline static int32_t get_offset_of_offset1488_93() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1488_93)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1488_93() const { return ___offset1488_93; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1488_93() { return &___offset1488_93; }
	inline void set_offset1488_93(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1488_93 = value;
	}

	inline static int32_t get_offset_of_offset1504_94() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1504_94)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1504_94() const { return ___offset1504_94; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1504_94() { return &___offset1504_94; }
	inline void set_offset1504_94(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1504_94 = value;
	}

	inline static int32_t get_offset_of_offset1520_95() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1520_95)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1520_95() const { return ___offset1520_95; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1520_95() { return &___offset1520_95; }
	inline void set_offset1520_95(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1520_95 = value;
	}

	inline static int32_t get_offset_of_offset1536_96() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1536_96)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1536_96() const { return ___offset1536_96; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1536_96() { return &___offset1536_96; }
	inline void set_offset1536_96(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1536_96 = value;
	}

	inline static int32_t get_offset_of_offset1552_97() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1552_97)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1552_97() const { return ___offset1552_97; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1552_97() { return &___offset1552_97; }
	inline void set_offset1552_97(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1552_97 = value;
	}

	inline static int32_t get_offset_of_offset1568_98() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1568_98)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1568_98() const { return ___offset1568_98; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1568_98() { return &___offset1568_98; }
	inline void set_offset1568_98(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1568_98 = value;
	}

	inline static int32_t get_offset_of_offset1584_99() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1584_99)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1584_99() const { return ___offset1584_99; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1584_99() { return &___offset1584_99; }
	inline void set_offset1584_99(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1584_99 = value;
	}

	inline static int32_t get_offset_of_offset1600_100() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1600_100)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1600_100() const { return ___offset1600_100; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1600_100() { return &___offset1600_100; }
	inline void set_offset1600_100(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1600_100 = value;
	}

	inline static int32_t get_offset_of_offset1616_101() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1616_101)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1616_101() const { return ___offset1616_101; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1616_101() { return &___offset1616_101; }
	inline void set_offset1616_101(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1616_101 = value;
	}

	inline static int32_t get_offset_of_offset1632_102() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1632_102)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1632_102() const { return ___offset1632_102; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1632_102() { return &___offset1632_102; }
	inline void set_offset1632_102(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1632_102 = value;
	}

	inline static int32_t get_offset_of_offset1648_103() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1648_103)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1648_103() const { return ___offset1648_103; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1648_103() { return &___offset1648_103; }
	inline void set_offset1648_103(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1648_103 = value;
	}

	inline static int32_t get_offset_of_offset1664_104() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1664_104)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1664_104() const { return ___offset1664_104; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1664_104() { return &___offset1664_104; }
	inline void set_offset1664_104(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1664_104 = value;
	}

	inline static int32_t get_offset_of_offset1680_105() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1680_105)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1680_105() const { return ___offset1680_105; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1680_105() { return &___offset1680_105; }
	inline void set_offset1680_105(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1680_105 = value;
	}

	inline static int32_t get_offset_of_offset1696_106() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1696_106)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1696_106() const { return ___offset1696_106; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1696_106() { return &___offset1696_106; }
	inline void set_offset1696_106(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1696_106 = value;
	}

	inline static int32_t get_offset_of_offset1712_107() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1712_107)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1712_107() const { return ___offset1712_107; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1712_107() { return &___offset1712_107; }
	inline void set_offset1712_107(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1712_107 = value;
	}

	inline static int32_t get_offset_of_offset1728_108() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1728_108)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1728_108() const { return ___offset1728_108; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1728_108() { return &___offset1728_108; }
	inline void set_offset1728_108(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1728_108 = value;
	}

	inline static int32_t get_offset_of_offset1744_109() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1744_109)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1744_109() const { return ___offset1744_109; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1744_109() { return &___offset1744_109; }
	inline void set_offset1744_109(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1744_109 = value;
	}

	inline static int32_t get_offset_of_offset1760_110() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1760_110)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1760_110() const { return ___offset1760_110; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1760_110() { return &___offset1760_110; }
	inline void set_offset1760_110(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1760_110 = value;
	}

	inline static int32_t get_offset_of_offset1776_111() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1776_111)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1776_111() const { return ___offset1776_111; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1776_111() { return &___offset1776_111; }
	inline void set_offset1776_111(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1776_111 = value;
	}

	inline static int32_t get_offset_of_offset1792_112() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1792_112)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1792_112() const { return ___offset1792_112; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1792_112() { return &___offset1792_112; }
	inline void set_offset1792_112(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1792_112 = value;
	}

	inline static int32_t get_offset_of_offset1808_113() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1808_113)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1808_113() const { return ___offset1808_113; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1808_113() { return &___offset1808_113; }
	inline void set_offset1808_113(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1808_113 = value;
	}

	inline static int32_t get_offset_of_offset1824_114() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1824_114)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1824_114() const { return ___offset1824_114; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1824_114() { return &___offset1824_114; }
	inline void set_offset1824_114(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1824_114 = value;
	}

	inline static int32_t get_offset_of_offset1840_115() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1840_115)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1840_115() const { return ___offset1840_115; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1840_115() { return &___offset1840_115; }
	inline void set_offset1840_115(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1840_115 = value;
	}

	inline static int32_t get_offset_of_offset1856_116() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1856_116)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1856_116() const { return ___offset1856_116; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1856_116() { return &___offset1856_116; }
	inline void set_offset1856_116(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1856_116 = value;
	}

	inline static int32_t get_offset_of_offset1872_117() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1872_117)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1872_117() const { return ___offset1872_117; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1872_117() { return &___offset1872_117; }
	inline void set_offset1872_117(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1872_117 = value;
	}

	inline static int32_t get_offset_of_offset1888_118() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1888_118)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1888_118() const { return ___offset1888_118; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1888_118() { return &___offset1888_118; }
	inline void set_offset1888_118(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1888_118 = value;
	}

	inline static int32_t get_offset_of_offset1904_119() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1904_119)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1904_119() const { return ___offset1904_119; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1904_119() { return &___offset1904_119; }
	inline void set_offset1904_119(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1904_119 = value;
	}

	inline static int32_t get_offset_of_offset1920_120() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1920_120)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1920_120() const { return ___offset1920_120; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1920_120() { return &___offset1920_120; }
	inline void set_offset1920_120(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1920_120 = value;
	}

	inline static int32_t get_offset_of_offset1936_121() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1936_121)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1936_121() const { return ___offset1936_121; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1936_121() { return &___offset1936_121; }
	inline void set_offset1936_121(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1936_121 = value;
	}

	inline static int32_t get_offset_of_offset1952_122() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1952_122)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1952_122() const { return ___offset1952_122; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1952_122() { return &___offset1952_122; }
	inline void set_offset1952_122(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1952_122 = value;
	}

	inline static int32_t get_offset_of_offset1968_123() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1968_123)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1968_123() const { return ___offset1968_123; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1968_123() { return &___offset1968_123; }
	inline void set_offset1968_123(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1968_123 = value;
	}

	inline static int32_t get_offset_of_offset1984_124() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset1984_124)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset1984_124() const { return ___offset1984_124; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset1984_124() { return &___offset1984_124; }
	inline void set_offset1984_124(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset1984_124 = value;
	}

	inline static int32_t get_offset_of_offset2000_125() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2000_125)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2000_125() const { return ___offset2000_125; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2000_125() { return &___offset2000_125; }
	inline void set_offset2000_125(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2000_125 = value;
	}

	inline static int32_t get_offset_of_offset2016_126() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2016_126)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2016_126() const { return ___offset2016_126; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2016_126() { return &___offset2016_126; }
	inline void set_offset2016_126(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2016_126 = value;
	}

	inline static int32_t get_offset_of_offset2032_127() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2032_127)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2032_127() const { return ___offset2032_127; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2032_127() { return &___offset2032_127; }
	inline void set_offset2032_127(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2032_127 = value;
	}

	inline static int32_t get_offset_of_offset2048_128() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2048_128)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2048_128() const { return ___offset2048_128; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2048_128() { return &___offset2048_128; }
	inline void set_offset2048_128(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2048_128 = value;
	}

	inline static int32_t get_offset_of_offset2064_129() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2064_129)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2064_129() const { return ___offset2064_129; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2064_129() { return &___offset2064_129; }
	inline void set_offset2064_129(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2064_129 = value;
	}

	inline static int32_t get_offset_of_offset2080_130() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2080_130)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2080_130() const { return ___offset2080_130; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2080_130() { return &___offset2080_130; }
	inline void set_offset2080_130(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2080_130 = value;
	}

	inline static int32_t get_offset_of_offset2096_131() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2096_131)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2096_131() const { return ___offset2096_131; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2096_131() { return &___offset2096_131; }
	inline void set_offset2096_131(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2096_131 = value;
	}

	inline static int32_t get_offset_of_offset2112_132() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2112_132)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2112_132() const { return ___offset2112_132; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2112_132() { return &___offset2112_132; }
	inline void set_offset2112_132(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2112_132 = value;
	}

	inline static int32_t get_offset_of_offset2128_133() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2128_133)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2128_133() const { return ___offset2128_133; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2128_133() { return &___offset2128_133; }
	inline void set_offset2128_133(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2128_133 = value;
	}

	inline static int32_t get_offset_of_offset2144_134() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2144_134)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2144_134() const { return ___offset2144_134; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2144_134() { return &___offset2144_134; }
	inline void set_offset2144_134(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2144_134 = value;
	}

	inline static int32_t get_offset_of_offset2160_135() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2160_135)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2160_135() const { return ___offset2160_135; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2160_135() { return &___offset2160_135; }
	inline void set_offset2160_135(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2160_135 = value;
	}

	inline static int32_t get_offset_of_offset2176_136() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2176_136)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2176_136() const { return ___offset2176_136; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2176_136() { return &___offset2176_136; }
	inline void set_offset2176_136(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2176_136 = value;
	}

	inline static int32_t get_offset_of_offset2192_137() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2192_137)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2192_137() const { return ___offset2192_137; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2192_137() { return &___offset2192_137; }
	inline void set_offset2192_137(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2192_137 = value;
	}

	inline static int32_t get_offset_of_offset2208_138() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2208_138)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2208_138() const { return ___offset2208_138; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2208_138() { return &___offset2208_138; }
	inline void set_offset2208_138(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2208_138 = value;
	}

	inline static int32_t get_offset_of_offset2224_139() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2224_139)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2224_139() const { return ___offset2224_139; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2224_139() { return &___offset2224_139; }
	inline void set_offset2224_139(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2224_139 = value;
	}

	inline static int32_t get_offset_of_offset2240_140() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2240_140)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2240_140() const { return ___offset2240_140; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2240_140() { return &___offset2240_140; }
	inline void set_offset2240_140(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2240_140 = value;
	}

	inline static int32_t get_offset_of_offset2256_141() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2256_141)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2256_141() const { return ___offset2256_141; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2256_141() { return &___offset2256_141; }
	inline void set_offset2256_141(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2256_141 = value;
	}

	inline static int32_t get_offset_of_offset2272_142() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2272_142)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2272_142() const { return ___offset2272_142; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2272_142() { return &___offset2272_142; }
	inline void set_offset2272_142(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2272_142 = value;
	}

	inline static int32_t get_offset_of_offset2288_143() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2288_143)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2288_143() const { return ___offset2288_143; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2288_143() { return &___offset2288_143; }
	inline void set_offset2288_143(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2288_143 = value;
	}

	inline static int32_t get_offset_of_offset2304_144() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2304_144)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2304_144() const { return ___offset2304_144; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2304_144() { return &___offset2304_144; }
	inline void set_offset2304_144(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2304_144 = value;
	}

	inline static int32_t get_offset_of_offset2320_145() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2320_145)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2320_145() const { return ___offset2320_145; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2320_145() { return &___offset2320_145; }
	inline void set_offset2320_145(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2320_145 = value;
	}

	inline static int32_t get_offset_of_offset2336_146() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2336_146)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2336_146() const { return ___offset2336_146; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2336_146() { return &___offset2336_146; }
	inline void set_offset2336_146(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2336_146 = value;
	}

	inline static int32_t get_offset_of_offset2352_147() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2352_147)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2352_147() const { return ___offset2352_147; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2352_147() { return &___offset2352_147; }
	inline void set_offset2352_147(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2352_147 = value;
	}

	inline static int32_t get_offset_of_offset2368_148() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2368_148)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2368_148() const { return ___offset2368_148; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2368_148() { return &___offset2368_148; }
	inline void set_offset2368_148(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2368_148 = value;
	}

	inline static int32_t get_offset_of_offset2384_149() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2384_149)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2384_149() const { return ___offset2384_149; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2384_149() { return &___offset2384_149; }
	inline void set_offset2384_149(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2384_149 = value;
	}

	inline static int32_t get_offset_of_offset2400_150() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2400_150)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2400_150() const { return ___offset2400_150; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2400_150() { return &___offset2400_150; }
	inline void set_offset2400_150(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2400_150 = value;
	}

	inline static int32_t get_offset_of_offset2416_151() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2416_151)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2416_151() const { return ___offset2416_151; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2416_151() { return &___offset2416_151; }
	inline void set_offset2416_151(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2416_151 = value;
	}

	inline static int32_t get_offset_of_offset2432_152() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2432_152)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2432_152() const { return ___offset2432_152; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2432_152() { return &___offset2432_152; }
	inline void set_offset2432_152(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2432_152 = value;
	}

	inline static int32_t get_offset_of_offset2448_153() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2448_153)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2448_153() const { return ___offset2448_153; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2448_153() { return &___offset2448_153; }
	inline void set_offset2448_153(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2448_153 = value;
	}

	inline static int32_t get_offset_of_offset2464_154() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2464_154)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2464_154() const { return ___offset2464_154; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2464_154() { return &___offset2464_154; }
	inline void set_offset2464_154(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2464_154 = value;
	}

	inline static int32_t get_offset_of_offset2480_155() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2480_155)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2480_155() const { return ___offset2480_155; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2480_155() { return &___offset2480_155; }
	inline void set_offset2480_155(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2480_155 = value;
	}

	inline static int32_t get_offset_of_offset2496_156() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2496_156)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2496_156() const { return ___offset2496_156; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2496_156() { return &___offset2496_156; }
	inline void set_offset2496_156(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2496_156 = value;
	}

	inline static int32_t get_offset_of_offset2512_157() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2512_157)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2512_157() const { return ___offset2512_157; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2512_157() { return &___offset2512_157; }
	inline void set_offset2512_157(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2512_157 = value;
	}

	inline static int32_t get_offset_of_offset2528_158() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2528_158)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2528_158() const { return ___offset2528_158; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2528_158() { return &___offset2528_158; }
	inline void set_offset2528_158(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2528_158 = value;
	}

	inline static int32_t get_offset_of_offset2544_159() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2544_159)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2544_159() const { return ___offset2544_159; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2544_159() { return &___offset2544_159; }
	inline void set_offset2544_159(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2544_159 = value;
	}

	inline static int32_t get_offset_of_offset2560_160() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2560_160)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2560_160() const { return ___offset2560_160; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2560_160() { return &___offset2560_160; }
	inline void set_offset2560_160(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2560_160 = value;
	}

	inline static int32_t get_offset_of_offset2576_161() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2576_161)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2576_161() const { return ___offset2576_161; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2576_161() { return &___offset2576_161; }
	inline void set_offset2576_161(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2576_161 = value;
	}

	inline static int32_t get_offset_of_offset2592_162() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2592_162)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2592_162() const { return ___offset2592_162; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2592_162() { return &___offset2592_162; }
	inline void set_offset2592_162(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2592_162 = value;
	}

	inline static int32_t get_offset_of_offset2608_163() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2608_163)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2608_163() const { return ___offset2608_163; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2608_163() { return &___offset2608_163; }
	inline void set_offset2608_163(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2608_163 = value;
	}

	inline static int32_t get_offset_of_offset2624_164() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2624_164)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2624_164() const { return ___offset2624_164; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2624_164() { return &___offset2624_164; }
	inline void set_offset2624_164(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2624_164 = value;
	}

	inline static int32_t get_offset_of_offset2640_165() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2640_165)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2640_165() const { return ___offset2640_165; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2640_165() { return &___offset2640_165; }
	inline void set_offset2640_165(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2640_165 = value;
	}

	inline static int32_t get_offset_of_offset2656_166() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2656_166)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2656_166() const { return ___offset2656_166; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2656_166() { return &___offset2656_166; }
	inline void set_offset2656_166(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2656_166 = value;
	}

	inline static int32_t get_offset_of_offset2672_167() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2672_167)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2672_167() const { return ___offset2672_167; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2672_167() { return &___offset2672_167; }
	inline void set_offset2672_167(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2672_167 = value;
	}

	inline static int32_t get_offset_of_offset2688_168() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2688_168)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2688_168() const { return ___offset2688_168; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2688_168() { return &___offset2688_168; }
	inline void set_offset2688_168(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2688_168 = value;
	}

	inline static int32_t get_offset_of_offset2704_169() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2704_169)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2704_169() const { return ___offset2704_169; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2704_169() { return &___offset2704_169; }
	inline void set_offset2704_169(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2704_169 = value;
	}

	inline static int32_t get_offset_of_offset2720_170() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2720_170)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2720_170() const { return ___offset2720_170; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2720_170() { return &___offset2720_170; }
	inline void set_offset2720_170(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2720_170 = value;
	}

	inline static int32_t get_offset_of_offset2736_171() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2736_171)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2736_171() const { return ___offset2736_171; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2736_171() { return &___offset2736_171; }
	inline void set_offset2736_171(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2736_171 = value;
	}

	inline static int32_t get_offset_of_offset2752_172() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2752_172)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2752_172() const { return ___offset2752_172; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2752_172() { return &___offset2752_172; }
	inline void set_offset2752_172(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2752_172 = value;
	}

	inline static int32_t get_offset_of_offset2768_173() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2768_173)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2768_173() const { return ___offset2768_173; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2768_173() { return &___offset2768_173; }
	inline void set_offset2768_173(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2768_173 = value;
	}

	inline static int32_t get_offset_of_offset2784_174() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2784_174)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2784_174() const { return ___offset2784_174; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2784_174() { return &___offset2784_174; }
	inline void set_offset2784_174(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2784_174 = value;
	}

	inline static int32_t get_offset_of_offset2800_175() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2800_175)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2800_175() const { return ___offset2800_175; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2800_175() { return &___offset2800_175; }
	inline void set_offset2800_175(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2800_175 = value;
	}

	inline static int32_t get_offset_of_offset2816_176() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2816_176)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2816_176() const { return ___offset2816_176; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2816_176() { return &___offset2816_176; }
	inline void set_offset2816_176(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2816_176 = value;
	}

	inline static int32_t get_offset_of_offset2832_177() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2832_177)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2832_177() const { return ___offset2832_177; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2832_177() { return &___offset2832_177; }
	inline void set_offset2832_177(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2832_177 = value;
	}

	inline static int32_t get_offset_of_offset2848_178() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2848_178)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2848_178() const { return ___offset2848_178; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2848_178() { return &___offset2848_178; }
	inline void set_offset2848_178(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2848_178 = value;
	}

	inline static int32_t get_offset_of_offset2864_179() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2864_179)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2864_179() const { return ___offset2864_179; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2864_179() { return &___offset2864_179; }
	inline void set_offset2864_179(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2864_179 = value;
	}

	inline static int32_t get_offset_of_offset2880_180() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2880_180)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2880_180() const { return ___offset2880_180; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2880_180() { return &___offset2880_180; }
	inline void set_offset2880_180(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2880_180 = value;
	}

	inline static int32_t get_offset_of_offset2896_181() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2896_181)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2896_181() const { return ___offset2896_181; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2896_181() { return &___offset2896_181; }
	inline void set_offset2896_181(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2896_181 = value;
	}

	inline static int32_t get_offset_of_offset2912_182() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2912_182)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2912_182() const { return ___offset2912_182; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2912_182() { return &___offset2912_182; }
	inline void set_offset2912_182(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2912_182 = value;
	}

	inline static int32_t get_offset_of_offset2928_183() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2928_183)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2928_183() const { return ___offset2928_183; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2928_183() { return &___offset2928_183; }
	inline void set_offset2928_183(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2928_183 = value;
	}

	inline static int32_t get_offset_of_offset2944_184() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2944_184)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2944_184() const { return ___offset2944_184; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2944_184() { return &___offset2944_184; }
	inline void set_offset2944_184(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2944_184 = value;
	}

	inline static int32_t get_offset_of_offset2960_185() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2960_185)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2960_185() const { return ___offset2960_185; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2960_185() { return &___offset2960_185; }
	inline void set_offset2960_185(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2960_185 = value;
	}

	inline static int32_t get_offset_of_offset2976_186() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2976_186)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2976_186() const { return ___offset2976_186; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2976_186() { return &___offset2976_186; }
	inline void set_offset2976_186(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2976_186 = value;
	}

	inline static int32_t get_offset_of_offset2992_187() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset2992_187)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset2992_187() const { return ___offset2992_187; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset2992_187() { return &___offset2992_187; }
	inline void set_offset2992_187(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset2992_187 = value;
	}

	inline static int32_t get_offset_of_offset3008_188() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3008_188)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3008_188() const { return ___offset3008_188; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3008_188() { return &___offset3008_188; }
	inline void set_offset3008_188(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3008_188 = value;
	}

	inline static int32_t get_offset_of_offset3024_189() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3024_189)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3024_189() const { return ___offset3024_189; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3024_189() { return &___offset3024_189; }
	inline void set_offset3024_189(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3024_189 = value;
	}

	inline static int32_t get_offset_of_offset3040_190() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3040_190)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3040_190() const { return ___offset3040_190; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3040_190() { return &___offset3040_190; }
	inline void set_offset3040_190(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3040_190 = value;
	}

	inline static int32_t get_offset_of_offset3056_191() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3056_191)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3056_191() const { return ___offset3056_191; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3056_191() { return &___offset3056_191; }
	inline void set_offset3056_191(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3056_191 = value;
	}

	inline static int32_t get_offset_of_offset3072_192() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3072_192)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3072_192() const { return ___offset3072_192; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3072_192() { return &___offset3072_192; }
	inline void set_offset3072_192(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3072_192 = value;
	}

	inline static int32_t get_offset_of_offset3088_193() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3088_193)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3088_193() const { return ___offset3088_193; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3088_193() { return &___offset3088_193; }
	inline void set_offset3088_193(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3088_193 = value;
	}

	inline static int32_t get_offset_of_offset3104_194() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3104_194)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3104_194() const { return ___offset3104_194; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3104_194() { return &___offset3104_194; }
	inline void set_offset3104_194(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3104_194 = value;
	}

	inline static int32_t get_offset_of_offset3120_195() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3120_195)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3120_195() const { return ___offset3120_195; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3120_195() { return &___offset3120_195; }
	inline void set_offset3120_195(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3120_195 = value;
	}

	inline static int32_t get_offset_of_offset3136_196() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3136_196)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3136_196() const { return ___offset3136_196; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3136_196() { return &___offset3136_196; }
	inline void set_offset3136_196(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3136_196 = value;
	}

	inline static int32_t get_offset_of_offset3152_197() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3152_197)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3152_197() const { return ___offset3152_197; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3152_197() { return &___offset3152_197; }
	inline void set_offset3152_197(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3152_197 = value;
	}

	inline static int32_t get_offset_of_offset3168_198() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3168_198)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3168_198() const { return ___offset3168_198; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3168_198() { return &___offset3168_198; }
	inline void set_offset3168_198(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3168_198 = value;
	}

	inline static int32_t get_offset_of_offset3184_199() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3184_199)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3184_199() const { return ___offset3184_199; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3184_199() { return &___offset3184_199; }
	inline void set_offset3184_199(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3184_199 = value;
	}

	inline static int32_t get_offset_of_offset3200_200() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3200_200)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3200_200() const { return ___offset3200_200; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3200_200() { return &___offset3200_200; }
	inline void set_offset3200_200(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3200_200 = value;
	}

	inline static int32_t get_offset_of_offset3216_201() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3216_201)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3216_201() const { return ___offset3216_201; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3216_201() { return &___offset3216_201; }
	inline void set_offset3216_201(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3216_201 = value;
	}

	inline static int32_t get_offset_of_offset3232_202() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3232_202)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3232_202() const { return ___offset3232_202; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3232_202() { return &___offset3232_202; }
	inline void set_offset3232_202(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3232_202 = value;
	}

	inline static int32_t get_offset_of_offset3248_203() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3248_203)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3248_203() const { return ___offset3248_203; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3248_203() { return &___offset3248_203; }
	inline void set_offset3248_203(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3248_203 = value;
	}

	inline static int32_t get_offset_of_offset3264_204() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3264_204)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3264_204() const { return ___offset3264_204; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3264_204() { return &___offset3264_204; }
	inline void set_offset3264_204(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3264_204 = value;
	}

	inline static int32_t get_offset_of_offset3280_205() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3280_205)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3280_205() const { return ___offset3280_205; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3280_205() { return &___offset3280_205; }
	inline void set_offset3280_205(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3280_205 = value;
	}

	inline static int32_t get_offset_of_offset3296_206() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3296_206)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3296_206() const { return ___offset3296_206; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3296_206() { return &___offset3296_206; }
	inline void set_offset3296_206(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3296_206 = value;
	}

	inline static int32_t get_offset_of_offset3312_207() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3312_207)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3312_207() const { return ___offset3312_207; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3312_207() { return &___offset3312_207; }
	inline void set_offset3312_207(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3312_207 = value;
	}

	inline static int32_t get_offset_of_offset3328_208() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3328_208)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3328_208() const { return ___offset3328_208; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3328_208() { return &___offset3328_208; }
	inline void set_offset3328_208(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3328_208 = value;
	}

	inline static int32_t get_offset_of_offset3344_209() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3344_209)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3344_209() const { return ___offset3344_209; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3344_209() { return &___offset3344_209; }
	inline void set_offset3344_209(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3344_209 = value;
	}

	inline static int32_t get_offset_of_offset3360_210() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3360_210)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3360_210() const { return ___offset3360_210; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3360_210() { return &___offset3360_210; }
	inline void set_offset3360_210(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3360_210 = value;
	}

	inline static int32_t get_offset_of_offset3376_211() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3376_211)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3376_211() const { return ___offset3376_211; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3376_211() { return &___offset3376_211; }
	inline void set_offset3376_211(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3376_211 = value;
	}

	inline static int32_t get_offset_of_offset3392_212() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3392_212)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3392_212() const { return ___offset3392_212; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3392_212() { return &___offset3392_212; }
	inline void set_offset3392_212(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3392_212 = value;
	}

	inline static int32_t get_offset_of_offset3408_213() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3408_213)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3408_213() const { return ___offset3408_213; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3408_213() { return &___offset3408_213; }
	inline void set_offset3408_213(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3408_213 = value;
	}

	inline static int32_t get_offset_of_offset3424_214() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3424_214)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3424_214() const { return ___offset3424_214; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3424_214() { return &___offset3424_214; }
	inline void set_offset3424_214(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3424_214 = value;
	}

	inline static int32_t get_offset_of_offset3440_215() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3440_215)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3440_215() const { return ___offset3440_215; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3440_215() { return &___offset3440_215; }
	inline void set_offset3440_215(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3440_215 = value;
	}

	inline static int32_t get_offset_of_offset3456_216() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3456_216)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3456_216() const { return ___offset3456_216; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3456_216() { return &___offset3456_216; }
	inline void set_offset3456_216(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3456_216 = value;
	}

	inline static int32_t get_offset_of_offset3472_217() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3472_217)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3472_217() const { return ___offset3472_217; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3472_217() { return &___offset3472_217; }
	inline void set_offset3472_217(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3472_217 = value;
	}

	inline static int32_t get_offset_of_offset3488_218() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3488_218)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3488_218() const { return ___offset3488_218; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3488_218() { return &___offset3488_218; }
	inline void set_offset3488_218(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3488_218 = value;
	}

	inline static int32_t get_offset_of_offset3504_219() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3504_219)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3504_219() const { return ___offset3504_219; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3504_219() { return &___offset3504_219; }
	inline void set_offset3504_219(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3504_219 = value;
	}

	inline static int32_t get_offset_of_offset3520_220() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3520_220)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3520_220() const { return ___offset3520_220; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3520_220() { return &___offset3520_220; }
	inline void set_offset3520_220(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3520_220 = value;
	}

	inline static int32_t get_offset_of_offset3536_221() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3536_221)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3536_221() const { return ___offset3536_221; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3536_221() { return &___offset3536_221; }
	inline void set_offset3536_221(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3536_221 = value;
	}

	inline static int32_t get_offset_of_offset3552_222() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3552_222)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3552_222() const { return ___offset3552_222; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3552_222() { return &___offset3552_222; }
	inline void set_offset3552_222(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3552_222 = value;
	}

	inline static int32_t get_offset_of_offset3568_223() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3568_223)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3568_223() const { return ___offset3568_223; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3568_223() { return &___offset3568_223; }
	inline void set_offset3568_223(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3568_223 = value;
	}

	inline static int32_t get_offset_of_offset3584_224() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3584_224)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3584_224() const { return ___offset3584_224; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3584_224() { return &___offset3584_224; }
	inline void set_offset3584_224(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3584_224 = value;
	}

	inline static int32_t get_offset_of_offset3600_225() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3600_225)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3600_225() const { return ___offset3600_225; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3600_225() { return &___offset3600_225; }
	inline void set_offset3600_225(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3600_225 = value;
	}

	inline static int32_t get_offset_of_offset3616_226() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3616_226)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3616_226() const { return ___offset3616_226; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3616_226() { return &___offset3616_226; }
	inline void set_offset3616_226(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3616_226 = value;
	}

	inline static int32_t get_offset_of_offset3632_227() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3632_227)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3632_227() const { return ___offset3632_227; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3632_227() { return &___offset3632_227; }
	inline void set_offset3632_227(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3632_227 = value;
	}

	inline static int32_t get_offset_of_offset3648_228() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3648_228)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3648_228() const { return ___offset3648_228; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3648_228() { return &___offset3648_228; }
	inline void set_offset3648_228(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3648_228 = value;
	}

	inline static int32_t get_offset_of_offset3664_229() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3664_229)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3664_229() const { return ___offset3664_229; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3664_229() { return &___offset3664_229; }
	inline void set_offset3664_229(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3664_229 = value;
	}

	inline static int32_t get_offset_of_offset3680_230() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3680_230)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3680_230() const { return ___offset3680_230; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3680_230() { return &___offset3680_230; }
	inline void set_offset3680_230(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3680_230 = value;
	}

	inline static int32_t get_offset_of_offset3696_231() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3696_231)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3696_231() const { return ___offset3696_231; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3696_231() { return &___offset3696_231; }
	inline void set_offset3696_231(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3696_231 = value;
	}

	inline static int32_t get_offset_of_offset3712_232() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3712_232)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3712_232() const { return ___offset3712_232; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3712_232() { return &___offset3712_232; }
	inline void set_offset3712_232(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3712_232 = value;
	}

	inline static int32_t get_offset_of_offset3728_233() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3728_233)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3728_233() const { return ___offset3728_233; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3728_233() { return &___offset3728_233; }
	inline void set_offset3728_233(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3728_233 = value;
	}

	inline static int32_t get_offset_of_offset3744_234() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3744_234)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3744_234() const { return ___offset3744_234; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3744_234() { return &___offset3744_234; }
	inline void set_offset3744_234(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3744_234 = value;
	}

	inline static int32_t get_offset_of_offset3760_235() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3760_235)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3760_235() const { return ___offset3760_235; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3760_235() { return &___offset3760_235; }
	inline void set_offset3760_235(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3760_235 = value;
	}

	inline static int32_t get_offset_of_offset3776_236() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3776_236)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3776_236() const { return ___offset3776_236; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3776_236() { return &___offset3776_236; }
	inline void set_offset3776_236(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3776_236 = value;
	}

	inline static int32_t get_offset_of_offset3792_237() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3792_237)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3792_237() const { return ___offset3792_237; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3792_237() { return &___offset3792_237; }
	inline void set_offset3792_237(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3792_237 = value;
	}

	inline static int32_t get_offset_of_offset3808_238() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3808_238)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3808_238() const { return ___offset3808_238; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3808_238() { return &___offset3808_238; }
	inline void set_offset3808_238(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3808_238 = value;
	}

	inline static int32_t get_offset_of_offset3824_239() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3824_239)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3824_239() const { return ___offset3824_239; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3824_239() { return &___offset3824_239; }
	inline void set_offset3824_239(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3824_239 = value;
	}

	inline static int32_t get_offset_of_offset3840_240() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3840_240)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3840_240() const { return ___offset3840_240; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3840_240() { return &___offset3840_240; }
	inline void set_offset3840_240(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3840_240 = value;
	}

	inline static int32_t get_offset_of_offset3856_241() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3856_241)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3856_241() const { return ___offset3856_241; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3856_241() { return &___offset3856_241; }
	inline void set_offset3856_241(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3856_241 = value;
	}

	inline static int32_t get_offset_of_offset3872_242() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3872_242)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3872_242() const { return ___offset3872_242; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3872_242() { return &___offset3872_242; }
	inline void set_offset3872_242(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3872_242 = value;
	}

	inline static int32_t get_offset_of_offset3888_243() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3888_243)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3888_243() const { return ___offset3888_243; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3888_243() { return &___offset3888_243; }
	inline void set_offset3888_243(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3888_243 = value;
	}

	inline static int32_t get_offset_of_offset3904_244() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3904_244)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3904_244() const { return ___offset3904_244; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3904_244() { return &___offset3904_244; }
	inline void set_offset3904_244(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3904_244 = value;
	}

	inline static int32_t get_offset_of_offset3920_245() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3920_245)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3920_245() const { return ___offset3920_245; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3920_245() { return &___offset3920_245; }
	inline void set_offset3920_245(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3920_245 = value;
	}

	inline static int32_t get_offset_of_offset3936_246() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3936_246)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3936_246() const { return ___offset3936_246; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3936_246() { return &___offset3936_246; }
	inline void set_offset3936_246(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3936_246 = value;
	}

	inline static int32_t get_offset_of_offset3952_247() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3952_247)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3952_247() const { return ___offset3952_247; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3952_247() { return &___offset3952_247; }
	inline void set_offset3952_247(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3952_247 = value;
	}

	inline static int32_t get_offset_of_offset3968_248() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3968_248)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3968_248() const { return ___offset3968_248; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3968_248() { return &___offset3968_248; }
	inline void set_offset3968_248(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3968_248 = value;
	}

	inline static int32_t get_offset_of_offset3984_249() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset3984_249)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset3984_249() const { return ___offset3984_249; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset3984_249() { return &___offset3984_249; }
	inline void set_offset3984_249(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset3984_249 = value;
	}

	inline static int32_t get_offset_of_offset4000_250() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset4000_250)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset4000_250() const { return ___offset4000_250; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset4000_250() { return &___offset4000_250; }
	inline void set_offset4000_250(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset4000_250 = value;
	}

	inline static int32_t get_offset_of_offset4016_251() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset4016_251)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset4016_251() const { return ___offset4016_251; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset4016_251() { return &___offset4016_251; }
	inline void set_offset4016_251(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset4016_251 = value;
	}

	inline static int32_t get_offset_of_offset4032_252() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset4032_252)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset4032_252() const { return ___offset4032_252; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset4032_252() { return &___offset4032_252; }
	inline void set_offset4032_252(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset4032_252 = value;
	}

	inline static int32_t get_offset_of_offset4048_253() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset4048_253)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset4048_253() const { return ___offset4048_253; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset4048_253() { return &___offset4048_253; }
	inline void set_offset4048_253(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset4048_253 = value;
	}

	inline static int32_t get_offset_of_offset4064_254() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___offset4064_254)); }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  get_offset4064_254() const { return ___offset4064_254; }
	inline FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37 * get_address_of_offset4064_254() { return &___offset4064_254; }
	inline void set_offset4064_254(FixedBytes16_t6F3DA12A9BFDF36F711B4EE37C752953B2125C37  value)
	{
		___offset4064_254 = value;
	}

	inline static int32_t get_offset_of_byte4080_255() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4080_255)); }
	inline uint8_t get_byte4080_255() const { return ___byte4080_255; }
	inline uint8_t* get_address_of_byte4080_255() { return &___byte4080_255; }
	inline void set_byte4080_255(uint8_t value)
	{
		___byte4080_255 = value;
	}

	inline static int32_t get_offset_of_byte4081_256() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4081_256)); }
	inline uint8_t get_byte4081_256() const { return ___byte4081_256; }
	inline uint8_t* get_address_of_byte4081_256() { return &___byte4081_256; }
	inline void set_byte4081_256(uint8_t value)
	{
		___byte4081_256 = value;
	}

	inline static int32_t get_offset_of_byte4082_257() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4082_257)); }
	inline uint8_t get_byte4082_257() const { return ___byte4082_257; }
	inline uint8_t* get_address_of_byte4082_257() { return &___byte4082_257; }
	inline void set_byte4082_257(uint8_t value)
	{
		___byte4082_257 = value;
	}

	inline static int32_t get_offset_of_byte4083_258() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4083_258)); }
	inline uint8_t get_byte4083_258() const { return ___byte4083_258; }
	inline uint8_t* get_address_of_byte4083_258() { return &___byte4083_258; }
	inline void set_byte4083_258(uint8_t value)
	{
		___byte4083_258 = value;
	}

	inline static int32_t get_offset_of_byte4084_259() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4084_259)); }
	inline uint8_t get_byte4084_259() const { return ___byte4084_259; }
	inline uint8_t* get_address_of_byte4084_259() { return &___byte4084_259; }
	inline void set_byte4084_259(uint8_t value)
	{
		___byte4084_259 = value;
	}

	inline static int32_t get_offset_of_byte4085_260() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4085_260)); }
	inline uint8_t get_byte4085_260() const { return ___byte4085_260; }
	inline uint8_t* get_address_of_byte4085_260() { return &___byte4085_260; }
	inline void set_byte4085_260(uint8_t value)
	{
		___byte4085_260 = value;
	}

	inline static int32_t get_offset_of_byte4086_261() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4086_261)); }
	inline uint8_t get_byte4086_261() const { return ___byte4086_261; }
	inline uint8_t* get_address_of_byte4086_261() { return &___byte4086_261; }
	inline void set_byte4086_261(uint8_t value)
	{
		___byte4086_261 = value;
	}

	inline static int32_t get_offset_of_byte4087_262() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4087_262)); }
	inline uint8_t get_byte4087_262() const { return ___byte4087_262; }
	inline uint8_t* get_address_of_byte4087_262() { return &___byte4087_262; }
	inline void set_byte4087_262(uint8_t value)
	{
		___byte4087_262 = value;
	}

	inline static int32_t get_offset_of_byte4088_263() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4088_263)); }
	inline uint8_t get_byte4088_263() const { return ___byte4088_263; }
	inline uint8_t* get_address_of_byte4088_263() { return &___byte4088_263; }
	inline void set_byte4088_263(uint8_t value)
	{
		___byte4088_263 = value;
	}

	inline static int32_t get_offset_of_byte4089_264() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4089_264)); }
	inline uint8_t get_byte4089_264() const { return ___byte4089_264; }
	inline uint8_t* get_address_of_byte4089_264() { return &___byte4089_264; }
	inline void set_byte4089_264(uint8_t value)
	{
		___byte4089_264 = value;
	}

	inline static int32_t get_offset_of_byte4090_265() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4090_265)); }
	inline uint8_t get_byte4090_265() const { return ___byte4090_265; }
	inline uint8_t* get_address_of_byte4090_265() { return &___byte4090_265; }
	inline void set_byte4090_265(uint8_t value)
	{
		___byte4090_265 = value;
	}

	inline static int32_t get_offset_of_byte4091_266() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4091_266)); }
	inline uint8_t get_byte4091_266() const { return ___byte4091_266; }
	inline uint8_t* get_address_of_byte4091_266() { return &___byte4091_266; }
	inline void set_byte4091_266(uint8_t value)
	{
		___byte4091_266 = value;
	}

	inline static int32_t get_offset_of_byte4092_267() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4092_267)); }
	inline uint8_t get_byte4092_267() const { return ___byte4092_267; }
	inline uint8_t* get_address_of_byte4092_267() { return &___byte4092_267; }
	inline void set_byte4092_267(uint8_t value)
	{
		___byte4092_267 = value;
	}

	inline static int32_t get_offset_of_byte4093_268() { return static_cast<int32_t>(offsetof(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150, ___byte4093_268)); }
	inline uint8_t get_byte4093_268() const { return ___byte4093_268; }
	inline uint8_t* get_address_of_byte4093_268() { return &___byte4093_268; }
	inline void set_byte4093_268(uint8_t value)
	{
		___byte4093_268 = value;
	}
};


// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
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


// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Next
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Next_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Data
	U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204  ___Data_1;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E, ___Next_0)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * get_Next_0() const { return ___Next_0; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E, ___Data_1)); }
	inline U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204  get_Data_1() const { return ___Data_1; }
	inline U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204 * get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204  value)
	{
		___Data_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E_marshaled_pinvoke
{
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Next_0;
	U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204  ___Data_1;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E_marshaled_com
{
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Next_0;
	U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204  ___Data_1;
};

// Unity.Collections.AllocatorManager/Range
struct Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 
{
public:
	// System.IntPtr Unity.Collections.AllocatorManager/Range::Pointer
	intptr_t ___Pointer_0;
	// System.Int32 Unity.Collections.AllocatorManager/Range::Items
	int32_t ___Items_1;
	// Unity.Collections.AllocatorManager/SmallAllocatorHandle Unity.Collections.AllocatorManager/Range::Allocator
	SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  ___Allocator_2;
	// Unity.Collections.AllocatorManager/BlockHandle Unity.Collections.AllocatorManager/Range::Block
	BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD  ___Block_3;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Pointer_0)); }
	inline intptr_t get_Pointer_0() const { return ___Pointer_0; }
	inline intptr_t* get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(intptr_t value)
	{
		___Pointer_0 = value;
	}

	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Items_1)); }
	inline int32_t get_Items_1() const { return ___Items_1; }
	inline int32_t* get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(int32_t value)
	{
		___Items_1 = value;
	}

	inline static int32_t get_offset_of_Allocator_2() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Allocator_2)); }
	inline SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  get_Allocator_2() const { return ___Allocator_2; }
	inline SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD * get_address_of_Allocator_2() { return &___Allocator_2; }
	inline void set_Allocator_2(SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  value)
	{
		___Allocator_2 = value;
	}

	inline static int32_t get_offset_of_Block_3() { return static_cast<int32_t>(offsetof(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24, ___Block_3)); }
	inline BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD  get_Block_3() const { return ___Block_3; }
	inline BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD * get_address_of_Block_3() { return &___Block_3; }
	inline void set_Block_3(BlockHandle_tFF9ABD6111D7D2BF4D8C8485828B6F596D9053DD  value)
	{
		___Block_3 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/StaticPageSizeInfo
struct StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919  : public RuntimeObject
{
public:

public:
};

struct StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_StaticFields
{
public:
	// Unity.Burst.SharedStatic`1<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo> Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/StaticPageSizeInfo::Ref
	SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  ___Ref_0;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_StaticFields, ___Ref_0)); }
	inline SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  get_Ref_0() const { return ___Ref_0; }
	inline SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955 * get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  value)
	{
		___Ref_0 = value;
	}
};


// Unity.Collections.xxHash3/StreamingState
struct StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 
{
public:
	// Unity.Collections.xxHash3/StreamingState/StreamingStateData Unity.Collections.xxHash3/StreamingState::State
	StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC  ___State_4;

public:
	inline static int32_t get_offset_of_State_4() { return static_cast<int32_t>(offsetof(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0, ___State_4)); }
	inline StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC  get_State_4() const { return ___State_4; }
	inline StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * get_address_of_State_4() { return &___State_4; }
	inline void set_State_4(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC  value)
	{
		___State_4 = value;
	}
};

struct StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields
{
public:
	// System.Int32 Unity.Collections.xxHash3/StreamingState::SECRET_LIMIT
	int32_t ___SECRET_LIMIT_0;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::NB_STRIPES_PER_BLOCK
	int32_t ___NB_STRIPES_PER_BLOCK_1;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::INTERNAL_BUFFER_SIZE
	int32_t ___INTERNAL_BUFFER_SIZE_2;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::INTERNAL_BUFFER_STRIPES
	int32_t ___INTERNAL_BUFFER_STRIPES_3;

public:
	inline static int32_t get_offset_of_SECRET_LIMIT_0() { return static_cast<int32_t>(offsetof(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields, ___SECRET_LIMIT_0)); }
	inline int32_t get_SECRET_LIMIT_0() const { return ___SECRET_LIMIT_0; }
	inline int32_t* get_address_of_SECRET_LIMIT_0() { return &___SECRET_LIMIT_0; }
	inline void set_SECRET_LIMIT_0(int32_t value)
	{
		___SECRET_LIMIT_0 = value;
	}

	inline static int32_t get_offset_of_NB_STRIPES_PER_BLOCK_1() { return static_cast<int32_t>(offsetof(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields, ___NB_STRIPES_PER_BLOCK_1)); }
	inline int32_t get_NB_STRIPES_PER_BLOCK_1() const { return ___NB_STRIPES_PER_BLOCK_1; }
	inline int32_t* get_address_of_NB_STRIPES_PER_BLOCK_1() { return &___NB_STRIPES_PER_BLOCK_1; }
	inline void set_NB_STRIPES_PER_BLOCK_1(int32_t value)
	{
		___NB_STRIPES_PER_BLOCK_1 = value;
	}

	inline static int32_t get_offset_of_INTERNAL_BUFFER_SIZE_2() { return static_cast<int32_t>(offsetof(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields, ___INTERNAL_BUFFER_SIZE_2)); }
	inline int32_t get_INTERNAL_BUFFER_SIZE_2() const { return ___INTERNAL_BUFFER_SIZE_2; }
	inline int32_t* get_address_of_INTERNAL_BUFFER_SIZE_2() { return &___INTERNAL_BUFFER_SIZE_2; }
	inline void set_INTERNAL_BUFFER_SIZE_2(int32_t value)
	{
		___INTERNAL_BUFFER_SIZE_2 = value;
	}

	inline static int32_t get_offset_of_INTERNAL_BUFFER_STRIPES_3() { return static_cast<int32_t>(offsetof(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields, ___INTERNAL_BUFFER_STRIPES_3)); }
	inline int32_t get_INTERNAL_BUFFER_STRIPES_3() const { return ___INTERNAL_BUFFER_STRIPES_3; }
	inline int32_t* get_address_of_INTERNAL_BUFFER_STRIPES_3() { return &___INTERNAL_BUFFER_STRIPES_3; }
	inline void set_INTERNAL_BUFFER_STRIPES_3(int32_t value)
	{
		___INTERNAL_BUFFER_STRIPES_3 = value;
	}
};


// Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall
struct _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E  : public RuntimeObject
{
public:

public:
};

struct _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields
{
public:
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields, ___Pointer_0)); }
	inline intptr_t get_Pointer_0() const { return ___Pointer_0; }
	inline intptr_t* get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(intptr_t value)
	{
		___Pointer_0 = value;
	}

	inline static int32_t get_offset_of_DeferredCompilation_1() { return static_cast<int32_t>(offsetof(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields, ___DeferredCompilation_1)); }
	inline intptr_t get_DeferredCompilation_1() const { return ___DeferredCompilation_1; }
	inline intptr_t* get_address_of_DeferredCompilation_1() { return &___DeferredCompilation_1; }
	inline void set_DeferredCompilation_1(intptr_t value)
	{
		___DeferredCompilation_1 = value;
	}
};


// Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall
struct _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F  : public RuntimeObject
{
public:

public:
};

struct _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields
{
public:
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields, ___Pointer_0)); }
	inline intptr_t get_Pointer_0() const { return ___Pointer_0; }
	inline intptr_t* get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(intptr_t value)
	{
		___Pointer_0 = value;
	}

	inline static int32_t get_offset_of_DeferredCompilation_1() { return static_cast<int32_t>(offsetof(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields, ___DeferredCompilation_1)); }
	inline intptr_t get_DeferredCompilation_1() const { return ___DeferredCompilation_1; }
	inline intptr_t* get_address_of_DeferredCompilation_1() { return &___DeferredCompilation_1; }
	inline void set_DeferredCompilation_1(intptr_t value)
	{
		___DeferredCompilation_1 = value;
	}
};


// Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall
struct Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422  : public RuntimeObject
{
public:

public:
};

struct Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields
{
public:
	// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields, ___Pointer_0)); }
	inline intptr_t get_Pointer_0() const { return ___Pointer_0; }
	inline intptr_t* get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(intptr_t value)
	{
		___Pointer_0 = value;
	}

	inline static int32_t get_offset_of_DeferredCompilation_1() { return static_cast<int32_t>(offsetof(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields, ___DeferredCompilation_1)); }
	inline intptr_t get_DeferredCompilation_1() const { return ___DeferredCompilation_1; }
	inline intptr_t* get_address_of_DeferredCompilation_1() { return &___DeferredCompilation_1; }
	inline void set_DeferredCompilation_1(intptr_t value)
	{
		___DeferredCompilation_1 = value;
	}
};


// Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall
struct Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913  : public RuntimeObject
{
public:

public:
};

struct Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields
{
public:
	// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;

public:
	inline static int32_t get_offset_of_Pointer_0() { return static_cast<int32_t>(offsetof(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields, ___Pointer_0)); }
	inline intptr_t get_Pointer_0() const { return ___Pointer_0; }
	inline intptr_t* get_address_of_Pointer_0() { return &___Pointer_0; }
	inline void set_Pointer_0(intptr_t value)
	{
		___Pointer_0 = value;
	}

	inline static int32_t get_offset_of_DeferredCompilation_1() { return static_cast<int32_t>(offsetof(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields, ___DeferredCompilation_1)); }
	inline intptr_t get_DeferredCompilation_1() const { return ___DeferredCompilation_1; }
	inline intptr_t* get_address_of_DeferredCompilation_1() { return &___DeferredCompilation_1; }
	inline void set_DeferredCompilation_1(intptr_t value)
	{
		___DeferredCompilation_1 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<Unity.Collections.WordStorage/Entry>
struct NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2<System.Int32,System.Int32>
struct UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2::m_Buffer
	UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19, ___m_Buffer_0)); }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(UnsafeHashMapData_tBE4CCB191438EEFAF585DE1AD96D342825E64C82 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_1() { return static_cast<int32_t>(offsetof(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19, ___m_AllocatorLabel_1)); }
	inline int32_t get_m_AllocatorLabel_1() const { return ___m_AllocatorLabel_1; }
	inline int32_t* get_address_of_m_AllocatorLabel_1() { return &___m_AllocatorLabel_1; }
	inline void set_m_AllocatorLabel_1(int32_t value)
	{
		___m_AllocatorLabel_1 = value;
	}
};


// Unity.Collections.FixedListInt4096
struct FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt16 Unity.Collections.FixedListInt4096::length
					uint16_t ___length_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint16_t ___length_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[2];
					// Unity.Collections.FixedBytes4094 Unity.Collections.FixedListInt4096::buffer
					FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150  ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[2];
					FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150  ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75__padding[4096];
	};

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75, ___length_0)); }
	inline uint16_t get_length_0() const { return ___length_0; }
	inline uint16_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint16_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75, ___buffer_1)); }
	inline FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150  get_buffer_1() const { return ___buffer_1; }
	inline FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150 * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(FixedBytes4094_tA9F73D0C7311C392EEC2D43FCABB33894D30A150  value)
	{
		___buffer_1 = value;
	}
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

// Unity.Collections.LowLevel.Unsafe.UnsafeStream
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream::m_Block
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_Block_0;
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeStream::m_Allocator
	int32_t ___m_Allocator_1;

public:
	inline static int32_t get_offset_of_m_Block_0() { return static_cast<int32_t>(offsetof(UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0, ___m_Block_0)); }
	inline UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * get_m_Block_0() const { return ___m_Block_0; }
	inline UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA ** get_address_of_m_Block_0() { return &___m_Block_0; }
	inline void set_m_Block_0(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * value)
	{
		___m_Block_0 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_1() { return static_cast<int32_t>(offsetof(UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0, ___m_Allocator_1)); }
	inline int32_t get_m_Allocator_1() const { return ___m_Allocator_1; }
	inline int32_t* get_address_of_m_Allocator_1() { return &___m_Allocator_1; }
	inline void set_m_Allocator_1(int32_t value)
	{
		___m_Allocator_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke
{
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_Block_0;
	int32_t ___m_Allocator_1;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream
struct UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com
{
	UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * ___m_Block_0;
	int32_t ___m_Allocator_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA 
{
public:
	// Unity.Collections.Allocator Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Allocator
	int32_t ___Allocator_1;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock** Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Blocks
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** ___Blocks_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::BlockCount
	int32_t ___BlockCount_3;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Free
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Free_4;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Ranges
	UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * ___Ranges_5;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::RangeCount
	int32_t ___RangeCount_6;

public:
	inline static int32_t get_offset_of_Allocator_1() { return static_cast<int32_t>(offsetof(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA, ___Allocator_1)); }
	inline int32_t get_Allocator_1() const { return ___Allocator_1; }
	inline int32_t* get_address_of_Allocator_1() { return &___Allocator_1; }
	inline void set_Allocator_1(int32_t value)
	{
		___Allocator_1 = value;
	}

	inline static int32_t get_offset_of_Blocks_2() { return static_cast<int32_t>(offsetof(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA, ___Blocks_2)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_Blocks_2() const { return ___Blocks_2; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *** get_address_of_Blocks_2() { return &___Blocks_2; }
	inline void set_Blocks_2(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** value)
	{
		___Blocks_2 = value;
	}

	inline static int32_t get_offset_of_BlockCount_3() { return static_cast<int32_t>(offsetof(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA, ___BlockCount_3)); }
	inline int32_t get_BlockCount_3() const { return ___BlockCount_3; }
	inline int32_t* get_address_of_BlockCount_3() { return &___BlockCount_3; }
	inline void set_BlockCount_3(int32_t value)
	{
		___BlockCount_3 = value;
	}

	inline static int32_t get_offset_of_Free_4() { return static_cast<int32_t>(offsetof(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA, ___Free_4)); }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * get_Free_4() const { return ___Free_4; }
	inline UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** get_address_of_Free_4() { return &___Free_4; }
	inline void set_Free_4(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * value)
	{
		___Free_4 = value;
	}

	inline static int32_t get_offset_of_Ranges_5() { return static_cast<int32_t>(offsetof(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA, ___Ranges_5)); }
	inline UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * get_Ranges_5() const { return ___Ranges_5; }
	inline UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 ** get_address_of_Ranges_5() { return &___Ranges_5; }
	inline void set_Ranges_5(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * value)
	{
		___Ranges_5 = value;
	}

	inline static int32_t get_offset_of_RangeCount_6() { return static_cast<int32_t>(offsetof(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA, ___RangeCount_6)); }
	inline int32_t get_RangeCount_6() const { return ___RangeCount_6; }
	inline int32_t* get_address_of_RangeCount_6() { return &___RangeCount_6; }
	inline void set_RangeCount_6(int32_t value)
	{
		___RangeCount_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA_marshaled_pinvoke
{
	int32_t ___Allocator_1;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** ___Blocks_2;
	int32_t ___BlockCount_3;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Free_4;
	UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * ___Ranges_5;
	int32_t ___RangeCount_6;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA_marshaled_com
{
	int32_t ___Allocator_1;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E ** ___Blocks_2;
	int32_t ___BlockCount_3;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___Free_4;
	UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * ___Ranges_5;
	int32_t ___RangeCount_6;
};

// Unity.Collections.AllocatorManager/Block
struct Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 
{
public:
	// Unity.Collections.AllocatorManager/Range Unity.Collections.AllocatorManager/Block::Range
	Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  ___Range_0;
	// System.Int32 Unity.Collections.AllocatorManager/Block::BytesPerItem
	int32_t ___BytesPerItem_1;
	// System.Int32 Unity.Collections.AllocatorManager/Block::AllocatedItems
	int32_t ___AllocatedItems_2;
	// System.Byte Unity.Collections.AllocatorManager/Block::Log2Alignment
	uint8_t ___Log2Alignment_3;
	// System.Byte Unity.Collections.AllocatorManager/Block::Padding0
	uint8_t ___Padding0_4;
	// System.UInt16 Unity.Collections.AllocatorManager/Block::Padding1
	uint16_t ___Padding1_5;
	// System.UInt32 Unity.Collections.AllocatorManager/Block::Padding2
	uint32_t ___Padding2_6;

public:
	inline static int32_t get_offset_of_Range_0() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Range_0)); }
	inline Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  get_Range_0() const { return ___Range_0; }
	inline Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * get_address_of_Range_0() { return &___Range_0; }
	inline void set_Range_0(Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  value)
	{
		___Range_0 = value;
	}

	inline static int32_t get_offset_of_BytesPerItem_1() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___BytesPerItem_1)); }
	inline int32_t get_BytesPerItem_1() const { return ___BytesPerItem_1; }
	inline int32_t* get_address_of_BytesPerItem_1() { return &___BytesPerItem_1; }
	inline void set_BytesPerItem_1(int32_t value)
	{
		___BytesPerItem_1 = value;
	}

	inline static int32_t get_offset_of_AllocatedItems_2() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___AllocatedItems_2)); }
	inline int32_t get_AllocatedItems_2() const { return ___AllocatedItems_2; }
	inline int32_t* get_address_of_AllocatedItems_2() { return &___AllocatedItems_2; }
	inline void set_AllocatedItems_2(int32_t value)
	{
		___AllocatedItems_2 = value;
	}

	inline static int32_t get_offset_of_Log2Alignment_3() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Log2Alignment_3)); }
	inline uint8_t get_Log2Alignment_3() const { return ___Log2Alignment_3; }
	inline uint8_t* get_address_of_Log2Alignment_3() { return &___Log2Alignment_3; }
	inline void set_Log2Alignment_3(uint8_t value)
	{
		___Log2Alignment_3 = value;
	}

	inline static int32_t get_offset_of_Padding0_4() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Padding0_4)); }
	inline uint8_t get_Padding0_4() const { return ___Padding0_4; }
	inline uint8_t* get_address_of_Padding0_4() { return &___Padding0_4; }
	inline void set_Padding0_4(uint8_t value)
	{
		___Padding0_4 = value;
	}

	inline static int32_t get_offset_of_Padding1_5() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Padding1_5)); }
	inline uint16_t get_Padding1_5() const { return ___Padding1_5; }
	inline uint16_t* get_address_of_Padding1_5() { return &___Padding1_5; }
	inline void set_Padding1_5(uint16_t value)
	{
		___Padding1_5 = value;
	}

	inline static int32_t get_offset_of_Padding2_6() { return static_cast<int32_t>(offsetof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1, ___Padding2_6)); }
	inline uint32_t get_Padding2_6() const { return ___Padding2_6; }
	inline uint32_t* get_address_of_Padding2_6() { return &___Padding2_6; }
	inline void set_Padding2_6(uint32_t value)
	{
		___Padding2_6 = value;
	}
};


// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32>
struct NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeMultiHashMap`2<TKey,TValue> Unity.Collections.NativeMultiHashMap`2::m_MultiHashMapData
	UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  ___m_MultiHashMapData_0;

public:
	inline static int32_t get_offset_of_m_MultiHashMapData_0() { return static_cast<int32_t>(offsetof(NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56, ___m_MultiHashMapData_0)); }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  get_m_MultiHashMapData_0() const { return ___m_MultiHashMapData_0; }
	inline UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19 * get_address_of_m_MultiHashMapData_0() { return &___m_MultiHashMapData_0; }
	inline void set_m_MultiHashMapData_0(UnsafeMultiHashMap_2_tA121FA0D1413562195B1AE4895E538F446393F19  value)
	{
		___m_MultiHashMapData_0 = value;
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.AllocatorManager/SlabAllocator
struct SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A 
{
public:
	// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/SlabAllocator::Storage
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  ___Storage_0;
	// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Log2SlabSizeInBytes
	int32_t ___Log2SlabSizeInBytes_1;
	// Unity.Collections.FixedListInt4096 Unity.Collections.AllocatorManager/SlabAllocator::Occupied
	FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75  ___Occupied_2;
	// System.Int64 Unity.Collections.AllocatorManager/SlabAllocator::budgetInBytes
	int64_t ___budgetInBytes_3;
	// System.Int64 Unity.Collections.AllocatorManager/SlabAllocator::allocatedBytes
	int64_t ___allocatedBytes_4;

public:
	inline static int32_t get_offset_of_Storage_0() { return static_cast<int32_t>(offsetof(SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A, ___Storage_0)); }
	inline Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  get_Storage_0() const { return ___Storage_0; }
	inline Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * get_address_of_Storage_0() { return &___Storage_0; }
	inline void set_Storage_0(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  value)
	{
		___Storage_0 = value;
	}

	inline static int32_t get_offset_of_Log2SlabSizeInBytes_1() { return static_cast<int32_t>(offsetof(SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A, ___Log2SlabSizeInBytes_1)); }
	inline int32_t get_Log2SlabSizeInBytes_1() const { return ___Log2SlabSizeInBytes_1; }
	inline int32_t* get_address_of_Log2SlabSizeInBytes_1() { return &___Log2SlabSizeInBytes_1; }
	inline void set_Log2SlabSizeInBytes_1(int32_t value)
	{
		___Log2SlabSizeInBytes_1 = value;
	}

	inline static int32_t get_offset_of_Occupied_2() { return static_cast<int32_t>(offsetof(SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A, ___Occupied_2)); }
	inline FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75  get_Occupied_2() const { return ___Occupied_2; }
	inline FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75 * get_address_of_Occupied_2() { return &___Occupied_2; }
	inline void set_Occupied_2(FixedListInt4096_t21C34322AE632AF0262ADDFD9CA0FC1D8FD0AF75  value)
	{
		___Occupied_2 = value;
	}

	inline static int32_t get_offset_of_budgetInBytes_3() { return static_cast<int32_t>(offsetof(SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A, ___budgetInBytes_3)); }
	inline int64_t get_budgetInBytes_3() const { return ___budgetInBytes_3; }
	inline int64_t* get_address_of_budgetInBytes_3() { return &___budgetInBytes_3; }
	inline void set_budgetInBytes_3(int64_t value)
	{
		___budgetInBytes_3 = value;
	}

	inline static int32_t get_offset_of_allocatedBytes_4() { return static_cast<int32_t>(offsetof(SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A, ___allocatedBytes_4)); }
	inline int64_t get_allocatedBytes_4() const { return ___allocatedBytes_4; }
	inline int64_t* get_address_of_allocatedBytes_4() { return &___allocatedBytes_4; }
	inline void set_allocatedBytes_4(int64_t value)
	{
		___allocatedBytes_4 = value;
	}
};


// Unity.Collections.AllocatorManager/StackAllocator
struct StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849 
{
public:
	// Unity.Collections.AllocatorManager/Block Unity.Collections.AllocatorManager/StackAllocator::m_storage
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  ___m_storage_0;
	// System.Int64 Unity.Collections.AllocatorManager/StackAllocator::m_top
	int64_t ___m_top_1;
	// System.Int64 Unity.Collections.AllocatorManager/StackAllocator::budgetInBytes
	int64_t ___budgetInBytes_2;
	// System.Int64 Unity.Collections.AllocatorManager/StackAllocator::allocatedBytes
	int64_t ___allocatedBytes_3;

public:
	inline static int32_t get_offset_of_m_storage_0() { return static_cast<int32_t>(offsetof(StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849, ___m_storage_0)); }
	inline Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  get_m_storage_0() const { return ___m_storage_0; }
	inline Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * get_address_of_m_storage_0() { return &___m_storage_0; }
	inline void set_m_storage_0(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  value)
	{
		___m_storage_0 = value;
	}

	inline static int32_t get_offset_of_m_top_1() { return static_cast<int32_t>(offsetof(StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849, ___m_top_1)); }
	inline int64_t get_m_top_1() const { return ___m_top_1; }
	inline int64_t* get_address_of_m_top_1() { return &___m_top_1; }
	inline void set_m_top_1(int64_t value)
	{
		___m_top_1 = value;
	}

	inline static int32_t get_offset_of_budgetInBytes_2() { return static_cast<int32_t>(offsetof(StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849, ___budgetInBytes_2)); }
	inline int64_t get_budgetInBytes_2() const { return ___budgetInBytes_2; }
	inline int64_t* get_address_of_budgetInBytes_2() { return &___budgetInBytes_2; }
	inline void set_budgetInBytes_2(int64_t value)
	{
		___budgetInBytes_2 = value;
	}

	inline static int32_t get_offset_of_allocatedBytes_3() { return static_cast<int32_t>(offsetof(StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849, ___allocatedBytes_3)); }
	inline int64_t get_allocatedBytes_3() const { return ___allocatedBytes_3; }
	inline int64_t* get_address_of_allocatedBytes_3() { return &___allocatedBytes_3; }
	inline void set_allocatedBytes_3(int64_t value)
	{
		___allocatedBytes_3 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
struct DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5 
{
public:
	// Unity.Collections.LowLevel.Unsafe.UnsafeStream Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob::Container
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0  ___Container_0;

public:
	inline static int32_t get_offset_of_Container_0() { return static_cast<int32_t>(offsetof(DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5, ___Container_0)); }
	inline UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0  get_Container_0() const { return ___Container_0; }
	inline UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * get_address_of_Container_0() { return &___Container_0; }
	inline void set_Container_0(UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0  value)
	{
		___Container_0 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
struct DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_pinvoke
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke ___Container_0;
};
// Native definition for COM marshalling of Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
struct DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_com
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com ___Container_0;
};

// Unity.Collections.xxHash3/_dlg_Hash128Long
struct _dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.xxHash3/_dlg_Hash64Long
struct _dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$PostfixBurstDelegate
struct _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$PostfixBurstDelegate
struct _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$PostfixBurstDelegate
struct Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$PostfixBurstDelegate
struct Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.WordStorage
struct WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Collections.WordStorage::buffer
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___buffer_0;
	// Unity.Collections.NativeArray`1<Unity.Collections.WordStorage/Entry> Unity.Collections.WordStorage::entry
	NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959  ___entry_1;
	// Unity.Collections.NativeMultiHashMap`2<System.Int32,System.Int32> Unity.Collections.WordStorage::hash
	NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  ___hash_2;
	// System.Int32 Unity.Collections.WordStorage::chars
	int32_t ___chars_3;
	// System.Int32 Unity.Collections.WordStorage::entries
	int32_t ___entries_4;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843, ___buffer_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_buffer_0() const { return ___buffer_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___buffer_0 = value;
	}

	inline static int32_t get_offset_of_entry_1() { return static_cast<int32_t>(offsetof(WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843, ___entry_1)); }
	inline NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959  get_entry_1() const { return ___entry_1; }
	inline NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959 * get_address_of_entry_1() { return &___entry_1; }
	inline void set_entry_1(NativeArray_1_tBFD932715FDBFC709FD5A684E667A2AE5D943959  value)
	{
		___entry_1 = value;
	}

	inline static int32_t get_offset_of_hash_2() { return static_cast<int32_t>(offsetof(WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843, ___hash_2)); }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  get_hash_2() const { return ___hash_2; }
	inline NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56 * get_address_of_hash_2() { return &___hash_2; }
	inline void set_hash_2(NativeMultiHashMap_2_t4328C288A94A6BE03785C8FF74A83E3DF6AB7A56  value)
	{
		___hash_2 = value;
	}

	inline static int32_t get_offset_of_chars_3() { return static_cast<int32_t>(offsetof(WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843, ___chars_3)); }
	inline int32_t get_chars_3() const { return ___chars_3; }
	inline int32_t* get_address_of_chars_3() { return &___chars_3; }
	inline void set_chars_3(int32_t value)
	{
		___chars_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843, ___entries_4)); }
	inline int32_t get_entries_4() const { return ___entries_4; }
	inline int32_t* get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(int32_t value)
	{
		___entries_4 = value;
	}
};


// Unity.Collections.WordStorageStatic/Thing
struct Thing_t7EC1A2F5B31A96D07E049355934AFBB0184B00CD 
{
public:
	// Unity.Collections.WordStorage Unity.Collections.WordStorageStatic/Thing::Data
	WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843  ___Data_0;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(Thing_t7EC1A2F5B31A96D07E049355934AFBB0184B00CD, ___Data_0)); }
	inline WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843  get_Data_0() const { return ___Data_0; }
	inline WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843 * get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(WordStorage_t180F9979C10DD0B86DB4B5366F8FD1B3E0120843  value)
	{
		___Data_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

IL2CPP_EXTERN_C void UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_pinvoke(const UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0& unmarshaled, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_pinvoke_back(const UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke& marshaled, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0& unmarshaled);
IL2CPP_EXTERN_C void UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_pinvoke_cleanup(UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_com(const UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0& unmarshaled, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_com_back(const UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com& marshaled, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0& unmarshaled);
IL2CPP_EXTERN_C void UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_com_cleanup(UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshaled_com& marshaled);

// Unity.Burst.SharedStatic`1<!0> Unity.Burst.SharedStatic`1<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>::GetOrCreate<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_gshared (uint32_t ___alignment0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.xxHash3/StreamingState/StreamingStateData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_gshared (const RuntimeMethod* method);

// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeStream_Deallocate_m8B2F6CB123BBE5FA40800090E35722987646FEEE (UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void DisposeJob_Execute_m20A92321E0E12AFD935C7BBF14710C6C95375BBC (DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader__ctor_m4C0262F64964DE475CB3D118CC0F736B06012106 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * ___stream0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::BeginForEachIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_BeginForEachIndex_m0386C5183DA6F73E700300154D8B55ED87F32996 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, int32_t ___foreachIndex0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::EndForEachIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_EndForEachIndex_mEB4286EE649370694F7677BCE37F5E9054C62A6B (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::get_ForEachCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_get_ForEachCount_m1BF989B29449761E6FB9B5A437CBCC3B959B4F72 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::get_RemainingItemCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Reader_get_RemainingItemCount_m8A86FA6BBA579CE20C8EC57A8FD1BA1F477136E3_inline (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_Count_m7CB7B2AB40A9B542EC4424CEC5E599A4FE387989 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer__ctor_m95FDA86313CFFF1F72851605487C082E454E8CF8 (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * ___stream0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::BeginForEachIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_BeginForEachIndex_mB9DA669CD8FCD696FCE6BC550C4F7AE6B620F9FD (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, int32_t ___foreachIndex0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::EndForEachIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_EndForEachIndex_mE6591C4DA0E41F02BA8CBB54FE9B5048A1D0857A (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, const RuntimeMethod* method);
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData::Allocate(Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * UnsafeStreamBlockData_Allocate_mF9DBCB5E6906664261137E3D1E62D5768DA993D4 (UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * __this, UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * ___oldBlock0, int32_t ___threadIndex1, const RuntimeMethod* method);
// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m5B2B5A4FA04B32B0D6F2A20C295E82E584553A08 (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, int32_t ___size0, const RuntimeMethod* method);
// System.UInt32 Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo::get_DefaultPageSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PageSizeInfo_get_DefaultPageSizeInBytes_m10B5F3E66825476CD24C93B0BB979A35527A8466 (PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 * __this, const RuntimeMethod* method);
// System.UInt64 Unity.Mathematics.math::max(System.UInt64,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t math_max_m0C3B6EBC4E87C085887A8658E8C183AEF5F9A105_inline (uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method);
// System.Int32 Unity.Mathematics.math::lzcnt(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mFE4C7EF0807D856099144A32900D95A6A6A680AA_inline (uint64_t ___x0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo::.ctor(System.UInt64,System.UInt64*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageSizeInfo__ctor_m85F44256D3E5264A5211D35366199215E990CB97 (PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 * __this, uint64_t ___defaultPageSize0, uint64_t* ___availablePageSizes1, uint64_t ___numAvailablePageSizes2, const RuntimeMethod* method);
// Unity.Burst.SharedStatic`1<!0> Unity.Burst.SharedStatic`1<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>::GetOrCreate<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>(System.UInt32)
inline SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637 (uint32_t ___alignment0, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_gshared)(___alignment0, method);
}
// System.Void Unity.Collections.WordStorage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC4FBCAD21D5EE77B71CCA663DDEF4C737639416 (U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.WordStorage::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WordStorage_Shutdown_m8E01E7135D3A788BB2A945DB8B95CD7D5E3A26EE (const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/StreamingState::Reset(System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Reset_m0A0AF3B31CE4338FE096EE0A3E6114FCF024417D (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, bool ___isHash640, uint64_t ___seed1, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/StreamingState::.ctor(System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState__ctor_m5A095C15849EAB529A023F19D17AF46D9151D133 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, bool ___isHash640, uint64_t ___seed1, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.xxHash3/StreamingState/StreamingStateData>()
inline int32_t UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_gshared)(method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m9A2B75C85CB8B6637B1286A562A8E35C82772D09 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method);
// System.UInt64* Unity.Collections.xxHash3/StreamingState::get_Acc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method);
// System.Byte* Unity.Collections.xxHash3/StreamingState::get_SecretKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::EncodeSecretKey(System.Byte*,System.Byte*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_EncodeSecretKey_m913ED3B42A3A75702BD385E7B0C229B09B278DF5 (uint8_t* ___dst0, uint8_t* ___secret1, uint64_t ___seed2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Byte* Unity.Collections.xxHash3/StreamingState::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/StreamingState::ConsumeStripes(System.UInt64*,System.Int32&,System.Byte*,System.Int64,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, uint64_t* ___acc0, int32_t* ___nbStripesSoFar1, uint8_t* ___input2, int64_t ___totalStripes3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/StreamingState::Update(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_m53774D2E3C5654E6E39D514AFD2CCDD62D1E0028 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, void* ___input0, int32_t ___length1, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/StreamingState::DigestLong(System.UInt64*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_DigestLong_m077284DF0B32BDA0A0041E3DADA2A495F566C152 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, uint64_t* ___acc0, uint8_t* ___secret1, int32_t ___isHash642, const RuntimeMethod* method);
// System.UInt64 Unity.Collections.xxHash3::MergeAcc(System.UInt64*,System.Byte*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t xxHash3_MergeAcc_mF5CA25B12DC5478CDA428FDDD8EDEA7B070B1CDD (uint64_t* ___acc0, uint8_t* ___secret1, uint64_t ___start2, const RuntimeMethod* method);
// Unity.Mathematics.uint2 Unity.Collections.xxHash3::ToUint2(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t31B88562B6681D249453803230869FBE9ED565E7  xxHash3_ToUint2_m50ADF44553921AB859DA8C8C88407A7EF55FD5CF (uint64_t ___u0, const RuntimeMethod* method);
// Unity.Mathematics.uint2 Unity.Collections.xxHash3::Hash64(System.Void*,System.Int64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t31B88562B6681D249453803230869FBE9ED565E7  xxHash3_Hash64_m9172B73D6D1E203A06C0F60A29EE3922C44A177B (void* ___input0, int64_t ___length1, uint64_t ___seed2, const RuntimeMethod* method);
// Unity.Mathematics.uint2 Unity.Collections.xxHash3/StreamingState::DigestHash64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t31B88562B6681D249453803230869FBE9ED565E7  StreamingState_DigestHash64_mBD329D19430F69AF2308D445A68F595834C7E30D (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Burst.Intrinsics.X86/Avx2::get_IsAvx2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avx2_get_IsAvx2Supported_m0BC6422FDAB370A83B7D5E44509F8F0EFC442FFA (const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::Avx2Accumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::DefaultAccumulate512(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int32_t ___isHash644, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::Avx2Accumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int64_t ___nbStripes4, int32_t ___isHash645, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::Avx2ScrambleAcc(System.UInt64*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_Avx2ScrambleAcc_mA6DBBF7E016635A901F80FC07FF1851618D6C3D5 (uint64_t* ___acc0, uint8_t* ___secret1, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::DefaultAccumulate(System.UInt64*,System.Byte*,System.Byte*,System.Byte*,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9 (uint64_t* ___acc0, uint8_t* ___input1, uint8_t* ___dest2, uint8_t* ___secret3, int64_t ___nbStripes4, int32_t ___isHash645, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::DefaultScrambleAcc(System.UInt64*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3_DefaultScrambleAcc_m5F9168BDE58B95E6C98B107B341D0D822AAAEC37 (uint64_t* ___acc0, uint8_t* ___secret1, const RuntimeMethod* method);
// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer_mC846FC3BCDF9146245CE55FA6D0B9802539E5161 (intptr_t ___ilppMethod0, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_GetFunctionPointerDiscard_mD94778EBBA72205E310766008AF503758977B15B (intptr_t* p0, const RuntimeMethod* method);
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod(System.RuntimeMethodHandle,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod_mA4815AB8047483B6688EBFB17D8B659773BA778C (RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  ___burstMethodHandle0, RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  ___managedMethodHandle1, RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___delegateTypeHandle2, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_Constructor_m937FA08B4BA2764496B8A1AF84364F88549D053E (const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E (const RuntimeMethod* method);
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_GetFunctionPointer_mF664C5A6E4AB68B2B74B8A1D1DA55F34E4A797C8 (const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::_mono_to_burst_Hash128Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_GetFunctionPointerDiscard_m3B36856FC0619C5BE26FC2368DF6D16A9AD50803 (intptr_t* p0, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_Constructor_mB62A8208902645C4A4766C642546938C44202B2C (const RuntimeMethod* method);
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_GetFunctionPointer_mEC7A3A2774F2FA2ED5E1C78064FF118913DCEEF1 (const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::_mono_to_burst_Hash64Long$BurstManaged(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3/ulong2::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB (ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C * __this, uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24BurstDirectCall_GetFunctionPointerDiscard_m37A13E974498E3280D1B64D2290185300D4C20CF (intptr_t* p0, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24BurstDirectCall_Constructor_m8AF87FEFDC13A6C3119D37ADC8EDC8B10E3EAA0D (const RuntimeMethod* method);
// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000C2EU24BurstDirectCall_GetFunctionPointer_m295E5EB9C59AE8AE452877A115A47265478B6A7E (const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_inline (intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24BurstDirectCall_GetFunctionPointerDiscard_m6952A44C4CFEEF1F8D0D47B9E7F185CBC349396C (intptr_t* p0, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24BurstDirectCall_Constructor_m6C6A467A40353C544869E5C48F294741DB8B54C8 (const RuntimeMethod* method);
// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000C24U24BurstDirectCall_GetFunctionPointer_mE1E3F368568FD5217C12E139B5A6B70615EE26DE (const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try$BurstManaged(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_inline (intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method);
// Unity.Collections.AllocatorManager/SmallAllocatorHandle Unity.Collections.AllocatorManager/SmallAllocatorHandle::op_Implicit(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  SmallAllocatorHandle_op_Implicit_m298BBE86E197B28DCEF7C2FF740259ECAF92671C (AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  ___a0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.AllocatorManager/Block::set_Alignment(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorManager_Try_m67E1175F6B4340CF45D552DDC90CDFE0DA1912E3 (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_IsCustom_m7ED10C3E0A4B122B8E0CE2AABE75F7A477C6F526 (int32_t ___allocator0, const RuntimeMethod* method);
// System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.Allocator,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_CustomResize_mBACD370FE1C026E09E54946396685FF80F1A1477 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, int32_t ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Int64 Unity.Mathematics.math::min(System.Int64,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_min_m65ACBB9005609DE8184015662C758B23A85C794E_inline (int64_t ___x0, int64_t ___y1, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::_Hash128Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3__Hash128Long_mD0F28BAE0AC3732B7F54185516FB6ADAC2946601 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method);
// System.Void Unity.Collections.xxHash3::_Hash64Long(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xxHash3__Hash64Long_mFD366A8CD7B43D58B3304AB7041504CB6C603A9C (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3 (SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A * __this, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator::Try(Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D (StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849 * __this, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block0, const RuntimeMethod* method);
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


// Conversion methods for marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
IL2CPP_EXTERN_C void DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshal_pinvoke(const DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5& unmarshaled, DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_pinvoke& marshaled)
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_pinvoke(unmarshaled.get_Container_0(), marshaled.___Container_0);
}
IL2CPP_EXTERN_C void DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshal_pinvoke_back(const DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_pinvoke& marshaled, DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5& unmarshaled)
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0  unmarshaled_Container_temp_0;
	memset((&unmarshaled_Container_temp_0), 0, sizeof(unmarshaled_Container_temp_0));
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_pinvoke_back(marshaled.___Container_0, unmarshaled_Container_temp_0);
	unmarshaled.set_Container_0(unmarshaled_Container_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
IL2CPP_EXTERN_C void DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshal_pinvoke_cleanup(DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_pinvoke& marshaled)
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_pinvoke_cleanup(marshaled.___Container_0);
}


// Conversion methods for marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
IL2CPP_EXTERN_C void DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshal_com(const DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5& unmarshaled, DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_com& marshaled)
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_com(unmarshaled.get_Container_0(), marshaled.___Container_0);
}
IL2CPP_EXTERN_C void DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshal_com_back(const DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_com& marshaled, DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5& unmarshaled)
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0  unmarshaled_Container_temp_0;
	memset((&unmarshaled_Container_temp_0), 0, sizeof(unmarshaled_Container_temp_0));
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_com_back(marshaled.___Container_0, unmarshaled_Container_temp_0);
	unmarshaled.set_Container_0(unmarshaled_Container_temp_0);
}
// Conversion method for clean up from marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob
IL2CPP_EXTERN_C void DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshal_com_cleanup(DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5_marshaled_com& marshaled)
{
	UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0_marshal_com_cleanup(marshaled.___Container_0);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/DisposeJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void DisposeJob_Execute_m20A92321E0E12AFD935C7BBF14710C6C95375BBC (DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	{
		// Container.Deallocate();
		UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * L_0 = __this->get_address_of_Container_0();
		UnsafeStream_Deallocate_m8B2F6CB123BBE5FA40800090E35722987646FEEE((UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DisposeJob_Execute_m20A92321E0E12AFD935C7BBF14710C6C95375BBC_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5 * _thisAdjusted = reinterpret_cast<DisposeJob_t7B8323DE7E36B8F2D8B3D50D3F86CCB4A3707AC5 *>(__this + _offset);
	DisposeJob_Execute_m20A92321E0E12AFD935C7BBF14710C6C95375BBC(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
IL2CPP_EXTERN_C void Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshal_pinvoke(const Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB& unmarshaled, Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BlockStream_0 = unmarshaled.get_m_BlockStream_0();
	marshaled.___m_CurrentBlock_1 = unmarshaled.get_m_CurrentBlock_1();
	marshaled.___m_CurrentPtr_2 = unmarshaled.get_m_CurrentPtr_2();
	marshaled.___m_CurrentBlockEnd_3 = unmarshaled.get_m_CurrentBlockEnd_3();
	marshaled.___m_RemainingItemCount_4 = unmarshaled.get_m_RemainingItemCount_4();
	marshaled.___m_LastBlockSize_5 = unmarshaled.get_m_LastBlockSize_5();
}
IL2CPP_EXTERN_C void Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshal_pinvoke_back(const Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_pinvoke& marshaled, Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB& unmarshaled)
{
	unmarshaled.set_m_BlockStream_0(marshaled.___m_BlockStream_0);
	unmarshaled.set_m_CurrentBlock_1(marshaled.___m_CurrentBlock_1);
	unmarshaled.set_m_CurrentPtr_2(marshaled.___m_CurrentPtr_2);
	unmarshaled.set_m_CurrentBlockEnd_3(marshaled.___m_CurrentBlockEnd_3);
	int32_t unmarshaled_m_RemainingItemCount_temp_4 = 0;
	unmarshaled_m_RemainingItemCount_temp_4 = marshaled.___m_RemainingItemCount_4;
	unmarshaled.set_m_RemainingItemCount_4(unmarshaled_m_RemainingItemCount_temp_4);
	int32_t unmarshaled_m_LastBlockSize_temp_5 = 0;
	unmarshaled_m_LastBlockSize_temp_5 = marshaled.___m_LastBlockSize_5;
	unmarshaled.set_m_LastBlockSize_5(unmarshaled_m_LastBlockSize_temp_5);
}
// Conversion method for clean up from marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
IL2CPP_EXTERN_C void Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshal_pinvoke_cleanup(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
IL2CPP_EXTERN_C void Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshal_com(const Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB& unmarshaled, Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_com& marshaled)
{
	marshaled.___m_BlockStream_0 = unmarshaled.get_m_BlockStream_0();
	marshaled.___m_CurrentBlock_1 = unmarshaled.get_m_CurrentBlock_1();
	marshaled.___m_CurrentPtr_2 = unmarshaled.get_m_CurrentPtr_2();
	marshaled.___m_CurrentBlockEnd_3 = unmarshaled.get_m_CurrentBlockEnd_3();
	marshaled.___m_RemainingItemCount_4 = unmarshaled.get_m_RemainingItemCount_4();
	marshaled.___m_LastBlockSize_5 = unmarshaled.get_m_LastBlockSize_5();
}
IL2CPP_EXTERN_C void Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshal_com_back(const Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_com& marshaled, Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB& unmarshaled)
{
	unmarshaled.set_m_BlockStream_0(marshaled.___m_BlockStream_0);
	unmarshaled.set_m_CurrentBlock_1(marshaled.___m_CurrentBlock_1);
	unmarshaled.set_m_CurrentPtr_2(marshaled.___m_CurrentPtr_2);
	unmarshaled.set_m_CurrentBlockEnd_3(marshaled.___m_CurrentBlockEnd_3);
	int32_t unmarshaled_m_RemainingItemCount_temp_4 = 0;
	unmarshaled_m_RemainingItemCount_temp_4 = marshaled.___m_RemainingItemCount_4;
	unmarshaled.set_m_RemainingItemCount_4(unmarshaled_m_RemainingItemCount_temp_4);
	int32_t unmarshaled_m_LastBlockSize_temp_5 = 0;
	unmarshaled_m_LastBlockSize_temp_5 = marshaled.___m_LastBlockSize_5;
	unmarshaled.set_m_LastBlockSize_5(unmarshaled_m_LastBlockSize_temp_5);
}
// Conversion method for clean up from marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
IL2CPP_EXTERN_C void Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshal_com_cleanup(Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB_marshaled_com& marshaled)
{
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader__ctor_m4C0262F64964DE475CB3D118CC0F736B06012106 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * ___stream0, const RuntimeMethod* method)
{
	{
		// m_BlockStream = stream.m_Block;
		UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * L_0 = ___stream0;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_1 = L_0->get_m_Block_0();
		__this->set_m_BlockStream_0((UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA *)L_1);
		// m_CurrentBlock = null;
		__this->set_m_CurrentBlock_1((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)((uintptr_t)0));
		// m_CurrentPtr = null;
		__this->set_m_CurrentPtr_2((uint8_t*)((uintptr_t)0));
		// m_CurrentBlockEnd = null;
		__this->set_m_CurrentBlockEnd_3((uint8_t*)((uintptr_t)0));
		// m_RemainingItemCount = 0;
		__this->set_m_RemainingItemCount_4(0);
		// m_LastBlockSize = 0;
		__this->set_m_LastBlockSize_5(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader__ctor_m4C0262F64964DE475CB3D118CC0F736B06012106_AdjustorThunk (RuntimeObject * __this, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * _thisAdjusted = reinterpret_cast<Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB *>(__this + _offset);
	Reader__ctor_m4C0262F64964DE475CB3D118CC0F736B06012106(_thisAdjusted, ___stream0, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::BeginForEachIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_BeginForEachIndex_m0386C5183DA6F73E700300154D8B55ED87F32996 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, int32_t ___foreachIndex0, const RuntimeMethod* method)
{
	{
		// m_RemainingItemCount = m_BlockStream->Ranges[foreachIndex].ElementCount;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_0 = __this->get_m_BlockStream_0();
		NullCheck(L_0);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_1 = L_0->get_Ranges_5();
		int32_t L_2 = ___foreachIndex0;
		uint32_t L_3 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)L_3)))));
		int32_t L_4 = ((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)L_3))))->get_ElementCount_2();
		__this->set_m_RemainingItemCount_4(L_4);
		// m_LastBlockSize = m_BlockStream->Ranges[foreachIndex].LastOffset;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_5 = __this->get_m_BlockStream_0();
		NullCheck(L_5);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_6 = L_5->get_Ranges_5();
		int32_t L_7 = ___foreachIndex0;
		uint32_t L_8 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)L_8)))));
		int32_t L_9 = ((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)L_8))))->get_LastOffset_3();
		__this->set_m_LastBlockSize_5(L_9);
		// m_CurrentBlock = m_BlockStream->Ranges[foreachIndex].Block;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_10 = __this->get_m_BlockStream_0();
		NullCheck(L_10);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_11 = L_10->get_Ranges_5();
		int32_t L_12 = ___foreachIndex0;
		uint32_t L_13 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_12), (int32_t)L_13)))));
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_14 = ((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_12), (int32_t)L_13))))->get_Block_0();
		__this->set_m_CurrentBlock_1((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_14);
		// m_CurrentPtr = (byte*)m_CurrentBlock + m_BlockStream->Ranges[foreachIndex].OffsetInFirstBlock;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_15 = __this->get_m_CurrentBlock_1();
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_16 = __this->get_m_BlockStream_0();
		NullCheck(L_16);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_17 = L_16->get_Ranges_5();
		int32_t L_18 = ___foreachIndex0;
		uint32_t L_19 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_17, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_18), (int32_t)L_19)))));
		int32_t L_20 = ((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_17, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_18), (int32_t)L_19))))->get_OffsetInFirstBlock_1();
		__this->set_m_CurrentPtr_2((uint8_t*)((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_20)));
		// m_CurrentBlockEnd = (byte*)m_CurrentBlock + UnsafeStreamBlockData.AllocationSize;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_21 = __this->get_m_CurrentBlock_1();
		__this->set_m_CurrentBlockEnd_3((uint8_t*)((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)il2cpp_codegen_add((intptr_t)L_21, (int32_t)((int32_t)4096))));
		// return m_RemainingItemCount;
		int32_t L_22 = __this->get_m_RemainingItemCount_4();
		return L_22;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_BeginForEachIndex_m0386C5183DA6F73E700300154D8B55ED87F32996_AdjustorThunk (RuntimeObject * __this, int32_t ___foreachIndex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * _thisAdjusted = reinterpret_cast<Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_BeginForEachIndex_m0386C5183DA6F73E700300154D8B55ED87F32996(_thisAdjusted, ___foreachIndex0, method);
	return _returnValue;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::EndForEachIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_EndForEachIndex_mEB4286EE649370694F7677BCE37F5E9054C62A6B (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_EndForEachIndex_mEB4286EE649370694F7677BCE37F5E9054C62A6B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * _thisAdjusted = reinterpret_cast<Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB *>(__this + _offset);
	Reader_EndForEachIndex_mEB4286EE649370694F7677BCE37F5E9054C62A6B(_thisAdjusted, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::get_ForEachCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_get_ForEachCount_m1BF989B29449761E6FB9B5A437CBCC3B959B4F72 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method)
{
	{
		// public int ForEachCount { get { return m_BlockStream->RangeCount; } }
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_0 = __this->get_m_BlockStream_0();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_RangeCount_6();
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_get_ForEachCount_m1BF989B29449761E6FB9B5A437CBCC3B959B4F72_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * _thisAdjusted = reinterpret_cast<Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_get_ForEachCount_m1BF989B29449761E6FB9B5A437CBCC3B959B4F72(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::get_RemainingItemCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_get_RemainingItemCount_m8A86FA6BBA579CE20C8EC57A8FD1BA1F477136E3 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method)
{
	{
		// public int RemainingItemCount { get { return m_RemainingItemCount; } }
		int32_t L_0 = __this->get_m_RemainingItemCount_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_get_RemainingItemCount_m8A86FA6BBA579CE20C8EC57A8FD1BA1F477136E3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * _thisAdjusted = reinterpret_cast<Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_get_RemainingItemCount_m8A86FA6BBA579CE20C8EC57A8FD1BA1F477136E3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_Count_m7CB7B2AB40A9B542EC4424CEC5E599A4FE387989 (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int itemCount = 0;
		V_0 = 0;
		// for (int i = 0; i != m_BlockStream->RangeCount; i++)
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		// itemCount += m_BlockStream->Ranges[i].ElementCount;
		int32_t L_0 = V_0;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_1 = __this->get_m_BlockStream_0();
		NullCheck(L_1);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_2 = L_1->get_Ranges_5();
		int32_t L_3 = V_1;
		uint32_t L_4 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_3), (int32_t)L_4)))));
		int32_t L_5 = ((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_3), (int32_t)L_4))))->get_ElementCount_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_5));
		// for (int i = 0; i != m_BlockStream->RangeCount; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i != m_BlockStream->RangeCount; i++)
		int32_t L_7 = V_1;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_8 = __this->get_m_BlockStream_0();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_RangeCount_6();
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		// return itemCount;
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t Reader_Count_m7CB7B2AB40A9B542EC4424CEC5E599A4FE387989_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * _thisAdjusted = reinterpret_cast<Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Reader_Count_m7CB7B2AB40A9B542EC4424CEC5E599A4FE387989(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
IL2CPP_EXTERN_C void Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshal_pinvoke(const Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A& unmarshaled, Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BlockStream_0 = unmarshaled.get_m_BlockStream_0();
	marshaled.___m_CurrentBlock_1 = unmarshaled.get_m_CurrentBlock_1();
	marshaled.___m_CurrentPtr_2 = unmarshaled.get_m_CurrentPtr_2();
	marshaled.___m_CurrentBlockEnd_3 = unmarshaled.get_m_CurrentBlockEnd_3();
	marshaled.___m_ForeachIndex_4 = unmarshaled.get_m_ForeachIndex_4();
	marshaled.___m_ElementCount_5 = unmarshaled.get_m_ElementCount_5();
	marshaled.___m_FirstBlock_6 = unmarshaled.get_m_FirstBlock_6();
	marshaled.___m_FirstOffset_7 = unmarshaled.get_m_FirstOffset_7();
	marshaled.___m_NumberOfBlocks_8 = unmarshaled.get_m_NumberOfBlocks_8();
	marshaled.___m_ThreadIndex_9 = unmarshaled.get_m_ThreadIndex_9();
}
IL2CPP_EXTERN_C void Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshal_pinvoke_back(const Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_pinvoke& marshaled, Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A& unmarshaled)
{
	unmarshaled.set_m_BlockStream_0(marshaled.___m_BlockStream_0);
	unmarshaled.set_m_CurrentBlock_1(marshaled.___m_CurrentBlock_1);
	unmarshaled.set_m_CurrentPtr_2(marshaled.___m_CurrentPtr_2);
	unmarshaled.set_m_CurrentBlockEnd_3(marshaled.___m_CurrentBlockEnd_3);
	int32_t unmarshaled_m_ForeachIndex_temp_4 = 0;
	unmarshaled_m_ForeachIndex_temp_4 = marshaled.___m_ForeachIndex_4;
	unmarshaled.set_m_ForeachIndex_4(unmarshaled_m_ForeachIndex_temp_4);
	int32_t unmarshaled_m_ElementCount_temp_5 = 0;
	unmarshaled_m_ElementCount_temp_5 = marshaled.___m_ElementCount_5;
	unmarshaled.set_m_ElementCount_5(unmarshaled_m_ElementCount_temp_5);
	unmarshaled.set_m_FirstBlock_6(marshaled.___m_FirstBlock_6);
	int32_t unmarshaled_m_FirstOffset_temp_7 = 0;
	unmarshaled_m_FirstOffset_temp_7 = marshaled.___m_FirstOffset_7;
	unmarshaled.set_m_FirstOffset_7(unmarshaled_m_FirstOffset_temp_7);
	int32_t unmarshaled_m_NumberOfBlocks_temp_8 = 0;
	unmarshaled_m_NumberOfBlocks_temp_8 = marshaled.___m_NumberOfBlocks_8;
	unmarshaled.set_m_NumberOfBlocks_8(unmarshaled_m_NumberOfBlocks_temp_8);
	int32_t unmarshaled_m_ThreadIndex_temp_9 = 0;
	unmarshaled_m_ThreadIndex_temp_9 = marshaled.___m_ThreadIndex_9;
	unmarshaled.set_m_ThreadIndex_9(unmarshaled_m_ThreadIndex_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
IL2CPP_EXTERN_C void Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshal_pinvoke_cleanup(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
IL2CPP_EXTERN_C void Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshal_com(const Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A& unmarshaled, Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_com& marshaled)
{
	marshaled.___m_BlockStream_0 = unmarshaled.get_m_BlockStream_0();
	marshaled.___m_CurrentBlock_1 = unmarshaled.get_m_CurrentBlock_1();
	marshaled.___m_CurrentPtr_2 = unmarshaled.get_m_CurrentPtr_2();
	marshaled.___m_CurrentBlockEnd_3 = unmarshaled.get_m_CurrentBlockEnd_3();
	marshaled.___m_ForeachIndex_4 = unmarshaled.get_m_ForeachIndex_4();
	marshaled.___m_ElementCount_5 = unmarshaled.get_m_ElementCount_5();
	marshaled.___m_FirstBlock_6 = unmarshaled.get_m_FirstBlock_6();
	marshaled.___m_FirstOffset_7 = unmarshaled.get_m_FirstOffset_7();
	marshaled.___m_NumberOfBlocks_8 = unmarshaled.get_m_NumberOfBlocks_8();
	marshaled.___m_ThreadIndex_9 = unmarshaled.get_m_ThreadIndex_9();
}
IL2CPP_EXTERN_C void Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshal_com_back(const Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_com& marshaled, Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A& unmarshaled)
{
	unmarshaled.set_m_BlockStream_0(marshaled.___m_BlockStream_0);
	unmarshaled.set_m_CurrentBlock_1(marshaled.___m_CurrentBlock_1);
	unmarshaled.set_m_CurrentPtr_2(marshaled.___m_CurrentPtr_2);
	unmarshaled.set_m_CurrentBlockEnd_3(marshaled.___m_CurrentBlockEnd_3);
	int32_t unmarshaled_m_ForeachIndex_temp_4 = 0;
	unmarshaled_m_ForeachIndex_temp_4 = marshaled.___m_ForeachIndex_4;
	unmarshaled.set_m_ForeachIndex_4(unmarshaled_m_ForeachIndex_temp_4);
	int32_t unmarshaled_m_ElementCount_temp_5 = 0;
	unmarshaled_m_ElementCount_temp_5 = marshaled.___m_ElementCount_5;
	unmarshaled.set_m_ElementCount_5(unmarshaled_m_ElementCount_temp_5);
	unmarshaled.set_m_FirstBlock_6(marshaled.___m_FirstBlock_6);
	int32_t unmarshaled_m_FirstOffset_temp_7 = 0;
	unmarshaled_m_FirstOffset_temp_7 = marshaled.___m_FirstOffset_7;
	unmarshaled.set_m_FirstOffset_7(unmarshaled_m_FirstOffset_temp_7);
	int32_t unmarshaled_m_NumberOfBlocks_temp_8 = 0;
	unmarshaled_m_NumberOfBlocks_temp_8 = marshaled.___m_NumberOfBlocks_8;
	unmarshaled.set_m_NumberOfBlocks_8(unmarshaled_m_NumberOfBlocks_temp_8);
	int32_t unmarshaled_m_ThreadIndex_temp_9 = 0;
	unmarshaled_m_ThreadIndex_temp_9 = marshaled.___m_ThreadIndex_9;
	unmarshaled.set_m_ThreadIndex_9(unmarshaled_m_ThreadIndex_temp_9);
}
// Conversion method for clean up from marshalling of: Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
IL2CPP_EXTERN_C void Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshal_com_cleanup(Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A_marshaled_com& marshaled)
{
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::.ctor(Unity.Collections.LowLevel.Unsafe.UnsafeStream&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer__ctor_m95FDA86313CFFF1F72851605487C082E454E8CF8 (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * ___stream0, const RuntimeMethod* method)
{
	{
		// m_BlockStream = stream.m_Block;
		UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * L_0 = ___stream0;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_1 = L_0->get_m_Block_0();
		__this->set_m_BlockStream_0((UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA *)L_1);
		// m_ForeachIndex = int.MinValue;
		__this->set_m_ForeachIndex_4(((int32_t)-2147483648LL));
		// m_ElementCount = -1;
		__this->set_m_ElementCount_5((-1));
		// m_CurrentBlock = null;
		__this->set_m_CurrentBlock_1((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)((uintptr_t)0));
		// m_CurrentBlockEnd = null;
		__this->set_m_CurrentBlockEnd_3((uint8_t*)((uintptr_t)0));
		// m_CurrentPtr = null;
		__this->set_m_CurrentPtr_2((uint8_t*)((uintptr_t)0));
		// m_FirstBlock = null;
		__this->set_m_FirstBlock_6((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)((uintptr_t)0));
		// m_NumberOfBlocks = 0;
		__this->set_m_NumberOfBlocks_8(0);
		// m_FirstOffset = 0;
		__this->set_m_FirstOffset_7(0);
		// m_ThreadIndex = 0;
		__this->set_m_ThreadIndex_9(0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Writer__ctor_m95FDA86313CFFF1F72851605487C082E454E8CF8_AdjustorThunk (RuntimeObject * __this, UnsafeStream_tD5A0CBCC53B4F0611385704302276DC6A77D88E0 * ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * _thisAdjusted = reinterpret_cast<Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A *>(__this + _offset);
	Writer__ctor_m95FDA86313CFFF1F72851605487C082E454E8CF8(_thisAdjusted, ___stream0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::BeginForEachIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_BeginForEachIndex_mB9DA669CD8FCD696FCE6BC550C4F7AE6B620F9FD (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, int32_t ___foreachIndex0, const RuntimeMethod* method)
{
	{
		// m_ForeachIndex = foreachIndex;
		int32_t L_0 = ___foreachIndex0;
		__this->set_m_ForeachIndex_4(L_0);
		// m_ElementCount = 0;
		__this->set_m_ElementCount_5(0);
		// m_NumberOfBlocks = 0;
		__this->set_m_NumberOfBlocks_8(0);
		// m_FirstBlock = m_CurrentBlock;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_1 = __this->get_m_CurrentBlock_1();
		__this->set_m_FirstBlock_6((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_1);
		// m_FirstOffset = (int)(m_CurrentPtr - (byte*)m_CurrentBlock);
		uint8_t* L_2 = __this->get_m_CurrentPtr_2();
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_3 = __this->get_m_CurrentBlock_1();
		__this->set_m_FirstOffset_7(((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_2, (intptr_t)L_3))/(int32_t)1)))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_BeginForEachIndex_mB9DA669CD8FCD696FCE6BC550C4F7AE6B620F9FD_AdjustorThunk (RuntimeObject * __this, int32_t ___foreachIndex0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * _thisAdjusted = reinterpret_cast<Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A *>(__this + _offset);
	Writer_BeginForEachIndex_mB9DA669CD8FCD696FCE6BC550C4F7AE6B620F9FD(_thisAdjusted, ___foreachIndex0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::EndForEachIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_EndForEachIndex_mE6591C4DA0E41F02BA8CBB54FE9B5048A1D0857A (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, const RuntimeMethod* method)
{
	{
		// m_BlockStream->Ranges[m_ForeachIndex].ElementCount = m_ElementCount;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_0 = __this->get_m_BlockStream_0();
		NullCheck(L_0);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_1 = L_0->get_Ranges_5();
		int32_t L_2 = __this->get_m_ForeachIndex_4();
		uint32_t L_3 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		int32_t L_4 = __this->get_m_ElementCount_5();
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)L_3)))));
		((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_1, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_2), (int32_t)L_3))))->set_ElementCount_2(L_4);
		// m_BlockStream->Ranges[m_ForeachIndex].OffsetInFirstBlock = m_FirstOffset;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_5 = __this->get_m_BlockStream_0();
		NullCheck(L_5);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_6 = L_5->get_Ranges_5();
		int32_t L_7 = __this->get_m_ForeachIndex_4();
		uint32_t L_8 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		int32_t L_9 = __this->get_m_FirstOffset_7();
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)L_8)))));
		((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)L_8))))->set_OffsetInFirstBlock_1(L_9);
		// m_BlockStream->Ranges[m_ForeachIndex].Block = m_FirstBlock;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_10 = __this->get_m_BlockStream_0();
		NullCheck(L_10);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_11 = L_10->get_Ranges_5();
		int32_t L_12 = __this->get_m_ForeachIndex_4();
		uint32_t L_13 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_14 = __this->get_m_FirstBlock_6();
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_12), (int32_t)L_13)))));
		((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_12), (int32_t)L_13))))->set_Block_0((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_14);
		// m_BlockStream->Ranges[m_ForeachIndex].LastOffset = (int)(m_CurrentPtr - (byte*)m_CurrentBlock);
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_15 = __this->get_m_BlockStream_0();
		NullCheck(L_15);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_16 = L_15->get_Ranges_5();
		int32_t L_17 = __this->get_m_ForeachIndex_4();
		uint32_t L_18 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		uint8_t* L_19 = __this->get_m_CurrentPtr_2();
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_20 = __this->get_m_CurrentBlock_1();
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)L_18)))));
		((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_16, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_17), (int32_t)L_18))))->set_LastOffset_3(((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_19, (intptr_t)L_20))/(int32_t)1)))))));
		// m_BlockStream->Ranges[m_ForeachIndex].NumberOfBlocks = m_NumberOfBlocks;
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_21 = __this->get_m_BlockStream_0();
		NullCheck(L_21);
		UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 * L_22 = L_21->get_Ranges_5();
		int32_t L_23 = __this->get_m_ForeachIndex_4();
		uint32_t L_24 = sizeof(UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 );
		int32_t L_25 = __this->get_m_NumberOfBlocks_8();
		NullCheck(((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)L_24)))));
		((UnsafeStreamRange_tA8A11A5C4A6A282FEA167AB1EC66E894106A14E8 *)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_23), (int32_t)L_24))))->set_NumberOfBlocks_4(L_25);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_EndForEachIndex_mE6591C4DA0E41F02BA8CBB54FE9B5048A1D0857A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * _thisAdjusted = reinterpret_cast<Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A *>(__this + _offset);
	Writer_EndForEachIndex_mE6591C4DA0E41F02BA8CBB54FE9B5048A1D0857A(_thisAdjusted, method);
}
// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m5B2B5A4FA04B32B0D6F2A20C295E82E584553A08 (Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * __this, int32_t ___size0, const RuntimeMethod* method)
{
	uint8_t* V_0 = NULL;
	UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * V_1 = NULL;
	{
		// byte* ptr = m_CurrentPtr;
		uint8_t* L_0 = __this->get_m_CurrentPtr_2();
		V_0 = (uint8_t*)L_0;
		// m_CurrentPtr += size;
		uint8_t* L_1 = __this->get_m_CurrentPtr_2();
		int32_t L_2 = ___size0;
		__this->set_m_CurrentPtr_2((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2)));
		// if (m_CurrentPtr > m_CurrentBlockEnd)
		uint8_t* L_3 = __this->get_m_CurrentPtr_2();
		uint8_t* L_4 = __this->get_m_CurrentBlockEnd_3();
		if ((!(((uintptr_t)L_3) > ((uintptr_t)L_4))))
		{
			goto IL_00c0;
		}
	}
	{
		// UnsafeStreamBlock* oldBlock = m_CurrentBlock;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_5 = __this->get_m_CurrentBlock_1();
		V_1 = (UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_5;
		// m_CurrentBlock = m_BlockStream->Allocate(oldBlock, m_ThreadIndex);
		UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA * L_6 = __this->get_m_BlockStream_0();
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_7 = V_1;
		int32_t L_8 = __this->get_m_ThreadIndex_9();
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_9;
		L_9 = UnsafeStreamBlockData_Allocate_mF9DBCB5E6906664261137E3D1E62D5768DA993D4((UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA *)(UnsafeStreamBlockData_tD325F11E53563B7708919B3CFF3E732E4303D4FA *)L_6, (UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)(UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_7, L_8, /*hidden argument*/NULL);
		__this->set_m_CurrentBlock_1((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_9);
		// m_CurrentPtr = m_CurrentBlock->Data;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_10 = __this->get_m_CurrentBlock_1();
		NullCheck(L_10);
		U3CDataU3Ee__FixedBuffer_t8718B1E213ADD8EECA957C020B51CE8A05C83204 * L_11 = L_10->get_address_of_Data_1();
		uint8_t* L_12 = L_11->get_address_of_FixedElementField_0();
		__this->set_m_CurrentPtr_2((uint8_t*)((uintptr_t)L_12));
		// if (m_FirstBlock == null)
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_13 = __this->get_m_FirstBlock_6();
		if ((!(((uintptr_t)L_13) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_008b;
		}
	}
	{
		// m_FirstOffset = (int)(m_CurrentPtr - (byte*)m_CurrentBlock);
		uint8_t* L_14 = __this->get_m_CurrentPtr_2();
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_15 = __this->get_m_CurrentBlock_1();
		__this->set_m_FirstOffset_7(((int32_t)((int32_t)((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_14, (intptr_t)L_15))/(int32_t)1)))))));
		// m_FirstBlock = m_CurrentBlock;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_16 = __this->get_m_CurrentBlock_1();
		__this->set_m_FirstBlock_6((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)L_16);
		// }
		goto IL_0099;
	}

IL_008b:
	{
		// m_NumberOfBlocks++;
		int32_t L_17 = __this->get_m_NumberOfBlocks_8();
		__this->set_m_NumberOfBlocks_8(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
	}

IL_0099:
	{
		// m_CurrentBlockEnd = (byte*)m_CurrentBlock + UnsafeStreamBlockData.AllocationSize;
		UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E * L_18 = __this->get_m_CurrentBlock_1();
		__this->set_m_CurrentBlockEnd_3((uint8_t*)((UnsafeStreamBlock_tC41E32CAC2D11FA5A7269962C5DFFA5B6F4DBB3E *)il2cpp_codegen_add((intptr_t)L_18, (int32_t)((int32_t)4096))));
		// ptr = m_CurrentPtr;
		uint8_t* L_19 = __this->get_m_CurrentPtr_2();
		V_0 = (uint8_t*)L_19;
		// m_CurrentPtr += size;
		uint8_t* L_20 = __this->get_m_CurrentPtr_2();
		int32_t L_21 = ___size0;
		__this->set_m_CurrentPtr_2((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, (int32_t)L_21)));
	}

IL_00c0:
	{
		// m_ElementCount++;
		int32_t L_22 = __this->get_m_ElementCount_5();
		__this->set_m_ElementCount_5(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		// return ptr;
		uint8_t* L_23 = V_0;
		return (uint8_t*)(L_23);
	}
}
IL2CPP_EXTERN_C  uint8_t* Writer_Allocate_m5B2B5A4FA04B32B0D6F2A20C295E82E584553A08_AdjustorThunk (RuntimeObject * __this, int32_t ___size0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A * _thisAdjusted = reinterpret_cast<Writer_t8D63915D55AF5331C953E05A4411D55C9E10C49A *>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = Writer_Allocate_m5B2B5A4FA04B32B0D6F2A20C295E82E584553A08(_thisAdjusted, ___size0, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo::get_DefaultPageSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t PageSizeInfo_get_DefaultPageSizeInBytes_m10B5F3E66825476CD24C93B0BB979A35527A8466 (PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 * __this, const RuntimeMethod* method)
{
	{
		// get => (uint)(1 << log2DefaultPageSize);
		uint8_t L_0 = __this->get_log2DefaultPageSize_0();
		return ((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)31)))));
	}
}
IL2CPP_EXTERN_C  uint32_t PageSizeInfo_get_DefaultPageSizeInBytes_m10B5F3E66825476CD24C93B0BB979A35527A8466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 * _thisAdjusted = reinterpret_cast<PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = PageSizeInfo_get_DefaultPageSizeInBytes_m10B5F3E66825476CD24C93B0BB979A35527A8466(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo::.ctor(System.UInt64,System.UInt64*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PageSizeInfo__ctor_m85F44256D3E5264A5211D35366199215E990CB97 (PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 * __this, uint64_t ___defaultPageSize0, uint64_t* ___availablePageSizes1, uint64_t ___numAvailablePageSizes2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// log2DefaultPageSize = (byte)(64 - math.lzcnt(math.max(1, defaultPageSize) - 1));
		uint64_t L_0 = ___defaultPageSize0;
		uint64_t L_1;
		L_1 = math_max_m0C3B6EBC4E87C085887A8658E8C183AEF5F9A105_inline(((int64_t)((int64_t)1)), L_0, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = math_lzcnt_mFE4C7EF0807D856099144A32900D95A6A6A680AA_inline(((int64_t)il2cpp_codegen_subtract((int64_t)L_1, (int64_t)((int64_t)((int64_t)1)))), /*hidden argument*/NULL);
		__this->set_log2DefaultPageSize_0((uint8_t)((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)64), (int32_t)L_2)))));
		// availableLog2PageSizes = 1 << log2DefaultPageSize;
		uint8_t L_3 = __this->get_log2DefaultPageSize_0();
		__this->set_availableLog2PageSizes_1(((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))));
		// for (int i = 1; i < (int)numAvailablePageSizes; i++)
		V_0 = 1;
		goto IL_004d;
	}

IL_002f:
	{
		// availableLog2PageSizes |= 1 << (int)availablePageSizes[i];
		int32_t L_4 = __this->get_availableLog2PageSizes_1();
		uint64_t* L_5 = ___availablePageSizes1;
		int32_t L_6 = V_0;
		int64_t L_7 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)8)))));
		__this->set_availableLog2PageSizes_1(((int32_t)((int32_t)L_4|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7))&(int32_t)((int32_t)31))))))));
		// for (int i = 1; i < (int)numAvailablePageSizes; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_004d:
	{
		// for (int i = 1; i < (int)numAvailablePageSizes; i++)
		int32_t L_9 = V_0;
		uint64_t L_10 = ___numAvailablePageSizes2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)L_10)))))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PageSizeInfo__ctor_m85F44256D3E5264A5211D35366199215E990CB97_AdjustorThunk (RuntimeObject * __this, uint64_t ___defaultPageSize0, uint64_t* ___availablePageSizes1, uint64_t ___numAvailablePageSizes2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 * _thisAdjusted = reinterpret_cast<PageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7 *>(__this + _offset);
	PageSizeInfo__ctor_m85F44256D3E5264A5211D35366199215E990CB97(_thisAdjusted, ___defaultPageSize0, ___availablePageSizes1, ___numAvailablePageSizes2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/StaticPageSizeInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticPageSizeInfo__cctor_m38616429D5DE64D6A1BE33E3C32AA55DC8D29E6B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly SharedStatic<PageSizeInfo> Ref = SharedStatic<PageSizeInfo>.GetOrCreate<PageSizeInfo>();
		SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637(0, /*hidden argument*/SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_RuntimeMethod_var);
		((StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_StaticFields*)il2cpp_codegen_static_fields_for(StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_il2cpp_TypeInfo_var))->set_Ref_0(L_0);
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
// System.Void Unity.Collections.WordStorage/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDFD48270CA11A2A2A4E6DE39C8340B34A5D1E3E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * L_0 = (U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 *)il2cpp_codegen_object_new(U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFC4FBCAD21D5EE77B71CCA663DDEF4C737639416(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Collections.WordStorage/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFC4FBCAD21D5EE77B71CCA663DDEF4C737639416 (U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Collections.WordStorage/<>c::<Initialize>b__13_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitializeU3Eb__13_0_mD697BE9EE753986B76594D7DF3B51B1E3DBCF0D6 (U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45 * __this, RuntimeObject * ____0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * _____1, const RuntimeMethod* method)
{
	{
		// AppDomain.CurrentDomain.DomainUnload += (_, __) => { Shutdown(); };
		WordStorage_Shutdown_m8E01E7135D3A788BB2A945DB8B95CD7D5E3A26EE(/*hidden argument*/NULL);
		// AppDomain.CurrentDomain.DomainUnload += (_, __) => { Shutdown(); };
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.xxHash3/StreamingState::.ctor(System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState__ctor_m5A095C15849EAB529A023F19D17AF46D9151D133 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, bool ___isHash640, uint64_t ___seed1, const RuntimeMethod* method)
{
	{
		// State = default;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_0 = __this->get_address_of_State_4();
		il2cpp_codegen_initobj(L_0, sizeof(StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC ));
		// Reset(isHash64, seed);
		bool L_1 = ___isHash640;
		uint64_t L_2 = ___seed1;
		StreamingState_Reset_m0A0AF3B31CE4338FE096EE0A3E6114FCF024417D((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState__ctor_m5A095C15849EAB529A023F19D17AF46D9151D133_AdjustorThunk (RuntimeObject * __this, bool ___isHash640, uint64_t ___seed1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	StreamingState__ctor_m5A095C15849EAB529A023F19D17AF46D9151D133(_thisAdjusted, ___isHash640, ___seed1, method);
}
// System.Void Unity.Collections.xxHash3/StreamingState::Reset(System.Boolean,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Reset_m0A0AF3B31CE4338FE096EE0A3E6114FCF024417D (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, bool ___isHash640, uint64_t ___seed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * G_B2_0 = NULL;
	StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * G_B3_1 = NULL;
	{
		// var size = UnsafeUtility.SizeOf<StreamingStateData>();
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423(/*hidden argument*/UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_RuntimeMethod_var);
		V_0 = L_0;
		// UnsafeUtility.MemClear(UnsafeUtility.AddressOf(ref State), size);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_1 = __this->get_address_of_State_4();
		void* L_2;
		L_2 = il2cpp_codegen_unsafe_cast((StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC *)L_1);
		int32_t L_3 = V_0;
		UnsafeUtility_MemClear_m9A2B75C85CB8B6637B1286A562A8E35C82772D09((void*)(void*)L_2, ((int64_t)((int64_t)L_3)), /*hidden argument*/NULL);
		// State.IsHash64 = isHash64 ? 1 : 0;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_4 = __this->get_address_of_State_4();
		bool L_5 = ___isHash640;
		G_B1_0 = L_4;
		if (L_5)
		{
			G_B2_0 = L_4;
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		G_B3_1->set_IsHash64_2(G_B3_0);
		// var acc = Acc;
		uint64_t* L_6;
		L_6 = StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		// acc[0] = PRIME32_3;
		uint64_t* L_7 = (uint64_t*)L_6;
		*((int64_t*)L_7) = (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-1028477379)))));
		// acc[1] = PRIME64_1;
		uint64_t* L_8 = (uint64_t*)L_7;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_8, (int32_t)8))) = (int64_t)((int64_t)-7046029288634856825LL);
		// acc[2] = PRIME64_2;
		uint64_t* L_9 = (uint64_t*)L_8;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)8))))) = (int64_t)((int64_t)-4417276706812531889LL);
		// acc[3] = PRIME64_3;
		uint64_t* L_10 = (uint64_t*)L_9;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)8))))) = (int64_t)((int64_t)1609587929392839161LL);
		// acc[4] = PRIME64_4;
		uint64_t* L_11 = (uint64_t*)L_10;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)4), (int32_t)8))))) = (int64_t)((int64_t)-8796714831421723037LL);
		// acc[5] = PRIME32_2;
		uint64_t* L_12 = (uint64_t*)L_11;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_12, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)5), (int32_t)8))))) = (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-2048144777)))));
		// acc[6] = PRIME64_5;
		uint64_t* L_13 = (uint64_t*)L_12;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)6), (int32_t)8))))) = (int64_t)((int64_t)2870177450012600261LL);
		// acc[7] = PRIME32_1;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_13, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)7), (int32_t)8))))) = (int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)-1640531535)))));
		// State.Seed = seed;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_14 = __this->get_address_of_State_4();
		uint64_t L_15 = ___seed1;
		L_14->set_Seed_6(L_15);
		// fixed (byte* secret = xxHashDefaultKey.kSecret)
		IL2CPP_RUNTIME_CLASS_INIT(xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = ((xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_StaticFields*)il2cpp_codegen_static_fields_for(xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_il2cpp_TypeInfo_var))->get_kSecret_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = L_16;
		V_2 = L_17;
		if (!L_17)
		{
			goto IL_00b8;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = V_2;
		NullCheck(L_18);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))
		{
			goto IL_00bd;
		}
	}

IL_00b8:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_00c6;
	}

IL_00bd:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = V_2;
		NullCheck(L_19);
		V_1 = (uint8_t*)((uintptr_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00c6:
	{
		// if (seed != 0)
		uint64_t L_20 = ___seed1;
		if (!L_20)
		{
			goto IL_00d8;
		}
	}
	{
		// EncodeSecretKey(SecretKey, secret, seed);
		uint8_t* L_21;
		L_21 = StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		uint8_t* L_22 = V_1;
		uint64_t L_23 = ___seed1;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_EncodeSecretKey_m913ED3B42A3A75702BD385E7B0C229B09B278DF5((uint8_t*)(uint8_t*)L_21, (uint8_t*)(uint8_t*)L_22, L_23, /*hidden argument*/NULL);
		// }
		goto IL_00ea;
	}

IL_00d8:
	{
		// UnsafeUtility.MemCpy(SecretKey, secret, SECRET_KEY_SIZE);
		uint8_t* L_24;
		L_24 = StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		uint8_t* L_25 = V_1;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_24, (void*)(void*)L_25, ((int64_t)((int64_t)((int32_t)192))), /*hidden argument*/NULL);
	}

IL_00ea:
	{
		V_2 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Reset_m0A0AF3B31CE4338FE096EE0A3E6114FCF024417D_AdjustorThunk (RuntimeObject * __this, bool ___isHash640, uint64_t ___seed1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	StreamingState_Reset_m0A0AF3B31CE4338FE096EE0A3E6114FCF024417D(_thisAdjusted, ___isHash640, ___seed1, method);
}
// System.Void Unity.Collections.xxHash3/StreamingState::Update(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_m53774D2E3C5654E6E39D514AFD2CCDD62D1E0028 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, void* ___input0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t* V_5 = NULL;
	int64_t V_6 = 0;
	{
		// var bInput = (byte*) input;
		void* L_0 = ___input0;
		V_0 = (uint8_t*)L_0;
		// var bEnd = bInput + length;
		uint8_t* L_1 = V_0;
		int32_t L_2 = ___length1;
		V_1 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, (int32_t)L_2));
		// var isHash64 = State.IsHash64;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_3 = __this->get_address_of_State_4();
		int32_t L_4 = L_3->get_IsHash64_2();
		V_2 = L_4;
		// var secret = SecretKey;
		uint8_t* L_5;
		L_5 = StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		V_3 = (uint8_t*)L_5;
		// State.TotalLength += length;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_6 = __this->get_address_of_State_4();
		int64_t* L_7 = L_6->get_address_of_TotalLength_5();
		int64_t* L_8 = L_7;
		int64_t L_9 = *((int64_t*)L_8);
		int32_t L_10 = ___length1;
		*((int64_t*)L_8) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_9, (int64_t)((int64_t)((int64_t)L_10))));
		// if (State.BufferedSize + length <= INTERNAL_BUFFER_SIZE)
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_11 = __this->get_address_of_State_4();
		int32_t L_12 = L_11->get_BufferedSize_3();
		int32_t L_13 = ___length1;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_14 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13))) > ((int32_t)L_14)))
		{
			goto IL_0069;
		}
	}
	{
		// UnsafeUtility.MemCpy(Buffer + State.BufferedSize, bInput, length);
		uint8_t* L_15;
		L_15 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_16 = __this->get_address_of_State_4();
		int32_t L_17 = L_16->get_BufferedSize_3();
		uint8_t* L_18 = V_0;
		int32_t L_19 = ___length1;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_17)), (void*)(void*)L_18, ((int64_t)((int64_t)L_19)), /*hidden argument*/NULL);
		// State.BufferedSize += length;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_20 = __this->get_address_of_State_4();
		int32_t* L_21 = L_20->get_address_of_BufferedSize_3();
		int32_t* L_22 = L_21;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24 = ___length1;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		// return;
		return;
	}

IL_0069:
	{
		// if (State.BufferedSize != 0)
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_25 = __this->get_address_of_State_4();
		int32_t L_26 = L_25->get_BufferedSize_3();
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		// var loadSize = INTERNAL_BUFFER_SIZE - State.BufferedSize;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_27 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_28 = __this->get_address_of_State_4();
		int32_t L_29 = L_28->get_BufferedSize_3();
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_29));
		// UnsafeUtility.MemCpy(Buffer + State.BufferedSize, bInput, loadSize);
		uint8_t* L_30;
		L_30 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_31 = __this->get_address_of_State_4();
		int32_t L_32 = L_31->get_BufferedSize_3();
		uint8_t* L_33 = V_0;
		int32_t L_34 = V_4;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_30, (int32_t)L_32)), (void*)(void*)L_33, ((int64_t)((int64_t)L_34)), /*hidden argument*/NULL);
		// bInput += loadSize;
		uint8_t* L_35 = V_0;
		int32_t L_36 = V_4;
		V_0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, (int32_t)L_36));
		// ConsumeStripes(Acc, ref State.NbStripesSoFar, Buffer, INTERNAL_BUFFER_STRIPES, secret, isHash64);
		uint64_t* L_37;
		L_37 = StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_38 = __this->get_address_of_State_4();
		int32_t* L_39 = L_38->get_address_of_NbStripesSoFar_4();
		uint8_t* L_40;
		L_40 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		int32_t L_41 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_STRIPES_3();
		uint8_t* L_42 = V_3;
		int32_t L_43 = V_2;
		StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, (uint64_t*)(uint64_t*)L_37, (int32_t*)L_39, (uint8_t*)(uint8_t*)L_40, ((int64_t)((int64_t)L_41)), (uint8_t*)(uint8_t*)L_42, L_43, /*hidden argument*/NULL);
		// State.BufferedSize = 0;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_44 = __this->get_address_of_State_4();
		L_44->set_BufferedSize_3(0);
	}

IL_00da:
	{
		// if (bInput + INTERNAL_BUFFER_SIZE < bEnd)
		uint8_t* L_45 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_46 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		uint8_t* L_47 = V_1;
		if ((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, (int32_t)L_46))) < ((uintptr_t)L_47))))
		{
			goto IL_0135;
		}
	}
	{
		// var limit = bEnd - INTERNAL_BUFFER_SIZE;
		uint8_t* L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_49 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		V_5 = (uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_48, (int32_t)L_49));
	}

IL_00ed:
	{
		// ConsumeStripes(Acc, ref State.NbStripesSoFar, bInput, INTERNAL_BUFFER_STRIPES, secret, isHash64);
		uint64_t* L_50;
		L_50 = StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_51 = __this->get_address_of_State_4();
		int32_t* L_52 = L_51->get_address_of_NbStripesSoFar_4();
		uint8_t* L_53 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_54 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_STRIPES_3();
		uint8_t* L_55 = V_3;
		int32_t L_56 = V_2;
		StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, (uint64_t*)(uint64_t*)L_50, (int32_t*)L_52, (uint8_t*)(uint8_t*)L_53, ((int64_t)((int64_t)L_54)), (uint8_t*)(uint8_t*)L_55, L_56, /*hidden argument*/NULL);
		// bInput += INTERNAL_BUFFER_SIZE;
		uint8_t* L_57 = V_0;
		int32_t L_58 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		V_0 = (uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_57, (int32_t)L_58));
		// } while (bInput < limit);
		uint8_t* L_59 = V_0;
		uint8_t* L_60 = V_5;
		if ((!(((uintptr_t)L_59) >= ((uintptr_t)L_60))))
		{
			goto IL_00ed;
		}
	}
	{
		// UnsafeUtility.MemCpy(Buffer + INTERNAL_BUFFER_SIZE - STRIPE_LEN, bInput - STRIPE_LEN, STRIPE_LEN);
		uint8_t* L_61;
		L_61 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_62 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		uint8_t* L_63 = V_0;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, (int32_t)L_62)), (int32_t)((int32_t)64))), (void*)(void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_63, (int32_t)((int32_t)64))), ((int64_t)((int64_t)((int32_t)64))), /*hidden argument*/NULL);
	}

IL_0135:
	{
		// if (bInput < bEnd)
		uint8_t* L_64 = V_0;
		uint8_t* L_65 = V_1;
		if ((!(((uintptr_t)L_64) < ((uintptr_t)L_65))))
		{
			goto IL_015d;
		}
	}
	{
		// var newBufferedSize = bEnd - bInput;
		uint8_t* L_66 = V_1;
		uint8_t* L_67 = V_0;
		V_6 = ((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_66, (intptr_t)L_67))/(int32_t)1))));
		// UnsafeUtility.MemCpy(Buffer, bInput, newBufferedSize);
		uint8_t* L_68;
		L_68 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		uint8_t* L_69 = V_0;
		int64_t L_70 = V_6;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_68, (void*)(void*)L_69, L_70, /*hidden argument*/NULL);
		// State.BufferedSize = (int) newBufferedSize;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_71 = __this->get_address_of_State_4();
		int64_t L_72 = V_6;
		L_71->set_BufferedSize_3(((int32_t)((int32_t)L_72)));
	}

IL_015d:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_m53774D2E3C5654E6E39D514AFD2CCDD62D1E0028_AdjustorThunk (RuntimeObject * __this, void* ___input0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	StreamingState_Update_m53774D2E3C5654E6E39D514AFD2CCDD62D1E0028(_thisAdjusted, ___input0, ___length1, method);
}
// Unity.Mathematics.uint2 Unity.Collections.xxHash3/StreamingState::DigestHash64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint2_t31B88562B6681D249453803230869FBE9ED565E7  StreamingState_DigestHash64_mBD329D19430F69AF2308D445A68F595834C7E30D (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint2_t31B88562B6681D249453803230869FBE9ED565E7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint64_t* V_2 = NULL;
	{
		// var secret = SecretKey;
		uint8_t* L_0;
		L_0 = StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		V_0 = (uint8_t*)L_0;
		// if (State.TotalLength > MIDSIZE_MAX)
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_1 = __this->get_address_of_State_4();
		int64_t L_2 = L_1->get_TotalLength_5();
		if ((((int64_t)L_2) <= ((int64_t)((int64_t)((int64_t)((int32_t)240))))))
		{
			goto IL_0050;
		}
	}
	{
		// var acc = stackalloc ulong[ACC_NB];
		int8_t* L_3 = (int8_t*) alloca(((uintptr_t)((int32_t)64)));
		memset(L_3, 0, ((uintptr_t)((int32_t)64)));
		V_2 = (uint64_t*)(L_3);
		// DigestLong(acc, secret, 1);
		uint64_t* L_4 = V_2;
		uint8_t* L_5 = V_0;
		StreamingState_DigestLong_m077284DF0B32BDA0A0041E3DADA2A495F566C152((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, (uint64_t*)(uint64_t*)L_4, (uint8_t*)(uint8_t*)L_5, 1, /*hidden argument*/NULL);
		// hash = ToUint2(MergeAcc(acc, secret + SECRET_MERGEACCS_START, (ulong) State.TotalLength * PRIME64_1));
		uint64_t* L_6 = V_2;
		uint8_t* L_7 = V_0;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_8 = __this->get_address_of_State_4();
		int64_t L_9 = L_8->get_TotalLength_5();
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		uint64_t L_10;
		L_10 = xxHash3_MergeAcc_mF5CA25B12DC5478CDA428FDDD8EDEA7B070B1CDD((uint64_t*)(uint64_t*)L_6, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, (int32_t)((int32_t)11))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_9, (int64_t)((int64_t)-7046029288634856825LL))), /*hidden argument*/NULL);
		uint2_t31B88562B6681D249453803230869FBE9ED565E7  L_11;
		L_11 = xxHash3_ToUint2_m50ADF44553921AB859DA8C8C88407A7EF55FD5CF(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// }
		goto IL_0072;
	}

IL_0050:
	{
		// hash = Hash64(Buffer, State.TotalLength, State.Seed);
		uint8_t* L_12;
		L_12 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_13 = __this->get_address_of_State_4();
		int64_t L_14 = L_13->get_TotalLength_5();
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_15 = __this->get_address_of_State_4();
		uint64_t L_16 = L_15->get_Seed_6();
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		uint2_t31B88562B6681D249453803230869FBE9ED565E7  L_17;
		L_17 = xxHash3_Hash64_m9172B73D6D1E203A06C0F60A29EE3922C44A177B((void*)(void*)L_12, L_14, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
	}

IL_0072:
	{
		// Reset(State.IsHash64==1, State.Seed);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_18 = __this->get_address_of_State_4();
		int32_t L_19 = L_18->get_IsHash64_2();
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_20 = __this->get_address_of_State_4();
		uint64_t L_21 = L_20->get_Seed_6();
		StreamingState_Reset_m0A0AF3B31CE4338FE096EE0A3E6114FCF024417D((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, (bool)((((int32_t)L_19) == ((int32_t)1))? 1 : 0), L_21, /*hidden argument*/NULL);
		// return hash;
		uint2_t31B88562B6681D249453803230869FBE9ED565E7  L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C  uint2_t31B88562B6681D249453803230869FBE9ED565E7  StreamingState_DigestHash64_mBD329D19430F69AF2308D445A68F595834C7E30D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	uint2_t31B88562B6681D249453803230869FBE9ED565E7  _returnValue;
	_returnValue = StreamingState_DigestHash64_mBD329D19430F69AF2308D445A68F595834C7E30D(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt64* Unity.Collections.xxHash3/StreamingState::get_Acc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method)
{
	{
		// get => (ulong*) UnsafeUtility.AddressOf(ref State.Acc);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_0 = __this->get_address_of_State_4();
		uint64_t* L_1 = L_0->get_address_of_Acc_0();
		void* L_2;
		L_2 = il2cpp_codegen_unsafe_cast((uint64_t*)L_1);
		return (uint64_t*)(L_2);
	}
}
IL2CPP_EXTERN_C  uint64_t* StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	uint64_t* _returnValue;
	_returnValue = StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* Unity.Collections.xxHash3/StreamingState::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method)
{
	{
		// get => (byte*) UnsafeUtility.AddressOf(ref State.Buffer);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_0 = __this->get_address_of_State_4();
		uint8_t* L_1 = L_0->get_address_of_Buffer_1();
		void* L_2;
		L_2 = il2cpp_codegen_unsafe_cast((uint8_t*)L_1);
		return (uint8_t*)(L_2);
	}
}
IL2CPP_EXTERN_C  uint8_t* StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte* Unity.Collections.xxHash3/StreamingState::get_SecretKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, const RuntimeMethod* method)
{
	{
		// get => (byte*) UnsafeUtility.AddressOf(ref State.SecretKey);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_0 = __this->get_address_of_State_4();
		uint8_t* L_1 = L_0->get_address_of_SecretKey_7();
		void* L_2;
		L_2 = il2cpp_codegen_unsafe_cast((uint8_t*)L_1);
		return (uint8_t*)(L_2);
	}
}
IL2CPP_EXTERN_C  uint8_t* StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	uint8_t* _returnValue;
	_returnValue = StreamingState_get_SecretKey_mD7BA6031FCD2BBF6C91A7E809A7E8D43B6690E9C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.xxHash3/StreamingState::DigestLong(System.UInt64*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_DigestLong_m077284DF0B32BDA0A0041E3DADA2A495F566C152 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, uint64_t* ___acc0, uint8_t* ___secret1, int32_t ___isHash642, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// UnsafeUtility.MemCpy(acc, Acc, STRIPE_LEN);
		uint64_t* L_0 = ___acc0;
		uint64_t* L_1;
		L_1 = StreamingState_get_Acc_mB40456929E36F5E7118A8EFE2DB918909D6F8927((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_0, (void*)(void*)L_1, ((int64_t)((int64_t)((int32_t)64))), /*hidden argument*/NULL);
		// if (State.BufferedSize >= STRIPE_LEN)
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_2 = __this->get_address_of_State_4();
		int32_t L_3 = L_2->get_BufferedSize_3();
		if ((((int32_t)L_3) < ((int32_t)((int32_t)64))))
		{
			goto IL_00a4;
		}
	}
	{
		// var totalNbStripes = (State.BufferedSize - 1) / STRIPE_LEN;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_4 = __this->get_address_of_State_4();
		int32_t L_5 = L_4->get_BufferedSize_3();
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))/(int32_t)((int32_t)64)));
		// ConsumeStripes(acc, ref State.NbStripesSoFar, Buffer, totalNbStripes, secret, isHash64);
		uint64_t* L_6 = ___acc0;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_7 = __this->get_address_of_State_4();
		int32_t* L_8 = L_7->get_address_of_NbStripesSoFar_4();
		uint8_t* L_9;
		L_9 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		uint8_t* L_11 = ___secret1;
		int32_t L_12 = ___isHash642;
		StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, (uint64_t*)(uint64_t*)L_6, (int32_t*)L_8, (uint8_t*)(uint8_t*)L_9, ((int64_t)((int64_t)L_10)), (uint8_t*)(uint8_t*)L_11, L_12, /*hidden argument*/NULL);
		// if (X86.Avx2.IsAvx2Supported)
		bool L_13;
		L_13 = Avx2_get_IsAvx2Supported_m0BC6422FDAB370A83B7D5E44509F8F0EFC442FFA(/*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007c;
		}
	}
	{
		// Avx2Accumulate512(acc, Buffer + State.BufferedSize - STRIPE_LEN, null,
		//     secret + SECRET_LIMIT - SECRET_LASTACC_START);
		uint64_t* L_14 = ___acc0;
		uint8_t* L_15;
		L_15 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_16 = __this->get_address_of_State_4();
		int32_t L_17 = L_16->get_BufferedSize_3();
		uint8_t* L_18 = ___secret1;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_19 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7((uint64_t*)(uint64_t*)L_14, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, (int32_t)L_17)), (int32_t)((int32_t)64))), (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_18, (int32_t)L_19)), (int32_t)7)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_007c:
	{
		// DefaultAccumulate512(acc, Buffer + State.BufferedSize - STRIPE_LEN, null,
		//     secret + SECRET_LIMIT - SECRET_LASTACC_START, isHash64);
		uint64_t* L_20 = ___acc0;
		uint8_t* L_21;
		L_21 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_22 = __this->get_address_of_State_4();
		int32_t L_23 = L_22->get_BufferedSize_3();
		uint8_t* L_24 = ___secret1;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_25 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		int32_t L_26 = ___isHash642;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253((uint64_t*)(uint64_t*)L_20, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, (int32_t)L_23)), (int32_t)((int32_t)64))), (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_24, (int32_t)L_25)), (int32_t)7)), L_26, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a4:
	{
		// var lastStripe = stackalloc byte[STRIPE_LEN];
		int8_t* L_27 = (int8_t*) alloca(((uintptr_t)((int32_t)64)));
		memset(L_27, 0, ((uintptr_t)((int32_t)64)));
		V_1 = (uint8_t*)(L_27);
		// var catchupSize = STRIPE_LEN - State.BufferedSize;
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_28 = __this->get_address_of_State_4();
		int32_t L_29 = L_28->get_BufferedSize_3();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)64), (int32_t)L_29));
		// UnsafeUtility.MemCpy(lastStripe, Buffer + INTERNAL_BUFFER_SIZE - catchupSize, catchupSize);
		uint8_t* L_30 = V_1;
		uint8_t* L_31;
		L_31 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_32 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		int32_t L_33 = V_2;
		int32_t L_34 = V_2;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_30, (void*)(void*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_31, (int32_t)L_32)), (int32_t)L_33)), ((int64_t)((int64_t)L_34)), /*hidden argument*/NULL);
		// UnsafeUtility.MemCpy(lastStripe + catchupSize, Buffer, State.BufferedSize);
		uint8_t* L_35 = V_1;
		int32_t L_36 = V_2;
		uint8_t* L_37;
		L_37 = StreamingState_get_Buffer_m50FA66CB67585C593B82E36CA9A38457B57A14D1((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *)__this, /*hidden argument*/NULL);
		StreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC * L_38 = __this->get_address_of_State_4();
		int32_t L_39 = L_38->get_BufferedSize_3();
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_35, (int32_t)L_36)), (void*)(void*)L_37, ((int64_t)((int64_t)L_39)), /*hidden argument*/NULL);
		// if (X86.Avx2.IsAvx2Supported)
		bool L_40;
		L_40 = Avx2_get_IsAvx2Supported_m0BC6422FDAB370A83B7D5E44509F8F0EFC442FFA(/*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0103;
		}
	}
	{
		// Avx2Accumulate512(acc, lastStripe, null, secret+SECRET_LIMIT-SECRET_LASTACC_START);
		uint64_t* L_41 = ___acc0;
		uint8_t* L_42 = V_1;
		uint8_t* L_43 = ___secret1;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_44 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_Avx2Accumulate512_m7C23025DBFD191FE18600B12063730E6739850C7((uint64_t*)(uint64_t*)L_41, (uint8_t*)(uint8_t*)L_42, (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_43, (int32_t)L_44)), (int32_t)7)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0103:
	{
		// DefaultAccumulate512(acc, lastStripe, null, secret+SECRET_LIMIT-SECRET_LASTACC_START, isHash64);
		uint64_t* L_45 = ___acc0;
		uint8_t* L_46 = V_1;
		uint8_t* L_47 = ___secret1;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_48 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		int32_t L_49 = ___isHash642;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_DefaultAccumulate512_mE2FA5E5ACA719367800C367B7B17CFAF94F38253((uint64_t*)(uint64_t*)L_45, (uint8_t*)(uint8_t*)L_46, (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_47, (int32_t)L_48)), (int32_t)7)), L_49, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_DigestLong_m077284DF0B32BDA0A0041E3DADA2A495F566C152_AdjustorThunk (RuntimeObject * __this, uint64_t* ___acc0, uint8_t* ___secret1, int32_t ___isHash642, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	StreamingState_DigestLong_m077284DF0B32BDA0A0041E3DADA2A495F566C152(_thisAdjusted, ___acc0, ___secret1, ___isHash642, method);
}
// System.Void Unity.Collections.xxHash3/StreamingState::ConsumeStripes(System.UInt64*,System.Int32&,System.Byte*,System.Int64,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42 (StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * __this, uint64_t* ___acc0, int32_t* ___nbStripesSoFar1, uint8_t* ___input2, int64_t ___totalStripes3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (NB_STRIPES_PER_BLOCK - nbStripesSoFar <= totalStripes)
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_NB_STRIPES_PER_BLOCK_1();
		int32_t* L_1 = ___nbStripesSoFar1;
		int32_t L_2 = *((int32_t*)L_1);
		int64_t L_3 = ___totalStripes3;
		if ((((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2))))) > ((int64_t)L_3)))
		{
			goto IL_009c;
		}
	}
	{
		// var nbStripes = NB_STRIPES_PER_BLOCK - nbStripesSoFar;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_4 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_NB_STRIPES_PER_BLOCK_1();
		int32_t* L_5 = ___nbStripesSoFar1;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_6));
		// if (X86.Avx2.IsAvx2Supported)
		bool L_7;
		L_7 = Avx2_get_IsAvx2Supported_m0BC6422FDAB370A83B7D5E44509F8F0EFC442FFA(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// Avx2Accumulate(acc, input, null, secret + nbStripesSoFar * SECRET_CONSUME_RATE, nbStripes, isHash64);
		uint64_t* L_8 = ___acc0;
		uint8_t* L_9 = ___input2;
		uint8_t* L_10 = ___secret4;
		int32_t* L_11 = ___nbStripesSoFar1;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		int32_t L_14 = ___isHash645;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B((uint64_t*)(uint64_t*)L_8, (uint8_t*)(uint8_t*)L_9, (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)8)))), ((int64_t)((int64_t)L_13)), L_14, /*hidden argument*/NULL);
		// Avx2ScrambleAcc(acc, secret + SECRET_LIMIT);
		uint64_t* L_15 = ___acc0;
		uint8_t* L_16 = ___secret4;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_17 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		xxHash3_Avx2ScrambleAcc_mA6DBBF7E016635A901F80FC07FF1851618D6C3D5((uint64_t*)(uint64_t*)L_15, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_16, (int32_t)L_17)), /*hidden argument*/NULL);
		// Avx2Accumulate(acc, input + nbStripes * STRIPE_LEN, null, secret, totalStripes - nbStripes, isHash64);
		uint64_t* L_18 = ___acc0;
		uint8_t* L_19 = ___input2;
		int32_t L_20 = V_0;
		uint8_t* L_21 = ___secret4;
		int64_t L_22 = ___totalStripes3;
		int32_t L_23 = V_0;
		int32_t L_24 = ___isHash645;
		xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B((uint64_t*)(uint64_t*)L_18, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)((int32_t)64))))), (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)L_21, ((int64_t)il2cpp_codegen_subtract((int64_t)L_22, (int64_t)((int64_t)((int64_t)L_23)))), L_24, /*hidden argument*/NULL);
		// }
		goto IL_0094;
	}

IL_005b:
	{
		// DefaultAccumulate(acc, input, null, secret + nbStripesSoFar * SECRET_CONSUME_RATE, nbStripes, isHash64);
		uint64_t* L_25 = ___acc0;
		uint8_t* L_26 = ___input2;
		uint8_t* L_27 = ___secret4;
		int32_t* L_28 = ___nbStripesSoFar1;
		int32_t L_29 = *((int32_t*)L_28);
		int32_t L_30 = V_0;
		int32_t L_31 = ___isHash645;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9((uint64_t*)(uint64_t*)L_25, (uint8_t*)(uint8_t*)L_26, (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)8)))), ((int64_t)((int64_t)L_30)), L_31, /*hidden argument*/NULL);
		// DefaultScrambleAcc(acc, secret + SECRET_LIMIT);
		uint64_t* L_32 = ___acc0;
		uint8_t* L_33 = ___secret4;
		IL2CPP_RUNTIME_CLASS_INIT(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		int32_t L_34 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		xxHash3_DefaultScrambleAcc_m5F9168BDE58B95E6C98B107B341D0D822AAAEC37((uint64_t*)(uint64_t*)L_32, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_33, (int32_t)L_34)), /*hidden argument*/NULL);
		// DefaultAccumulate(acc, input + nbStripes * STRIPE_LEN, null, secret, totalStripes - nbStripes, isHash64);
		uint64_t* L_35 = ___acc0;
		uint8_t* L_36 = ___input2;
		int32_t L_37 = V_0;
		uint8_t* L_38 = ___secret4;
		int64_t L_39 = ___totalStripes3;
		int32_t L_40 = V_0;
		int32_t L_41 = ___isHash645;
		xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9((uint64_t*)(uint64_t*)L_35, (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_36, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)((int32_t)64))))), (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)L_38, ((int64_t)il2cpp_codegen_subtract((int64_t)L_39, (int64_t)((int64_t)((int64_t)L_40)))), L_41, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// nbStripesSoFar = (int) totalStripes - nbStripes;
		int32_t* L_42 = ___nbStripesSoFar1;
		int64_t L_43 = ___totalStripes3;
		int32_t L_44 = V_0;
		*((int32_t*)L_42) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_43)), (int32_t)L_44));
		// }
		return;
	}

IL_009c:
	{
		// if (X86.Avx2.IsAvx2Supported)
		bool L_45;
		L_45 = Avx2_get_IsAvx2Supported_m0BC6422FDAB370A83B7D5E44509F8F0EFC442FFA(/*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_00b9;
		}
	}
	{
		// Avx2Accumulate(acc, input, null, secret + nbStripesSoFar * SECRET_CONSUME_RATE, totalStripes, isHash64);
		uint64_t* L_46 = ___acc0;
		uint8_t* L_47 = ___input2;
		uint8_t* L_48 = ___secret4;
		int32_t* L_49 = ___nbStripesSoFar1;
		int32_t L_50 = *((int32_t*)L_49);
		int64_t L_51 = ___totalStripes3;
		int32_t L_52 = ___isHash645;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_Avx2Accumulate_m140D43D5123949B4A98F707CE310C744F78BC35B((uint64_t*)(uint64_t*)L_46, (uint8_t*)(uint8_t*)L_47, (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_50, (int32_t)8)))), L_51, L_52, /*hidden argument*/NULL);
		// }
		goto IL_00cd;
	}

IL_00b9:
	{
		// DefaultAccumulate(acc, input, null, secret + nbStripesSoFar * SECRET_CONSUME_RATE, totalStripes, isHash64);
		uint64_t* L_53 = ___acc0;
		uint8_t* L_54 = ___input2;
		uint8_t* L_55 = ___secret4;
		int32_t* L_56 = ___nbStripesSoFar1;
		int32_t L_57 = *((int32_t*)L_56);
		int64_t L_58 = ___totalStripes3;
		int32_t L_59 = ___isHash645;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3_DefaultAccumulate_m89B15352C5BBD7848BEF7D1DE2B93275637B22A9((uint64_t*)(uint64_t*)L_53, (uint8_t*)(uint8_t*)L_54, (uint8_t*)(uint8_t*)((uintptr_t)0), (uint8_t*)(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_55, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_57, (int32_t)8)))), L_58, L_59, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		// nbStripesSoFar += (int) totalStripes;
		int32_t* L_60 = ___nbStripesSoFar1;
		int32_t* L_61 = ___nbStripesSoFar1;
		int32_t L_62 = *((int32_t*)L_61);
		int64_t L_63 = ___totalStripes3;
		*((int32_t*)L_60) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)((int32_t)((int32_t)L_63))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42_AdjustorThunk (RuntimeObject * __this, uint64_t* ___acc0, int32_t* ___nbStripesSoFar1, uint8_t* ___input2, int64_t ___totalStripes3, uint8_t* ___secret4, int32_t ___isHash645, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 * _thisAdjusted = reinterpret_cast<StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0 *>(__this + _offset);
	StreamingState_ConsumeStripes_m078DC941799183F720AB002D3963F5AFC860EE42(_thisAdjusted, ___acc0, ___nbStripesSoFar1, ___input2, ___totalStripes3, ___secret4, ___isHash645, method);
}
// System.Void Unity.Collections.xxHash3/StreamingState::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState__cctor_m2328409870F4CAF10558D4AF625745F03F13C498 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int SECRET_LIMIT = SECRET_KEY_SIZE - STRIPE_LEN;
		((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->set_SECRET_LIMIT_0(((int32_t)128));
		// private static readonly int NB_STRIPES_PER_BLOCK = SECRET_LIMIT / SECRET_CONSUME_RATE;
		int32_t L_0 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_SECRET_LIMIT_0();
		((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->set_NB_STRIPES_PER_BLOCK_1(((int32_t)((int32_t)L_0/(int32_t)8)));
		// private static readonly int INTERNAL_BUFFER_SIZE = 256;
		((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->set_INTERNAL_BUFFER_SIZE_2(((int32_t)256));
		// private static readonly int INTERNAL_BUFFER_STRIPES = INTERNAL_BUFFER_SIZE / STRIPE_LEN;
		int32_t L_1 = ((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->get_INTERNAL_BUFFER_SIZE_2();
		((StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_StaticFields*)il2cpp_codegen_static_fields_for(StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var))->set_INTERNAL_BUFFER_STRIPES_3(((int32_t)((int32_t)L_1/(int32_t)((int32_t)64))));
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C (_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___input0, ___dest1, ___length2, ___secret3, ___result4);

}
// System.Void Unity.Collections.xxHash3/_dlg_Hash128Long::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dlg_Hash128Long__ctor_mFF3199FFAE2727F28F530B3F7533903F070DB04F (_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Collections.xxHash3/_dlg_Hash128Long::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dlg_Hash128Long_Invoke_m317D69E443C63FC934B1F13A6858AB921B8C1CC2 (_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
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
						GenericInterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						GenericVirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						VirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Collections.xxHash3/_dlg_Hash128Long::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _dlg_Hash128Long_BeginInvoke_mBD97066942246582A5DC7A71B02554F289A99F19 (_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___input0;
	__d_args[1] = ___dest1;
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___length2);
	__d_args[3] = ___secret3;
	__d_args[4] = Box(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_il2cpp_TypeInfo_var, &*___result4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Unity.Collections.xxHash3/_dlg_Hash128Long::EndInvoke(Unity.Mathematics.uint4&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dlg_Hash128Long_EndInvoke_m148E384C9A2B432008485B44B01677ADA88F06DC (_dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C * __this, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result0, RuntimeObject* _____result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___result0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) _____result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 (_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___input0, ___dest1, ___length2, ___secret3, ___result4);

}
// System.Void Unity.Collections.xxHash3/_dlg_Hash64Long::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dlg_Hash64Long__ctor_mDC504F2C8145376139E58547908104ADD8FD52D0 (_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Unity.Collections.xxHash3/_dlg_Hash64Long::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dlg_Hash64Long_Invoke_m837626A81F14C216D3128975C0B2978D3C5E7C6E (_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
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
						GenericInterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						GenericVirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						VirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Collections.xxHash3/_dlg_Hash64Long::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _dlg_Hash64Long_BeginInvoke_mA1FEF3E5124CD1D026F5FA45A9970A42302B0313 (_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___input0;
	__d_args[1] = ___dest1;
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___length2);
	__d_args[3] = ___secret3;
	__d_args[4] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &*___result4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Unity.Collections.xxHash3/_dlg_Hash64Long::EndInvoke(System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dlg_Hash64Long_EndInvoke_mA841A6743B6E3EBFE983436CB6BBF27031023D32 (_dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03 * __this, uint64_t* ___result0, RuntimeObject* _____result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___result0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) _____result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_GetFunctionPointerDiscard_mD94778EBBA72205E310766008AF503758977B15B (intptr_t* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var))->get_Pointer_0();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var))->get_DeferredCompilation_1();
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mC846FC3BCDF9146245CE55FA6D0B9802539E5161((intptr_t)L_1, /*hidden argument*/NULL);
		((_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var))->set_Pointer_0((intptr_t)L_2);
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var))->get_Pointer_0();
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_GetFunctionPointer_mF664C5A6E4AB68B2B74B8A1D1DA55F34E4A797C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)((intptr_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_GetFunctionPointerDiscard_mD94778EBBA72205E310766008AF503758977B15B((intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_0 = V_0;
		return (intptr_t)L_0;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_Constructor_m937FA08B4BA2764496B8A1AF84364F88549D053E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_0 = { reinterpret_cast<intptr_t> (xxHash3__mono_to_burst_Hash128Long_m668BD0A3E38F1C3EC26448E668E0F1E06098EDA0_RuntimeMethod_var) };
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_1 = { reinterpret_cast<intptr_t> (xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902_RuntimeMethod_var) };
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_mA4815AB8047483B6688EBFB17D8B659773BA778C(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		((_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var))->set_DeferredCompilation_1((intptr_t)L_3);
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_Initialize_mAE0C423337740185608B0C92A2E7B7836F1EF939 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall__cctor_mE88884721A7BCD5B13BAC2872FB41314384C67A8 (const RuntimeMethod* method)
{
	{
		_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_Constructor_m937FA08B4BA2764496B8A1AF84364F88549D053E(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_Invoke_m67E15FDD6BA9CFF56BDBD2CF58BC9933FE36143F (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_t0C464C29E9F6A967FAF74DAA2D1DCE806064DA6E_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = _mono_to_burst_Hash128Long_00000A3AU24BurstDirectCall_GetFunctionPointer_mF664C5A6E4AB68B2B74B8A1D1DA55F34E4A797C8(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		uint8_t* L_3 = ___input0;
		uint8_t* L_4 = ___dest1;
		int64_t L_5 = ___length2;
		uint8_t* L_6 = ___secret3;
		uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * L_7 = ___result4;
		intptr_t L_8 = V_0;
		typedef void (CDECL *func_7C98BD1ED4504E1B2DBC0BEDF1DB5CB31FBD0C6B)(uint8_t*,uint8_t*,int64_t,uint8_t*,uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *);
		((func_7C98BD1ED4504E1B2DBC0BEDF1DB5CB31FBD0C6B)L_8)((uint8_t*)L_3,(uint8_t*)L_4,(int64_t)L_5,(uint8_t*)L_6,(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *)L_7);
		return;
	}

IL_0023:
	{
		uint8_t* L_9 = ___input0;
		uint8_t* L_10 = ___dest1;
		int64_t L_11 = ___length2;
		uint8_t* L_12 = ___secret3;
		uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * L_13 = ___result4;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902_inline((uint8_t*)(uint8_t*)L_9, (uint8_t*)(uint8_t*)L_10, L_11, (uint8_t*)(uint8_t*)L_12, (uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *)L_13, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17 (_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17 * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___input0, ___dest1, ___length2, ___secret3, ___result4);

}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate__ctor_mE662F259D1227C723DB3A81D1C85044499546C2B (_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)p1));
	__this->set_method_3(p1);
	__this->set_m_target_2(p0);
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_Invoke_m17FFAC2262D54B53E0A010379BEF6635E19D49C0 (_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17 * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
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
						GenericInterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						GenericVirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						VirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,Unity.Mathematics.uint4&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_BeginInvoke_m80CD23579A21EE6D7E252F4FD7A2372FB962AA08 (_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17 * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * p5, RuntimeObject * p6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___input0;
	__d_args[1] = ___dest1;
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___length2);
	__d_args[3] = ___secret3;
	__d_args[4] = Box(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_il2cpp_TypeInfo_var, &*___result4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)p5, (RuntimeObject*)p6);;
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash128Long_00000A3A$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_EndInvoke_mFA296F55CD3C746BAD524B0C15731491B9CD32ED (_mono_to_burst_Hash128Long_00000A3AU24PostfixBurstDelegate_t772367A1FDC2B81D23A92F16E12F5CB026CAED17 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_GetFunctionPointerDiscard_m3B36856FC0619C5BE26FC2368DF6D16A9AD50803 (intptr_t* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var))->get_Pointer_0();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var))->get_DeferredCompilation_1();
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mC846FC3BCDF9146245CE55FA6D0B9802539E5161((intptr_t)L_1, /*hidden argument*/NULL);
		((_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var))->set_Pointer_0((intptr_t)L_2);
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var))->get_Pointer_0();
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_GetFunctionPointer_mEC7A3A2774F2FA2ED5E1C78064FF118913DCEEF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)((intptr_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_GetFunctionPointerDiscard_m3B36856FC0619C5BE26FC2368DF6D16A9AD50803((intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_0 = V_0;
		return (intptr_t)L_0;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_Constructor_mB62A8208902645C4A4766C642546938C44202B2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_0 = { reinterpret_cast<intptr_t> (xxHash3__mono_to_burst_Hash64Long_m0229D54E28AF62233E48A719322EE6F2F4741102_RuntimeMethod_var) };
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_1 = { reinterpret_cast<intptr_t> (xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96_RuntimeMethod_var) };
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_mA4815AB8047483B6688EBFB17D8B659773BA778C(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		((_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_StaticFields*)il2cpp_codegen_static_fields_for(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var))->set_DeferredCompilation_1((intptr_t)L_3);
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_Initialize_m117EB810275B2F0DCCF311E4CD92360D57B9121A (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall__cctor_m347FF0C744E8CDFA9B9709B080BCA98F6A393648 (const RuntimeMethod* method)
{
	{
		_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_Constructor_mB62A8208902645C4A4766C642546938C44202B2C(/*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$BurstDirectCall::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_Invoke_m2DD36058D2BB16FBF4EE0A94187761D41345F460 (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(_mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_t39D4D7659F4317082375A469EAAEE5B93B692F2F_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = _mono_to_burst_Hash64Long_00000A38U24BurstDirectCall_GetFunctionPointer_mEC7A3A2774F2FA2ED5E1C78064FF118913DCEEF1(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		uint8_t* L_3 = ___input0;
		uint8_t* L_4 = ___dest1;
		int64_t L_5 = ___length2;
		uint8_t* L_6 = ___secret3;
		uint64_t* L_7 = ___result4;
		intptr_t L_8 = V_0;
		typedef void (CDECL *func_82EC0B5E6CB66FA22A9D10AC29C20C04551100EE)(uint8_t*,uint8_t*,int64_t,uint8_t*,uint64_t*);
		((func_82EC0B5E6CB66FA22A9D10AC29C20C04551100EE)L_8)((uint8_t*)L_3,(uint8_t*)L_4,(int64_t)L_5,(uint8_t*)L_6,(uint64_t*)L_7);
		return;
	}

IL_0023:
	{
		uint8_t* L_9 = ___input0;
		uint8_t* L_10 = ___dest1;
		int64_t L_11 = ___length2;
		uint8_t* L_12 = ___secret3;
		uint64_t* L_13 = ___result4;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96_inline((uint8_t*)(uint8_t*)L_9, (uint8_t*)(uint8_t*)L_10, L_11, (uint8_t*)(uint8_t*)L_12, (uint64_t*)L_13, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC (_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___input0, ___dest1, ___length2, ___secret3, ___result4);

}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate__ctor_m9C37CADB5B6518A2D070C098AA1A21DECDF30D82 (_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)p1));
	__this->set_method_3(p1);
	__this->set_m_target_2(p0);
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$PostfixBurstDelegate::Invoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_Invoke_mEE6ED8C3813994904FFC562387AD47D633DABC30 (_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
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
						GenericInterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						GenericVirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(targetMethod, targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
					else
						VirtActionInvoker5< uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, ___dest1, ___length2, ___secret3, ___result4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$PostfixBurstDelegate::BeginInvoke(System.Byte*,System.Byte*,System.Int64,System.Byte*,System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_BeginInvoke_mE14F0D8A3D4EDCFE3512B0B2B5836D41F810E1A9 (_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC * __this, uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * p5, RuntimeObject * p6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___input0;
	__d_args[1] = ___dest1;
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___length2);
	__d_args[3] = ___secret3;
	__d_args[4] = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &*___result4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)p5, (RuntimeObject*)p6);;
}
// System.Void Unity.Collections.xxHash3/Unity.Collections._mono_to_burst_Hash64Long_00000A38$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_EndInvoke_m884B36378F2EBFD6540AD0846CAF9E5310F0C36B (_mono_to_burst_Hash64Long_00000A38U24PostfixBurstDelegate_t377EAC2E79D16A8F6E0D6EFD8A1A4809CCD643DC * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.xxHash3/ulong2::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB (ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C * __this, uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method)
{
	{
		// this.x = x;
		uint64_t L_0 = ___x0;
		__this->set_x_0(L_0);
		// this.y = y;
		uint64_t L_1 = ___y1;
		__this->set_y_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB_AdjustorThunk (RuntimeObject * __this, uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C * _thisAdjusted = reinterpret_cast<ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C *>(__this + _offset);
	ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB(_thisAdjusted, ___x0, ___y1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24BurstDirectCall_GetFunctionPointerDiscard_m37A13E974498E3280D1B64D2290185300D4C20CF (intptr_t* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var))->get_Pointer_0();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var))->get_DeferredCompilation_1();
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mC846FC3BCDF9146245CE55FA6D0B9802539E5161((intptr_t)L_1, /*hidden argument*/NULL);
		((Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var))->set_Pointer_0((intptr_t)L_2);
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var))->get_Pointer_0();
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000C2EU24BurstDirectCall_GetFunctionPointer_m295E5EB9C59AE8AE452877A115A47265478B6A7E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)((intptr_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		Try_00000C2EU24BurstDirectCall_GetFunctionPointerDiscard_m37A13E974498E3280D1B64D2290185300D4C20CF((intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_0 = V_0;
		return (intptr_t)L_0;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24BurstDirectCall_Constructor_m8AF87FEFDC13A6C3119D37ADC8EDC8B10E3EAA0D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_0 = { reinterpret_cast<intptr_t> (SlabAllocator_Try_m10F5613C20657F337568D1786E35E397A89595D8_RuntimeMethod_var) };
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_1 = { reinterpret_cast<intptr_t> (SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_RuntimeMethod_var) };
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_mA4815AB8047483B6688EBFB17D8B659773BA778C(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		((Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var))->set_DeferredCompilation_1((intptr_t)L_3);
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24BurstDirectCall_Initialize_m7C01CE838054F578D9119A00DBD351D42364D9D2 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24BurstDirectCall__cctor_m763B2FD880264041CF8570C4E00664DCA6DA1B27 (const RuntimeMethod* method)
{
	{
		Try_00000C2EU24BurstDirectCall_Constructor_m8AF87FEFDC13A6C3119D37ADC8EDC8B10E3EAA0D(/*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000C2EU24BurstDirectCall_Invoke_m0691187C289A34A89EECDA2791A71789D4156CC0 (intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C2EU24BurstDirectCall_t298495D0DF565E036CD8B9542ED3D5D3B3570422_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Try_00000C2EU24BurstDirectCall_GetFunctionPointer_m295E5EB9C59AE8AE452877A115A47265478B6A7E(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = ___allocatorState0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_4 = ___block1;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_3CE1675EB68D50250408DA002C10134076ACA6FC)(intptr_t,Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *);
		int32_t L_6 = ((func_3CE1675EB68D50250408DA002C10134076ACA6FC)L_5)((intptr_t)L_3,(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_4);
		return L_6;
	}

IL_001f:
	{
		intptr_t L_7 = ___allocatorState0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_8 = ___block1;
		int32_t L_9;
		L_9 = SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_inline((intptr_t)L_7, (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_8, /*hidden argument*/NULL);
		return L_9;
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0 (Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___allocatorState0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C2EU24PostfixBurstDelegate__ctor_mC0B164A055ED531FA54BC8636DE5F3251ED4B914 (Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)p1));
	__this->set_method_3(p1);
	__this->set_m_target_2(p0);
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000C2EU24PostfixBurstDelegate_Invoke_m32A87E2AF15AAD6535AB96506DC483EDC48963D5 (Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___allocatorState0, ___block1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___allocatorState0, ___block1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(targetMethod, targetThis, ___allocatorState0, ___block1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(targetMethod, targetThis, ___allocatorState0, ___block1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___allocatorState0, ___block1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___allocatorState0, ___block1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___allocatorState0, ___block1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Try_00000C2EU24PostfixBurstDelegate_BeginInvoke_m7AF1C6E75630864C8C80FB2863ADB5D8DA085600 (Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * p2, RuntimeObject * p3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___allocatorState0);
	__d_args[1] = Box(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var, &*___block1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)p2, (RuntimeObject*)p3);;
}
// System.Int32 Unity.Collections.AllocatorManager/SlabAllocator/Try_00000C2E$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000C2EU24PostfixBurstDelegate_EndInvoke_m033189B7C3EEC6D4596D9B20444F4293DB81FF1B (Try_00000C2EU24PostfixBurstDelegate_tE9FD062216442F5834A6E0A35E826446B0F5F4D0 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24BurstDirectCall_GetFunctionPointerDiscard_m6952A44C4CFEEF1F8D0D47B9E7F185CBC349396C (intptr_t* p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var))->get_Pointer_0();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var))->get_DeferredCompilation_1();
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_mC846FC3BCDF9146245CE55FA6D0B9802539E5161((intptr_t)L_1, /*hidden argument*/NULL);
		((Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var))->set_Pointer_0((intptr_t)L_2);
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var))->get_Pointer_0();
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Try_00000C24U24BurstDirectCall_GetFunctionPointer_mE1E3F368568FD5217C12E139B5A6B70615EE26DE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)((intptr_t)0);
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		Try_00000C24U24BurstDirectCall_GetFunctionPointerDiscard_m6952A44C4CFEEF1F8D0D47B9E7F185CBC349396C((intptr_t*)(&V_0), /*hidden argument*/NULL);
		intptr_t L_0 = V_0;
		return (intptr_t)L_0;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24BurstDirectCall_Constructor_m6C6A467A40353C544869E5C48F294741DB8B54C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_0 = { reinterpret_cast<intptr_t> (StackAllocator_Try_mAFB86C8BB80AFE8FB900919DC50FED309738F00B_RuntimeMethod_var) };
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_1 = { reinterpret_cast<intptr_t> (StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_RuntimeMethod_var) };
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_mA4815AB8047483B6688EBFB17D8B659773BA778C(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		((Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_StaticFields*)il2cpp_codegen_static_fields_for(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var))->set_DeferredCompilation_1((intptr_t)L_3);
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24BurstDirectCall_Initialize_m38C8FFE49DEEDBDE02DF9001851F4DE9FCE9292D (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24BurstDirectCall__cctor_m6529706650179C9495DE322A69037331863D71DE (const RuntimeMethod* method)
{
	{
		Try_00000C24U24BurstDirectCall_Constructor_m6C6A467A40353C544869E5C48F294741DB8B54C8(/*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$BurstDirectCall::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000C24U24BurstDirectCall_Invoke_mBD23D4CA8BA58A1B15109E650FF5AAF5C3118CEB (intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Try_00000C24U24BurstDirectCall_t55A92858BD5AF8D24A03B6A8C21E2DA7E9A97913_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Try_00000C24U24BurstDirectCall_GetFunctionPointer_mE1E3F368568FD5217C12E139B5A6B70615EE26DE(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		intptr_t L_3 = ___allocatorState0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_4 = ___block1;
		intptr_t L_5 = V_0;
		typedef int32_t (CDECL *func_3CE1675EB68D50250408DA002C10134076ACA6FC)(intptr_t,Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *);
		int32_t L_6 = ((func_3CE1675EB68D50250408DA002C10134076ACA6FC)L_5)((intptr_t)L_3,(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_4);
		return L_6;
	}

IL_001f:
	{
		intptr_t L_7 = ___allocatorState0;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_8 = ___block1;
		int32_t L_9;
		L_9 = StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_inline((intptr_t)L_7, (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_8, /*hidden argument*/NULL);
		return L_9;
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9 (Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___allocatorState0, ___block1);

	return returnValue;
}
// System.Void Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Try_00000C24U24PostfixBurstDelegate__ctor_m70C3EA3E477BA9115B1A8C2021B562D566E24C9A (Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)p1));
	__this->set_method_3(p1);
	__this->set_m_target_2(p0);
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$PostfixBurstDelegate::Invoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000C24U24PostfixBurstDelegate_Invoke_m7471B68542D8F614E2F5C43892FD398B27C816ED (Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___allocatorState0, ___block1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___allocatorState0, ___block1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(targetMethod, targetThis, ___allocatorState0, ___block1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(targetMethod, targetThis, ___allocatorState0, ___block1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___allocatorState0, ___block1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___allocatorState0, ___block1);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___allocatorState0, ___block1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$PostfixBurstDelegate::BeginInvoke(System.IntPtr,Unity.Collections.AllocatorManager/Block&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Try_00000C24U24PostfixBurstDelegate_BeginInvoke_m70FF3F57D36696214A99E5B5A9819EE5691752A3 (Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9 * __this, intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * p2, RuntimeObject * p3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___allocatorState0);
	__d_args[1] = Box(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1_il2cpp_TypeInfo_var, &*___block1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)p2, (RuntimeObject*)p3);;
}
// System.Int32 Unity.Collections.AllocatorManager/StackAllocator/Try_00000C24$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Try_00000C24U24PostfixBurstDelegate_EndInvoke_mD018A5D76EAE6694B5E5BFD4A8487BD3E039AB89 (Try_00000C24U24PostfixBurstDelegate_t1B571F97A9B24CF16EE9AD591E979E619C84CEB9 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Collections.Memory/Unmanaged/Array::IsCustom(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_IsCustom_m7ED10C3E0A4B122B8E0CE2AABE75F7A477C6F526 (int32_t ___allocator0, const RuntimeMethod* method)
{
	{
		// return (int) allocator >= AllocatorManager.FirstUserIndex;
		int32_t L_0 = ___allocator0;
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)32)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::CustomResize(System.Void*,System.Int64,System.Int64,Unity.Collections.Allocator,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_CustomResize_mBACD370FE1C026E09E54946396685FF80F1A1477 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, int32_t ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// AllocatorManager.Block block = default;
		il2cpp_codegen_initobj((&V_0), sizeof(Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 ));
		// block.Range.Allocator = new AllocatorManager.AllocatorHandle{Value=(int)allocator};
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_0 = (&V_0)->get_address_of_Range_0();
		il2cpp_codegen_initobj((&V_1), sizeof(AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A ));
		int32_t L_1 = ___allocator3;
		(&V_1)->set_Value_0(L_1);
		AllocatorHandle_tAFA82A7B19AC002D983535C10C63DE0AD2EE3F1A  L_2 = V_1;
		SmallAllocatorHandle_t592284B584DF44A3256494A1495A20042A116EDD  L_3;
		L_3 = SmallAllocatorHandle_op_Implicit_m298BBE86E197B28DCEF7C2FF740259ECAF92671C(L_2, /*hidden argument*/NULL);
		L_0->set_Allocator_2(L_3);
		// block.Range.Items = (int)newCount;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_4 = (&V_0)->get_address_of_Range_0();
		int64_t L_5 = ___newCount2;
		L_4->set_Items_1(((int32_t)((int32_t)L_5)));
		// block.Range.Pointer = (IntPtr)oldPointer;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24 * L_6 = (&V_0)->get_address_of_Range_0();
		void* L_7 = ___oldPointer0;
		intptr_t L_8;
		L_8 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_7, /*hidden argument*/NULL);
		L_6->set_Pointer_0((intptr_t)L_8);
		// block.BytesPerItem = (int)size;
		int64_t L_9 = ___size4;
		(&V_0)->set_BytesPerItem_1(((int32_t)((int32_t)L_9)));
		// block.Alignment = align;
		int32_t L_10 = ___align5;
		Block_set_Alignment_m0B1F5E27F5621271C8F5007C547061F9AD9FE730((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), L_10, /*hidden argument*/NULL);
		// block.AllocatedItems = (int)oldCount;
		int64_t L_11 = ___oldCount1;
		(&V_0)->set_AllocatedItems_2(((int32_t)((int32_t)L_11)));
		// var error = AllocatorManager.Try(ref block);
		IL2CPP_RUNTIME_CLASS_INIT(AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = AllocatorManager_Try_m67E1175F6B4340CF45D552DDC90CDFE0DA1912E3((Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)(&V_0), /*hidden argument*/NULL);
		// return (void*)block.Range.Pointer;
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1  L_13 = V_0;
		Range_t2AA2ABE5FBA7D5E61EECEB806522EAEDECAE1E24  L_14 = L_13.get_Range_0();
		intptr_t L_15 = L_14.get_Pointer_0();
		void* L_16;
		L_16 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_15, /*hidden argument*/NULL);
		return (void*)(L_16);
	}
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.Allocator,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mEABD3DF2755F462C535444D36BC215802E69B3A4 (void* ___oldPointer0, int64_t ___oldCount1, int64_t ___newCount2, int32_t ___allocator3, int64_t ___size4, int32_t ___align5, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	int64_t V_1 = 0;
	{
		// if (IsCustom(allocator))
		int32_t L_0 = ___allocator3;
		bool L_1;
		L_1 = Array_IsCustom_m7ED10C3E0A4B122B8E0CE2AABE75F7A477C6F526(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return CustomResize(oldPointer, oldCount, newCount, allocator, size, align);
		void* L_2 = ___oldPointer0;
		int64_t L_3 = ___oldCount1;
		int64_t L_4 = ___newCount2;
		int32_t L_5 = ___allocator3;
		int64_t L_6 = ___size4;
		int32_t L_7 = ___align5;
		void* L_8;
		L_8 = Array_CustomResize_mBACD370FE1C026E09E54946396685FF80F1A1477((void*)(void*)L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return (void*)(L_8);
	}

IL_0016:
	{
		// void* newPointer = default;
		il2cpp_codegen_initobj((&V_0), sizeof(void*));
		// if (newCount > 0)
		int64_t L_9 = ___newCount2;
		if ((((int64_t)L_9) <= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0048;
		}
	}
	{
		// long bytesToAllocate = newCount * size;
		int64_t L_10 = ___newCount2;
		int64_t L_11 = ___size4;
		// newPointer = UnsafeUtility.Malloc(bytesToAllocate, align, allocator);
		int32_t L_12 = ___align5;
		int32_t L_13 = ___allocator3;
		void* L_14;
		L_14 = UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6(((int64_t)il2cpp_codegen_multiply((int64_t)L_10, (int64_t)L_11)), L_12, L_13, /*hidden argument*/NULL);
		V_0 = (void*)L_14;
		// if (oldCount > 0)
		int64_t L_15 = ___oldCount1;
		if ((((int64_t)L_15) <= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0048;
		}
	}
	{
		// long count = math.min(oldCount, newCount);
		int64_t L_16 = ___oldCount1;
		int64_t L_17 = ___newCount2;
		int64_t L_18;
		L_18 = math_min_m65ACBB9005609DE8184015662C758B23A85C794E_inline(L_16, L_17, /*hidden argument*/NULL);
		// long bytesToCopy = count * size;
		int64_t L_19 = ___size4;
		V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_18, (int64_t)L_19));
		// UnsafeUtility.MemCpy(newPointer, oldPointer, bytesToCopy);
		void* L_20 = V_0;
		void* L_21 = ___oldPointer0;
		int64_t L_22 = V_1;
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_20, (void*)(void*)L_21, L_22, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// if (oldCount > 0)
		int64_t L_23 = ___oldCount1;
		if ((((int64_t)L_23) <= ((int64_t)((int64_t)((int64_t)0)))))
		{
			goto IL_0054;
		}
	}
	{
		// UnsafeUtility.Free(oldPointer, allocator);
		void* L_24 = ___oldPointer0;
		int32_t L_25 = ___allocator3;
		UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9((void*)(void*)L_24, L_25, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// return newPointer;
		void* L_26 = V_0;
		return (void*)(L_26);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Reader_get_RemainingItemCount_m8A86FA6BBA579CE20C8EC57A8FD1BA1F477136E3_inline (Reader_t037EC450EF097BE1FB421B2AAFDC741F4F70A8FB * __this, const RuntimeMethod* method)
{
	{
		// public int RemainingItemCount { get { return m_RemainingItemCount; } }
		int32_t L_0 = __this->get_m_RemainingItemCount_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t math_max_m0C3B6EBC4E87C085887A8658E8C183AEF5F9A105_inline (uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method)
{
	{
		// public static ulong max(ulong x, ulong y) { return x > y ? x : y; }
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___y1;
		if ((!(((uint64_t)L_0) <= ((uint64_t)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		uint64_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		uint64_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_lzcnt_mFE4C7EF0807D856099144A32900D95A6A6A680AA_inline (uint64_t ___x0, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	LongDoubleUnion_t4E62DA692E4065B3CC4025A9F719F76DC90D170B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (x == 0)
		uint64_t L_0 = ___x0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		// return 64;
		return ((int32_t)64);
	}

IL_0006:
	{
		// uint xh = (uint)(x >> 32);
		uint64_t L_1 = ___x0;
		V_0 = ((int32_t)((uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32)))));
		// uint bits = xh != 0 ? xh : (uint)x;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		uint64_t L_3 = ___x0;
		G_B5_0 = ((uint32_t)(((int32_t)((uint32_t)L_3))));
		goto IL_0014;
	}

IL_0013:
	{
		uint32_t L_4 = V_0;
		G_B5_0 = L_4;
	}

IL_0014:
	{
		V_1 = G_B5_0;
		// int offset = xh != 0 ? 0x41E : 0x43E;
		uint32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		G_B8_0 = ((int32_t)1086);
		goto IL_0024;
	}

IL_001f:
	{
		G_B8_0 = ((int32_t)1054);
	}

IL_0024:
	{
		// u.doubleValue = 0.0;
		(&V_2)->set_doubleValue_1((0.0));
		// u.longValue = 0x4330000000000000L + bits;
		uint32_t L_6 = V_1;
		(&V_2)->set_longValue_0(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)4841369599423283200LL), (int64_t)((int64_t)((uint64_t)L_6)))));
		// u.doubleValue -= 4503599627370496.0;
		double* L_7 = (&V_2)->get_address_of_doubleValue_1();
		double* L_8 = L_7;
		double L_9 = *((double*)L_8);
		*((double*)L_8) = (double)((double)il2cpp_codegen_subtract((double)L_9, (double)(4503599627370496.0)));
		// return offset - (int)(u.longValue >> 52);
		LongDoubleUnion_t4E62DA692E4065B3CC4025A9F719F76DC90D170B  L_10 = V_2;
		int64_t L_11 = L_10.get_longValue_0();
		return ((int32_t)il2cpp_codegen_subtract((int32_t)G_B8_0, (int32_t)((int32_t)((int32_t)((int64_t)((int64_t)L_11>>(int32_t)((int32_t)52)))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3__mono_to_burst_Hash128LongU24BurstManaged_mB149884379876D31949FAED2C2E25E944EE12902_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * ___result4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Hash128Long(input, dest, length, secret, out result);
		uint8_t* L_0 = ___input0;
		uint8_t* L_1 = ___dest1;
		int64_t L_2 = ___length2;
		uint8_t* L_3 = ___secret3;
		uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * L_4 = ___result4;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3__Hash128Long_mD0F28BAE0AC3732B7F54185516FB6ADAC2946601((uint8_t*)(uint8_t*)L_0, (uint8_t*)(uint8_t*)L_1, L_2, (uint8_t*)(uint8_t*)L_3, (uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void xxHash3__mono_to_burst_Hash64LongU24BurstManaged_m770A99F3A1C774B74283D367F9EBE4E907E8AA96_inline (uint8_t* ___input0, uint8_t* ___dest1, int64_t ___length2, uint8_t* ___secret3, uint64_t* ___result4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _Hash64Long(input, dest, length, secret, out result);
		uint8_t* L_0 = ___input0;
		uint8_t* L_1 = ___dest1;
		int64_t L_2 = ___length2;
		uint8_t* L_3 = ___secret3;
		uint64_t* L_4 = ___result4;
		IL2CPP_RUNTIME_CLASS_INIT(xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var);
		xxHash3__Hash64Long_mFD366A8CD7B43D58B3304AB7041504CB6C603A9C((uint8_t*)(uint8_t*)L_0, (uint8_t*)(uint8_t*)L_1, L_2, (uint8_t*)(uint8_t*)L_3, (uint64_t*)L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SlabAllocator_TryU24BurstManaged_m4D4AAC5D5146A8594091BF2E2FD41E74E059D2B5_inline (intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	{
		// return ((SlabAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_2 = ___block1;
		int32_t L_3;
		L_3 = SlabAllocator_Try_m18522CF564EE22D2C7FD7C098087906032E53CE3((SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A *)(SlabAllocator_tF0808054B859653F98F972483BE12089AF467E6A *)L_1, (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StackAllocator_TryU24BurstManaged_mD975231208A6EF3BCD65100DF173A3DBD696C89B_inline (intptr_t ___allocatorState0, Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * ___block1, const RuntimeMethod* method)
{
	{
		// return ((StackAllocator*)allocatorState)->Try(ref block);
		intptr_t L_0 = ___allocatorState0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_0, /*hidden argument*/NULL);
		Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 * L_2 = ___block1;
		int32_t L_3;
		L_3 = StackAllocator_Try_m9E77FFC5B3DB94A6A738F9659B23FB48F675825D((StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849 *)(StackAllocator_t1EF5DB6D623D13A2BEB7AC2D74E8AF9C58003849 *)L_1, (Block_t7AD349F0CF600CDFC7CAC194F07B3199AEADF7A1 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_min_m65ACBB9005609DE8184015662C758B23A85C794E_inline (int64_t ___x0, int64_t ___y1, const RuntimeMethod* method)
{
	{
		// public static long min(long x, long y) { return x < y ? x : y; }
		int64_t L_0 = ___x0;
		int64_t L_1 = ___y1;
		if ((((int64_t)L_0) < ((int64_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int64_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int64_t L_3 = ___x0;
		return L_3;
	}
}
