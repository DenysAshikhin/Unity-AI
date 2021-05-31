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

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
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
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Collections.WordStorage/<>c
struct U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45;
// Unity.Collections.xxHash3/_dlg_Hash128Long
struct _dlg_Hash128Long_tE15D7BC6F33B0E46DCA7EC55314105AA069DD36C;
// Unity.Collections.xxHash3/_dlg_Hash64Long
struct _dlg_Hash64Long_tA35705804E7424DB5D496A325C7CE1734BA19D03;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_t24113DD8E4FDBE6A60D5D953A0B063A2B54ADE32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StaticPageSizeInfo_t5841DE793DB6CF7C236D850B76DCF5791A165919_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_tDC2AA420711823AFC08CB3764F03911509D0B2E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFF3761D81069A39D8BCC52945742BDF933BB8B45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* xxHash3_t27DB950BD460657361C30F17C30B38BF2E69092B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* xxHashDefaultKey_t571891083438A5B445489DCBC68618D1BD4D4761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

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


// Unity.Burst.SharedStatic`1<!0> Unity.Burst.SharedStatic`1<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>::GetOrCreate<Unity.Collections.LowLevel.Unsafe.VirtualMemoryUtility/PageSizeInfo>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t71B5104370819D145238CF8F007A7FB1D8EB5955  SharedStatic_1_GetOrCreate_TisPageSizeInfo_t52875DCD2A07B5CB455CB30828C4436330E11AF7_mB522E54283A1A8362345E3DE3D4F4302CC885637_gshared (uint32_t ___alignment0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.xxHash3/StreamingState/StreamingStateData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisStreamingStateData_t726C58356005CA8DEAFF53AB2BCF9F3C676E02BC_m7B00B1C5D18178BE61A522969A8E879DC71E8423_gshared (const RuntimeMethod* method);

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
// System.Void Unity.Collections.xxHash3/ulong2::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ulong2__ctor_m99F5A4A5E88631E52DFB271C54FAFD19DDB005CB (ulong2_t4477C5F6DE875B4DCB04ADD1BA7DCC115E68E70C * __this, uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method);
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
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *);
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
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, int64_t, uint8_t*, uint64_t*);
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
