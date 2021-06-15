#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<Unity.Barracuda.ITensorData>
struct Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F;
// System.Action`1<System.Int32>
struct Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B;
// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941;
// System.Action`1<Unity.Barracuda.Tensor>
struct Action_1_t44D3EA7B187D124808DD221E7371715FC9657EA3;
// System.Converter`2<System.Single,System.Int32>
struct Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE;
// System.Collections.Generic.Dictionary`2<Unity.Barracuda.ITensorData,System.Int32>
struct Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>
struct Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>
struct Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D;
// System.Collections.Generic.Dictionary`2<Unity.Barracuda.TensorShape,System.Collections.Generic.LinkedListNode`1<Unity.Barracuda.TensorCachingByShapeAllocator/Entry>>
struct Dictionary_2_tF952A5674AF6BFADB99193EF6CEFF0721DEEE16A;
// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>
struct Func_2_tBFE20C2C634AE24ED1AAC024EF4E642125A54C77;
// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.String>
struct Func_2_t0674F59A3414AB77103D99EE3650627B44BE126C;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>,System.Boolean>
struct Func_2_t9C9C9DA77E8F27FB66877945854EB089EED983E1;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>,System.Boolean>
struct Func_2_t34E314B532E4EE21A0035BE9D0EFE0F9C23F8BDD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean>
struct Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String>
struct Func_2_t942192522C87CAC66A981B75E31AE269944018EC;
// System.Func`2<System.Nullable`1<System.Int32>,System.Boolean>
struct Func_2_t42993C24F11175D8FA98C3DB6E40DC467687C57D;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<Unity.Barracuda.Layer,System.Boolean>
struct Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6;
// System.Func`2<Unity.Barracuda.Layer,System.Int64>
struct Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF;
// System.Func`2<Unity.Barracuda.Layer,System.String>
struct Func_2_t62346545BA3C1819899F20B24AE84213803B4692;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Func`2<Unity.Barracuda.Tensor,System.String>
struct Func_2_t718FCE2535EE4777ED7A5BD34A7BBFF44DF2247B;
// System.Func`2<Unity.Barracuda.Model/Input,System.Boolean>
struct Func_2_t93B8F96510D53059865117D527022BF190E06764;
// System.Func`2<Unity.Barracuda.Model/Input,System.String>
struct Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB;
// System.Func`2<Unity.Barracuda.Model/Memory,System.String>
struct Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2;
// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean>
struct Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38;
// System.Func`3<System.Single,System.Single,System.Single>
struct Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029;
// System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer>
struct HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.ITensorDataStatistics>
struct IEnumerator_1_t3B2CB57FE7AE8C060C0ADF413BD4B966440256D0;
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.ITensorStatistics>
struct IEnumerator_1_t4B36EC28DBE5F91368F3D309243FCCAE6E604B8F;
// System.Collections.Generic.IEqualityComparer`1<Unity.Barracuda.Layer>
struct IEqualityComparer_1_tFD11F3616CA1100FEE48E7F39F7F9A1B5517FA7C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<Unity.Barracuda.Tensor>
struct IEqualityComparer_1_tF04C099CE1697889CA0CBD5B7E678A7153870440;
// System.Linq.IGrouping`2<System.String,System.String>
struct IGrouping_2_tFE746DB0D48BB9A4A6F250DC4C863F6A9B02CA64;
// System.Collections.Generic.SortedDictionary`2/KeyCollection<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>
struct KeyCollection_tA92E75389FBB29111CBFF7BC2F8EBCFDF032C031;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.Barracuda.Layer>
struct KeyCollection_t55D23091825A5A506FB5AAE5F09FA7E38810D664;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>
struct KeyCollection_t4CDE44AD05F891C94AFC4E11D891D68ABACC5273;
// System.Collections.Generic.LinkedList`1<Unity.Barracuda.TensorCachingByShapeAllocator/Entry>
struct LinkedList_1_t9294D544D352837C7A35363848603AC84EBB7176;
// System.Collections.Generic.List`1<Unity.Barracuda.AllocatorMemoryInfo>
struct List_1_t2C9CC077ED250A6186259485B658D19150752FAC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<Unity.Barracuda.TensorMemoryInfo>
struct List_1_t20AD929D98B33E7402FA35D2E685C93BCC7FC89F;
// System.Collections.Generic.List`1<Unity.Barracuda.TensorCachingAllocator/Entry>
struct List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B;
// System.Predicate`1<System.String>
struct Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3;
// System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>
struct SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388;
// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>
struct SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415;
// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>>
struct TreeSet_1_tE4A640827593540548AE73CC65B75DC4073E0161;
// System.Collections.Generic.SortedDictionary`2/ValueCollection<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>
struct ValueCollection_t78B30FE0507E67E8D230B6F2A1D2C3470D2D75FE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.Barracuda.Layer>
struct ValueCollection_t4CC66454BA5AE8FF8AB029E5655DBE499116BE48;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>
struct ValueCollection_t715A5763F5BA582B13B737E0D0F5C130799D0122;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.Barracuda.Layer>[]
struct EntryU5BU5D_tF6DAD7C0D8BB3646AB1800A6D12786471C273ADB;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>[]
struct EntryU5BU5D_t66FAC0767F1E251B5CF5D7DD3D0DC65BAA2EBB32;
// System.Collections.Generic.HashSet`1/Slot<Unity.Barracuda.Layer>[]
struct SlotU5BU5D_t748C3501762DC1B8C87E3D2CEE652F3EB73CE541;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// Unity.Barracuda.Tensor[]
struct TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D;
// Unity.Barracuda.Layer/DataSet[]
struct DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824;
// Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction[]
struct CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F;
// UnityEngine.Random/State[]
struct StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A;
// Unity.Barracuda.TensorCachingAllocator/Entry[]
struct EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Unity.Barracuda.ComputeKernel
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9;
// UnityEngine.ComputeShader
struct ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Unity.Barracuda.IModelExecutionsReporter
struct IModelExecutionsReporter_t486705BB055E9B6E1839CA7BD075E566E555D7F3;
// Unity.Barracuda.ITensorAllocator
struct ITensorAllocator_tE6529B987813330AA3D9C38EB552C3450EFA9423;
// Unity.Barracuda.ITensorData
struct ITensorData_t046F35F1D942B67F347A0258930AFF72B261F3B6;
// Unity.Barracuda.ITensorDataStatistics
struct ITensorDataStatistics_t0FE12B9579C30F5DBEDDE0746E57D458512BA9D7;
// Unity.Barracuda.ITensorStatistics
struct ITensorStatistics_t0E8DEF26BE9DD18F213DCFEEDDB561E888BE3F14;
// Unity.Barracuda.Layer
struct Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948;
// Unity.Barracuda.LayerExecutionReport
struct LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0;
// Unity.Barracuda.MemorySnapshotReport
struct MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Barracuda.Model
struct Model_tEC1E487082D761A86456CD792AEC7DF2A13561FF;
// Unity.Barracuda.ModelBuilder
struct ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// Unity.Barracuda.StringCache
struct StringCache_t56B94A1551D4DD3ADC19D8B371038ADC688D89A2;
// Unity.Barracuda.Tensor
struct Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760;
// Unity.Barracuda.TensorCachingAllocator
struct TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E;
// Unity.Barracuda.TensorCachingByShapeAllocator
struct TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Texture2DArray
struct Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C;
// UnityEngine.Texture3D
struct Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields
struct SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D;
// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts
struct SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B;
// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView
struct SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059;
// Unity.Barracuda.Model/<>c
struct U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA;
// Unity.Barracuda.Model/ImporterWarning
struct ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504;
// Unity.Barracuda.ModelAnalyzer/<>c
struct U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319;
// Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t1DCE9939016179A18FD577C5E88D821D148A7CF7;
// Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9D01911B1D3D1D5B0B5A1C39D9D97B100D7EB211;
// Unity.Barracuda.ModelOptimizer/<>c
struct U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1
struct U3CU3Ec__DisplayClass16_1_tAC83BD003745470EFE4E9F1CC04D3F507C87C8E9;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1
struct U3CU3Ec__DisplayClass18_1_tD8A1D1D3760E88B51CD3A0307A860544B02B962E;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tEAFF6140B916D4FCDEC2E6697489F2257B291A98;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t67E6B802FF69A3A1849D6C69BE42FAC8728AE2B8;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C;
// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617;
// Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c
struct U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1;
// Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t97EE57A0095811F97DF74FEC41206DAECA612304;
// Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46;
// Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c
struct U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6;
// Unity.Barracuda.ReferenceCPUOps/<>c
struct U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE;
// Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tC21EF5CE455717B8DEDC0D66C630BCA38FE67CA6;
// Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t2552CEC72F3B25C49BFE479AFD6892B4663136E7;
// Unity.Barracuda.ReferenceCPUOps/Seed
struct Seed_t3D4DA11019C044BDD2624126499FBC3DD38AD963;
// Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c
struct U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48;
// Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tB573DE7571B5DFA08001842DAE32174D11710780;
// Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tE2B32F9D2B4B1E600F35CC0063D2A059F8F35AA8;
// Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tCF5D4A50DFACB103679B80DE5369F4A44EF8D0CF;
// Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD5D11EE36967DE1B5A0CAD49B0C177ABF50E6649;
// Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9C94A32C74131C1AE814870B7E4DDE6DB333EE82;
// Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4;
// Unity.Barracuda.StaticLayerOppComplexity/<>c
struct U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55;
// Unity.Barracuda.StatsOps/Transcendental
struct Transcendental_t8C91227317E986D3FD83D36B112EC9C3C5BE044A;
// Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34
struct U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A;
// Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33
struct U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44;
// Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2;
// Unity.Barracuda.TensorExtensions/<>c
struct U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE;
// Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73;
// Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t28B5AB439F2BE6E91915521682DFD9677CE098AD;
// Unity.Barracuda.TensorScope/F
struct F_t5830B01D9DEF2646EE416C063E90F3EB9E25244F;
// Unity.Barracuda.UniqueResource/UniqueResourceHelper
struct UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE;
// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0
struct U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3;
// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43;
// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0
struct U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA;
// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0
struct U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9;
// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0
struct U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B;
// Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c
struct U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641;
// Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c
struct U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B;
// Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c
struct U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045;
// Unity.Barracuda.VerboseOps/<>c
struct U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D;

IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Flags_tEC50C02387CC24FFD7B196DDC71FC8129A6E8AB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGrouping_2_tFE746DB0D48BB9A4A6F250DC4C863F6A9B02CA64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITensorDataStatistics_t0FE12B9579C30F5DBEDDE0746E57D458512BA9D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniqueResource_t72378FEEE8219BFF5571A80312B3921E3C1C5553_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelOptimizer_tCE2770855C8C69811B8027F453E4B11AAA525DC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_tF9514834182131C4A5FCB2A7012599B052178D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral44E5FB4393257D264C7190EA5443ED918807FB81;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral8D20A9048A9A16304B931F4C020E2E48771C572B;
IL2CPP_EXTERN_C String_t* _stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634;
IL2CPP_EXTERN_C String_t* _stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC88B7268310CF55E1332901267EC9623937285;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m116D3EE1997E383989CA36A2DF7D4503A47F4721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5C26454A6B690BFF9F775179205585E674FA29BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0E87A47F67CC15C8A9EBB5AFA9785335F18FFDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4A857635EE87B66190BFDCE0D393B3D59AD95075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m457F0808EF9F4F1B67D90F72C506D4DDB88E2656_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m27ED6C1E1770DD40F854C0A1CD0F8AE0A0BD687B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mA8568457D71134719487CDDC094FFDA001320553_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF0812DD6E41A1436214C9581CB7B56C5837BBAE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_IEnumerator_Reset_m51D7CA0DFE6A5D6C5D1083856A053F8AF6BBD3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTensorsStatisticsU3Ed__33_System_Collections_IEnumerator_Reset_m59E58D6C10283041467932D69FC10B93B724561B_RuntimeMethod_var;
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46;;
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com;
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com;;
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke;
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke;;
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9;;
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com;
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com;;
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke;
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D;
struct DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824;
struct CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F;
struct StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>
struct Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tF6DAD7C0D8BB3646AB1800A6D12786471C273ADB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t55D23091825A5A506FB5AAE5F09FA7E38810D664 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4CC66454BA5AE8FF8AB029E5655DBE499116BE48 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___entries_1)); }
	inline EntryU5BU5D_tF6DAD7C0D8BB3646AB1800A6D12786471C273ADB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tF6DAD7C0D8BB3646AB1800A6D12786471C273ADB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tF6DAD7C0D8BB3646AB1800A6D12786471C273ADB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___keys_7)); }
	inline KeyCollection_t55D23091825A5A506FB5AAE5F09FA7E38810D664 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t55D23091825A5A506FB5AAE5F09FA7E38810D664 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t55D23091825A5A506FB5AAE5F09FA7E38810D664 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ___values_8)); }
	inline ValueCollection_t4CC66454BA5AE8FF8AB029E5655DBE499116BE48 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4CC66454BA5AE8FF8AB029E5655DBE499116BE48 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4CC66454BA5AE8FF8AB029E5655DBE499116BE48 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>
struct Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t66FAC0767F1E251B5CF5D7DD3D0DC65BAA2EBB32* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4CDE44AD05F891C94AFC4E11D891D68ABACC5273 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t715A5763F5BA582B13B737E0D0F5C130799D0122 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___entries_1)); }
	inline EntryU5BU5D_t66FAC0767F1E251B5CF5D7DD3D0DC65BAA2EBB32* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t66FAC0767F1E251B5CF5D7DD3D0DC65BAA2EBB32** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t66FAC0767F1E251B5CF5D7DD3D0DC65BAA2EBB32* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___keys_7)); }
	inline KeyCollection_t4CDE44AD05F891C94AFC4E11D891D68ABACC5273 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4CDE44AD05F891C94AFC4E11D891D68ABACC5273 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4CDE44AD05F891C94AFC4E11D891D68ABACC5273 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ___values_8)); }
	inline ValueCollection_t715A5763F5BA582B13B737E0D0F5C130799D0122 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t715A5763F5BA582B13B737E0D0F5C130799D0122 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t715A5763F5BA582B13B737E0D0F5C130799D0122 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer>
struct HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t748C3501762DC1B8C87E3D2CEE652F3EB73CE541* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____slots_8)); }
	inline SlotU5BU5D_t748C3501762DC1B8C87E3D2CEE652F3EB73CE541* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t748C3501762DC1B8C87E3D2CEE652F3EB73CE541** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t748C3501762DC1B8C87E3D2CEE652F3EB73CE541* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Unity.Barracuda.TensorCachingAllocator/Entry>
struct List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B, ____items_1)); }
	inline EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB* get__items_1() const { return ____items_1; }
	inline EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B_StaticFields, ____emptyArray_5)); }
	inline EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EntryU5BU5D_t86A7528621D8DC0A2C796169A43D1B68774051DB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>
struct SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415  : public RuntimeObject
{
public:
	// System.Collections.Generic.SortedDictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_keys
	KeyCollection_tA92E75389FBB29111CBFF7BC2F8EBCFDF032C031 * ____keys_0;
	// System.Collections.Generic.SortedDictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.SortedDictionary`2::_values
	ValueCollection_t78B30FE0507E67E8D230B6F2A1D2C3470D2D75FE * ____values_1;
	// System.Collections.Generic.TreeSet`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.SortedDictionary`2::_set
	TreeSet_1_tE4A640827593540548AE73CC65B75DC4073E0161 * ____set_2;

public:
	inline static int32_t get_offset_of__keys_0() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415, ____keys_0)); }
	inline KeyCollection_tA92E75389FBB29111CBFF7BC2F8EBCFDF032C031 * get__keys_0() const { return ____keys_0; }
	inline KeyCollection_tA92E75389FBB29111CBFF7BC2F8EBCFDF032C031 ** get_address_of__keys_0() { return &____keys_0; }
	inline void set__keys_0(KeyCollection_tA92E75389FBB29111CBFF7BC2F8EBCFDF032C031 * value)
	{
		____keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keys_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415, ____values_1)); }
	inline ValueCollection_t78B30FE0507E67E8D230B6F2A1D2C3470D2D75FE * get__values_1() const { return ____values_1; }
	inline ValueCollection_t78B30FE0507E67E8D230B6F2A1D2C3470D2D75FE ** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ValueCollection_t78B30FE0507E67E8D230B6F2A1D2C3470D2D75FE * value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__set_2() { return static_cast<int32_t>(offsetof(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415, ____set_2)); }
	inline TreeSet_1_tE4A640827593540548AE73CC65B75DC4073E0161 * get__set_2() const { return ____set_2; }
	inline TreeSet_1_tE4A640827593540548AE73CC65B75DC4073E0161 ** get_address_of__set_2() { return &____set_2; }
	inline void set__set_2(TreeSet_1_tE4A640827593540548AE73CC65B75DC4073E0161 * value)
	{
		____set_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Unity.Barracuda.LayerExecutionReport
struct LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.LayerExecutionReport::<LayerType>k__BackingField
	String_t* ___U3CLayerTypeU3Ek__BackingField_0;
	// System.String Unity.Barracuda.LayerExecutionReport::<LayerName>k__BackingField
	String_t* ___U3CLayerNameU3Ek__BackingField_1;
	// System.String Unity.Barracuda.LayerExecutionReport::<DispatchInfos>k__BackingField
	String_t* ___U3CDispatchInfosU3Ek__BackingField_2;
	// System.String Unity.Barracuda.LayerExecutionReport::<Summary>k__BackingField
	String_t* ___U3CSummaryU3Ek__BackingField_3;
	// System.Int64 Unity.Barracuda.LayerExecutionReport::<NumAlu>k__BackingField
	int64_t ___U3CNumAluU3Ek__BackingField_4;
	// System.Int64 Unity.Barracuda.LayerExecutionReport::<NumBytes>k__BackingField
	int64_t ___U3CNumBytesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CLayerTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0, ___U3CLayerTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CLayerTypeU3Ek__BackingField_0() const { return ___U3CLayerTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CLayerTypeU3Ek__BackingField_0() { return &___U3CLayerTypeU3Ek__BackingField_0; }
	inline void set_U3CLayerTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CLayerTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLayerTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLayerNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0, ___U3CLayerNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CLayerNameU3Ek__BackingField_1() const { return ___U3CLayerNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CLayerNameU3Ek__BackingField_1() { return &___U3CLayerNameU3Ek__BackingField_1; }
	inline void set_U3CLayerNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CLayerNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLayerNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDispatchInfosU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0, ___U3CDispatchInfosU3Ek__BackingField_2)); }
	inline String_t* get_U3CDispatchInfosU3Ek__BackingField_2() const { return ___U3CDispatchInfosU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CDispatchInfosU3Ek__BackingField_2() { return &___U3CDispatchInfosU3Ek__BackingField_2; }
	inline void set_U3CDispatchInfosU3Ek__BackingField_2(String_t* value)
	{
		___U3CDispatchInfosU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDispatchInfosU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSummaryU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0, ___U3CSummaryU3Ek__BackingField_3)); }
	inline String_t* get_U3CSummaryU3Ek__BackingField_3() const { return ___U3CSummaryU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CSummaryU3Ek__BackingField_3() { return &___U3CSummaryU3Ek__BackingField_3; }
	inline void set_U3CSummaryU3Ek__BackingField_3(String_t* value)
	{
		___U3CSummaryU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSummaryU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNumAluU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0, ___U3CNumAluU3Ek__BackingField_4)); }
	inline int64_t get_U3CNumAluU3Ek__BackingField_4() const { return ___U3CNumAluU3Ek__BackingField_4; }
	inline int64_t* get_address_of_U3CNumAluU3Ek__BackingField_4() { return &___U3CNumAluU3Ek__BackingField_4; }
	inline void set_U3CNumAluU3Ek__BackingField_4(int64_t value)
	{
		___U3CNumAluU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CNumBytesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0, ___U3CNumBytesU3Ek__BackingField_5)); }
	inline int64_t get_U3CNumBytesU3Ek__BackingField_5() const { return ___U3CNumBytesU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CNumBytesU3Ek__BackingField_5() { return &___U3CNumBytesU3Ek__BackingField_5; }
	inline void set_U3CNumBytesU3Ek__BackingField_5(int64_t value)
	{
		___U3CNumBytesU3Ek__BackingField_5 = value;
	}
};


// Unity.Barracuda.MemorySnapshotReport
struct MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.MemorySnapshotReport::<ContextType>k__BackingField
	String_t* ___U3CContextTypeU3Ek__BackingField_0;
	// System.String Unity.Barracuda.MemorySnapshotReport::<ContextName>k__BackingField
	String_t* ___U3CContextNameU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<Unity.Barracuda.TensorMemoryInfo> Unity.Barracuda.MemorySnapshotReport::<TensorsMemoryInfo>k__BackingField
	List_1_t20AD929D98B33E7402FA35D2E685C93BCC7FC89F * ___U3CTensorsMemoryInfoU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Unity.Barracuda.AllocatorMemoryInfo> Unity.Barracuda.MemorySnapshotReport::<AllocatorMemoryInfo>k__BackingField
	List_1_t2C9CC077ED250A6186259485B658D19150752FAC * ___U3CAllocatorMemoryInfoU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CContextTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15, ___U3CContextTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CContextTypeU3Ek__BackingField_0() const { return ___U3CContextTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CContextTypeU3Ek__BackingField_0() { return &___U3CContextTypeU3Ek__BackingField_0; }
	inline void set_U3CContextTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CContextTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContextTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContextNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15, ___U3CContextNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CContextNameU3Ek__BackingField_1() const { return ___U3CContextNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CContextNameU3Ek__BackingField_1() { return &___U3CContextNameU3Ek__BackingField_1; }
	inline void set_U3CContextNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CContextNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContextNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTensorsMemoryInfoU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15, ___U3CTensorsMemoryInfoU3Ek__BackingField_2)); }
	inline List_1_t20AD929D98B33E7402FA35D2E685C93BCC7FC89F * get_U3CTensorsMemoryInfoU3Ek__BackingField_2() const { return ___U3CTensorsMemoryInfoU3Ek__BackingField_2; }
	inline List_1_t20AD929D98B33E7402FA35D2E685C93BCC7FC89F ** get_address_of_U3CTensorsMemoryInfoU3Ek__BackingField_2() { return &___U3CTensorsMemoryInfoU3Ek__BackingField_2; }
	inline void set_U3CTensorsMemoryInfoU3Ek__BackingField_2(List_1_t20AD929D98B33E7402FA35D2E685C93BCC7FC89F * value)
	{
		___U3CTensorsMemoryInfoU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTensorsMemoryInfoU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAllocatorMemoryInfoU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15, ___U3CAllocatorMemoryInfoU3Ek__BackingField_3)); }
	inline List_1_t2C9CC077ED250A6186259485B658D19150752FAC * get_U3CAllocatorMemoryInfoU3Ek__BackingField_3() const { return ___U3CAllocatorMemoryInfoU3Ek__BackingField_3; }
	inline List_1_t2C9CC077ED250A6186259485B658D19150752FAC ** get_address_of_U3CAllocatorMemoryInfoU3Ek__BackingField_3() { return &___U3CAllocatorMemoryInfoU3Ek__BackingField_3; }
	inline void set_U3CAllocatorMemoryInfoU3Ek__BackingField_3(List_1_t2C9CC077ED250A6186259485B658D19150752FAC * value)
	{
		___U3CAllocatorMemoryInfoU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAllocatorMemoryInfoU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Barracuda.ModelBuilder
struct ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572  : public RuntimeObject
{
public:
	// Unity.Barracuda.Model Unity.Barracuda.ModelBuilder::m_Model
	Model_tEC1E487082D761A86456CD792AEC7DF2A13561FF * ___m_Model_0;

public:
	inline static int32_t get_offset_of_m_Model_0() { return static_cast<int32_t>(offsetof(ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572, ___m_Model_0)); }
	inline Model_tEC1E487082D761A86456CD792AEC7DF2A13561FF * get_m_Model_0() const { return ___m_Model_0; }
	inline Model_tEC1E487082D761A86456CD792AEC7DF2A13561FF ** get_address_of_m_Model_0() { return &___m_Model_0; }
	inline void set_m_Model_0(Model_tEC1E487082D761A86456CD792AEC7DF2A13561FF * value)
	{
		___m_Model_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Model_0), (void*)value);
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


// Unity.Barracuda.TensorCachingByShapeAllocator
struct TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Unity.Barracuda.TensorShape,System.Collections.Generic.LinkedListNode`1<Unity.Barracuda.TensorCachingByShapeAllocator/Entry>> Unity.Barracuda.TensorCachingByShapeAllocator::m_FreeBufferByShape
	Dictionary_2_tF952A5674AF6BFADB99193EF6CEFF0721DEEE16A * ___m_FreeBufferByShape_0;
	// System.Collections.Generic.LinkedList`1<Unity.Barracuda.TensorCachingByShapeAllocator/Entry> Unity.Barracuda.TensorCachingByShapeAllocator::m_FreeBuffers
	LinkedList_1_t9294D544D352837C7A35363848603AC84EBB7176 * ___m_FreeBuffers_1;
	// System.Collections.Generic.Dictionary`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData> Unity.Barracuda.TensorCachingByShapeAllocator::m_BusyTensors
	Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * ___m_BusyTensors_2;
	// System.Collections.Generic.Dictionary`2<Unity.Barracuda.ITensorData,System.Int32> Unity.Barracuda.TensorCachingByShapeAllocator::m_SharedBuffers
	Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 * ___m_SharedBuffers_3;

public:
	inline static int32_t get_offset_of_m_FreeBufferByShape_0() { return static_cast<int32_t>(offsetof(TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77, ___m_FreeBufferByShape_0)); }
	inline Dictionary_2_tF952A5674AF6BFADB99193EF6CEFF0721DEEE16A * get_m_FreeBufferByShape_0() const { return ___m_FreeBufferByShape_0; }
	inline Dictionary_2_tF952A5674AF6BFADB99193EF6CEFF0721DEEE16A ** get_address_of_m_FreeBufferByShape_0() { return &___m_FreeBufferByShape_0; }
	inline void set_m_FreeBufferByShape_0(Dictionary_2_tF952A5674AF6BFADB99193EF6CEFF0721DEEE16A * value)
	{
		___m_FreeBufferByShape_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeBufferByShape_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_FreeBuffers_1() { return static_cast<int32_t>(offsetof(TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77, ___m_FreeBuffers_1)); }
	inline LinkedList_1_t9294D544D352837C7A35363848603AC84EBB7176 * get_m_FreeBuffers_1() const { return ___m_FreeBuffers_1; }
	inline LinkedList_1_t9294D544D352837C7A35363848603AC84EBB7176 ** get_address_of_m_FreeBuffers_1() { return &___m_FreeBuffers_1; }
	inline void set_m_FreeBuffers_1(LinkedList_1_t9294D544D352837C7A35363848603AC84EBB7176 * value)
	{
		___m_FreeBuffers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FreeBuffers_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BusyTensors_2() { return static_cast<int32_t>(offsetof(TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77, ___m_BusyTensors_2)); }
	inline Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * get_m_BusyTensors_2() const { return ___m_BusyTensors_2; }
	inline Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D ** get_address_of_m_BusyTensors_2() { return &___m_BusyTensors_2; }
	inline void set_m_BusyTensors_2(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * value)
	{
		___m_BusyTensors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BusyTensors_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedBuffers_3() { return static_cast<int32_t>(offsetof(TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77, ___m_SharedBuffers_3)); }
	inline Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 * get_m_SharedBuffers_3() const { return ___m_SharedBuffers_3; }
	inline Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 ** get_address_of_m_SharedBuffers_3() { return &___m_SharedBuffers_3; }
	inline void set_m_SharedBuffers_3(Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 * value)
	{
		___m_SharedBuffers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedBuffers_3), (void*)value);
	}
};


// Unity.Barracuda.UniqueResource
struct UniqueResource_t7CEDD2391B6D1025C110DF9E36890F91296BED7C  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.UniqueResource::<uniqueId>k__BackingField
	int32_t ___U3CuniqueIdU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CuniqueIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UniqueResource_t7CEDD2391B6D1025C110DF9E36890F91296BED7C, ___U3CuniqueIdU3Ek__BackingField_1)); }
	inline int32_t get_U3CuniqueIdU3Ek__BackingField_1() const { return ___U3CuniqueIdU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CuniqueIdU3Ek__BackingField_1() { return &___U3CuniqueIdU3Ek__BackingField_1; }
	inline void set_U3CuniqueIdU3Ek__BackingField_1(int32_t value)
	{
		___U3CuniqueIdU3Ek__BackingField_1 = value;
	}
};

struct UniqueResource_t7CEDD2391B6D1025C110DF9E36890F91296BED7C_StaticFields
{
public:
	// Unity.Barracuda.UniqueResource/UniqueResourceHelper Unity.Barracuda.UniqueResource::SpinLock
	UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE * ___SpinLock_0;

public:
	inline static int32_t get_offset_of_SpinLock_0() { return static_cast<int32_t>(offsetof(UniqueResource_t7CEDD2391B6D1025C110DF9E36890F91296BED7C_StaticFields, ___SpinLock_0)); }
	inline UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE * get_SpinLock_0() const { return ___SpinLock_0; }
	inline UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE ** get_address_of_SpinLock_0() { return &___SpinLock_0; }
	inline void set_SpinLock_0(UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE * value)
	{
		___SpinLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpinLock_0), (void*)value);
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

// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields
struct SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D  : public RuntimeObject
{
public:
	// System.String[] Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields::Titles
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Titles_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields::Items
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___Items_1;

public:
	inline static int32_t get_offset_of_Titles_0() { return static_cast<int32_t>(offsetof(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D, ___Titles_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Titles_0() const { return ___Titles_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Titles_0() { return &___Titles_0; }
	inline void set_Titles_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Titles_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Titles_0), (void*)value);
	}

	inline static int32_t get_offset_of_Items_1() { return static_cast<int32_t>(offsetof(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D, ___Items_1)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_Items_1() const { return ___Items_1; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_Items_1() { return &___Items_1; }
	inline void set_Items_1(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___Items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_1), (void*)value);
	}
};


// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts
struct SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B  : public RuntimeObject
{
public:
	// System.String[] Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::FieldTitles
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___FieldTitles_0;
	// System.String[] Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::ContextTitles
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___ContextTitles_1;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::<Fields>k__BackingField
	SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * ___U3CFieldsU3Ek__BackingField_2;
	// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::<Contexts>k__BackingField
	SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * ___U3CContextsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_FieldTitles_0() { return static_cast<int32_t>(offsetof(SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B, ___FieldTitles_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_FieldTitles_0() const { return ___FieldTitles_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_FieldTitles_0() { return &___FieldTitles_0; }
	inline void set_FieldTitles_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___FieldTitles_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FieldTitles_0), (void*)value);
	}

	inline static int32_t get_offset_of_ContextTitles_1() { return static_cast<int32_t>(offsetof(SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B, ___ContextTitles_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_ContextTitles_1() const { return ___ContextTitles_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_ContextTitles_1() { return &___ContextTitles_1; }
	inline void set_ContextTitles_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___ContextTitles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ContextTitles_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B, ___U3CFieldsU3Ek__BackingField_2)); }
	inline SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * get_U3CFieldsU3Ek__BackingField_2() const { return ___U3CFieldsU3Ek__BackingField_2; }
	inline SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 ** get_address_of_U3CFieldsU3Ek__BackingField_2() { return &___U3CFieldsU3Ek__BackingField_2; }
	inline void set_U3CFieldsU3Ek__BackingField_2(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * value)
	{
		___U3CFieldsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContextsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B, ___U3CContextsU3Ek__BackingField_3)); }
	inline SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * get_U3CContextsU3Ek__BackingField_3() const { return ___U3CContextsU3Ek__BackingField_3; }
	inline SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 ** get_address_of_U3CContextsU3Ek__BackingField_3() { return &___U3CContextsU3Ek__BackingField_3; }
	inline void set_U3CContextsU3Ek__BackingField_3(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * value)
	{
		___U3CContextsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContextsU3Ek__BackingField_3), (void*)value);
	}
};


// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView
struct SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059  : public RuntimeObject
{
public:
	// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView::context
	SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * ___context_0;
	// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView::summary
	SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * ___summary_1;
	// Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView::sections
	SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * ___sections_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059, ___context_0)); }
	inline SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * get_context_0() const { return ___context_0; }
	inline SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_0), (void*)value);
	}

	inline static int32_t get_offset_of_summary_1() { return static_cast<int32_t>(offsetof(SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059, ___summary_1)); }
	inline SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * get_summary_1() const { return ___summary_1; }
	inline SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D ** get_address_of_summary_1() { return &___summary_1; }
	inline void set_summary_1(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * value)
	{
		___summary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___summary_1), (void*)value);
	}

	inline static int32_t get_offset_of_sections_2() { return static_cast<int32_t>(offsetof(SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059, ___sections_2)); }
	inline SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * get_sections_2() const { return ___sections_2; }
	inline SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B ** get_address_of_sections_2() { return &___sections_2; }
	inline void set_sections_2(SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * value)
	{
		___sections_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_2), (void*)value);
	}
};


// Unity.Barracuda.Model/<>c
struct U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_StaticFields
{
public:
	// Unity.Barracuda.Model/<>c Unity.Barracuda.Model/<>c::<>9
	U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Model/Input,System.String> Unity.Barracuda.Model/<>c::<>9__21_0
	Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * ___U3CU3E9__21_0_1;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.Model/<>c::<>9__21_1
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__21_1_2;
	// System.Func`2<Unity.Barracuda.Layer,System.String> Unity.Barracuda.Model/<>c::<>9__21_2
	Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * ___U3CU3E9__21_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_StaticFields, ___U3CU3E9__21_0_1)); }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * get_U3CU3E9__21_0_1() const { return ___U3CU3E9__21_0_1; }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB ** get_address_of_U3CU3E9__21_0_1() { return &___U3CU3E9__21_0_1; }
	inline void set_U3CU3E9__21_0_1(Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * value)
	{
		___U3CU3E9__21_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_StaticFields, ___U3CU3E9__21_1_2)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__21_1_2() const { return ___U3CU3E9__21_1_2; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__21_1_2() { return &___U3CU3E9__21_1_2; }
	inline void set_U3CU3E9__21_1_2(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__21_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_StaticFields, ___U3CU3E9__21_2_3)); }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * get_U3CU3E9__21_2_3() const { return ___U3CU3E9__21_2_3; }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 ** get_address_of_U3CU3E9__21_2_3() { return &___U3CU3E9__21_2_3; }
	inline void set_U3CU3E9__21_2_3(Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * value)
	{
		___U3CU3E9__21_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_2_3), (void*)value);
	}
};


// Unity.Barracuda.Model/ImporterWarning
struct ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.Model/ImporterWarning::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_0;
	// System.String Unity.Barracuda.Model/ImporterWarning::<LayerName>k__BackingField
	String_t* ___U3CLayerNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504, ___U3CMessageU3Ek__BackingField_0)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_0() const { return ___U3CMessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_0() { return &___U3CMessageU3Ek__BackingField_0; }
	inline void set_U3CMessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLayerNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504, ___U3CLayerNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CLayerNameU3Ek__BackingField_1() const { return ___U3CLayerNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CLayerNameU3Ek__BackingField_1() { return &___U3CLayerNameU3Ek__BackingField_1; }
	inline void set_U3CLayerNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CLayerNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLayerNameU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Barracuda.ModelAnalyzer/<>c
struct U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields
{
public:
	// Unity.Barracuda.ModelAnalyzer/<>c Unity.Barracuda.ModelAnalyzer/<>c::<>9
	U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Layer,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__12_0
	Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * ___U3CU3E9__12_0_1;
	// System.Func`2<Unity.Barracuda.Layer,System.Boolean> Unity.Barracuda.ModelAnalyzer/<>c::<>9__12_1
	Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 * ___U3CU3E9__12_1_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.Boolean> Unity.Barracuda.ModelAnalyzer/<>c::<>9__12_2
	Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F * ___U3CU3E9__12_2_3;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__12_3
	Func_2_t942192522C87CAC66A981B75E31AE269944018EC * ___U3CU3E9__12_3_4;
	// System.Func`2<Unity.Barracuda.Layer,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__13_0
	Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * ___U3CU3E9__13_0_5;
	// System.Func`2<Unity.Barracuda.Model/Input,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__13_1
	Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * ___U3CU3E9__13_1_6;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__13_2
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__13_2_7;
	// System.Func`2<Unity.Barracuda.Model/Input,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__16_0
	Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * ___U3CU3E9__16_0_8;
	// System.Func`2<Unity.Barracuda.Model/Input,System.Boolean> Unity.Barracuda.ModelAnalyzer/<>c::<>9__16_1
	Func_2_t93B8F96510D53059865117D527022BF190E06764 * ___U3CU3E9__16_1_9;
	// System.Func`2<Unity.Barracuda.Layer,System.String> Unity.Barracuda.ModelAnalyzer/<>c::<>9__17_1
	Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * ___U3CU3E9__17_1_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__12_1_2)); }
	inline Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 * get_U3CU3E9__12_1_2() const { return ___U3CU3E9__12_1_2; }
	inline Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 ** get_address_of_U3CU3E9__12_1_2() { return &___U3CU3E9__12_1_2; }
	inline void set_U3CU3E9__12_1_2(Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 * value)
	{
		___U3CU3E9__12_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__12_2_3)); }
	inline Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F * get_U3CU3E9__12_2_3() const { return ___U3CU3E9__12_2_3; }
	inline Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F ** get_address_of_U3CU3E9__12_2_3() { return &___U3CU3E9__12_2_3; }
	inline void set_U3CU3E9__12_2_3(Func_2_t3DFB7D97659946883862BED975EB8EADFABC9D8F * value)
	{
		___U3CU3E9__12_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__12_3_4)); }
	inline Func_2_t942192522C87CAC66A981B75E31AE269944018EC * get_U3CU3E9__12_3_4() const { return ___U3CU3E9__12_3_4; }
	inline Func_2_t942192522C87CAC66A981B75E31AE269944018EC ** get_address_of_U3CU3E9__12_3_4() { return &___U3CU3E9__12_3_4; }
	inline void set_U3CU3E9__12_3_4(Func_2_t942192522C87CAC66A981B75E31AE269944018EC * value)
	{
		___U3CU3E9__12_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__13_0_5)); }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * get_U3CU3E9__13_0_5() const { return ___U3CU3E9__13_0_5; }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 ** get_address_of_U3CU3E9__13_0_5() { return &___U3CU3E9__13_0_5; }
	inline void set_U3CU3E9__13_0_5(Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * value)
	{
		___U3CU3E9__13_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__13_1_6)); }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * get_U3CU3E9__13_1_6() const { return ___U3CU3E9__13_1_6; }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB ** get_address_of_U3CU3E9__13_1_6() { return &___U3CU3E9__13_1_6; }
	inline void set_U3CU3E9__13_1_6(Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * value)
	{
		___U3CU3E9__13_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_2_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__13_2_7)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__13_2_7() const { return ___U3CU3E9__13_2_7; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__13_2_7() { return &___U3CU3E9__13_2_7; }
	inline void set_U3CU3E9__13_2_7(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__13_2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_2_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__16_0_8)); }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * get_U3CU3E9__16_0_8() const { return ___U3CU3E9__16_0_8; }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB ** get_address_of_U3CU3E9__16_0_8() { return &___U3CU3E9__16_0_8; }
	inline void set_U3CU3E9__16_0_8(Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * value)
	{
		___U3CU3E9__16_0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_1_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__16_1_9)); }
	inline Func_2_t93B8F96510D53059865117D527022BF190E06764 * get_U3CU3E9__16_1_9() const { return ___U3CU3E9__16_1_9; }
	inline Func_2_t93B8F96510D53059865117D527022BF190E06764 ** get_address_of_U3CU3E9__16_1_9() { return &___U3CU3E9__16_1_9; }
	inline void set_U3CU3E9__16_1_9(Func_2_t93B8F96510D53059865117D527022BF190E06764 * value)
	{
		___U3CU3E9__16_1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_1_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_1_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields, ___U3CU3E9__17_1_10)); }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * get_U3CU3E9__17_1_10() const { return ___U3CU3E9__17_1_10; }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 ** get_address_of_U3CU3E9__17_1_10() { return &___U3CU3E9__17_1_10; }
	inline void set_U3CU3E9__17_1_10(Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * value)
	{
		___U3CU3E9__17_1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_1_10), (void*)value);
	}
};


// Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t1DCE9939016179A18FD577C5E88D821D148A7CF7  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::layerName
	String_t* ___layerName_0;

public:
	inline static int32_t get_offset_of_layerName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t1DCE9939016179A18FD577C5E88D821D148A7CF7, ___layerName_0)); }
	inline String_t* get_layerName_0() const { return ___layerName_0; }
	inline String_t** get_address_of_layerName_0() { return &___layerName_0; }
	inline void set_layerName_0(String_t* value)
	{
		___layerName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerName_0), (void*)value);
	}
};


// Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9D01911B1D3D1D5B0B5A1C39D9D97B100D7EB211  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t9D01911B1D3D1D5B0B5A1C39D9D97B100D7EB211, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c
struct U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields
{
public:
	// Unity.Barracuda.ModelOptimizer/<>c Unity.Barracuda.ModelOptimizer/<>c::<>9
	U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelOptimizer/<>c::<>9__1_0
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__1_0_1;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelOptimizer/<>c::<>9__1_1
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__1_1_2;
	// System.Func`2<Unity.Barracuda.Layer,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c::<>9__5_0
	Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 * ___U3CU3E9__5_0_3;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c::<>9__7_0
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__7_0_4;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c::<>9__7_1
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__7_1_5;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c::<>9__7_2
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__7_2_6;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelOptimizer/<>c::<>9__8_0
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__8_0_7;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelOptimizer/<>c::<>9__8_1
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__8_1_8;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelOptimizer/<>c::<>9__18_0
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__18_0_9;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.ModelOptimizer/<>c::<>9__18_1
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__18_1_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__5_0_3)); }
	inline Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 * get_U3CU3E9__5_0_3() const { return ___U3CU3E9__5_0_3; }
	inline Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 ** get_address_of_U3CU3E9__5_0_3() { return &___U3CU3E9__5_0_3; }
	inline void set_U3CU3E9__5_0_3(Func_2_tD3C900AB83860405107496ADBBBBE5304211D8C6 * value)
	{
		___U3CU3E9__5_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__7_0_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__7_0_4() const { return ___U3CU3E9__7_0_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__7_0_4() { return &___U3CU3E9__7_0_4; }
	inline void set_U3CU3E9__7_0_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__7_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__7_1_5)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__7_1_5() const { return ___U3CU3E9__7_1_5; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__7_1_5() { return &___U3CU3E9__7_1_5; }
	inline void set_U3CU3E9__7_1_5(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__7_1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_2_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__7_2_6)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__7_2_6() const { return ___U3CU3E9__7_2_6; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__7_2_6() { return &___U3CU3E9__7_2_6; }
	inline void set_U3CU3E9__7_2_6(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__7_2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__8_0_7)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__8_0_7() const { return ___U3CU3E9__8_0_7; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__8_0_7() { return &___U3CU3E9__8_0_7; }
	inline void set_U3CU3E9__8_0_7(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__8_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__8_1_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__8_1_8)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__8_1_8() const { return ___U3CU3E9__8_1_8; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__8_1_8() { return &___U3CU3E9__8_1_8; }
	inline void set_U3CU3E9__8_1_8(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__8_1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__8_1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__18_0_9)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__18_0_9() const { return ___U3CU3E9__18_0_9; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__18_0_9() { return &___U3CU3E9__18_0_9; }
	inline void set_U3CU3E9__18_0_9(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__18_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields, ___U3CU3E9__18_1_10)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__18_1_10() const { return ___U3CU3E9__18_1_10; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__18_1_10() { return &___U3CU3E9__18_1_10; }
	inline void set_U3CU3E9__18_1_10(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__18_1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_10), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::constantLayers
	Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * ___constantLayers_0;
	// System.Func`2<System.String,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<>9__0
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__0_1;
	// System.Predicate`1<System.String> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<>9__1
	Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 * ___U3CU3E9__1_2;

public:
	inline static int32_t get_offset_of_constantLayers_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C, ___constantLayers_0)); }
	inline Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * get_constantLayers_0() const { return ___constantLayers_0; }
	inline Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 ** get_address_of_constantLayers_0() { return &___constantLayers_0; }
	inline void set_constantLayers_0(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * value)
	{
		___constantLayers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constantLayers_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C, ___U3CU3E9__0_1)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__0_1() const { return ___U3CU3E9__0_1; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__0_1() { return &___U3CU3E9__0_1; }
	inline void set_U3CU3E9__0_1(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C, ___U3CU3E9__1_2)); }
	inline Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 * get_U3CU3E9__1_2() const { return ___U3CU3E9__1_2; }
	inline Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 ** get_address_of_U3CU3E9__1_2() { return &___U3CU3E9__1_2; }
	inline void set_U3CU3E9__1_2(Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3 * value)
	{
		___U3CU3E9__1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1
struct U3CU3Ec__DisplayClass16_1_tAC83BD003745470EFE4E9F1CC04D3F507C87C8E9  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::constInput
	String_t* ___constInput_0;

public:
	inline static int32_t get_offset_of_constInput_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass16_1_tAC83BD003745470EFE4E9F1CC04D3F507C87C8E9, ___constInput_0)); }
	inline String_t* get_constInput_0() const { return ___constInput_0; }
	inline String_t** get_address_of_constInput_0() { return &___constInput_0; }
	inline void set_constInput_0(String_t* value)
	{
		___constInput_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constInput_0), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::remap
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___remap_0;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::constantLayers
	Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * ___constantLayers_1;
	// System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::mergedLayers
	HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC * ___mergedLayers_2;
	// System.Collections.Generic.HashSet`1<System.String> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::preserve
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___preserve_3;
	// System.Collections.Generic.HashSet`1<System.String> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::keepLayers
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___keepLayers_4;
	// System.Func`2<System.String,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<>9__4
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__4_5;
	// System.Func`2<System.String,System.Boolean> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<>9__5
	Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___U3CU3E9__5_6;

public:
	inline static int32_t get_offset_of_remap_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___remap_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_remap_0() const { return ___remap_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_remap_0() { return &___remap_0; }
	inline void set_remap_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___remap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remap_0), (void*)value);
	}

	inline static int32_t get_offset_of_constantLayers_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___constantLayers_1)); }
	inline Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * get_constantLayers_1() const { return ___constantLayers_1; }
	inline Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 ** get_address_of_constantLayers_1() { return &___constantLayers_1; }
	inline void set_constantLayers_1(Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * value)
	{
		___constantLayers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constantLayers_1), (void*)value);
	}

	inline static int32_t get_offset_of_mergedLayers_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___mergedLayers_2)); }
	inline HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC * get_mergedLayers_2() const { return ___mergedLayers_2; }
	inline HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC ** get_address_of_mergedLayers_2() { return &___mergedLayers_2; }
	inline void set_mergedLayers_2(HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC * value)
	{
		___mergedLayers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mergedLayers_2), (void*)value);
	}

	inline static int32_t get_offset_of_preserve_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___preserve_3)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_preserve_3() const { return ___preserve_3; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_preserve_3() { return &___preserve_3; }
	inline void set_preserve_3(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___preserve_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preserve_3), (void*)value);
	}

	inline static int32_t get_offset_of_keepLayers_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___keepLayers_4)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_keepLayers_4() const { return ___keepLayers_4; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_keepLayers_4() { return &___keepLayers_4; }
	inline void set_keepLayers_4(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___keepLayers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keepLayers_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___U3CU3E9__4_5)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__4_5() const { return ___U3CU3E9__4_5; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__4_5() { return &___U3CU3E9__4_5; }
	inline void set_U3CU3E9__4_5(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5, ___U3CU3E9__5_6)); }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * get_U3CU3E9__5_6() const { return ___U3CU3E9__5_6; }
	inline Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D ** get_address_of_U3CU3E9__5_6() { return &___U3CU3E9__5_6; }
	inline void set_U3CU3E9__5_6(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * value)
	{
		___U3CU3E9__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_6), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1
struct U3CU3Ec__DisplayClass18_1_tD8A1D1D3760E88B51CD3A0307A860544B02B962E  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::input
	String_t* ___input_0;
	// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0 Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_input_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_1_tD8A1D1D3760E88B51CD3A0307A860544B02B962E, ___input_0)); }
	inline String_t* get_input_0() const { return ___input_0; }
	inline String_t** get_address_of_input_0() { return &___input_0; }
	inline void set_input_0(String_t* value)
	{
		___input_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_1_tD8A1D1D3760E88B51CD3A0307A860544B02B962E, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tEAFF6140B916D4FCDEC2E6697489F2257B291A98  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::unusedLayers
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___unusedLayers_0;
	// System.Collections.Generic.HashSet`1<System.String> Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::preserve
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___preserve_1;

public:
	inline static int32_t get_offset_of_unusedLayers_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tEAFF6140B916D4FCDEC2E6697489F2257B291A98, ___unusedLayers_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_unusedLayers_0() const { return ___unusedLayers_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_unusedLayers_0() { return &___unusedLayers_0; }
	inline void set_unusedLayers_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___unusedLayers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unusedLayers_0), (void*)value);
	}

	inline static int32_t get_offset_of_preserve_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_tEAFF6140B916D4FCDEC2E6697489F2257B291A98, ___preserve_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_preserve_1() const { return ___preserve_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_preserve_1() { return &___preserve_1; }
	inline void set_preserve_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___preserve_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preserve_1), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t67E6B802FF69A3A1849D6C69BE42FAC8728AE2B8  : public RuntimeObject
{
public:
	// Unity.Barracuda.Layer Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::activationToFuse
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___activationToFuse_0;

public:
	inline static int32_t get_offset_of_activationToFuse_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t67E6B802FF69A3A1849D6C69BE42FAC8728AE2B8, ___activationToFuse_0)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_activationToFuse_0() const { return ___activationToFuse_0; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_activationToFuse_0() { return &___activationToFuse_0; }
	inline void set_activationToFuse_0(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___activationToFuse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationToFuse_0), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C  : public RuntimeObject
{
public:
	// Unity.Barracuda.Layer Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::activationLayer
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___activationLayer_0;

public:
	inline static int32_t get_offset_of_activationLayer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C, ___activationLayer_0)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_activationLayer_0() const { return ___activationLayer_0; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_activationLayer_0() { return &___activationLayer_0; }
	inline void set_activationLayer_0(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___activationLayer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationLayer_0), (void*)value);
	}
};


// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617  : public RuntimeObject
{
public:
	// Unity.Barracuda.Layer Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::mainLayer
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___mainLayer_0;
	// Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0 Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_mainLayer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617, ___mainLayer_0)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_mainLayer_0() const { return ___mainLayer_0; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_mainLayer_0() { return &___mainLayer_0; }
	inline void set_mainLayer_0(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___mainLayer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainLayer_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c
struct U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields
{
public:
	// Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9
	U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * ___U3CU3E9_0;
	// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9__4_3
	Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * ___U3CU3E9__4_3_1;
	// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9__21_0
	Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * ___U3CU3E9__21_0_2;
	// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9__21_1
	Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * ___U3CU3E9__21_1_3;
	// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9__21_3
	Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * ___U3CU3E9__21_3_4;
	// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9__21_4
	Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * ___U3CU3E9__21_4_5;
	// System.Func`3<Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder,System.Boolean> Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<>9__21_5
	Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * ___U3CU3E9__21_5_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_3_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9__4_3_1)); }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * get_U3CU3E9__4_3_1() const { return ___U3CU3E9__4_3_1; }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 ** get_address_of_U3CU3E9__4_3_1() { return &___U3CU3E9__4_3_1; }
	inline void set_U3CU3E9__4_3_1(Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * value)
	{
		___U3CU3E9__4_3_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_3_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9__21_0_2)); }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * get_U3CU3E9__21_0_2() const { return ___U3CU3E9__21_0_2; }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 ** get_address_of_U3CU3E9__21_0_2() { return &___U3CU3E9__21_0_2; }
	inline void set_U3CU3E9__21_0_2(Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * value)
	{
		___U3CU3E9__21_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9__21_1_3)); }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * get_U3CU3E9__21_1_3() const { return ___U3CU3E9__21_1_3; }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 ** get_address_of_U3CU3E9__21_1_3() { return &___U3CU3E9__21_1_3; }
	inline void set_U3CU3E9__21_1_3(Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * value)
	{
		___U3CU3E9__21_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9__21_3_4)); }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * get_U3CU3E9__21_3_4() const { return ___U3CU3E9__21_3_4; }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 ** get_address_of_U3CU3E9__21_3_4() { return &___U3CU3E9__21_3_4; }
	inline void set_U3CU3E9__21_3_4(Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * value)
	{
		___U3CU3E9__21_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9__21_4_5)); }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * get_U3CU3E9__21_4_5() const { return ___U3CU3E9__21_4_5; }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 ** get_address_of_U3CU3E9__21_4_5() { return &___U3CU3E9__21_4_5; }
	inline void set_U3CU3E9__21_4_5(Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * value)
	{
		___U3CU3E9__21_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__21_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields, ___U3CU3E9__21_5_6)); }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * get_U3CU3E9__21_5_6() const { return ___U3CU3E9__21_5_6; }
	inline Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 ** get_address_of_U3CU3E9__21_5_6() { return &___U3CU3E9__21_5_6; }
	inline void set_U3CU3E9__21_5_6(Func_3_t2AB6A471BEEC80692C7AE108039DCE5E23BF7E38 * value)
	{
		___U3CU3E9__21_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_5_6), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t97EE57A0095811F97DF74FEC41206DAECA612304  : public RuntimeObject
{
public:
	// Unity.Barracuda.Layer Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass36_0::l
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l_0;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t97EE57A0095811F97DF74FEC41206DAECA612304, ___l_0)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_l_0() const { return ___l_0; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_0), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c
struct U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_StaticFields
{
public:
	// Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<>9
	U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<>9__0_0
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__0_0_1;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<>9__0_1
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// Unity.Barracuda.ReferenceCPUOps/<>c
struct U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields
{
public:
	// Unity.Barracuda.ReferenceCPUOps/<>c Unity.Barracuda.ReferenceCPUOps/<>c::<>9
	U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * ___U3CU3E9_0;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__98_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__98_0_1;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__99_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__99_0_2;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__100_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__100_0_3;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__101_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__101_0_4;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__102_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__102_0_5;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__103_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__103_0_6;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__104_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__104_0_7;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__105_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__105_0_8;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__114_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__114_0_9;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__115_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__115_0_10;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__116_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__116_0_11;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__117_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__117_0_12;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__118_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__118_0_13;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__119_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__119_0_14;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__120_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__120_0_15;
	// System.Func`3<System.Single,System.Single,System.Single> Unity.Barracuda.ReferenceCPUOps/<>c::<>9__121_0
	Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * ___U3CU3E9__121_0_16;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__98_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__98_0_1)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__98_0_1() const { return ___U3CU3E9__98_0_1; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__98_0_1() { return &___U3CU3E9__98_0_1; }
	inline void set_U3CU3E9__98_0_1(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__98_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__98_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__99_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__99_0_2)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__99_0_2() const { return ___U3CU3E9__99_0_2; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__99_0_2() { return &___U3CU3E9__99_0_2; }
	inline void set_U3CU3E9__99_0_2(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__99_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__99_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__100_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__100_0_3)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__100_0_3() const { return ___U3CU3E9__100_0_3; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__100_0_3() { return &___U3CU3E9__100_0_3; }
	inline void set_U3CU3E9__100_0_3(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__100_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__100_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__101_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__101_0_4)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__101_0_4() const { return ___U3CU3E9__101_0_4; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__101_0_4() { return &___U3CU3E9__101_0_4; }
	inline void set_U3CU3E9__101_0_4(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__101_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__101_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__102_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__102_0_5)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__102_0_5() const { return ___U3CU3E9__102_0_5; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__102_0_5() { return &___U3CU3E9__102_0_5; }
	inline void set_U3CU3E9__102_0_5(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__102_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__102_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__103_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__103_0_6)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__103_0_6() const { return ___U3CU3E9__103_0_6; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__103_0_6() { return &___U3CU3E9__103_0_6; }
	inline void set_U3CU3E9__103_0_6(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__103_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__103_0_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__104_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__104_0_7)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__104_0_7() const { return ___U3CU3E9__104_0_7; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__104_0_7() { return &___U3CU3E9__104_0_7; }
	inline void set_U3CU3E9__104_0_7(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__104_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__104_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__105_0_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__105_0_8)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__105_0_8() const { return ___U3CU3E9__105_0_8; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__105_0_8() { return &___U3CU3E9__105_0_8; }
	inline void set_U3CU3E9__105_0_8(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__105_0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__105_0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__114_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__114_0_9)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__114_0_9() const { return ___U3CU3E9__114_0_9; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__114_0_9() { return &___U3CU3E9__114_0_9; }
	inline void set_U3CU3E9__114_0_9(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__114_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__114_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__115_0_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__115_0_10)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__115_0_10() const { return ___U3CU3E9__115_0_10; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__115_0_10() { return &___U3CU3E9__115_0_10; }
	inline void set_U3CU3E9__115_0_10(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__115_0_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__115_0_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__116_0_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__116_0_11)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__116_0_11() const { return ___U3CU3E9__116_0_11; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__116_0_11() { return &___U3CU3E9__116_0_11; }
	inline void set_U3CU3E9__116_0_11(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__116_0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__116_0_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__117_0_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__117_0_12)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__117_0_12() const { return ___U3CU3E9__117_0_12; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__117_0_12() { return &___U3CU3E9__117_0_12; }
	inline void set_U3CU3E9__117_0_12(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__117_0_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__117_0_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__118_0_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__118_0_13)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__118_0_13() const { return ___U3CU3E9__118_0_13; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__118_0_13() { return &___U3CU3E9__118_0_13; }
	inline void set_U3CU3E9__118_0_13(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__118_0_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__118_0_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__119_0_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__119_0_14)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__119_0_14() const { return ___U3CU3E9__119_0_14; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__119_0_14() { return &___U3CU3E9__119_0_14; }
	inline void set_U3CU3E9__119_0_14(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__119_0_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__119_0_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__120_0_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__120_0_15)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__120_0_15() const { return ___U3CU3E9__120_0_15; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__120_0_15() { return &___U3CU3E9__120_0_15; }
	inline void set_U3CU3E9__120_0_15(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__120_0_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__120_0_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__121_0_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields, ___U3CU3E9__121_0_16)); }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * get_U3CU3E9__121_0_16() const { return ___U3CU3E9__121_0_16; }
	inline Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 ** get_address_of_U3CU3E9__121_0_16() { return &___U3CU3E9__121_0_16; }
	inline void set_U3CU3E9__121_0_16(Func_3_tFE81C6878B0B2562E5151A107FB3EB70C52AF029 * value)
	{
		___U3CU3E9__121_0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__121_0_16), (void*)value);
	}
};


// Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_tC21EF5CE455717B8DEDC0D66C630BCA38FE67CA6  : public RuntimeObject
{
public:
	// System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass33_0::value
	float ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass33_0_tC21EF5CE455717B8DEDC0D66C630BCA38FE67CA6, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}
};


// Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t2552CEC72F3B25C49BFE479AFD6892B4663136E7  : public RuntimeObject
{
public:
	// System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass34_0::value
	float ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t2552CEC72F3B25C49BFE479AFD6892B4663136E7, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}
};


// Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c
struct U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields
{
public:
	// Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<>9
	U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<>9__2_0
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__2_0_1;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<>9__2_1
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__2_1_2;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<>9__2_2
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__2_2_3;
	// System.Func`2<System.Int32,System.Boolean> Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<>9__2_3
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___U3CU3E9__2_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3_4), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tB573DE7571B5DFA08001842DAE32174D11710780  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::unusedLayers
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___unusedLayers_0;

public:
	inline static int32_t get_offset_of_unusedLayers_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tB573DE7571B5DFA08001842DAE32174D11710780, ___unusedLayers_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_unusedLayers_0() const { return ___unusedLayers_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_unusedLayers_0() { return &___unusedLayers_0; }
	inline void set_unusedLayers_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___unusedLayers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unusedLayers_0), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tE2B32F9D2B4B1E600F35CC0063D2A059F8F35AA8  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String> Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0::removeLayers
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___removeLayers_0;

public:
	inline static int32_t get_offset_of_removeLayers_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tE2B32F9D2B4B1E600F35CC0063D2A059F8F35AA8, ___removeLayers_0)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_removeLayers_0() const { return ___removeLayers_0; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_removeLayers_0() { return &___removeLayers_0; }
	inline void set_removeLayers_0(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___removeLayers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removeLayers_0), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tCF5D4A50DFACB103679B80DE5369F4A44EF8D0CF  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1::indicesInput
	String_t* ___indicesInput_0;

public:
	inline static int32_t get_offset_of_indicesInput_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_1_tCF5D4A50DFACB103679B80DE5369F4A44EF8D0CF, ___indicesInput_0)); }
	inline String_t* get_indicesInput_0() const { return ___indicesInput_0; }
	inline String_t** get_address_of_indicesInput_0() { return &___indicesInput_0; }
	inline void set_indicesInput_0(String_t* value)
	{
		___indicesInput_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indicesInput_0), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_tD5D11EE36967DE1B5A0CAD49B0C177ABF50E6649  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::layersToRemove
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___layersToRemove_0;

public:
	inline static int32_t get_offset_of_layersToRemove_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_tD5D11EE36967DE1B5A0CAD49B0C177ABF50E6649, ___layersToRemove_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_layersToRemove_0() const { return ___layersToRemove_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_layersToRemove_0() { return &___layersToRemove_0; }
	inline void set_layersToRemove_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___layersToRemove_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layersToRemove_0), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t9C94A32C74131C1AE814870B7E4DDE6DB333EE82  : public RuntimeObject
{
public:
	// Unity.Barracuda.Layer Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::gatherLayer
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___gatherLayer_0;

public:
	inline static int32_t get_offset_of_gatherLayer_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t9C94A32C74131C1AE814870B7E4DDE6DB333EE82, ___gatherLayer_0)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_gatherLayer_0() const { return ___gatherLayer_0; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_gatherLayer_0() { return &___gatherLayer_0; }
	inline void set_gatherLayer_0(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___gatherLayer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gatherLayer_0), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4  : public RuntimeObject
{
public:
	// Unity.Barracuda.Layer Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::layerToRemove
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layerToRemove_0;
	// Unity.Barracuda.Layer Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::acceptedChildLayer
	Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___acceptedChildLayer_1;

public:
	inline static int32_t get_offset_of_layerToRemove_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4, ___layerToRemove_0)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_layerToRemove_0() const { return ___layerToRemove_0; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_layerToRemove_0() { return &___layerToRemove_0; }
	inline void set_layerToRemove_0(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___layerToRemove_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerToRemove_0), (void*)value);
	}

	inline static int32_t get_offset_of_acceptedChildLayer_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4, ___acceptedChildLayer_1)); }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * get_acceptedChildLayer_1() const { return ___acceptedChildLayer_1; }
	inline Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 ** get_address_of_acceptedChildLayer_1() { return &___acceptedChildLayer_1; }
	inline void set_acceptedChildLayer_1(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * value)
	{
		___acceptedChildLayer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___acceptedChildLayer_1), (void*)value);
	}
};


// Unity.Barracuda.StaticLayerOppComplexity/<>c
struct U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields
{
public:
	// Unity.Barracuda.StaticLayerOppComplexity/<>c Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9
	U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_0
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_0_1;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_1
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_1_2;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_2
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_2_3;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_3
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_3_4;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_4
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_4_5;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_5
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_5_6;
	// System.Func`2<Unity.Barracuda.Layer,System.Int64> Unity.Barracuda.StaticLayerOppComplexity/<>c::<>9__2_6
	Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * ___U3CU3E9__2_6_7;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_1_2)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_1_2() const { return ___U3CU3E9__2_1_2; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_1_2() { return &___U3CU3E9__2_1_2; }
	inline void set_U3CU3E9__2_1_2(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_2_3)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_2_3() const { return ___U3CU3E9__2_2_3; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_2_3() { return &___U3CU3E9__2_2_3; }
	inline void set_U3CU3E9__2_2_3(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_3_4)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_3_4() const { return ___U3CU3E9__2_3_4; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_3_4() { return &___U3CU3E9__2_3_4; }
	inline void set_U3CU3E9__2_3_4(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_4_5)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_4_5() const { return ___U3CU3E9__2_4_5; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_4_5() { return &___U3CU3E9__2_4_5; }
	inline void set_U3CU3E9__2_4_5(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_5_6)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_5_6() const { return ___U3CU3E9__2_5_6; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_5_6() { return &___U3CU3E9__2_5_6; }
	inline void set_U3CU3E9__2_5_6(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields, ___U3CU3E9__2_6_7)); }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * get_U3CU3E9__2_6_7() const { return ___U3CU3E9__2_6_7; }
	inline Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF ** get_address_of_U3CU3E9__2_6_7() { return &___U3CU3E9__2_6_7; }
	inline void set_U3CU3E9__2_6_7(Func_2_t4A6F796C587F50A48DE87FA6CFEE45BF5173E2DF * value)
	{
		___U3CU3E9__2_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_6_7), (void*)value);
	}
};


// Unity.Barracuda.StatsOps/Transcendental
struct Transcendental_t8C91227317E986D3FD83D36B112EC9C3C5BE044A  : public RuntimeObject
{
public:

public:
};


// Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2  : public RuntimeObject
{
public:
	// System.Boolean Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::disposeDetachedBufferHint
	bool ___disposeDetachedBufferHint_0;
	// Unity.Barracuda.TensorCachingByShapeAllocator Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::<>4__this
	TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77 * ___U3CU3E4__this_1;
	// Unity.Barracuda.Tensor Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::tensor
	Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___tensor_2;

public:
	inline static int32_t get_offset_of_disposeDetachedBufferHint_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2, ___disposeDetachedBufferHint_0)); }
	inline bool get_disposeDetachedBufferHint_0() const { return ___disposeDetachedBufferHint_0; }
	inline bool* get_address_of_disposeDetachedBufferHint_0() { return &___disposeDetachedBufferHint_0; }
	inline void set_disposeDetachedBufferHint_0(bool value)
	{
		___disposeDetachedBufferHint_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2, ___U3CU3E4__this_1)); }
	inline TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}

	inline static int32_t get_offset_of_tensor_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2, ___tensor_2)); }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * get_tensor_2() const { return ___tensor_2; }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** get_address_of_tensor_2() { return &___tensor_2; }
	inline void set_tensor_2(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		___tensor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tensor_2), (void*)value);
	}
};


// Unity.Barracuda.TensorExtensions/<>c
struct U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_StaticFields
{
public:
	// Unity.Barracuda.TensorExtensions/<>c Unity.Barracuda.TensorExtensions/<>c::<>9
	U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * ___U3CU3E9_0;
	// System.Converter`2<System.Single,System.Int32> Unity.Barracuda.TensorExtensions/<>c::<>9__4_0
	Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Converter_2_t30477F66E861ABBE0CA2281B389AE8F5147117CE * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73  : public RuntimeObject
{
public:
	// Unity.Barracuda.Tensor Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0::X
	Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___X_0;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73, ___X_0)); }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * get_X_0() const { return ___X_0; }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		___X_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X_0), (void*)value);
	}
};


// Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t28B5AB439F2BE6E91915521682DFD9677CE098AD  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::sliceOffset
	int32_t ___sliceOffset_0;
	// Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0 Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_sliceOffset_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_t28B5AB439F2BE6E91915521682DFD9677CE098AD, ___sliceOffset_0)); }
	inline int32_t get_sliceOffset_0() const { return ___sliceOffset_0; }
	inline int32_t* get_address_of_sliceOffset_0() { return &___sliceOffset_0; }
	inline void set_sliceOffset_0(int32_t value)
	{
		___sliceOffset_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_t28B5AB439F2BE6E91915521682DFD9677CE098AD, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Unity.Barracuda.UniqueResource/UniqueResourceHelper
struct UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.UniqueResource/UniqueResourceHelper::lastIdRequested
	int32_t ___lastIdRequested_0;

public:
	inline static int32_t get_offset_of_lastIdRequested_0() { return static_cast<int32_t>(offsetof(UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE, ___lastIdRequested_0)); }
	inline int32_t get_lastIdRequested_0() const { return ___lastIdRequested_0; }
	inline int32_t* get_address_of_lastIdRequested_0() { return &___lastIdRequested_0; }
	inline void set_lastIdRequested_0(int32_t value)
	{
		___lastIdRequested_0 = value;
	}
};


// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0
struct U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3  : public RuntimeObject
{
public:
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::stride
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___stride_0;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::pad
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pad_1;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::xHeight
	int32_t ___xHeight_2;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::xWidth
	int32_t ___xWidth_3;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::xPtr
	float* ___xPtr_4;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::xnMult
	int32_t ___xnMult_5;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::xyMult
	int32_t ___xyMult_6;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::xxMult
	int32_t ___xxMult_7;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::pool
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pool_8;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::oPtr
	float* ___oPtr_9;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::onMult
	int32_t ___onMult_10;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::oyMult
	int32_t ___oyMult_11;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::oxMult
	int32_t ___oxMult_12;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::oChannels
	int32_t ___oChannels_13;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::oWidth
	int32_t ___oWidth_14;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::oHeight
	int32_t ___oHeight_15;

public:
	inline static int32_t get_offset_of_stride_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___stride_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_stride_0() const { return ___stride_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_stride_0() { return &___stride_0; }
	inline void set_stride_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___stride_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stride_0), (void*)value);
	}

	inline static int32_t get_offset_of_pad_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___pad_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pad_1() const { return ___pad_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pad_1() { return &___pad_1; }
	inline void set_pad_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pad_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pad_1), (void*)value);
	}

	inline static int32_t get_offset_of_xHeight_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___xHeight_2)); }
	inline int32_t get_xHeight_2() const { return ___xHeight_2; }
	inline int32_t* get_address_of_xHeight_2() { return &___xHeight_2; }
	inline void set_xHeight_2(int32_t value)
	{
		___xHeight_2 = value;
	}

	inline static int32_t get_offset_of_xWidth_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___xWidth_3)); }
	inline int32_t get_xWidth_3() const { return ___xWidth_3; }
	inline int32_t* get_address_of_xWidth_3() { return &___xWidth_3; }
	inline void set_xWidth_3(int32_t value)
	{
		___xWidth_3 = value;
	}

	inline static int32_t get_offset_of_xPtr_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___xPtr_4)); }
	inline float* get_xPtr_4() const { return ___xPtr_4; }
	inline float** get_address_of_xPtr_4() { return &___xPtr_4; }
	inline void set_xPtr_4(float* value)
	{
		___xPtr_4 = value;
	}

	inline static int32_t get_offset_of_xnMult_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___xnMult_5)); }
	inline int32_t get_xnMult_5() const { return ___xnMult_5; }
	inline int32_t* get_address_of_xnMult_5() { return &___xnMult_5; }
	inline void set_xnMult_5(int32_t value)
	{
		___xnMult_5 = value;
	}

	inline static int32_t get_offset_of_xyMult_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___xyMult_6)); }
	inline int32_t get_xyMult_6() const { return ___xyMult_6; }
	inline int32_t* get_address_of_xyMult_6() { return &___xyMult_6; }
	inline void set_xyMult_6(int32_t value)
	{
		___xyMult_6 = value;
	}

	inline static int32_t get_offset_of_xxMult_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___xxMult_7)); }
	inline int32_t get_xxMult_7() const { return ___xxMult_7; }
	inline int32_t* get_address_of_xxMult_7() { return &___xxMult_7; }
	inline void set_xxMult_7(int32_t value)
	{
		___xxMult_7 = value;
	}

	inline static int32_t get_offset_of_pool_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___pool_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pool_8() const { return ___pool_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pool_8() { return &___pool_8; }
	inline void set_pool_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pool_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_8), (void*)value);
	}

	inline static int32_t get_offset_of_oPtr_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___oPtr_9)); }
	inline float* get_oPtr_9() const { return ___oPtr_9; }
	inline float** get_address_of_oPtr_9() { return &___oPtr_9; }
	inline void set_oPtr_9(float* value)
	{
		___oPtr_9 = value;
	}

	inline static int32_t get_offset_of_onMult_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___onMult_10)); }
	inline int32_t get_onMult_10() const { return ___onMult_10; }
	inline int32_t* get_address_of_onMult_10() { return &___onMult_10; }
	inline void set_onMult_10(int32_t value)
	{
		___onMult_10 = value;
	}

	inline static int32_t get_offset_of_oyMult_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___oyMult_11)); }
	inline int32_t get_oyMult_11() const { return ___oyMult_11; }
	inline int32_t* get_address_of_oyMult_11() { return &___oyMult_11; }
	inline void set_oyMult_11(int32_t value)
	{
		___oyMult_11 = value;
	}

	inline static int32_t get_offset_of_oxMult_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___oxMult_12)); }
	inline int32_t get_oxMult_12() const { return ___oxMult_12; }
	inline int32_t* get_address_of_oxMult_12() { return &___oxMult_12; }
	inline void set_oxMult_12(int32_t value)
	{
		___oxMult_12 = value;
	}

	inline static int32_t get_offset_of_oChannels_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___oChannels_13)); }
	inline int32_t get_oChannels_13() const { return ___oChannels_13; }
	inline int32_t* get_address_of_oChannels_13() { return &___oChannels_13; }
	inline void set_oChannels_13(int32_t value)
	{
		___oChannels_13 = value;
	}

	inline static int32_t get_offset_of_oWidth_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___oWidth_14)); }
	inline int32_t get_oWidth_14() const { return ___oWidth_14; }
	inline int32_t* get_address_of_oWidth_14() { return &___oWidth_14; }
	inline void set_oWidth_14(int32_t value)
	{
		___oWidth_14 = value;
	}

	inline static int32_t get_offset_of_oHeight_15() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3, ___oHeight_15)); }
	inline int32_t get_oHeight_15() const { return ___oHeight_15; }
	inline int32_t* get_address_of_oHeight_15() { return &___oHeight_15; }
	inline void set_oHeight_15(int32_t value)
	{
		___oHeight_15 = value;
	}
};


// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0
struct U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43  : public RuntimeObject
{
public:
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::stride
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___stride_0;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::pad
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pad_1;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::xHeight
	int32_t ___xHeight_2;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::xWidth
	int32_t ___xWidth_3;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::xPtr
	float* ___xPtr_4;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::xnMult
	int32_t ___xnMult_5;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::xyMult
	int32_t ___xyMult_6;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::xxMult
	int32_t ___xxMult_7;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::pool
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pool_8;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::oPtr
	float* ___oPtr_9;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::onMult
	int32_t ___onMult_10;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::oyMult
	int32_t ___oyMult_11;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::oxMult
	int32_t ___oxMult_12;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::oChannels
	int32_t ___oChannels_13;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::oWidth
	int32_t ___oWidth_14;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::oHeight
	int32_t ___oHeight_15;

public:
	inline static int32_t get_offset_of_stride_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___stride_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_stride_0() const { return ___stride_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_stride_0() { return &___stride_0; }
	inline void set_stride_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___stride_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stride_0), (void*)value);
	}

	inline static int32_t get_offset_of_pad_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___pad_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pad_1() const { return ___pad_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pad_1() { return &___pad_1; }
	inline void set_pad_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pad_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pad_1), (void*)value);
	}

	inline static int32_t get_offset_of_xHeight_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___xHeight_2)); }
	inline int32_t get_xHeight_2() const { return ___xHeight_2; }
	inline int32_t* get_address_of_xHeight_2() { return &___xHeight_2; }
	inline void set_xHeight_2(int32_t value)
	{
		___xHeight_2 = value;
	}

	inline static int32_t get_offset_of_xWidth_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___xWidth_3)); }
	inline int32_t get_xWidth_3() const { return ___xWidth_3; }
	inline int32_t* get_address_of_xWidth_3() { return &___xWidth_3; }
	inline void set_xWidth_3(int32_t value)
	{
		___xWidth_3 = value;
	}

	inline static int32_t get_offset_of_xPtr_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___xPtr_4)); }
	inline float* get_xPtr_4() const { return ___xPtr_4; }
	inline float** get_address_of_xPtr_4() { return &___xPtr_4; }
	inline void set_xPtr_4(float* value)
	{
		___xPtr_4 = value;
	}

	inline static int32_t get_offset_of_xnMult_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___xnMult_5)); }
	inline int32_t get_xnMult_5() const { return ___xnMult_5; }
	inline int32_t* get_address_of_xnMult_5() { return &___xnMult_5; }
	inline void set_xnMult_5(int32_t value)
	{
		___xnMult_5 = value;
	}

	inline static int32_t get_offset_of_xyMult_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___xyMult_6)); }
	inline int32_t get_xyMult_6() const { return ___xyMult_6; }
	inline int32_t* get_address_of_xyMult_6() { return &___xyMult_6; }
	inline void set_xyMult_6(int32_t value)
	{
		___xyMult_6 = value;
	}

	inline static int32_t get_offset_of_xxMult_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___xxMult_7)); }
	inline int32_t get_xxMult_7() const { return ___xxMult_7; }
	inline int32_t* get_address_of_xxMult_7() { return &___xxMult_7; }
	inline void set_xxMult_7(int32_t value)
	{
		___xxMult_7 = value;
	}

	inline static int32_t get_offset_of_pool_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___pool_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pool_8() const { return ___pool_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pool_8() { return &___pool_8; }
	inline void set_pool_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pool_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_8), (void*)value);
	}

	inline static int32_t get_offset_of_oPtr_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___oPtr_9)); }
	inline float* get_oPtr_9() const { return ___oPtr_9; }
	inline float** get_address_of_oPtr_9() { return &___oPtr_9; }
	inline void set_oPtr_9(float* value)
	{
		___oPtr_9 = value;
	}

	inline static int32_t get_offset_of_onMult_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___onMult_10)); }
	inline int32_t get_onMult_10() const { return ___onMult_10; }
	inline int32_t* get_address_of_onMult_10() { return &___onMult_10; }
	inline void set_onMult_10(int32_t value)
	{
		___onMult_10 = value;
	}

	inline static int32_t get_offset_of_oyMult_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___oyMult_11)); }
	inline int32_t get_oyMult_11() const { return ___oyMult_11; }
	inline int32_t* get_address_of_oyMult_11() { return &___oyMult_11; }
	inline void set_oyMult_11(int32_t value)
	{
		___oyMult_11 = value;
	}

	inline static int32_t get_offset_of_oxMult_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___oxMult_12)); }
	inline int32_t get_oxMult_12() const { return ___oxMult_12; }
	inline int32_t* get_address_of_oxMult_12() { return &___oxMult_12; }
	inline void set_oxMult_12(int32_t value)
	{
		___oxMult_12 = value;
	}

	inline static int32_t get_offset_of_oChannels_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___oChannels_13)); }
	inline int32_t get_oChannels_13() const { return ___oChannels_13; }
	inline int32_t* get_address_of_oChannels_13() { return &___oChannels_13; }
	inline void set_oChannels_13(int32_t value)
	{
		___oChannels_13 = value;
	}

	inline static int32_t get_offset_of_oWidth_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___oWidth_14)); }
	inline int32_t get_oWidth_14() const { return ___oWidth_14; }
	inline int32_t* get_address_of_oWidth_14() { return &___oWidth_14; }
	inline void set_oWidth_14(int32_t value)
	{
		___oWidth_14 = value;
	}

	inline static int32_t get_offset_of_oHeight_15() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43, ___oHeight_15)); }
	inline int32_t get_oHeight_15() const { return ___oHeight_15; }
	inline int32_t* get_address_of_oHeight_15() { return &___oHeight_15; }
	inline void set_oHeight_15(int32_t value)
	{
		___oHeight_15 = value;
	}
};


// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0
struct U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA  : public RuntimeObject
{
public:
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::oPtr
	float* ___oPtr_0;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::oStrideBatch
	int32_t ___oStrideBatch_1;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::stride
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___stride_2;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::pad
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pad_3;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xWidth
	int32_t ___xWidth_4;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xHeight
	int32_t ___xHeight_5;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xChannels
	int32_t ___xChannels_6;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xPtr
	float* ___xPtr_7;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xStrideBatch
	int32_t ___xStrideBatch_8;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xStrideHeight
	int32_t ___xStrideHeight_9;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::xStrideWidth
	int32_t ___xStrideWidth_10;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::kernelWidth
	int32_t ___kernelWidth_11;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::kernelHeight
	int32_t ___kernelHeight_12;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::oWidth
	int32_t ___oWidth_13;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::oHeight
	int32_t ___oHeight_14;

public:
	inline static int32_t get_offset_of_oPtr_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___oPtr_0)); }
	inline float* get_oPtr_0() const { return ___oPtr_0; }
	inline float** get_address_of_oPtr_0() { return &___oPtr_0; }
	inline void set_oPtr_0(float* value)
	{
		___oPtr_0 = value;
	}

	inline static int32_t get_offset_of_oStrideBatch_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___oStrideBatch_1)); }
	inline int32_t get_oStrideBatch_1() const { return ___oStrideBatch_1; }
	inline int32_t* get_address_of_oStrideBatch_1() { return &___oStrideBatch_1; }
	inline void set_oStrideBatch_1(int32_t value)
	{
		___oStrideBatch_1 = value;
	}

	inline static int32_t get_offset_of_stride_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___stride_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_stride_2() const { return ___stride_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_stride_2() { return &___stride_2; }
	inline void set_stride_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___stride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stride_2), (void*)value);
	}

	inline static int32_t get_offset_of_pad_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___pad_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pad_3() const { return ___pad_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pad_3() { return &___pad_3; }
	inline void set_pad_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pad_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pad_3), (void*)value);
	}

	inline static int32_t get_offset_of_xWidth_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xWidth_4)); }
	inline int32_t get_xWidth_4() const { return ___xWidth_4; }
	inline int32_t* get_address_of_xWidth_4() { return &___xWidth_4; }
	inline void set_xWidth_4(int32_t value)
	{
		___xWidth_4 = value;
	}

	inline static int32_t get_offset_of_xHeight_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xHeight_5)); }
	inline int32_t get_xHeight_5() const { return ___xHeight_5; }
	inline int32_t* get_address_of_xHeight_5() { return &___xHeight_5; }
	inline void set_xHeight_5(int32_t value)
	{
		___xHeight_5 = value;
	}

	inline static int32_t get_offset_of_xChannels_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xChannels_6)); }
	inline int32_t get_xChannels_6() const { return ___xChannels_6; }
	inline int32_t* get_address_of_xChannels_6() { return &___xChannels_6; }
	inline void set_xChannels_6(int32_t value)
	{
		___xChannels_6 = value;
	}

	inline static int32_t get_offset_of_xPtr_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xPtr_7)); }
	inline float* get_xPtr_7() const { return ___xPtr_7; }
	inline float** get_address_of_xPtr_7() { return &___xPtr_7; }
	inline void set_xPtr_7(float* value)
	{
		___xPtr_7 = value;
	}

	inline static int32_t get_offset_of_xStrideBatch_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xStrideBatch_8)); }
	inline int32_t get_xStrideBatch_8() const { return ___xStrideBatch_8; }
	inline int32_t* get_address_of_xStrideBatch_8() { return &___xStrideBatch_8; }
	inline void set_xStrideBatch_8(int32_t value)
	{
		___xStrideBatch_8 = value;
	}

	inline static int32_t get_offset_of_xStrideHeight_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xStrideHeight_9)); }
	inline int32_t get_xStrideHeight_9() const { return ___xStrideHeight_9; }
	inline int32_t* get_address_of_xStrideHeight_9() { return &___xStrideHeight_9; }
	inline void set_xStrideHeight_9(int32_t value)
	{
		___xStrideHeight_9 = value;
	}

	inline static int32_t get_offset_of_xStrideWidth_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___xStrideWidth_10)); }
	inline int32_t get_xStrideWidth_10() const { return ___xStrideWidth_10; }
	inline int32_t* get_address_of_xStrideWidth_10() { return &___xStrideWidth_10; }
	inline void set_xStrideWidth_10(int32_t value)
	{
		___xStrideWidth_10 = value;
	}

	inline static int32_t get_offset_of_kernelWidth_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___kernelWidth_11)); }
	inline int32_t get_kernelWidth_11() const { return ___kernelWidth_11; }
	inline int32_t* get_address_of_kernelWidth_11() { return &___kernelWidth_11; }
	inline void set_kernelWidth_11(int32_t value)
	{
		___kernelWidth_11 = value;
	}

	inline static int32_t get_offset_of_kernelHeight_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___kernelHeight_12)); }
	inline int32_t get_kernelHeight_12() const { return ___kernelHeight_12; }
	inline int32_t* get_address_of_kernelHeight_12() { return &___kernelHeight_12; }
	inline void set_kernelHeight_12(int32_t value)
	{
		___kernelHeight_12 = value;
	}

	inline static int32_t get_offset_of_oWidth_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___oWidth_13)); }
	inline int32_t get_oWidth_13() const { return ___oWidth_13; }
	inline int32_t* get_address_of_oWidth_13() { return &___oWidth_13; }
	inline void set_oWidth_13(int32_t value)
	{
		___oWidth_13 = value;
	}

	inline static int32_t get_offset_of_oHeight_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA, ___oHeight_14)); }
	inline int32_t get_oHeight_14() const { return ___oHeight_14; }
	inline int32_t* get_address_of_oHeight_14() { return &___oHeight_14; }
	inline void set_oHeight_14(int32_t value)
	{
		___oHeight_14 = value;
	}
};


// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0
struct U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::accumulatorMemSize
	int32_t ___accumulatorMemSize_0;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::accumulatorAlignmment
	int32_t ___accumulatorAlignmment_1;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::stride
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___stride_2;
	// System.Int32[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::pad
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pad_3;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::xHeight
	int32_t ___xHeight_4;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::xWidth
	int32_t ___xWidth_5;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::xnMult
	int32_t ___xnMult_6;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::xyMult
	int32_t ___xyMult_7;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::xxMult
	int32_t ___xxMult_8;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::kyMult
	int32_t ___kyMult_9;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::kxMult
	int32_t ___kxMult_10;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::xPtr
	float* ___xPtr_11;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::kPtr
	float* ___kPtr_12;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::unrollSize
	int32_t ___unrollSize_13;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::kKernelCount
	int32_t ___kKernelCount_14;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::kKernelWidth
	int32_t ___kKernelWidth_15;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::kKernelHeight
	int32_t ___kKernelHeight_16;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::onMult
	int32_t ___onMult_17;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::oyMult
	int32_t ___oyMult_18;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::oxMult
	int32_t ___oxMult_19;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::oPtr
	float* ___oPtr_20;
	// System.Single* Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::bPtr
	float* ___bPtr_21;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::oWidth
	int32_t ___oWidth_22;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::oBatch
	int32_t ___oBatch_23;

public:
	inline static int32_t get_offset_of_accumulatorMemSize_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___accumulatorMemSize_0)); }
	inline int32_t get_accumulatorMemSize_0() const { return ___accumulatorMemSize_0; }
	inline int32_t* get_address_of_accumulatorMemSize_0() { return &___accumulatorMemSize_0; }
	inline void set_accumulatorMemSize_0(int32_t value)
	{
		___accumulatorMemSize_0 = value;
	}

	inline static int32_t get_offset_of_accumulatorAlignmment_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___accumulatorAlignmment_1)); }
	inline int32_t get_accumulatorAlignmment_1() const { return ___accumulatorAlignmment_1; }
	inline int32_t* get_address_of_accumulatorAlignmment_1() { return &___accumulatorAlignmment_1; }
	inline void set_accumulatorAlignmment_1(int32_t value)
	{
		___accumulatorAlignmment_1 = value;
	}

	inline static int32_t get_offset_of_stride_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___stride_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_stride_2() const { return ___stride_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_stride_2() { return &___stride_2; }
	inline void set_stride_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___stride_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stride_2), (void*)value);
	}

	inline static int32_t get_offset_of_pad_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___pad_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pad_3() const { return ___pad_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pad_3() { return &___pad_3; }
	inline void set_pad_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pad_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pad_3), (void*)value);
	}

	inline static int32_t get_offset_of_xHeight_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___xHeight_4)); }
	inline int32_t get_xHeight_4() const { return ___xHeight_4; }
	inline int32_t* get_address_of_xHeight_4() { return &___xHeight_4; }
	inline void set_xHeight_4(int32_t value)
	{
		___xHeight_4 = value;
	}

	inline static int32_t get_offset_of_xWidth_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___xWidth_5)); }
	inline int32_t get_xWidth_5() const { return ___xWidth_5; }
	inline int32_t* get_address_of_xWidth_5() { return &___xWidth_5; }
	inline void set_xWidth_5(int32_t value)
	{
		___xWidth_5 = value;
	}

	inline static int32_t get_offset_of_xnMult_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___xnMult_6)); }
	inline int32_t get_xnMult_6() const { return ___xnMult_6; }
	inline int32_t* get_address_of_xnMult_6() { return &___xnMult_6; }
	inline void set_xnMult_6(int32_t value)
	{
		___xnMult_6 = value;
	}

	inline static int32_t get_offset_of_xyMult_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___xyMult_7)); }
	inline int32_t get_xyMult_7() const { return ___xyMult_7; }
	inline int32_t* get_address_of_xyMult_7() { return &___xyMult_7; }
	inline void set_xyMult_7(int32_t value)
	{
		___xyMult_7 = value;
	}

	inline static int32_t get_offset_of_xxMult_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___xxMult_8)); }
	inline int32_t get_xxMult_8() const { return ___xxMult_8; }
	inline int32_t* get_address_of_xxMult_8() { return &___xxMult_8; }
	inline void set_xxMult_8(int32_t value)
	{
		___xxMult_8 = value;
	}

	inline static int32_t get_offset_of_kyMult_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___kyMult_9)); }
	inline int32_t get_kyMult_9() const { return ___kyMult_9; }
	inline int32_t* get_address_of_kyMult_9() { return &___kyMult_9; }
	inline void set_kyMult_9(int32_t value)
	{
		___kyMult_9 = value;
	}

	inline static int32_t get_offset_of_kxMult_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___kxMult_10)); }
	inline int32_t get_kxMult_10() const { return ___kxMult_10; }
	inline int32_t* get_address_of_kxMult_10() { return &___kxMult_10; }
	inline void set_kxMult_10(int32_t value)
	{
		___kxMult_10 = value;
	}

	inline static int32_t get_offset_of_xPtr_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___xPtr_11)); }
	inline float* get_xPtr_11() const { return ___xPtr_11; }
	inline float** get_address_of_xPtr_11() { return &___xPtr_11; }
	inline void set_xPtr_11(float* value)
	{
		___xPtr_11 = value;
	}

	inline static int32_t get_offset_of_kPtr_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___kPtr_12)); }
	inline float* get_kPtr_12() const { return ___kPtr_12; }
	inline float** get_address_of_kPtr_12() { return &___kPtr_12; }
	inline void set_kPtr_12(float* value)
	{
		___kPtr_12 = value;
	}

	inline static int32_t get_offset_of_unrollSize_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___unrollSize_13)); }
	inline int32_t get_unrollSize_13() const { return ___unrollSize_13; }
	inline int32_t* get_address_of_unrollSize_13() { return &___unrollSize_13; }
	inline void set_unrollSize_13(int32_t value)
	{
		___unrollSize_13 = value;
	}

	inline static int32_t get_offset_of_kKernelCount_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___kKernelCount_14)); }
	inline int32_t get_kKernelCount_14() const { return ___kKernelCount_14; }
	inline int32_t* get_address_of_kKernelCount_14() { return &___kKernelCount_14; }
	inline void set_kKernelCount_14(int32_t value)
	{
		___kKernelCount_14 = value;
	}

	inline static int32_t get_offset_of_kKernelWidth_15() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___kKernelWidth_15)); }
	inline int32_t get_kKernelWidth_15() const { return ___kKernelWidth_15; }
	inline int32_t* get_address_of_kKernelWidth_15() { return &___kKernelWidth_15; }
	inline void set_kKernelWidth_15(int32_t value)
	{
		___kKernelWidth_15 = value;
	}

	inline static int32_t get_offset_of_kKernelHeight_16() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___kKernelHeight_16)); }
	inline int32_t get_kKernelHeight_16() const { return ___kKernelHeight_16; }
	inline int32_t* get_address_of_kKernelHeight_16() { return &___kKernelHeight_16; }
	inline void set_kKernelHeight_16(int32_t value)
	{
		___kKernelHeight_16 = value;
	}

	inline static int32_t get_offset_of_onMult_17() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___onMult_17)); }
	inline int32_t get_onMult_17() const { return ___onMult_17; }
	inline int32_t* get_address_of_onMult_17() { return &___onMult_17; }
	inline void set_onMult_17(int32_t value)
	{
		___onMult_17 = value;
	}

	inline static int32_t get_offset_of_oyMult_18() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___oyMult_18)); }
	inline int32_t get_oyMult_18() const { return ___oyMult_18; }
	inline int32_t* get_address_of_oyMult_18() { return &___oyMult_18; }
	inline void set_oyMult_18(int32_t value)
	{
		___oyMult_18 = value;
	}

	inline static int32_t get_offset_of_oxMult_19() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___oxMult_19)); }
	inline int32_t get_oxMult_19() const { return ___oxMult_19; }
	inline int32_t* get_address_of_oxMult_19() { return &___oxMult_19; }
	inline void set_oxMult_19(int32_t value)
	{
		___oxMult_19 = value;
	}

	inline static int32_t get_offset_of_oPtr_20() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___oPtr_20)); }
	inline float* get_oPtr_20() const { return ___oPtr_20; }
	inline float** get_address_of_oPtr_20() { return &___oPtr_20; }
	inline void set_oPtr_20(float* value)
	{
		___oPtr_20 = value;
	}

	inline static int32_t get_offset_of_bPtr_21() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___bPtr_21)); }
	inline float* get_bPtr_21() const { return ___bPtr_21; }
	inline float** get_address_of_bPtr_21() { return &___bPtr_21; }
	inline void set_bPtr_21(float* value)
	{
		___bPtr_21 = value;
	}

	inline static int32_t get_offset_of_oWidth_22() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___oWidth_22)); }
	inline int32_t get_oWidth_22() const { return ___oWidth_22; }
	inline int32_t* get_address_of_oWidth_22() { return &___oWidth_22; }
	inline void set_oWidth_22(int32_t value)
	{
		___oWidth_22 = value;
	}

	inline static int32_t get_offset_of_oBatch_23() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9, ___oBatch_23)); }
	inline int32_t get_oBatch_23() const { return ___oBatch_23; }
	inline int32_t* get_address_of_oBatch_23() { return &___oBatch_23; }
	inline void set_oBatch_23(int32_t value)
	{
		___oBatch_23 = value;
	}
};


// Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0
struct U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::prePadX
	int32_t ___prePadX_0;
	// Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::O
	Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___O_1;
	// System.Action`1<System.Int64> Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::paddingOp
	Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * ___paddingOp_2;
	// Unity.Barracuda.Tensor Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::X
	Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___X_3;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::prePadY
	int32_t ___prePadY_4;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::preCropY
	int32_t ___preCropY_5;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::preCropX
	int32_t ___preCropX_6;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::Xoffset
	int32_t ___Xoffset_7;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::Ooffset
	int32_t ___Ooffset_8;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::croppedWidth
	int32_t ___croppedWidth_9;
	// System.Single[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::Xarray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Xarray_10;
	// System.Single[] Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::Oarray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Oarray_11;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::postPadX
	int32_t ___postPadX_12;
	// System.Int64 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::numItemInABatch
	int64_t ___numItemInABatch_13;
	// System.Int64 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::numItemInARow
	int64_t ___numItemInARow_14;
	// System.Int32 Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::b
	int32_t ___b_15;
	// System.Action`1<System.Int32> Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::<>9__0
	Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * ___U3CU3E9__0_16;

public:
	inline static int32_t get_offset_of_prePadX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___prePadX_0)); }
	inline int32_t get_prePadX_0() const { return ___prePadX_0; }
	inline int32_t* get_address_of_prePadX_0() { return &___prePadX_0; }
	inline void set_prePadX_0(int32_t value)
	{
		___prePadX_0 = value;
	}

	inline static int32_t get_offset_of_O_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___O_1)); }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * get_O_1() const { return ___O_1; }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** get_address_of_O_1() { return &___O_1; }
	inline void set_O_1(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		___O_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___O_1), (void*)value);
	}

	inline static int32_t get_offset_of_paddingOp_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___paddingOp_2)); }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * get_paddingOp_2() const { return ___paddingOp_2; }
	inline Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 ** get_address_of_paddingOp_2() { return &___paddingOp_2; }
	inline void set_paddingOp_2(Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * value)
	{
		___paddingOp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paddingOp_2), (void*)value);
	}

	inline static int32_t get_offset_of_X_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___X_3)); }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * get_X_3() const { return ___X_3; }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** get_address_of_X_3() { return &___X_3; }
	inline void set_X_3(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		___X_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X_3), (void*)value);
	}

	inline static int32_t get_offset_of_prePadY_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___prePadY_4)); }
	inline int32_t get_prePadY_4() const { return ___prePadY_4; }
	inline int32_t* get_address_of_prePadY_4() { return &___prePadY_4; }
	inline void set_prePadY_4(int32_t value)
	{
		___prePadY_4 = value;
	}

	inline static int32_t get_offset_of_preCropY_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___preCropY_5)); }
	inline int32_t get_preCropY_5() const { return ___preCropY_5; }
	inline int32_t* get_address_of_preCropY_5() { return &___preCropY_5; }
	inline void set_preCropY_5(int32_t value)
	{
		___preCropY_5 = value;
	}

	inline static int32_t get_offset_of_preCropX_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___preCropX_6)); }
	inline int32_t get_preCropX_6() const { return ___preCropX_6; }
	inline int32_t* get_address_of_preCropX_6() { return &___preCropX_6; }
	inline void set_preCropX_6(int32_t value)
	{
		___preCropX_6 = value;
	}

	inline static int32_t get_offset_of_Xoffset_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___Xoffset_7)); }
	inline int32_t get_Xoffset_7() const { return ___Xoffset_7; }
	inline int32_t* get_address_of_Xoffset_7() { return &___Xoffset_7; }
	inline void set_Xoffset_7(int32_t value)
	{
		___Xoffset_7 = value;
	}

	inline static int32_t get_offset_of_Ooffset_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___Ooffset_8)); }
	inline int32_t get_Ooffset_8() const { return ___Ooffset_8; }
	inline int32_t* get_address_of_Ooffset_8() { return &___Ooffset_8; }
	inline void set_Ooffset_8(int32_t value)
	{
		___Ooffset_8 = value;
	}

	inline static int32_t get_offset_of_croppedWidth_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___croppedWidth_9)); }
	inline int32_t get_croppedWidth_9() const { return ___croppedWidth_9; }
	inline int32_t* get_address_of_croppedWidth_9() { return &___croppedWidth_9; }
	inline void set_croppedWidth_9(int32_t value)
	{
		___croppedWidth_9 = value;
	}

	inline static int32_t get_offset_of_Xarray_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___Xarray_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Xarray_10() const { return ___Xarray_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Xarray_10() { return &___Xarray_10; }
	inline void set_Xarray_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Xarray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Xarray_10), (void*)value);
	}

	inline static int32_t get_offset_of_Oarray_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___Oarray_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Oarray_11() const { return ___Oarray_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Oarray_11() { return &___Oarray_11; }
	inline void set_Oarray_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Oarray_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Oarray_11), (void*)value);
	}

	inline static int32_t get_offset_of_postPadX_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___postPadX_12)); }
	inline int32_t get_postPadX_12() const { return ___postPadX_12; }
	inline int32_t* get_address_of_postPadX_12() { return &___postPadX_12; }
	inline void set_postPadX_12(int32_t value)
	{
		___postPadX_12 = value;
	}

	inline static int32_t get_offset_of_numItemInABatch_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___numItemInABatch_13)); }
	inline int64_t get_numItemInABatch_13() const { return ___numItemInABatch_13; }
	inline int64_t* get_address_of_numItemInABatch_13() { return &___numItemInABatch_13; }
	inline void set_numItemInABatch_13(int64_t value)
	{
		___numItemInABatch_13 = value;
	}

	inline static int32_t get_offset_of_numItemInARow_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___numItemInARow_14)); }
	inline int64_t get_numItemInARow_14() const { return ___numItemInARow_14; }
	inline int64_t* get_address_of_numItemInARow_14() { return &___numItemInARow_14; }
	inline void set_numItemInARow_14(int64_t value)
	{
		___numItemInARow_14 = value;
	}

	inline static int32_t get_offset_of_b_15() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___b_15)); }
	inline int32_t get_b_15() const { return ___b_15; }
	inline int32_t* get_address_of_b_15() { return &___b_15; }
	inline void set_b_15(int32_t value)
	{
		___b_15 = value;
	}

	inline static int32_t get_offset_of_U3CU3E9__0_16() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B, ___U3CU3E9__0_16)); }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * get_U3CU3E9__0_16() const { return ___U3CU3E9__0_16; }
	inline Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B ** get_address_of_U3CU3E9__0_16() { return &___U3CU3E9__0_16; }
	inline void set_U3CU3E9__0_16(Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B * value)
	{
		___U3CU3E9__0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_16), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c
struct U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_StaticFields
{
public:
	// Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<>9
	U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Layer,System.String> Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<>9__0_0
	Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * ___U3CU3E9__0_0_1;
	// System.Func`2<Unity.Barracuda.Model/Input,System.String> Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<>9__0_1
	Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * ___U3CU3E9__0_1_2;
	// System.Func`2<Unity.Barracuda.Model/Memory,System.String> Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<>9__0_2
	Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * ___U3CU3E9__0_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_t62346545BA3C1819899F20B24AE84213803B4692 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_t62346545BA3C1819899F20B24AE84213803B4692 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_2_tB5948B1AD11342AF3100CE874FCE14E810713DFB * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_StaticFields, ___U3CU3E9__0_2_3)); }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * get_U3CU3E9__0_2_3() const { return ___U3CU3E9__0_2_3; }
	inline Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 ** get_address_of_U3CU3E9__0_2_3() { return &___U3CU3E9__0_2_3; }
	inline void set_U3CU3E9__0_2_3(Func_2_t36CF5449EBD0CFA4615C42FA29DE19F1698448C2 * value)
	{
		___U3CU3E9__0_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2_3), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c
struct U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_StaticFields
{
public:
	// Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<>9
	U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * ___U3CU3E9_0;
	// System.Func`2<System.Nullable`1<System.Int32>,System.Boolean> Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<>9__0_0
	Func_2_t42993C24F11175D8FA98C3DB6E40DC467687C57D * ___U3CU3E9__0_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>,System.Boolean> Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<>9__0_1
	Func_2_t9C9C9DA77E8F27FB66877945854EB089EED983E1 * ___U3CU3E9__0_1_2;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>,System.Boolean> Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<>9__0_2
	Func_2_t34E314B532E4EE21A0035BE9D0EFE0F9C23F8BDD * ___U3CU3E9__0_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_t42993C24F11175D8FA98C3DB6E40DC467687C57D * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_t42993C24F11175D8FA98C3DB6E40DC467687C57D ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_t42993C24F11175D8FA98C3DB6E40DC467687C57D * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_2_t9C9C9DA77E8F27FB66877945854EB089EED983E1 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_2_t9C9C9DA77E8F27FB66877945854EB089EED983E1 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_2_t9C9C9DA77E8F27FB66877945854EB089EED983E1 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_StaticFields, ___U3CU3E9__0_2_3)); }
	inline Func_2_t34E314B532E4EE21A0035BE9D0EFE0F9C23F8BDD * get_U3CU3E9__0_2_3() const { return ___U3CU3E9__0_2_3; }
	inline Func_2_t34E314B532E4EE21A0035BE9D0EFE0F9C23F8BDD ** get_address_of_U3CU3E9__0_2_3() { return &___U3CU3E9__0_2_3; }
	inline void set_U3CU3E9__0_2_3(Func_2_t34E314B532E4EE21A0035BE9D0EFE0F9C23F8BDD * value)
	{
		___U3CU3E9__0_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2_3), (void*)value);
	}
};


// Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c
struct U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_StaticFields
{
public:
	// Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<>9
	U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<>9__0_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__0_0_1;
	// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean> Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<>9__0_1
	Func_2_tBFE20C2C634AE24ED1AAC024EF4E642125A54C77 * ___U3CU3E9__0_1_2;
	// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.String> Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<>9__0_2
	Func_2_t0674F59A3414AB77103D99EE3650627B44BE126C * ___U3CU3E9__0_2_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_2_tBFE20C2C634AE24ED1AAC024EF4E642125A54C77 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_2_tBFE20C2C634AE24ED1AAC024EF4E642125A54C77 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_2_tBFE20C2C634AE24ED1AAC024EF4E642125A54C77 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_StaticFields, ___U3CU3E9__0_2_3)); }
	inline Func_2_t0674F59A3414AB77103D99EE3650627B44BE126C * get_U3CU3E9__0_2_3() const { return ___U3CU3E9__0_2_3; }
	inline Func_2_t0674F59A3414AB77103D99EE3650627B44BE126C ** get_address_of_U3CU3E9__0_2_3() { return &___U3CU3E9__0_2_3; }
	inline void set_U3CU3E9__0_2_3(Func_2_t0674F59A3414AB77103D99EE3650627B44BE126C * value)
	{
		___U3CU3E9__0_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_2_3), (void*)value);
	}
};


// Unity.Barracuda.VerboseOps/<>c
struct U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_StaticFields
{
public:
	// Unity.Barracuda.VerboseOps/<>c Unity.Barracuda.VerboseOps/<>c::<>9
	U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * ___U3CU3E9_0;
	// System.Func`2<Unity.Barracuda.Tensor,System.String> Unity.Barracuda.VerboseOps/<>c::<>9__106_0
	Func_2_t718FCE2535EE4777ED7A5BD34A7BBFF44DF2247B * ___U3CU3E9__106_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__106_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_StaticFields, ___U3CU3E9__106_0_1)); }
	inline Func_2_t718FCE2535EE4777ED7A5BD34A7BBFF44DF2247B * get_U3CU3E9__106_0_1() const { return ___U3CU3E9__106_0_1; }
	inline Func_2_t718FCE2535EE4777ED7A5BD34A7BBFF44DF2247B ** get_address_of_U3CU3E9__106_0_1() { return &___U3CU3E9__106_0_1; }
	inline void set_U3CU3E9__106_0_1(Func_2_t718FCE2535EE4777ED7A5BD34A7BBFF44DF2247B * value)
	{
		___U3CU3E9__106_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__106_0_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>
struct KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F, ___key_0)); }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * get_key_0() const { return ___key_0; }
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F, ___value_1)); }
	inline RuntimeObject* get_value_1() const { return ___value_1; }
	inline RuntimeObject** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ValueTuple`3<System.Int32,System.Int32,System.Int32>
struct ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2 
{
public:
	// T1 System.ValueTuple`3::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2, ___Item3_2)); }
	inline int32_t get_Item3_2() const { return ___Item3_2; }
	inline int32_t* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(int32_t value)
	{
		___Item3_2 = value;
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


// Unity.Barracuda.TensorCachingAllocator
struct TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E  : public UniqueResource_t7CEDD2391B6D1025C110DF9E36890F91296BED7C
{
public:
	// System.String Unity.Barracuda.TensorCachingAllocator::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<Unity.Barracuda.TensorCachingAllocator/Entry> Unity.Barracuda.TensorCachingAllocator::m_AllocatedBuffers
	List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * ___m_AllocatedBuffers_3;
	// System.Collections.Generic.Dictionary`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData> Unity.Barracuda.TensorCachingAllocator::m_BusyTensors
	Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * ___m_BusyTensors_4;
	// System.Collections.Generic.Dictionary`2<Unity.Barracuda.ITensorData,System.Int32> Unity.Barracuda.TensorCachingAllocator::m_SharedBuffers
	Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 * ___m_SharedBuffers_5;
	// System.Action`1<Unity.Barracuda.ITensorData> Unity.Barracuda.TensorCachingAllocator::disposeAllocatedBufferDelegate
	Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F * ___disposeAllocatedBufferDelegate_6;
	// System.Action`1<Unity.Barracuda.ITensorData> Unity.Barracuda.TensorCachingAllocator::adoptFreeBufferDelegate
	Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F * ___adoptFreeBufferDelegate_7;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedBuffers_3() { return static_cast<int32_t>(offsetof(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E, ___m_AllocatedBuffers_3)); }
	inline List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * get_m_AllocatedBuffers_3() const { return ___m_AllocatedBuffers_3; }
	inline List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B ** get_address_of_m_AllocatedBuffers_3() { return &___m_AllocatedBuffers_3; }
	inline void set_m_AllocatedBuffers_3(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * value)
	{
		___m_AllocatedBuffers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedBuffers_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_BusyTensors_4() { return static_cast<int32_t>(offsetof(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E, ___m_BusyTensors_4)); }
	inline Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * get_m_BusyTensors_4() const { return ___m_BusyTensors_4; }
	inline Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D ** get_address_of_m_BusyTensors_4() { return &___m_BusyTensors_4; }
	inline void set_m_BusyTensors_4(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * value)
	{
		___m_BusyTensors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BusyTensors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedBuffers_5() { return static_cast<int32_t>(offsetof(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E, ___m_SharedBuffers_5)); }
	inline Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 * get_m_SharedBuffers_5() const { return ___m_SharedBuffers_5; }
	inline Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 ** get_address_of_m_SharedBuffers_5() { return &___m_SharedBuffers_5; }
	inline void set_m_SharedBuffers_5(Dictionary_2_t078337D99CA6AB25FBA496CF37256566B3627475 * value)
	{
		___m_SharedBuffers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedBuffers_5), (void*)value);
	}

	inline static int32_t get_offset_of_disposeAllocatedBufferDelegate_6() { return static_cast<int32_t>(offsetof(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E, ___disposeAllocatedBufferDelegate_6)); }
	inline Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F * get_disposeAllocatedBufferDelegate_6() const { return ___disposeAllocatedBufferDelegate_6; }
	inline Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F ** get_address_of_disposeAllocatedBufferDelegate_6() { return &___disposeAllocatedBufferDelegate_6; }
	inline void set_disposeAllocatedBufferDelegate_6(Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F * value)
	{
		___disposeAllocatedBufferDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeAllocatedBufferDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_adoptFreeBufferDelegate_7() { return static_cast<int32_t>(offsetof(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E, ___adoptFreeBufferDelegate_7)); }
	inline Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F * get_adoptFreeBufferDelegate_7() const { return ___adoptFreeBufferDelegate_7; }
	inline Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F ** get_address_of_adoptFreeBufferDelegate_7() { return &___adoptFreeBufferDelegate_7; }
	inline void set_adoptFreeBufferDelegate_7(Action_1_tD3DB14D2C7CA4F2D71FF1DB09B83E23382B48B9F * value)
	{
		___adoptFreeBufferDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adoptFreeBufferDelegate_7), (void*)value);
	}
};


// Unity.Barracuda.TensorShape
struct TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 
{
public:
	// System.Int32 Unity.Barracuda.TensorShape::sequenceLength
	int32_t ___sequenceLength_21;
	// System.Int32 Unity.Barracuda.TensorShape::numberOfDirections
	int32_t ___numberOfDirections_22;
	// System.Int32 Unity.Barracuda.TensorShape::batch
	int32_t ___batch_23;
	// System.Int32 Unity.Barracuda.TensorShape::extraDimension
	int32_t ___extraDimension_24;
	// System.Int32 Unity.Barracuda.TensorShape::depth
	int32_t ___depth_25;
	// System.Int32 Unity.Barracuda.TensorShape::height
	int32_t ___height_26;
	// System.Int32 Unity.Barracuda.TensorShape::width
	int32_t ___width_27;
	// System.Int32 Unity.Barracuda.TensorShape::channels
	int32_t ___channels_28;

public:
	inline static int32_t get_offset_of_sequenceLength_21() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___sequenceLength_21)); }
	inline int32_t get_sequenceLength_21() const { return ___sequenceLength_21; }
	inline int32_t* get_address_of_sequenceLength_21() { return &___sequenceLength_21; }
	inline void set_sequenceLength_21(int32_t value)
	{
		___sequenceLength_21 = value;
	}

	inline static int32_t get_offset_of_numberOfDirections_22() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___numberOfDirections_22)); }
	inline int32_t get_numberOfDirections_22() const { return ___numberOfDirections_22; }
	inline int32_t* get_address_of_numberOfDirections_22() { return &___numberOfDirections_22; }
	inline void set_numberOfDirections_22(int32_t value)
	{
		___numberOfDirections_22 = value;
	}

	inline static int32_t get_offset_of_batch_23() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___batch_23)); }
	inline int32_t get_batch_23() const { return ___batch_23; }
	inline int32_t* get_address_of_batch_23() { return &___batch_23; }
	inline void set_batch_23(int32_t value)
	{
		___batch_23 = value;
	}

	inline static int32_t get_offset_of_extraDimension_24() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___extraDimension_24)); }
	inline int32_t get_extraDimension_24() const { return ___extraDimension_24; }
	inline int32_t* get_address_of_extraDimension_24() { return &___extraDimension_24; }
	inline void set_extraDimension_24(int32_t value)
	{
		___extraDimension_24 = value;
	}

	inline static int32_t get_offset_of_depth_25() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___depth_25)); }
	inline int32_t get_depth_25() const { return ___depth_25; }
	inline int32_t* get_address_of_depth_25() { return &___depth_25; }
	inline void set_depth_25(int32_t value)
	{
		___depth_25 = value;
	}

	inline static int32_t get_offset_of_height_26() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___height_26)); }
	inline int32_t get_height_26() const { return ___height_26; }
	inline int32_t* get_address_of_height_26() { return &___height_26; }
	inline void set_height_26(int32_t value)
	{
		___height_26 = value;
	}

	inline static int32_t get_offset_of_width_27() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___width_27)); }
	inline int32_t get_width_27() const { return ___width_27; }
	inline int32_t* get_address_of_width_27() { return &___width_27; }
	inline void set_width_27(int32_t value)
	{
		___width_27 = value;
	}

	inline static int32_t get_offset_of_channels_28() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45, ___channels_28)); }
	inline int32_t get_channels_28() const { return ___channels_28; }
	inline int32_t* get_address_of_channels_28() { return &___channels_28; }
	inline void set_channels_28(int32_t value)
	{
		___channels_28 = value;
	}
};

struct TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45_StaticFields
{
public:
	// System.Int32[] Unity.Barracuda.TensorShape::DataFeatures
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DataFeatures_13;
	// System.Int32[] Unity.Barracuda.TensorShape::KernelSpatials
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___KernelSpatials_20;

public:
	inline static int32_t get_offset_of_DataFeatures_13() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45_StaticFields, ___DataFeatures_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DataFeatures_13() const { return ___DataFeatures_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DataFeatures_13() { return &___DataFeatures_13; }
	inline void set_DataFeatures_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DataFeatures_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DataFeatures_13), (void*)value);
	}

	inline static int32_t get_offset_of_KernelSpatials_20() { return static_cast<int32_t>(offsetof(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45_StaticFields, ___KernelSpatials_20)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_KernelSpatials_20() const { return ___KernelSpatials_20; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_KernelSpatials_20() { return &___KernelSpatials_20; }
	inline void set_KernelSpatials_20(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___KernelSpatials_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KernelSpatials_20), (void*)value);
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42__padding[32];
	};

public:
};


// Unity.Barracuda.Model/Input
struct Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834 
{
public:
	// System.String Unity.Barracuda.Model/Input::name
	String_t* ___name_0;
	// System.Int32[] Unity.Barracuda.Model/Input::shape
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___shape_1;
	// System.Int32 Unity.Barracuda.Model/Input::rank
	int32_t ___rank_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834, ___shape_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_shape_1() const { return ___shape_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___shape_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shape_1), (void*)value);
	}

	inline static int32_t get_offset_of_rank_2() { return static_cast<int32_t>(offsetof(Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834, ___rank_2)); }
	inline int32_t get_rank_2() const { return ___rank_2; }
	inline int32_t* get_address_of_rank_2() { return &___rank_2; }
	inline void set_rank_2(int32_t value)
	{
		___rank_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.Model/Input
struct Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_pinvoke
{
	char* ___name_0;
	Il2CppSafeArray/*NONE*/* ___shape_1;
	int32_t ___rank_2;
};
// Native definition for COM marshalling of Unity.Barracuda.Model/Input
struct Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppSafeArray/*NONE*/* ___shape_1;
	int32_t ___rank_2;
};

// Unity.Barracuda.OpsUtils/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t1454A52562D6D5FB48A79CEA5762EFBA3A6F9579 
{
public:
	// System.String Unity.Barracuda.OpsUtils/<>c__DisplayClass1_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass1_0_t1454A52562D6D5FB48A79CEA5762EFBA3A6F9579, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// UnityEngine.Random/State
struct State_t8E62E640CAE29BF61164F51619D1C04936074C15 
{
public:
	// System.Int32 UnityEngine.Random/State::s0
	int32_t ___s0_0;
	// System.Int32 UnityEngine.Random/State::s1
	int32_t ___s1_1;
	// System.Int32 UnityEngine.Random/State::s2
	int32_t ___s2_2;
	// System.Int32 UnityEngine.Random/State::s3
	int32_t ___s3_3;

public:
	inline static int32_t get_offset_of_s0_0() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s0_0)); }
	inline int32_t get_s0_0() const { return ___s0_0; }
	inline int32_t* get_address_of_s0_0() { return &___s0_0; }
	inline void set_s0_0(int32_t value)
	{
		___s0_0 = value;
	}

	inline static int32_t get_offset_of_s1_1() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s1_1)); }
	inline int32_t get_s1_1() const { return ___s1_1; }
	inline int32_t* get_address_of_s1_1() { return &___s1_1; }
	inline void set_s1_1(int32_t value)
	{
		___s1_1 = value;
	}

	inline static int32_t get_offset_of_s2_2() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s2_2)); }
	inline int32_t get_s2_2() const { return ___s2_2; }
	inline int32_t* get_address_of_s2_2() { return &___s2_2; }
	inline void set_s2_2(int32_t value)
	{
		___s2_2 = value;
	}

	inline static int32_t get_offset_of_s3_3() { return static_cast<int32_t>(offsetof(State_t8E62E640CAE29BF61164F51619D1C04936074C15, ___s3_3)); }
	inline int32_t get_s3_3() const { return ___s3_3; }
	inline int32_t* get_address_of_s3_3() { return &___s3_3; }
	inline void set_s3_3(int32_t value)
	{
		___s3_3 = value;
	}
};


// Unity.Barracuda.StatsOps/LayerStat
struct LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337 
{
public:
	// System.Int64 Unity.Barracuda.StatsOps/LayerStat::total
	int64_t ___total_0;
	// System.Int64 Unity.Barracuda.StatsOps/LayerStat::layer
	int64_t ___layer_1;

public:
	inline static int32_t get_offset_of_total_0() { return static_cast<int32_t>(offsetof(LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337, ___total_0)); }
	inline int64_t get_total_0() const { return ___total_0; }
	inline int64_t* get_address_of_total_0() { return &___total_0; }
	inline void set_total_0(int64_t value)
	{
		___total_0 = value;
	}

	inline static int32_t get_offset_of_layer_1() { return static_cast<int32_t>(offsetof(LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337, ___layer_1)); }
	inline int64_t get_layer_1() const { return ___layer_1; }
	inline int64_t* get_address_of_layer_1() { return &___layer_1; }
	inline void set_layer_1(int64_t value)
	{
		___layer_1 = value;
	}
};


// Unity.Barracuda.TensorCachingAllocator/Entry
struct Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C 
{
public:
	// System.Int32 Unity.Barracuda.TensorCachingAllocator/Entry::size
	int32_t ___size_0;
	// Unity.Barracuda.ITensorData Unity.Barracuda.TensorCachingAllocator/Entry::buffer
	RuntimeObject* ___buffer_1;
	// System.Boolean Unity.Barracuda.TensorCachingAllocator/Entry::free
	bool ___free_2;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C, ___buffer_1)); }
	inline RuntimeObject* get_buffer_1() const { return ___buffer_1; }
	inline RuntimeObject** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(RuntimeObject* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_free_2() { return static_cast<int32_t>(offsetof(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C, ___free_2)); }
	inline bool get_free_2() const { return ___free_2; }
	inline bool* get_address_of_free_2() { return &___free_2; }
	inline void set_free_2(bool value)
	{
		___free_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.TensorCachingAllocator/Entry
struct Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_pinvoke
{
	int32_t ___size_0;
	RuntimeObject* ___buffer_1;
	int32_t ___free_2;
};
// Native definition for COM marshalling of Unity.Barracuda.TensorCachingAllocator/Entry
struct Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_com
{
	int32_t ___size_0;
	RuntimeObject* ___buffer_1;
	int32_t ___free_2;
};

// Unity.Barracuda.BurstCPUOps/ElementwiseAddJob/<stridesX>e__FixedBuffer
struct U3CstridesXU3Ee__FixedBuffer_t6F261668B054AA5E46255A94B8741BAC4F3760EE 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseAddJob/<stridesX>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesXU3Ee__FixedBuffer_t6F261668B054AA5E46255A94B8741BAC4F3760EE__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesXU3Ee__FixedBuffer_t6F261668B054AA5E46255A94B8741BAC4F3760EE, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseAddJob/<stridesY>e__FixedBuffer
struct U3CstridesYU3Ee__FixedBuffer_tF602D187067ACFB061FF3276D6E6C0FFB72ECA4A 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseAddJob/<stridesY>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesYU3Ee__FixedBuffer_tF602D187067ACFB061FF3276D6E6C0FFB72ECA4A__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesYU3Ee__FixedBuffer_tF602D187067ACFB061FF3276D6E6C0FFB72ECA4A, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseDivJob/<stridesX>e__FixedBuffer
struct U3CstridesXU3Ee__FixedBuffer_t93BB8915E4B5187BBD5A447A90AA08A83DA029D9 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseDivJob/<stridesX>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesXU3Ee__FixedBuffer_t93BB8915E4B5187BBD5A447A90AA08A83DA029D9__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesXU3Ee__FixedBuffer_t93BB8915E4B5187BBD5A447A90AA08A83DA029D9, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseDivJob/<stridesY>e__FixedBuffer
struct U3CstridesYU3Ee__FixedBuffer_tD3FBBC51192D19155C75EEA9DB352E2F700DBA1B 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseDivJob/<stridesY>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesYU3Ee__FixedBuffer_tD3FBBC51192D19155C75EEA9DB352E2F700DBA1B__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesYU3Ee__FixedBuffer_tD3FBBC51192D19155C75EEA9DB352E2F700DBA1B, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob/<stridesX>e__FixedBuffer
struct U3CstridesXU3Ee__FixedBuffer_tD68419512241327D9A27CCB1FFBA0318505319F3 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob/<stridesX>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesXU3Ee__FixedBuffer_tD68419512241327D9A27CCB1FFBA0318505319F3__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesXU3Ee__FixedBuffer_tD68419512241327D9A27CCB1FFBA0318505319F3, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob/<stridesY>e__FixedBuffer
struct U3CstridesYU3Ee__FixedBuffer_t046F275847471A64051C62FF01AA282D794B2F70 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseMaxJob/<stridesY>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesYU3Ee__FixedBuffer_t046F275847471A64051C62FF01AA282D794B2F70__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesYU3Ee__FixedBuffer_t046F275847471A64051C62FF01AA282D794B2F70, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseMinJob/<stridesX>e__FixedBuffer
struct U3CstridesXU3Ee__FixedBuffer_tFC9F92F7A2E6F65A4D002DA5E1E5C44DF555E5A9 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseMinJob/<stridesX>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesXU3Ee__FixedBuffer_tFC9F92F7A2E6F65A4D002DA5E1E5C44DF555E5A9__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesXU3Ee__FixedBuffer_tFC9F92F7A2E6F65A4D002DA5E1E5C44DF555E5A9, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseMinJob/<stridesY>e__FixedBuffer
struct U3CstridesYU3Ee__FixedBuffer_tCA06F406936791EA4C8AF7C936EE8D113C67EA5F 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseMinJob/<stridesY>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesYU3Ee__FixedBuffer_tCA06F406936791EA4C8AF7C936EE8D113C67EA5F__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesYU3Ee__FixedBuffer_tCA06F406936791EA4C8AF7C936EE8D113C67EA5F, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseMulJob/<stridesX>e__FixedBuffer
struct U3CstridesXU3Ee__FixedBuffer_t3F8CCE57F3807F2880FF37B212610A1362912F8A 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseMulJob/<stridesX>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesXU3Ee__FixedBuffer_t3F8CCE57F3807F2880FF37B212610A1362912F8A__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesXU3Ee__FixedBuffer_t3F8CCE57F3807F2880FF37B212610A1362912F8A, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwiseMulJob/<stridesY>e__FixedBuffer
struct U3CstridesYU3Ee__FixedBuffer_t78EE8AA4860DB92082E657D1849C30298B1FC7E9 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwiseMulJob/<stridesY>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesYU3Ee__FixedBuffer_t78EE8AA4860DB92082E657D1849C30298B1FC7E9__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesYU3Ee__FixedBuffer_t78EE8AA4860DB92082E657D1849C30298B1FC7E9, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwisePowJob/<stridesX>e__FixedBuffer
struct U3CstridesXU3Ee__FixedBuffer_tC93F9A69F0C3E8E06F92D4BF5A422C97BDF3C3E9 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwisePowJob/<stridesX>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesXU3Ee__FixedBuffer_tC93F9A69F0C3E8E06F92D4BF5A422C97BDF3C3E9__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesXU3Ee__FixedBuffer_tC93F9A69F0C3E8E06F92D4BF5A422C97BDF3C3E9, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/ElementwisePowJob/<stridesY>e__FixedBuffer
struct U3CstridesYU3Ee__FixedBuffer_tA0BA449D8729610A85C9CBFB9536736248AB7641 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/ElementwisePowJob/<stridesY>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CstridesYU3Ee__FixedBuffer_tA0BA449D8729610A85C9CBFB9536736248AB7641__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CstridesYU3Ee__FixedBuffer_tA0BA449D8729610A85C9CBFB9536736248AB7641, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// Unity.Barracuda.BurstCPUOps/TransposeJob/<permutations>e__FixedBuffer
struct U3CpermutationsU3Ee__FixedBuffer_t6E0AE001D2FBDA6A5532EE8D8FDD8762F1D3F1CF 
{
public:
	union
	{
		struct
		{
			// System.Int32 Unity.Barracuda.BurstCPUOps/TransposeJob/<permutations>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CpermutationsU3Ee__FixedBuffer_t6E0AE001D2FBDA6A5532EE8D8FDD8762F1D3F1CF__padding[32];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CpermutationsU3Ee__FixedBuffer_t6E0AE001D2FBDA6A5532EE8D8FDD8762F1D3F1CF, ___FixedElementField_0)); }
	inline int32_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline int32_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(int32_t value)
	{
		___FixedElementField_0 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>
struct Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475, ___list_0)); }
	inline List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * get_list_0() const { return ___list_0; }
	inline List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475, ___current_3)); }
	inline Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  get_current_3() const { return ___current_3; }
	inline Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___buffer_1), (void*)NULL);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>
struct Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8, ___dictionary_0)); }
	inline Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8, ___current_3)); }
	inline KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>
struct KeyValuePair_2_t65EB7E3BB3EDAAADC5E7C051BD6D9B0E4A5A0159 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t65EB7E3BB3EDAAADC5E7C051BD6D9B0E4A5A0159, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t65EB7E3BB3EDAAADC5E7C051BD6D9B0E4A5A0159, ___value_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_value_1() const { return ___value_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>
struct KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2, ___value_1)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_value_1() const { return ___value_1; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___value_1 = value;
	}
};


// System.Nullable`1<Unity.Barracuda.TensorShape>
struct Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 
{
public:
	// T System.Nullable`1::value
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1, ___value_0)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_value_0() const { return ___value_0; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE
	__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  ___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40
	__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  ___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65;

public:
	inline static int32_t get_offset_of_U30A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U30A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0() const { return ___0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U30A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0() { return &___0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0; }
	inline void set_U30A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___0A65CE208BF8FF33525AB598867ECD1C0DA3F2B70B49B9F611D19E26542ED7CC_0 = value;
	}

	inline static int32_t get_offset_of_U315C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U315C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1() const { return ___15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U315C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1() { return &___15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1; }
	inline void set_U315C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___15C7616300AD61F7E69D42C9283EFFDFD8CAF19A9693567278D231F5E77D0395_1 = value;
	}

	inline static int32_t get_offset_of_U31610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U31610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2() const { return ___1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U31610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2() { return &___1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2; }
	inline void set_U31610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___1610CB2E992931251F71F3ABF54F05BB93741E56CE802ACE9AC19B475473ABEC_2 = value;
	}

	inline static int32_t get_offset_of_U31645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U31645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3() const { return ___1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U31645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3() { return &___1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3; }
	inline void set_U31645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___1645DAFAADD8B1075DBB65A6A961A05D28E40D93DA92293CE602DCA244E85D6B_3 = value;
	}

	inline static int32_t get_offset_of_U31794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U31794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4() const { return ___1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U31794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4() { return &___1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4; }
	inline void set_U31794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___1794344C43DCE4A020583C0FC365D3EA379D4980109CA331C2DEB927CB34197E_4 = value;
	}

	inline static int32_t get_offset_of_U31B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U31B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5() const { return ___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U31B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5() { return &___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5; }
	inline void set_U31B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___1B897DDDD4C151E2A2E6E3E91B7EA0F7FC4FD5ED00EF1C9669E8566393A02586_5 = value;
	}

	inline static int32_t get_offset_of_U31E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U31E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6() const { return ___1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U31E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6() { return &___1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6; }
	inline void set_U31E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___1E6DA613753287DC062AF148289470D936A3CB4B606FF0BAB5A2A26B2A5810F7_6 = value;
	}

	inline static int32_t get_offset_of_U320A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U320A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7() const { return ___20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U320A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7() { return &___20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7; }
	inline void set_U320A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___20A743E052C9D5CFD34446BB42D40E9113BD65A8E43D9E3D108793BF2162F73C_7 = value;
	}

	inline static int32_t get_offset_of_U320DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U320DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8() const { return ___20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U320DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8() { return &___20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8; }
	inline void set_U320DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___20DD46358E7A9B5FD4E9A1CC51DFC38308B33E75D063667C8EC8ECB4B54611F5_8 = value;
	}

	inline static int32_t get_offset_of_U3261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U3261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9() const { return ___261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U3261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9() { return &___261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9; }
	inline void set_U3261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___261FAAE60E42AD60C4BFC9E44FCB72C9EBC058DB31F1E5AB8A8DDC9DD892AB73_9 = value;
	}

	inline static int32_t get_offset_of_U32A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U32A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10() const { return ___2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U32A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10() { return &___2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10; }
	inline void set_U32A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___2A2A64EE476D0C12E7C9A6C95E25ADF8E27E52F76769DE4C01271207B97849A2_10 = value;
	}

	inline static int32_t get_offset_of_U32A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U32A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11() const { return ___2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U32A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11() { return &___2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11; }
	inline void set_U32A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___2A8F66C90DFB6BF0C8E7ED10C69F33BA5FDDB56F597E7F40DFA61DDCA3241797_11 = value;
	}

	inline static int32_t get_offset_of_U3371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U3371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12() const { return ___371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U3371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12() { return &___371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12; }
	inline void set_U3371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___371AB1FA2F0581C84933737F4911F1B37EB4F046A64A107FFA0F7125B07ED5C5_12 = value;
	}

	inline static int32_t get_offset_of_U33C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U33C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13() const { return ___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U33C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13() { return &___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13; }
	inline void set_U33C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___3C52E07EA6F9C688F7921E6114AC155E13C5922F6FE7DD46E242C18E42262A1E_13 = value;
	}

	inline static int32_t get_offset_of_U34B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U34B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14() const { return ___4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U34B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14() { return &___4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14; }
	inline void set_U34B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___4B9FCBBF024BA1639AAB7B3452A8D69F34DE5823F6B8683944CBB209F6FDFAFF_14 = value;
	}

	inline static int32_t get_offset_of_U35145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U35145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15() const { return ___5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U35145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15() { return &___5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15; }
	inline void set_U35145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15 = value;
	}

	inline static int32_t get_offset_of_U357BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U357BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16() const { return ___57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U357BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16() { return &___57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16; }
	inline void set_U357BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___57BFF0102124E656FC853E9B99CCBD1F69009EFD41875725308CB212E246A77E_16 = value;
	}

	inline static int32_t get_offset_of_U35893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U35893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17() const { return ___5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U35893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17() { return &___5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17; }
	inline void set_U35893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___5893F0248465A83F3AFBAF8C4B475F0E57F95E4EAA027C20CBDB7FF245B213B6_17 = value;
	}

	inline static int32_t get_offset_of_U35A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U35A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18() const { return ___5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U35A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18() { return &___5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18; }
	inline void set_U35A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___5A911D2491163E604D6322C5869EA436985AE0BD61587588AE33BD6889E22651_18 = value;
	}

	inline static int32_t get_offset_of_U35AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U35AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19() const { return ___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U35AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19() { return &___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19; }
	inline void set_U35AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___5AC6A5945F16500911219129984BA8B387A06F24FE383CE4E81A73294065461B_19 = value;
	}

	inline static int32_t get_offset_of_U35B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U35B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20() const { return ___5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U35B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20() { return &___5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20; }
	inline void set_U35B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___5B2BF3C3F9CA058DB0528D3B6A6D552C015B227E742FFAFFAD09826F226DE212_20 = value;
	}

	inline static int32_t get_offset_of_U35E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U35E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21() const { return ___5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U35E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21() { return &___5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21; }
	inline void set_U35E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___5E58D7329B83742BA257C3BBB485D545EA82E4D0A332A6957A119367A0168E38_21 = value;
	}

	inline static int32_t get_offset_of_U36256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U36256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22() const { return ___6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U36256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22() { return &___6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22; }
	inline void set_U36256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___6256A4B0BE4127B6FF9FA076FE7595961BC296521BD01220F64C6F95768C1FDD_22 = value;
	}

	inline static int32_t get_offset_of_U363768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U363768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23() const { return ___63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U363768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23() { return &___63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23; }
	inline void set_U363768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___63768F257F992D0377F26C5CFC403AA7C4C07740D7DDB985F9A350EA1C6D9896_23 = value;
	}

	inline static int32_t get_offset_of_U369E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U369E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24() const { return ___69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U369E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24() { return &___69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24; }
	inline void set_U369E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___69E7343DDB776D559D84B85E1D012BBB2D8DA8F9396CA86E94EB0E98EEEB5E83_24 = value;
	}

	inline static int32_t get_offset_of_U36E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U36E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25() const { return ___6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U36E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25() { return &___6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25; }
	inline void set_U36E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___6E0B8A0EAA44015929DAD747EA0A8AF2BA126E36E57301ED4316C0D1986F32AE_25 = value;
	}

	inline static int32_t get_offset_of_U36F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U36F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26() const { return ___6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U36F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26() { return &___6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26; }
	inline void set_U36F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___6F49076B2B207D4BB40E832ED11688A0923A78E2C9E559A4C451B2475BAAFBC4_26 = value;
	}

	inline static int32_t get_offset_of_U3768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U3768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27() const { return ___768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U3768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27() { return &___768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27; }
	inline void set_U3768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___768733CB32B1F1CBAD36D03A3F76A2038E4B2D3D540B11CDE737DEDA12FF1906_27 = value;
	}

	inline static int32_t get_offset_of_U37A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U37A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28() const { return ___7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U37A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28() { return &___7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28; }
	inline void set_U37A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28 = value;
	}

	inline static int32_t get_offset_of_U37AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U37AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29() const { return ___7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U37AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29() { return &___7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29; }
	inline void set_U37AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___7AA877887B42A89E842F39316984E430348FB949C60728DA491E02F952A0143D_29 = value;
	}

	inline static int32_t get_offset_of_U37D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U37D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30() const { return ___7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U37D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30() { return &___7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30; }
	inline void set_U37D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___7D882E1CD8F1F0B5929481976C2259C82B58ECEEE353C6F08FDF1798B65A4B18_30 = value;
	}

	inline static int32_t get_offset_of_U37DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U37DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31() const { return ___7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U37DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31() { return &___7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31; }
	inline void set_U37DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___7DCFA6A9178E456DC220EF9C559DB99E825B7F37CE682EBF3D990362BC034BE6_31 = value;
	}

	inline static int32_t get_offset_of_U37F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U37F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32() const { return ___7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U37F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32() { return &___7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32; }
	inline void set_U37F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___7F17CEB3FFCC71912C13A8CFA9F88E9DF1ABA9EF3EAE92F3DAE284866916CC8E_32 = value;
	}

	inline static int32_t get_offset_of_U3815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U3815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33() const { return ___815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U3815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33() { return &___815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33; }
	inline void set_U3815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33 = value;
	}

	inline static int32_t get_offset_of_U3817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U3817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34() const { return ___817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U3817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34() { return &___817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34; }
	inline void set_U3817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___817E9F91FE51EFF655FECFFC85AB53D7F5354197D816FED7B47A8952ADD35E18_34 = value;
	}

	inline static int32_t get_offset_of_U381A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U381A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35() const { return ___81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U381A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35() { return &___81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35; }
	inline void set_U381A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___81A40D93F3FBF9485BBA96DAC882F5C1D07E852E98EF2A6A5290CF8823A73D38_35 = value;
	}

	inline static int32_t get_offset_of_U381C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U381C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36() const { return ___81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U381C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36() { return &___81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36; }
	inline void set_U381C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___81C1A5A2F482E82CA2C66653482AB24E6D90944BF183C8164E8F8F8D72DB60DB_36 = value;
	}

	inline static int32_t get_offset_of_U3855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U3855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37() const { return ___855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U3855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37() { return &___855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37; }
	inline void set_U3855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___855A1A963EA7F71456076CE3868D8D02E2A19F11288CFDF334AABBD8D5EAE5EC_37 = value;
	}

	inline static int32_t get_offset_of_U38BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U38BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38() const { return ___8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U38BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38() { return &___8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38; }
	inline void set_U38BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___8BFC8BC2A89C50CA43FB134038C561E593D0AA39543498C7094BC19B441E8306_38 = value;
	}

	inline static int32_t get_offset_of_U38EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U38EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39() const { return ___8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U38EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39() { return &___8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39; }
	inline void set_U38EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___8EB98E5DC91BE0043765DAB820052016D078F57BEAE8DE3657271BB0F1317914_39 = value;
	}

	inline static int32_t get_offset_of_U38EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U38EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40() const { return ___8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U38EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40() { return &___8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40; }
	inline void set_U38EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___8EF890AB91B04FA8A5C02CF0589A66BA3D4D7EA74A6BA348C85CAFAE09E57E49_40 = value;
	}

	inline static int32_t get_offset_of_U39237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U39237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41() const { return ___9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U39237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41() { return &___9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41; }
	inline void set_U39237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___9237E3A7046443DB4E49E1211E403B6554C727FA82F8CFDFDDABC8F204ACD2BE_41 = value;
	}

	inline static int32_t get_offset_of_U398A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U398A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42() const { return ___98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U398A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42() { return &___98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42; }
	inline void set_U398A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___98A8B6BB45C2EAAF82FF5FFC301DBBBCF3C58176A8ECC150A08D6086D0C17186_42 = value;
	}

	inline static int32_t get_offset_of_U39CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U39CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43() const { return ___9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U39CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43() { return &___9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43; }
	inline void set_U39CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___9CC47C2A04820E146CA00E131165CF36CFFA5A3281B7C1DD0DC733A9F85CD465_43 = value;
	}

	inline static int32_t get_offset_of_U39E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U39E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44() const { return ___9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U39E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44() { return &___9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44; }
	inline void set_U39E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___9E6040E871D8A666AFDC0577FE9CEE89E8D1EED0AF31467F0F5CBE925056DA5C_44 = value;
	}

	inline static int32_t get_offset_of_U39E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_U39E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45() const { return ___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_U39E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45() { return &___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45; }
	inline void set_U39E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___9E97865F268FBCC4190687A97D459D7AC09DFADED381B251528E2041FFE51739_45 = value;
	}

	inline static int32_t get_offset_of_U39FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_U39FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46() const { return ___9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_U39FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46() { return &___9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46; }
	inline void set_U39FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46 = value;
	}

	inline static int32_t get_offset_of_AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47() const { return ___AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47() { return &___AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47; }
	inline void set_AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47 = value;
	}

	inline static int32_t get_offset_of_AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48() const { return ___AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48() { return &___AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48; }
	inline void set_AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___AE33AE3CAFC9EDD281A03DE79F1AB3E08022BC134D3307050FB233410F386D33_48 = value;
	}

	inline static int32_t get_offset_of_B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49() const { return ___B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49() { return &___B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49; }
	inline void set_B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___B2EDF194B63585481560BFF5DB106123D6ED49BD85EF2D6FA9B9861CB6312865_49 = value;
	}

	inline static int32_t get_offset_of_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50() const { return ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50() { return &___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50; }
	inline void set_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50 = value;
	}

	inline static int32_t get_offset_of_BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51() const { return ___BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51() { return &___BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51; }
	inline void set_BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___BEB5EEA9AA2E1C9D704BFE4A6AD720C875FA2A195D88BBC99EBA92C345B17A60_51 = value;
	}

	inline static int32_t get_offset_of_BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52() const { return ___BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52() { return &___BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52; }
	inline void set_BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___BFB9C25A2C5EF6CD263D5EA4C2A3B01DAA7C07D95B68CC562E7502BB46675557_52 = value;
	}

	inline static int32_t get_offset_of_C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53() const { return ___C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53() { return &___C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53; }
	inline void set_C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___C4CBCDBB1FA3E79478B09FA602C9EB149EDB56B3CF1F343CC82DAFF59650BD55_53 = value;
	}

	inline static int32_t get_offset_of_DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54() const { return ___DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54() { return &___DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54; }
	inline void set_DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___DD0FB97FED5EB759F894A67CA31875F364B4CB5C0D709AD25626C9BCBC8321C6_54 = value;
	}

	inline static int32_t get_offset_of_E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55() const { return ___E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55() { return &___E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55; }
	inline void set_E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___E1BCF2B735B8544B9ABB63084B0D4D3761949EE67DAE704F8F48D32F68208C2E_55 = value;
	}

	inline static int32_t get_offset_of_E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56() const { return ___E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56() { return &___E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56; }
	inline void set_E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___E21C0819CEFE5E44999165DD7DFBA0274CD8118D67859032FCA6BE7ED3B249D5_56 = value;
	}

	inline static int32_t get_offset_of_E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57() const { return ___E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57() { return &___E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57; }
	inline void set_E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___E2A2056B66F3F348071186A444196F445F29E061A813731C15358AA5DE207BF1_57 = value;
	}

	inline static int32_t get_offset_of_E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58() const { return ___E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58() { return &___E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58; }
	inline void set_E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___E48274D8ED0A96C64E0C67F2D5844926C810ED34EB336F6E12B3605378C4B16B_58 = value;
	}

	inline static int32_t get_offset_of_E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59() const { return ___E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59() { return &___E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59; }
	inline void set_E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___E635A9DDF065EB3FD09CD30656185A2F00C3DFAC15341DD5D58B7F29C66B7631_59 = value;
	}

	inline static int32_t get_offset_of_E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60() const { return ___E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60() { return &___E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60; }
	inline void set_E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___E64AA158AC4417B8DD9D2AD42F80CA9AC49DEB55E60B981A145960F21119BC43_60 = value;
	}

	inline static int32_t get_offset_of_E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61() const { return ___E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61() { return &___E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61; }
	inline void set_E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___E7AE05A7B3118680020BE60D489F89F5E18CB9F5B34DAD18A4B605048BA4E2A4_61 = value;
	}

	inline static int32_t get_offset_of_E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62() const { return ___E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62() { return &___E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62; }
	inline void set_E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___E97AF7F8FE87318F3A0F7ED727C0307638CC2A01F4CF9A276F9586FC687C509E_62 = value;
	}

	inline static int32_t get_offset_of_F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63() const { return ___F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63() { return &___F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63; }
	inline void set_F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___F51A53431023BFCAFF6C350C2274C3141D06675F188BE1AE0B5EB209CBDDFEA5_63 = value;
	}

	inline static int32_t get_offset_of_F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64)); }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  get_F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64() const { return ___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64; }
	inline __StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B * get_address_of_F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64() { return &___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64; }
	inline void set_F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64(__StaticArrayInitTypeSizeU3D16_tE15D687240B2ABB6256805671F4D3095C1B2764B  value)
	{
		___F68E148E70B6BFBDF5687AC243823CCFE66F0BA41CEBDBD9DC74421EEEF39CEE_64 = value;
	}

	inline static int32_t get_offset_of_FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B_StaticFields, ___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65)); }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  get_FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65() const { return ___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65; }
	inline __StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42 * get_address_of_FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65() { return &___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65; }
	inline void set_FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65(__StaticArrayInitTypeSizeU3D32_tCDA048A73AEFC25FF0FDD2FB0FC083245046CA42  value)
	{
		___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65 = value;
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


// Unity.Barracuda.ComputeShaderContext
struct ComputeShaderContext_t19AEAEE875013A06125BAECF73E0A0AACF804F0D 
{
public:
	// System.Int32 Unity.Barracuda.ComputeShaderContext::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComputeShaderContext_t19AEAEE875013A06125BAECF73E0A0AACF804F0D, ___value___2)); }
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Barracuda.Tensor
struct Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760  : public UniqueResource_t7CEDD2391B6D1025C110DF9E36890F91296BED7C
{
public:
	// Unity.Barracuda.ITensorData Unity.Barracuda.Tensor::m_TensorOnDevice
	RuntimeObject* ___m_TensorOnDevice_2;
	// Unity.Barracuda.ITensorAllocator Unity.Barracuda.Tensor::m_TensorAllocator
	RuntimeObject* ___m_TensorAllocator_3;
	// System.Single[] Unity.Barracuda.Tensor::m_Cache
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Cache_4;
	// System.Boolean Unity.Barracuda.Tensor::m_CacheIsDirty
	bool ___m_CacheIsDirty_5;
	// System.Boolean Unity.Barracuda.Tensor::m_Disposed
	bool ___m_Disposed_6;
	// System.String Unity.Barracuda.Tensor::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_8;
	// Unity.Barracuda.TensorShape Unity.Barracuda.Tensor::<shape>k__BackingField
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___U3CshapeU3Ek__BackingField_9;
	// System.Boolean Unity.Barracuda.Tensor::m_Disposing
	bool ___m_Disposing_10;

public:
	inline static int32_t get_offset_of_m_TensorOnDevice_2() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___m_TensorOnDevice_2)); }
	inline RuntimeObject* get_m_TensorOnDevice_2() const { return ___m_TensorOnDevice_2; }
	inline RuntimeObject** get_address_of_m_TensorOnDevice_2() { return &___m_TensorOnDevice_2; }
	inline void set_m_TensorOnDevice_2(RuntimeObject* value)
	{
		___m_TensorOnDevice_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TensorOnDevice_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_TensorAllocator_3() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___m_TensorAllocator_3)); }
	inline RuntimeObject* get_m_TensorAllocator_3() const { return ___m_TensorAllocator_3; }
	inline RuntimeObject** get_address_of_m_TensorAllocator_3() { return &___m_TensorAllocator_3; }
	inline void set_m_TensorAllocator_3(RuntimeObject* value)
	{
		___m_TensorAllocator_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TensorAllocator_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_4() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___m_Cache_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Cache_4() const { return ___m_Cache_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Cache_4() { return &___m_Cache_4; }
	inline void set_m_Cache_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Cache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheIsDirty_5() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___m_CacheIsDirty_5)); }
	inline bool get_m_CacheIsDirty_5() const { return ___m_CacheIsDirty_5; }
	inline bool* get_address_of_m_CacheIsDirty_5() { return &___m_CacheIsDirty_5; }
	inline void set_m_CacheIsDirty_5(bool value)
	{
		___m_CacheIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_m_Disposed_6() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___m_Disposed_6)); }
	inline bool get_m_Disposed_6() const { return ___m_Disposed_6; }
	inline bool* get_address_of_m_Disposed_6() { return &___m_Disposed_6; }
	inline void set_m_Disposed_6(bool value)
	{
		___m_Disposed_6 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___U3CnameU3Ek__BackingField_8)); }
	inline String_t* get_U3CnameU3Ek__BackingField_8() const { return ___U3CnameU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_8() { return &___U3CnameU3Ek__BackingField_8; }
	inline void set_U3CnameU3Ek__BackingField_8(String_t* value)
	{
		___U3CnameU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshapeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___U3CshapeU3Ek__BackingField_9)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_U3CshapeU3Ek__BackingField_9() const { return ___U3CshapeU3Ek__BackingField_9; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_U3CshapeU3Ek__BackingField_9() { return &___U3CshapeU3Ek__BackingField_9; }
	inline void set_U3CshapeU3Ek__BackingField_9(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___U3CshapeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_m_Disposing_10() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760, ___m_Disposing_10)); }
	inline bool get_m_Disposing_10() const { return ___m_Disposing_10; }
	inline bool* get_address_of_m_Disposing_10() { return &___m_Disposing_10; }
	inline void set_m_Disposing_10(bool value)
	{
		___m_Disposing_10 = value;
	}
};

struct Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760_StaticFields
{
public:
	// System.Action`1<Unity.Barracuda.Tensor> Unity.Barracuda.Tensor::tensorDisposed
	Action_1_t44D3EA7B187D124808DD221E7371715FC9657EA3 * ___tensorDisposed_7;

public:
	inline static int32_t get_offset_of_tensorDisposed_7() { return static_cast<int32_t>(offsetof(Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760_StaticFields, ___tensorDisposed_7)); }
	inline Action_1_t44D3EA7B187D124808DD221E7371715FC9657EA3 * get_tensorDisposed_7() const { return ___tensorDisposed_7; }
	inline Action_1_t44D3EA7B187D124808DD221E7371715FC9657EA3 ** get_address_of_tensorDisposed_7() { return &___tensorDisposed_7; }
	inline void set_tensorDisposed_7(Action_1_t44D3EA7B187D124808DD221E7371715FC9657EA3 * value)
	{
		___tensorDisposed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tensorDisposed_7), (void*)value);
	}
};


// Unity.Barracuda.CompareOpsUtils/LogLevel
struct LogLevel_tE8FC4E4939190254CE94CC300636F093ED7E04CD 
{
public:
	// System.Int32 Unity.Barracuda.CompareOpsUtils/LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_tE8FC4E4939190254CE94CC300636F093ED7E04CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.Layer/Activation
struct Activation_t61DA51E4E8E9313B80B35C193A41FD17981D7DA9 
{
public:
	// System.Int32 Unity.Barracuda.Layer/Activation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Activation_t61DA51E4E8E9313B80B35C193A41FD17981D7DA9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.Layer/DataSet
struct DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF 
{
public:
	// System.String Unity.Barracuda.Layer/DataSet::name
	String_t* ___name_0;
	// Unity.Barracuda.TensorShape Unity.Barracuda.Layer/DataSet::shape
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_1;
	// System.Int64 Unity.Barracuda.Layer/DataSet::offset
	int64_t ___offset_2;
	// System.Int32 Unity.Barracuda.Layer/DataSet::itemSizeInBytes
	int32_t ___itemSizeInBytes_3;
	// System.Int32 Unity.Barracuda.Layer/DataSet::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF, ___shape_1)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_shape_1() const { return ___shape_1; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___shape_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF, ___offset_2)); }
	inline int64_t get_offset_2() const { return ___offset_2; }
	inline int64_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int64_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_itemSizeInBytes_3() { return static_cast<int32_t>(offsetof(DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF, ___itemSizeInBytes_3)); }
	inline int32_t get_itemSizeInBytes_3() const { return ___itemSizeInBytes_3; }
	inline int32_t* get_address_of_itemSizeInBytes_3() { return &___itemSizeInBytes_3; }
	inline void set_itemSizeInBytes_3(int32_t value)
	{
		___itemSizeInBytes_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.Layer/DataSet
struct DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF_marshaled_pinvoke
{
	char* ___name_0;
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_1;
	int64_t ___offset_2;
	int32_t ___itemSizeInBytes_3;
	int32_t ___length_4;
};
// Native definition for COM marshalling of Unity.Barracuda.Layer/DataSet
struct DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF_marshaled_com
{
	Il2CppChar* ___name_0;
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_1;
	int64_t ___offset_2;
	int32_t ___itemSizeInBytes_3;
	int32_t ___length_4;
};

// Unity.Barracuda.Layer/Flags
struct Flags_tEC50C02387CC24FFD7B196DDC71FC8129A6E8AB3 
{
public:
	// System.Int32 Unity.Barracuda.Layer/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEC50C02387CC24FFD7B196DDC71FC8129A6E8AB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.Layer/Type
struct Type_tF9514834182131C4A5FCB2A7012599B052178D8C 
{
public:
	// System.Int32 Unity.Barracuda.Layer/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tF9514834182131C4A5FCB2A7012599B052178D8C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.Model/Memory
struct Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6 
{
public:
	// Unity.Barracuda.TensorShape Unity.Barracuda.Model/Memory::shape
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	// System.String Unity.Barracuda.Model/Memory::input
	String_t* ___input_1;
	// System.String Unity.Barracuda.Model/Memory::output
	String_t* ___output_2;

public:
	inline static int32_t get_offset_of_shape_0() { return static_cast<int32_t>(offsetof(Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6, ___shape_0)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_shape_0() const { return ___shape_0; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_shape_0() { return &___shape_0; }
	inline void set_shape_0(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___shape_0 = value;
	}

	inline static int32_t get_offset_of_input_1() { return static_cast<int32_t>(offsetof(Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6, ___input_1)); }
	inline String_t* get_input_1() const { return ___input_1; }
	inline String_t** get_address_of_input_1() { return &___input_1; }
	inline void set_input_1(String_t* value)
	{
		___input_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_1), (void*)value);
	}

	inline static int32_t get_offset_of_output_2() { return static_cast<int32_t>(offsetof(Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6, ___output_2)); }
	inline String_t* get_output_2() const { return ___output_2; }
	inline String_t** get_address_of_output_2() { return &___output_2; }
	inline void set_output_2(String_t* value)
	{
		___output_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.Model/Memory
struct Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_pinvoke
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	char* ___input_1;
	char* ___output_2;
};
// Native definition for COM marshalling of Unity.Barracuda.Model/Memory
struct Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_com
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	Il2CppChar* ___input_1;
	Il2CppChar* ___output_2;
};

// Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
struct CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5 
{
public:
	// Unity.Barracuda.TensorShape Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::shape
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	// Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction[] Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::instructions
	CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F* ___instructions_1;

public:
	inline static int32_t get_offset_of_shape_0() { return static_cast<int32_t>(offsetof(CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5, ___shape_0)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_shape_0() const { return ___shape_0; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_shape_0() { return &___shape_0; }
	inline void set_shape_0(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___shape_0 = value;
	}

	inline static int32_t get_offset_of_instructions_1() { return static_cast<int32_t>(offsetof(CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5, ___instructions_1)); }
	inline CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F* get_instructions_1() const { return ___instructions_1; }
	inline CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F** get_address_of_instructions_1() { return &___instructions_1; }
	inline void set_instructions_1(CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F* value)
	{
		___instructions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructions_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
struct CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_pinvoke
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke* ___instructions_1;
};
// Native definition for COM marshalling of Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
struct CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_com
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com* ___instructions_1;
};

// Unity.Barracuda.ReferenceCPUOps/Seed
struct Seed_t3D4DA11019C044BDD2624126499FBC3DD38AD963  : public RuntimeObject
{
public:
	// UnityEngine.Random/State[] Unity.Barracuda.ReferenceCPUOps/Seed::m_SeedStorage
	StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* ___m_SeedStorage_0;
	// UnityEngine.Random/State Unity.Barracuda.ReferenceCPUOps/Seed::m_EngineSeed
	State_t8E62E640CAE29BF61164F51619D1C04936074C15  ___m_EngineSeed_1;

public:
	inline static int32_t get_offset_of_m_SeedStorage_0() { return static_cast<int32_t>(offsetof(Seed_t3D4DA11019C044BDD2624126499FBC3DD38AD963, ___m_SeedStorage_0)); }
	inline StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* get_m_SeedStorage_0() const { return ___m_SeedStorage_0; }
	inline StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** get_address_of_m_SeedStorage_0() { return &___m_SeedStorage_0; }
	inline void set_m_SeedStorage_0(StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* value)
	{
		___m_SeedStorage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SeedStorage_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_EngineSeed_1() { return static_cast<int32_t>(offsetof(Seed_t3D4DA11019C044BDD2624126499FBC3DD38AD963, ___m_EngineSeed_1)); }
	inline State_t8E62E640CAE29BF61164F51619D1C04936074C15  get_m_EngineSeed_1() const { return ___m_EngineSeed_1; }
	inline State_t8E62E640CAE29BF61164F51619D1C04936074C15 * get_address_of_m_EngineSeed_1() { return &___m_EngineSeed_1; }
	inline void set_m_EngineSeed_1(State_t8E62E640CAE29BF61164F51619D1C04936074C15  value)
	{
		___m_EngineSeed_1 = value;
	}
};


// Unity.Barracuda.TensorCachingByShapeAllocator/Entry
struct Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E 
{
public:
	// Unity.Barracuda.TensorShape Unity.Barracuda.TensorCachingByShapeAllocator/Entry::shape
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	// Unity.Barracuda.ITensorData Unity.Barracuda.TensorCachingByShapeAllocator/Entry::buffer
	RuntimeObject* ___buffer_1;

public:
	inline static int32_t get_offset_of_shape_0() { return static_cast<int32_t>(offsetof(Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E, ___shape_0)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_shape_0() const { return ___shape_0; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_shape_0() { return &___shape_0; }
	inline void set_shape_0(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___shape_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E, ___buffer_1)); }
	inline RuntimeObject* get_buffer_1() const { return ___buffer_1; }
	inline RuntimeObject** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(RuntimeObject* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.TensorCachingByShapeAllocator/Entry
struct Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_pinvoke
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	RuntimeObject* ___buffer_1;
};
// Native definition for COM marshalling of Unity.Barracuda.TensorCachingByShapeAllocator/Entry
struct Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_com
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_0;
	RuntimeObject* ___buffer_1;
};

// Unity.Barracuda.TextureAsTensorData/Flip
struct Flip_t60C283C8A500559EF799A7D8F698D04C697C7434 
{
public:
	// System.Int32 Unity.Barracuda.TextureAsTensorData/Flip::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flip_t60C283C8A500559EF799A7D8F698D04C697C7434, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.TextureAsTensorData/InterpretColorAs
struct InterpretColorAs_t03694B7E315E86D56A50B460DFE6F05A8E549D13 
{
public:
	// System.Int32 Unity.Barracuda.TextureAsTensorData/InterpretColorAs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpretColorAs_t03694B7E315E86D56A50B460DFE6F05A8E549D13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.TextureAsTensorData/InterpretDepthAs
struct InterpretDepthAs_t47FA1AE77873200FFAEBF3ECA8FAEE25940852D3 
{
public:
	// System.Int32 Unity.Barracuda.TextureAsTensorData/InterpretDepthAs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InterpretDepthAs_t47FA1AE77873200FFAEBF3ECA8FAEE25940852D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.WorkerFactory/Device
struct Device_t19DC6EA4858A3025DE863E41583A4C5D7789607F 
{
public:
	// System.Int32 Unity.Barracuda.WorkerFactory/Device::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Device_t19DC6EA4858A3025DE863E41583A4C5D7789607F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Barracuda.WorkerFactory/Type
struct Type_t38E8C6622A9742659E7CA4895A5AA8113C7712B6 
{
public:
	// System.Int32 Unity.Barracuda.WorkerFactory/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t38E8C6622A9742659E7CA4895A5AA8113C7712B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<Unity.Barracuda.TensorShape>>
struct KeyValuePair_2_t74685B4B6C19C78A0DAB00C06E94C5091B654FB5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t74685B4B6C19C78A0DAB00C06E94C5091B654FB5, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t74685B4B6C19C78A0DAB00C06E94C5091B654FB5, ___value_1)); }
	inline Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  get_value_1() const { return ___value_1; }
	inline Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>
struct KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643, ___value_1)); }
	inline Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  get_value_1() const { return ___value_1; }
	inline Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  value)
	{
		___value_1 = value;
	}
};


// Unity.Barracuda.ComputeFunc
struct ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD 
{
public:
	// Unity.Barracuda.IModelExecutionsReporter Unity.Barracuda.ComputeFunc::executionReporter
	RuntimeObject* ___executionReporter_1;
	// UnityEngine.ComputeShader Unity.Barracuda.ComputeFunc::shader
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___shader_2;
	// System.String Unity.Barracuda.ComputeFunc::kernelName
	String_t* ___kernelName_3;
	// Unity.Barracuda.ComputeShaderContext Unity.Barracuda.ComputeFunc::computeShaderContext
	int32_t ___computeShaderContext_4;
	// System.Int32 Unity.Barracuda.ComputeFunc::kernelIndex
	int32_t ___kernelIndex_5;
	// System.UInt32 Unity.Barracuda.ComputeFunc::threadGroupSizeX
	uint32_t ___threadGroupSizeX_6;
	// System.UInt32 Unity.Barracuda.ComputeFunc::threadGroupSizeY
	uint32_t ___threadGroupSizeY_7;
	// System.UInt32 Unity.Barracuda.ComputeFunc::threadGroupSizeZ
	uint32_t ___threadGroupSizeZ_8;

public:
	inline static int32_t get_offset_of_executionReporter_1() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___executionReporter_1)); }
	inline RuntimeObject* get_executionReporter_1() const { return ___executionReporter_1; }
	inline RuntimeObject** get_address_of_executionReporter_1() { return &___executionReporter_1; }
	inline void set_executionReporter_1(RuntimeObject* value)
	{
		___executionReporter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executionReporter_1), (void*)value);
	}

	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___shader_2)); }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * get_shader_2() const { return ___shader_2; }
	inline ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shader_2), (void*)value);
	}

	inline static int32_t get_offset_of_kernelName_3() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___kernelName_3)); }
	inline String_t* get_kernelName_3() const { return ___kernelName_3; }
	inline String_t** get_address_of_kernelName_3() { return &___kernelName_3; }
	inline void set_kernelName_3(String_t* value)
	{
		___kernelName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kernelName_3), (void*)value);
	}

	inline static int32_t get_offset_of_computeShaderContext_4() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___computeShaderContext_4)); }
	inline int32_t get_computeShaderContext_4() const { return ___computeShaderContext_4; }
	inline int32_t* get_address_of_computeShaderContext_4() { return &___computeShaderContext_4; }
	inline void set_computeShaderContext_4(int32_t value)
	{
		___computeShaderContext_4 = value;
	}

	inline static int32_t get_offset_of_kernelIndex_5() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___kernelIndex_5)); }
	inline int32_t get_kernelIndex_5() const { return ___kernelIndex_5; }
	inline int32_t* get_address_of_kernelIndex_5() { return &___kernelIndex_5; }
	inline void set_kernelIndex_5(int32_t value)
	{
		___kernelIndex_5 = value;
	}

	inline static int32_t get_offset_of_threadGroupSizeX_6() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___threadGroupSizeX_6)); }
	inline uint32_t get_threadGroupSizeX_6() const { return ___threadGroupSizeX_6; }
	inline uint32_t* get_address_of_threadGroupSizeX_6() { return &___threadGroupSizeX_6; }
	inline void set_threadGroupSizeX_6(uint32_t value)
	{
		___threadGroupSizeX_6 = value;
	}

	inline static int32_t get_offset_of_threadGroupSizeY_7() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___threadGroupSizeY_7)); }
	inline uint32_t get_threadGroupSizeY_7() const { return ___threadGroupSizeY_7; }
	inline uint32_t* get_address_of_threadGroupSizeY_7() { return &___threadGroupSizeY_7; }
	inline void set_threadGroupSizeY_7(uint32_t value)
	{
		___threadGroupSizeY_7 = value;
	}

	inline static int32_t get_offset_of_threadGroupSizeZ_8() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD, ___threadGroupSizeZ_8)); }
	inline uint32_t get_threadGroupSizeZ_8() const { return ___threadGroupSizeZ_8; }
	inline uint32_t* get_address_of_threadGroupSizeZ_8() { return &___threadGroupSizeZ_8; }
	inline void set_threadGroupSizeZ_8(uint32_t value)
	{
		___threadGroupSizeZ_8 = value;
	}
};

struct ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields
{
public:
	// System.UInt32 Unity.Barracuda.ComputeFunc::SafeDispatchLimit
	uint32_t ___SafeDispatchLimit_0;
	// Unity.Barracuda.StringCache Unity.Barracuda.ComputeFunc::s_StringCache
	StringCache_t56B94A1551D4DD3ADC19D8B371038ADC688D89A2 * ___s_StringCache_9;
	// UnityEngine.Texture2D Unity.Barracuda.ComputeFunc::s_DummyTexture2D
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_DummyTexture2D_10;
	// UnityEngine.Texture3D Unity.Barracuda.ComputeFunc::s_DummyTexture3D
	Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * ___s_DummyTexture3D_11;
	// UnityEngine.Texture2DArray Unity.Barracuda.ComputeFunc::s_DummyTexture2DArray
	Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * ___s_DummyTexture2DArray_12;
	// System.Int32[] Unity.Barracuda.ComputeFunc::s_tTensorDeclScratchpadShape
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_tTensorDeclScratchpadShape_13;
	// System.Int32[] Unity.Barracuda.ComputeFunc::s_tTensorDeclScratchpadShape8D
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_tTensorDeclScratchpadShape8D_14;
	// System.Int32[] Unity.Barracuda.ComputeFunc::s_tTensorDeclScratchpadInfo
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___s_tTensorDeclScratchpadInfo_15;

public:
	inline static int32_t get_offset_of_SafeDispatchLimit_0() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___SafeDispatchLimit_0)); }
	inline uint32_t get_SafeDispatchLimit_0() const { return ___SafeDispatchLimit_0; }
	inline uint32_t* get_address_of_SafeDispatchLimit_0() { return &___SafeDispatchLimit_0; }
	inline void set_SafeDispatchLimit_0(uint32_t value)
	{
		___SafeDispatchLimit_0 = value;
	}

	inline static int32_t get_offset_of_s_StringCache_9() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_StringCache_9)); }
	inline StringCache_t56B94A1551D4DD3ADC19D8B371038ADC688D89A2 * get_s_StringCache_9() const { return ___s_StringCache_9; }
	inline StringCache_t56B94A1551D4DD3ADC19D8B371038ADC688D89A2 ** get_address_of_s_StringCache_9() { return &___s_StringCache_9; }
	inline void set_s_StringCache_9(StringCache_t56B94A1551D4DD3ADC19D8B371038ADC688D89A2 * value)
	{
		___s_StringCache_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringCache_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_DummyTexture2D_10() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_DummyTexture2D_10)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_DummyTexture2D_10() const { return ___s_DummyTexture2D_10; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_DummyTexture2D_10() { return &___s_DummyTexture2D_10; }
	inline void set_s_DummyTexture2D_10(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_DummyTexture2D_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DummyTexture2D_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_DummyTexture3D_11() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_DummyTexture3D_11)); }
	inline Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * get_s_DummyTexture3D_11() const { return ___s_DummyTexture3D_11; }
	inline Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 ** get_address_of_s_DummyTexture3D_11() { return &___s_DummyTexture3D_11; }
	inline void set_s_DummyTexture3D_11(Texture3D_t21F02DD686C75610A464D2EE7A83EFD93842EBD8 * value)
	{
		___s_DummyTexture3D_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DummyTexture3D_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_DummyTexture2DArray_12() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_DummyTexture2DArray_12)); }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * get_s_DummyTexture2DArray_12() const { return ___s_DummyTexture2DArray_12; }
	inline Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C ** get_address_of_s_DummyTexture2DArray_12() { return &___s_DummyTexture2DArray_12; }
	inline void set_s_DummyTexture2DArray_12(Texture2DArray_t4CF2F3A2AAFC9A024D8C0D19F669B5B54C57713C * value)
	{
		___s_DummyTexture2DArray_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DummyTexture2DArray_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_tTensorDeclScratchpadShape_13() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_tTensorDeclScratchpadShape_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_tTensorDeclScratchpadShape_13() const { return ___s_tTensorDeclScratchpadShape_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_tTensorDeclScratchpadShape_13() { return &___s_tTensorDeclScratchpadShape_13; }
	inline void set_s_tTensorDeclScratchpadShape_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_tTensorDeclScratchpadShape_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_tTensorDeclScratchpadShape_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_tTensorDeclScratchpadShape8D_14() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_tTensorDeclScratchpadShape8D_14)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_tTensorDeclScratchpadShape8D_14() const { return ___s_tTensorDeclScratchpadShape8D_14; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_tTensorDeclScratchpadShape8D_14() { return &___s_tTensorDeclScratchpadShape8D_14; }
	inline void set_s_tTensorDeclScratchpadShape8D_14(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_tTensorDeclScratchpadShape8D_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_tTensorDeclScratchpadShape8D_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_tTensorDeclScratchpadInfo_15() { return static_cast<int32_t>(offsetof(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_StaticFields, ___s_tTensorDeclScratchpadInfo_15)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_s_tTensorDeclScratchpadInfo_15() const { return ___s_tTensorDeclScratchpadInfo_15; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_s_tTensorDeclScratchpadInfo_15() { return &___s_tTensorDeclScratchpadInfo_15; }
	inline void set_s_tTensorDeclScratchpadInfo_15(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___s_tTensorDeclScratchpadInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_tTensorDeclScratchpadInfo_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.ComputeFunc
struct ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_marshaled_pinvoke
{
	RuntimeObject* ___executionReporter_1;
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___shader_2;
	char* ___kernelName_3;
	int32_t ___computeShaderContext_4;
	int32_t ___kernelIndex_5;
	uint32_t ___threadGroupSizeX_6;
	uint32_t ___threadGroupSizeY_7;
	uint32_t ___threadGroupSizeZ_8;
};
// Native definition for COM marshalling of Unity.Barracuda.ComputeFunc
struct ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_marshaled_com
{
	RuntimeObject* ___executionReporter_1;
	ComputeShader_tBEFDB4D759632A61AC138B2DAA292332BE7DAD30 * ___shader_2;
	Il2CppChar* ___kernelName_3;
	int32_t ___computeShaderContext_4;
	int32_t ___kernelIndex_5;
	uint32_t ___threadGroupSizeX_6;
	uint32_t ___threadGroupSizeY_7;
	uint32_t ___threadGroupSizeZ_8;
};

// Unity.Barracuda.Layer
struct Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948  : public RuntimeObject
{
public:
	// System.String Unity.Barracuda.Layer::name
	String_t* ___name_0;
	// Unity.Barracuda.Layer/Type Unity.Barracuda.Layer::type
	int32_t ___type_1;
	// Unity.Barracuda.Layer/Flags Unity.Barracuda.Layer::flags
	int32_t ___flags_2;
	// Unity.Barracuda.Layer/Activation Unity.Barracuda.Layer::activation
	int32_t ___activation_3;
	// System.Int32[] Unity.Barracuda.Layer::pad
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pad_4;
	// System.Int32[] Unity.Barracuda.Layer::stride
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___stride_5;
	// System.Int32[] Unity.Barracuda.Layer::pool
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___pool_6;
	// System.Int32 Unity.Barracuda.Layer::axis
	int32_t ___axis_7;
	// System.Single Unity.Barracuda.Layer::alpha
	float ___alpha_8;
	// System.Single Unity.Barracuda.Layer::beta
	float ___beta_9;
	// System.String[] Unity.Barracuda.Layer::inputs
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___inputs_10;
	// System.String[] Unity.Barracuda.Layer::outputs
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___outputs_11;
	// System.Int32[] Unity.Barracuda.Layer::axes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___axes_12;
	// Unity.Barracuda.Layer/DataSet[] Unity.Barracuda.Layer::datasets
	DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* ___datasets_13;
	// System.Single[] Unity.Barracuda.Layer::weights
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___weights_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_activation_3() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___activation_3)); }
	inline int32_t get_activation_3() const { return ___activation_3; }
	inline int32_t* get_address_of_activation_3() { return &___activation_3; }
	inline void set_activation_3(int32_t value)
	{
		___activation_3 = value;
	}

	inline static int32_t get_offset_of_pad_4() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___pad_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pad_4() const { return ___pad_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pad_4() { return &___pad_4; }
	inline void set_pad_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pad_4), (void*)value);
	}

	inline static int32_t get_offset_of_stride_5() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___stride_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_stride_5() const { return ___stride_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_stride_5() { return &___stride_5; }
	inline void set_stride_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___stride_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stride_5), (void*)value);
	}

	inline static int32_t get_offset_of_pool_6() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___pool_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_pool_6() const { return ___pool_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_pool_6() { return &___pool_6; }
	inline void set_pool_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___pool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_6), (void*)value);
	}

	inline static int32_t get_offset_of_axis_7() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___axis_7)); }
	inline int32_t get_axis_7() const { return ___axis_7; }
	inline int32_t* get_address_of_axis_7() { return &___axis_7; }
	inline void set_axis_7(int32_t value)
	{
		___axis_7 = value;
	}

	inline static int32_t get_offset_of_alpha_8() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___alpha_8)); }
	inline float get_alpha_8() const { return ___alpha_8; }
	inline float* get_address_of_alpha_8() { return &___alpha_8; }
	inline void set_alpha_8(float value)
	{
		___alpha_8 = value;
	}

	inline static int32_t get_offset_of_beta_9() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___beta_9)); }
	inline float get_beta_9() const { return ___beta_9; }
	inline float* get_address_of_beta_9() { return &___beta_9; }
	inline void set_beta_9(float value)
	{
		___beta_9 = value;
	}

	inline static int32_t get_offset_of_inputs_10() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___inputs_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_inputs_10() const { return ___inputs_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_inputs_10() { return &___inputs_10; }
	inline void set_inputs_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___inputs_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_10), (void*)value);
	}

	inline static int32_t get_offset_of_outputs_11() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___outputs_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_outputs_11() const { return ___outputs_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_outputs_11() { return &___outputs_11; }
	inline void set_outputs_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___outputs_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputs_11), (void*)value);
	}

	inline static int32_t get_offset_of_axes_12() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___axes_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_axes_12() const { return ___axes_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_axes_12() { return &___axes_12; }
	inline void set_axes_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___axes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axes_12), (void*)value);
	}

	inline static int32_t get_offset_of_datasets_13() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___datasets_13)); }
	inline DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* get_datasets_13() const { return ___datasets_13; }
	inline DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824** get_address_of_datasets_13() { return &___datasets_13; }
	inline void set_datasets_13(DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* value)
	{
		___datasets_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datasets_13), (void*)value);
	}

	inline static int32_t get_offset_of_weights_14() { return static_cast<int32_t>(offsetof(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948, ___weights_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_weights_14() const { return ___weights_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_weights_14() { return &___weights_14; }
	inline void set_weights_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___weights_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weights_14), (void*)value);
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34
struct U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.Barracuda.ITensorDataStatistics Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.Barracuda.TensorCachingAllocator Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>4__this
	TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry> Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>7__wrap1
	Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A, ___U3CU3E4__this_3)); }
	inline TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___buffer_1), (void*)NULL);
		#endif
	}
};


// Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33
struct U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44  : public RuntimeObject
{
public:
	// System.Int32 Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Unity.Barracuda.ITensorStatistics Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Unity.Barracuda.TensorCachingAllocator Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>4__this
	TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData> Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>7__wrap1
	Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44, ___U3CU3E4__this_3)); }
	inline TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// Unity.Barracuda.WorkerFactory/WorkerConfiguration
struct WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7 
{
public:
	// System.Boolean Unity.Barracuda.WorkerFactory/WorkerConfiguration::verbose
	bool ___verbose_0;
	// Unity.Barracuda.WorkerFactory/Type Unity.Barracuda.WorkerFactory/WorkerConfiguration::compareAgainstType
	int32_t ___compareAgainstType_1;
	// Unity.Barracuda.CompareOpsUtils/LogLevel Unity.Barracuda.WorkerFactory/WorkerConfiguration::compareLogLevel
	int32_t ___compareLogLevel_2;
	// System.Single Unity.Barracuda.WorkerFactory/WorkerConfiguration::compareEpsilon
	float ___compareEpsilon_3;

public:
	inline static int32_t get_offset_of_verbose_0() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7, ___verbose_0)); }
	inline bool get_verbose_0() const { return ___verbose_0; }
	inline bool* get_address_of_verbose_0() { return &___verbose_0; }
	inline void set_verbose_0(bool value)
	{
		___verbose_0 = value;
	}

	inline static int32_t get_offset_of_compareAgainstType_1() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7, ___compareAgainstType_1)); }
	inline int32_t get_compareAgainstType_1() const { return ___compareAgainstType_1; }
	inline int32_t* get_address_of_compareAgainstType_1() { return &___compareAgainstType_1; }
	inline void set_compareAgainstType_1(int32_t value)
	{
		___compareAgainstType_1 = value;
	}

	inline static int32_t get_offset_of_compareLogLevel_2() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7, ___compareLogLevel_2)); }
	inline int32_t get_compareLogLevel_2() const { return ___compareLogLevel_2; }
	inline int32_t* get_address_of_compareLogLevel_2() { return &___compareLogLevel_2; }
	inline void set_compareLogLevel_2(int32_t value)
	{
		___compareLogLevel_2 = value;
	}

	inline static int32_t get_offset_of_compareEpsilon_3() { return static_cast<int32_t>(offsetof(WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7, ___compareEpsilon_3)); }
	inline float get_compareEpsilon_3() const { return ___compareEpsilon_3; }
	inline float* get_address_of_compareEpsilon_3() { return &___compareEpsilon_3; }
	inline void set_compareEpsilon_3(float value)
	{
		___compareEpsilon_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.WorkerFactory/WorkerConfiguration
struct WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_pinvoke
{
	int32_t ___verbose_0;
	int32_t ___compareAgainstType_1;
	int32_t ___compareLogLevel_2;
	float ___compareEpsilon_3;
};
// Native definition for COM marshalling of Unity.Barracuda.WorkerFactory/WorkerConfiguration
struct WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_com
{
	int32_t ___verbose_0;
	int32_t ___compareAgainstType_1;
	int32_t ___compareLogLevel_2;
	float ___compareEpsilon_3;
};

// System.Action`1<System.Int64>
struct Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941  : public MulticastDelegate_t
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


// Unity.Barracuda.ComputeKernel
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9 
{
public:
	// Unity.Barracuda.ComputeFunc Unity.Barracuda.ComputeKernel::func
	ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD  ___func_0;
	// System.ValueTuple`3<System.Int32,System.Int32,System.Int32> Unity.Barracuda.ComputeKernel::dispatch
	ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2  ___dispatch_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9, ___func_0)); }
	inline ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD  get_func_0() const { return ___func_0; }
	inline ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD * get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD  value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___func_0))->___executionReporter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___func_0))->___shader_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___func_0))->___kernelName_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_dispatch_1() { return static_cast<int32_t>(offsetof(ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9, ___dispatch_1)); }
	inline ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2  get_dispatch_1() const { return ___dispatch_1; }
	inline ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2 * get_address_of_dispatch_1() { return &___dispatch_1; }
	inline void set_dispatch_1(ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2  value)
	{
		___dispatch_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.ComputeKernel
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke
{
	ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_marshaled_pinvoke ___func_0;
	ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2  ___dispatch_1;
};
// Native definition for COM marshalling of Unity.Barracuda.ComputeKernel
struct ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com
{
	ComputeFunc_t25988FCF97509BA6C84D53128F83B9D019020BCD_marshaled_com ___func_0;
	ValueTuple_3_t3B88B9278170CB9836E6E40940F766E06E53C8F2  ___dispatch_1;
};

// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.Barracuda.TensorScope/F
struct F_t5830B01D9DEF2646EE416C063E90F3EB9E25244F  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46 
{
public:
	// Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction::kernel
	ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  ___kernel_0;
	// Unity.Barracuda.Tensor[] Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction::tensors
	TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D* ___tensors_1;
	// Unity.Barracuda.TensorShape Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction::shape
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_2;

public:
	inline static int32_t get_offset_of_kernel_0() { return static_cast<int32_t>(offsetof(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46, ___kernel_0)); }
	inline ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  get_kernel_0() const { return ___kernel_0; }
	inline ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9 * get_address_of_kernel_0() { return &___kernel_0; }
	inline void set_kernel_0(ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  value)
	{
		___kernel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___kernel_0))->___func_0))->___executionReporter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___kernel_0))->___func_0))->___shader_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___kernel_0))->___func_0))->___kernelName_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_tensors_1() { return static_cast<int32_t>(offsetof(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46, ___tensors_1)); }
	inline TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D* get_tensors_1() const { return ___tensors_1; }
	inline TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D** get_address_of_tensors_1() { return &___tensors_1; }
	inline void set_tensors_1(TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D* value)
	{
		___tensors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tensors_1), (void*)value);
	}

	inline static int32_t get_offset_of_shape_2() { return static_cast<int32_t>(offsetof(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46, ___shape_2)); }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  get_shape_2() const { return ___shape_2; }
	inline TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * get_address_of_shape_2() { return &___shape_2; }
	inline void set_shape_2(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  value)
	{
		___shape_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke
{
	ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke ___kernel_0;
	TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D* ___tensors_1;
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_2;
};
// Native definition for COM marshalling of Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
struct CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com
{
	ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com ___kernel_0;
	TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D* ___tensors_1;
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape_2;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Unity.Barracuda.Tensor[]
struct TensorU5BU5D_t2475A6044AB0CB4AACFD60E6ACD19CB5AC20D80D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * m_Items[1];

public:
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction[]
struct CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46  m_Items[1];

public:
	inline CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___kernel_0))->___func_0))->___executionReporter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___kernel_0))->___func_0))->___shader_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___kernel_0))->___func_0))->___kernelName_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tensors_1), (void*)NULL);
		#endif
	}
	inline CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___kernel_0))->___func_0))->___executionReporter_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___kernel_0))->___func_0))->___shader_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((m_Items + index)->___kernel_0))->___func_0))->___kernelName_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tensors_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.Random/State[]
struct StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) State_t8E62E640CAE29BF61164F51619D1C04936074C15  m_Items[1];

public:
	inline State_t8E62E640CAE29BF61164F51619D1C04936074C15  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline State_t8E62E640CAE29BF61164F51619D1C04936074C15 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, State_t8E62E640CAE29BF61164F51619D1C04936074C15  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline State_t8E62E640CAE29BF61164F51619D1C04936074C15  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline State_t8E62E640CAE29BF61164F51619D1C04936074C15 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, State_t8E62E640CAE29BF61164F51619D1C04936074C15  value)
	{
		m_Items[index] = value;
	}
};
// Unity.Barracuda.Layer/DataSet[]
struct DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF  m_Items[1];

public:
	inline DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
	inline DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataSet_tFF7C5D530C369D0D45F9DF4E5DCA19417B14C0DF  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
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

IL2CPP_EXTERN_C void ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshal_pinvoke(const ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9& unmarshaled, ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshal_pinvoke_back(const ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke& marshaled, ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9& unmarshaled);
IL2CPP_EXTERN_C void ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshal_pinvoke_cleanup(ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshal_com(const ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9& unmarshaled, ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshal_com_back(const ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com& marshaled, ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9& unmarshaled);
IL2CPP_EXTERN_C void ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshal_com_cleanup(ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_pinvoke(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_pinvoke_back(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke& marshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled);
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_pinvoke_cleanup(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_com(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_com_back(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com& marshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled);
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_com_cleanup(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com& marshaled);

// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2__ctor_m102BD7C1FAE0172B425351956583745310AD32EE_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedDictionary_2_set_Item_m83989436578C6FEE1B39AE9FFA46D32E67B7C82D_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SortedDictionary_2_get_Item_m683E6775AD41D6CEAB46D6AEAE9F82DAC859AB87_gshared (SortedDictionary_2_t92AAE0684C5DB745C349DA7F33FC9053C5224388 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9F9DF6119C16A47CA183A11447C735B01FE006C8_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mF390DA2A3078B58DD811566C1131DF2495F5052E_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Barracuda.TensorCachingAllocator/Entry>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965_gshared (List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_gshared_inline (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA_gshared (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51_gshared (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<System.Int32>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  KeyValuePair_2_get_Value_mD8E039565E9084E0CC2280E20420B0B56EBD6AE8_gshared_inline (KeyValuePair_2_t65EB7E3BB3EDAAADC5E7C051BD6D9B0E4A5A0159 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Nullable`1<Unity.Barracuda.TensorShape>>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  KeyValuePair_2_get_Value_m598CDD5FBE3B1F0DBF3DF0D58D5C5EA58A9C3F26_gshared_inline (KeyValuePair_2_t74685B4B6C19C78A0DAB00C06E94C5091B654FB5 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Unity.Barracuda.TensorShape>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_gshared_inline (Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>::.ctor()
inline void SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82 (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * __this, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 *, const RuntimeMethod*))SortedDictionary_2__ctor_m102BD7C1FAE0172B425351956583745310AD32EE_gshared)(__this, method);
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::get_Contexts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * SnapshotFieldsWithContexts_get_Contexts_m2CA18E2C30EBC119C99287D6C83D223B89AA7C30_inline (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotFields__ctor_mFEEEBAECB1019EBF9D5635D18D23FF2891144F11 (SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___titles0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>::set_Item(!0,!1)
inline void SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * __this, int32_t ___key0, SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * ___value1, const RuntimeMethod* method)
{
	((  void (*) (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 *, int32_t, SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D *, const RuntimeMethod*))SortedDictionary_2_set_Item_m83989436578C6FEE1B39AE9FFA46D32E67B7C82D_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::get_Fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * SnapshotFieldsWithContexts_get_Fields_mD1AD10A3F2DB41AA1D7F72180E6E6D9C79C736D8_inline (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields>::get_Item(!0)
inline SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4 (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * (*) (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 *, int32_t, const RuntimeMethod*))SortedDictionary_2_get_Item_m683E6775AD41D6CEAB46D6AEAE9F82DAC859AB87_gshared)(__this, ___key0, method);
}
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33 (SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * __this, String_t* ___title0, String_t* ___value1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String Unity.Barracuda.MemorySnapshotReport::get_ContextType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MemorySnapshotReport_get_ContextType_m025007821C67AE53763911FA9AE10C70BA548E66_inline (MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * __this, const RuntimeMethod* method);
// System.String Unity.Barracuda.MemorySnapshotReport::get_ContextName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MemorySnapshotReport_get_ContextName_mDE72FEE6E4FC5F1C96B5B4E750895B787D514DBC_inline (MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * __this, const RuntimeMethod* method);
// System.String Unity.Barracuda.LayerExecutionReport::get_LayerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LayerExecutionReport_get_LayerType_mF31D118837A1D7FC7EA9ED6433AFDE5ED887EB2F_inline (LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * __this, const RuntimeMethod* method);
// System.String Unity.Barracuda.LayerExecutionReport::get_LayerName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LayerExecutionReport_get_LayerName_m09BDBB420CED2D32D9B7575F1B41F85C3DF8B3A7_inline (LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.Model/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8A2734B22B7AF2FA8BFE92C086870378C9D0917E (U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * __this, const RuntimeMethod* method);
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<!!0>)
inline String_t* String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4_gshared)(___separator0, ___values1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Unity.Barracuda.Model/Input Unity.Barracuda.Model/Input::WithName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  Input_WithName_m10E23B64928BB22A688D157E3C50A9ECB108741E (Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Unity.Barracuda.ModelAnalyzer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D77638C0E61922F067F25E3E1457300DCD4A3CD (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_inline (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9F9DF6119C16A47CA183A11447C735B01FE006C8_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_inline (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mF390DA2A3078B58DD811566C1131DF2495F5052E_gshared_inline)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared)(___source0, ___value1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Unity.Barracuda.ModelOptimizer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m83E49D21BCB97CBE4D501DA46AFE56F2A1EF1B56 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Barracuda.ModelOptimizer::IsActivationFusable(Unity.Barracuda.Layer/Activation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelOptimizer_IsActivationFusable_m44D0612FF6815368771A0FA249819A63A7C6C77B (int32_t ___activationType0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Unity.Barracuda.Layer>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E (Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Unity.Barracuda.Layer>::Contains(!0)
inline bool HashSet_1_Contains_m457F0808EF9F4F1B67D90F72C506D4DDB88E2656 (HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC *, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 *, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m15A847D71C0960E3C99145A893E5B2E873C0E5F8 (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::get_kernel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  CompiledLayer_get_kernel_m4C628D5625CA0AF548B8A46FC468F13A9ED7F95C (CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m323A3F5B29F9F9E81323B7ADF61DF59C499FD2BC (U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6DB7A08FE5A3F7852D2BFDC3400DF3CF8C9F5F0D (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7 (bool ___value0, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319 (float ___value0, const RuntimeMethod* method);
// UnityEngine.Random/State UnityEngine.Random::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_t8E62E640CAE29BF61164F51619D1C04936074C15  Random_get_state_mB5BB303DE4D0FD30AB8C8060EC0925C38A4A9020 (const RuntimeMethod* method);
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C (int32_t ___seed0, const RuntimeMethod* method);
// System.Void UnityEngine.Random::set_state(UnityEngine.Random/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_set_state_m10870B08C03C9B4058B410F1ABD056946D392E3A (State_t8E62E640CAE29BF61164F51619D1C04936074C15  ___value0, const RuntimeMethod* method);
// System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6B667DFA520E79D734BE212F67A63B7D0DA02B27 (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E (RuntimeObject * __this, Enum_t23B90B40F60E677A8025267341651C94AE079CDA * ___flag0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2E1DB82BEEA6CECD9CD19ED0B3A472E6AFE97EB6 (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorShape::get_flatHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_flatHeight_m8AAA001033FA68763CEC297CFCBC052EA2D93D40_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorShape::get_flatWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TensorShape_get_flatWidth_m2B1B8FAAB0D61013FBD343E626D39D9DA0C3C973 (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorShape::get_kernelDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelDepth_mF470714B30FCEEF5D880107D4F990260F8EA8FFD_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorShape::get_kernelWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelWidth_m10EC2C7BF357DCE9FB53B3FD352C86ED354B0788_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorShape::get_kernelHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelHeight_m050A24BC599F0639C7F304A39DBD51D45A620EBC_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorShape::get_kernelSpatialDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelSpatialDepth_m8D9CB48F70D8E1126472FE7F54C5FE9988E1767D_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.StatsOps/LayerStat::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerStat__ctor_mB5416577100F73753ACA0BC002D4A5CFB6904C18 (LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337 * __this, int64_t ___totalBeforeLayer0, int64_t ___layer1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34_U3CU3Em__Finally1_mBC6FED7D0AD825628781530465734DFCCFF8F7B4 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Unity.Barracuda.TensorCachingAllocator/Entry>::GetEnumerator()
inline Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965 (List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  (*) (List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B *, const RuntimeMethod*))List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>::get_Current()
inline Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_inline (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method)
{
	return ((  Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  (*) (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 *, const RuntimeMethod*))Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>::MoveNext()
inline bool Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 *, const RuntimeMethod*))Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA_gshared)(__this, method);
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34_System_IDisposable_Dispose_m85D163D428E32590EBEE5E1BBAD7A772F064BC94 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Barracuda.TensorCachingAllocator/Entry>::Dispose()
inline void Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51 (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 *, const RuntimeMethod*))Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34__ctor_mF65393DD28AA2F2A75F2B77D27271BEAA2A3A48B (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.ITensorDataStatistics> Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.Collections.Generic.IEnumerable<Unity.Barracuda.ITensorDataStatistics>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_Generic_IEnumerableU3CUnity_Barracuda_ITensorDataStatisticsU3E_GetEnumerator_m15F032C341F4F12F92A12AE74E8D2655515509D4 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33_U3CU3Em__Finally1_m00ED201C5B9D16C0B1EB309BB5B44B3ACF5A43F9 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>::GetEnumerator()
inline Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8  Dictionary_2_GetEnumerator_m116D3EE1997E383989CA36A2DF7D4503A47F4721 (Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8  (*) (Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>::get_Current()
inline KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  Enumerator_get_Current_m4A857635EE87B66190BFDCE0D393B3D59AD95075_inline (Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  (*) (Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>::get_Key()
inline Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * KeyValuePair_2_get_Key_m27ED6C1E1770DD40F854C0A1CD0F8AE0A0BD687B_inline (KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F * __this, const RuntimeMethod* method)
{
	return ((  Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * (*) (KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>::MoveNext()
inline bool Enumerator_MoveNext_m0E87A47F67CC15C8A9EBB5AFA9785335F18FFDFF (Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33_System_IDisposable_Dispose_m15514EAD3EA0B2EC376EB3523A5EBCF2EA38B28D (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.Barracuda.Tensor,Unity.Barracuda.ITensorData>::Dispose()
inline void Enumerator_Dispose_m5C26454A6B690BFF9F775179205585E674FA29BD (Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33__ctor_m157CC3F0E6A67D2F6ECDDEAEDB8FDC8340A00559 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.ITensorStatistics> Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.Collections.Generic.IEnumerable<Unity.Barracuda.ITensorStatistics>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorsStatisticsU3Ed__33_System_Collections_Generic_IEnumerableU3CUnity_Barracuda_ITensorStatisticsU3E_GetEnumerator_m2214311857D0046D7EEE07BC279A57B6210F7077 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorCachingAllocator/Entry::get_uniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entry_get_uniqueId_m01DF3E05D7A29D3EDAF2394A33EFF4AFC5C735C2 (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.TensorCachingAllocator/Entry::get_maxCapacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entry_get_maxCapacity_m86E3FBD27CFE4C11F54E77A929F47B6D244E1B61 (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method);
// System.Boolean Unity.Barracuda.TensorCachingAllocator/Entry::get_inUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_get_inUse_mDB762A0CE401974A5088FFD6C137EFEE84F09575 (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method);
// System.Boolean Unity.Barracuda.TensorCachingAllocator/Entry::get_isGPUMem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_get_isGPUMem_m1DA2FCBD3341858D342CE66316CBBD7423DF8D4F (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method);
// Unity.Barracuda.TensorShape Unity.Barracuda.Tensor::get_shape()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  Tensor_get_shape_m531E03462C4E56D708057594AD97964ACCB280AE_inline (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.TensorCachingByShapeAllocator::AdoptFreeBuffer(Unity.Barracuda.TensorShape,Unity.Barracuda.ITensorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TensorCachingByShapeAllocator_AdoptFreeBuffer_m0E362B72CCF33564D39D305DF20628AC367AC4AA (TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77 * __this, TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  ___shape0, RuntimeObject* ___buffer1, const RuntimeMethod* method);
// System.Void Unity.Barracuda.TensorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC78B43698E0CE36B2D28C6569958D8DCD0EAC807 (U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * __this, const RuntimeMethod* method);
// System.Single Unity.Barracuda.Tensor::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tensor_get_Item_mF767289FFD4EAC04713448070AF0E03F4EFF3EBF (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m9A2B75C85CB8B6637B1286A562A8E35C82772D09 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6 (int64_t ___size0, int32_t ___alignment1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Int32 Unity.Barracuda.Tensor::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tensor_get_channels_m14D2FEC399E02BC7985F336D702044757D23252E (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int64>::Invoke(!0)
inline void Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39 (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * __this, int64_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 *, int64_t, const RuntimeMethod*))Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Barracuda.Tensor::Index(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tensor_Index_m79BE110F4315C65BEF67B1FE8CFEFA94602EB01A (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * __this, int32_t ___b0, int32_t ___h1, int32_t ___w2, int32_t ___ch3, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3BFE2C94BCF1259E0BBC6DC755F34BE7ED275EB5 (U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE65A32C9140155B4171DEAA72138413C35D182D2 (U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>::get_Value()
inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  KeyValuePair_2_get_Value_mA8568457D71134719487CDDC094FFDA001320553_inline (KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2 * __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  (*) (KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mD8E039565E9084E0CC2280E20420B0B56EBD6AE8_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>::get_Value()
inline Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  KeyValuePair_2_get_Value_mF0812DD6E41A1436214C9581CB7B56C5837BBAE6_inline (KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643 * __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  (*) (KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m598CDD5FBE3B1F0DBF3DF0D58D5C5EA58A9C3F26_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<Unity.Barracuda.TensorShape>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_inline (Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 *, const RuntimeMethod*))Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_gshared_inline)(__this, method);
}
// System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFABC363D0B404AAED079D4C2743FBA6BEBCE79F5 (U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * __this, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared)(___source0, method);
}
// System.Void Unity.Barracuda.VerboseOps/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF2C85EB58B7E9707B76B2608C03FD769734EBEFE (U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * __this, const RuntimeMethod* method);
// System.String Unity.Barracuda.TensorShape::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TensorShape_ToString_m6716FF66F1F11C019EBF3612026A6901B4F5C7BD (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method);
// System.Void Unity.Barracuda.WorkerFactory/WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory/Type,System.Boolean,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerConfiguration__ctor_m44E189F5AF08F7CE644C1F12873F6B885107E973 (WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7 * __this, int32_t ___compareAgainstType0, bool ___verbose1, int32_t ___compareLogLevel2, float ___compareEpsilon3, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::get_Fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * SnapshotFieldsWithContexts_get_Fields_mD1AD10A3F2DB41AA1D7F72180E6E6D9C79C736D8 (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, const RuntimeMethod* method)
{
	{
		// public SortedDictionary<int, SnapshotFields> Fields { get; }
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0 = __this->get_U3CFieldsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Collections.Generic.SortedDictionary`2<System.Int32,Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFields> Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::get_Contexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * SnapshotFieldsWithContexts_get_Contexts_m2CA18E2C30EBC119C99287D6C83D223B89AA7C30 (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, const RuntimeMethod* method)
{
	{
		// public SortedDictionary<int, SnapshotFields> Contexts { get; }
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0 = __this->get_U3CContextsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::.ctor(System.String[],System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotFieldsWithContexts__ctor_mA14141C5546FF086C0204262279AC25ED2763CDA (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___fieldsTitles0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___contextTitles1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SnapshotFieldsWithContexts(string[] fieldsTitles, string[] contextTitles)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// FieldTitles = fieldsTitles;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___fieldsTitles0;
		__this->set_FieldTitles_0(L_0);
		// ContextTitles = contextTitles;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = ___contextTitles1;
		__this->set_ContextTitles_1(L_1);
		// Contexts = new SortedDictionary<int, SnapshotFields>();
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_2 = (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 *)il2cpp_codegen_object_new(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82(L_2, /*hidden argument*/SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82_RuntimeMethod_var);
		__this->set_U3CContextsU3Ek__BackingField_3(L_2);
		// Fields = new SortedDictionary<int, SnapshotFields>();
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_3 = (SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 *)il2cpp_codegen_object_new(SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415_il2cpp_TypeInfo_var);
		SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82(L_3, /*hidden argument*/SortedDictionary_2__ctor_m74CD64CEA568375E28335531EC87E1579C77CE82_RuntimeMethod_var);
		__this->set_U3CFieldsU3Ek__BackingField_2(L_3);
		// }
		return;
	}
}
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::AddContext(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotFieldsWithContexts_AddContext_m5DC703A4374D6530BC49A97CB574613A17D8083D (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, int32_t ___uniqueId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Contexts[uniqueId] = new SnapshotFields(ContextTitles);
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0;
		L_0 = SnapshotFieldsWithContexts_get_Contexts_m2CA18E2C30EBC119C99287D6C83D223B89AA7C30_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___uniqueId0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_ContextTitles_1();
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_3 = (SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D *)il2cpp_codegen_object_new(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		SnapshotFields__ctor_mFEEEBAECB1019EBF9D5635D18D23FF2891144F11(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B(L_0, L_1, L_3, /*hidden argument*/SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B_RuntimeMethod_var);
		// Fields[uniqueId] = new SnapshotFields(FieldTitles);
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_4;
		L_4 = SnapshotFieldsWithContexts_get_Fields_mD1AD10A3F2DB41AA1D7F72180E6E6D9C79C736D8_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = ___uniqueId0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = __this->get_FieldTitles_0();
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_7 = (SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D *)il2cpp_codegen_object_new(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		SnapshotFields__ctor_mFEEEBAECB1019EBF9D5635D18D23FF2891144F11(L_7, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B(L_4, L_5, L_7, /*hidden argument*/SortedDictionary_2_set_Item_mD636EAD1A238D8D232D751B954B3E6FD11C33C0B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::SetContext(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotFieldsWithContexts_SetContext_m43756BCE0A56DFD464724920F524040E1CB07465 (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, int32_t ___uniqueId0, String_t* ___title1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Contexts[uniqueId][title] = value;
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0;
		L_0 = SnapshotFieldsWithContexts_get_Contexts_m2CA18E2C30EBC119C99287D6C83D223B89AA7C30_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___uniqueId0;
		NullCheck(L_0);
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_2;
		L_2 = SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4(L_0, L_1, /*hidden argument*/SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4_RuntimeMethod_var);
		String_t* L_3 = ___title1;
		String_t* L_4 = ___value2;
		NullCheck(L_2);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotFieldsWithContexts::set_Item(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotFieldsWithContexts_set_Item_mA315A546C6088D18CB40D13532D7EC2F4D3A81BC (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, int32_t ___uniqueId0, String_t* ___title1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Fields[uniqueId][title] = value;
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0;
		L_0 = SnapshotFieldsWithContexts_get_Fields_mD1AD10A3F2DB41AA1D7F72180E6E6D9C79C736D8_inline(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___uniqueId0;
		NullCheck(L_0);
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_2;
		L_2 = SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4(L_0, L_1, /*hidden argument*/SortedDictionary_2_get_Item_m33D5B42A73C1749ADD9AC244EE63CF8815C4CEF4_RuntimeMethod_var);
		String_t* L_3 = ___title1;
		String_t* L_4 = ___value2;
		NullCheck(L_2);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView::.ctor(System.Int32,Unity.Barracuda.MemorySnapshotReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotView__ctor_m403E4EF18E216D1D3695E31CE50D5593B3EDB60D (SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059 * __this, int32_t ___snapShotIndex0, MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * ___report1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44E5FB4393257D264C7190EA5443ED918807FB81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SnapshotView(int snapShotIndex, MemorySnapshotReport report)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// context = new SnapshotFields( new [] {"Snapshot index", "Type", "Name"} );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral44E5FB4393257D264C7190EA5443ED918807FB81);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral44E5FB4393257D264C7190EA5443ED918807FB81);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_4 = (SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D *)il2cpp_codegen_object_new(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		SnapshotFields__ctor_mFEEEBAECB1019EBF9D5635D18D23FF2891144F11(L_4, L_3, /*hidden argument*/NULL);
		__this->set_context_0(L_4);
		// context["Snapshot index"] = snapShotIndex.ToString();
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_5 = __this->get_context_0();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___snapShotIndex0), /*hidden argument*/NULL);
		NullCheck(L_5);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_5, _stringLiteral44E5FB4393257D264C7190EA5443ED918807FB81, L_6, /*hidden argument*/NULL);
		// context["Type"] = report.ContextType;
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_7 = __this->get_context_0();
		MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * L_8 = ___report1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = MemorySnapshotReport_get_ContextType_m025007821C67AE53763911FA9AE10C70BA548E66_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_7, _stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634, L_9, /*hidden argument*/NULL);
		// context["Name"] = report.ContextName;
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_10 = __this->get_context_0();
		MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * L_11 = ___report1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = MemorySnapshotReport_get_ContextName_mDE72FEE6E4FC5F1C96B5B4E750895B787D514DBC_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_10, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Barracuda.MemoryAndExecutionReportHelper/SnapshotView::.ctor(System.Int32,Unity.Barracuda.LayerExecutionReport)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapshotView__ctor_mD0C8549E95BCC428D5ED6DF558DDE80963C85498 (SnapshotView_t4BE1F9772552F1BAA7CEEBDEC83CD5EB80B7C059 * __this, int32_t ___snapShotIndex0, LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * ___report1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D20A9048A9A16304B931F4C020E2E48771C572B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SnapshotView(int snapShotIndex, LayerExecutionReport report)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// context = new SnapshotFields( new [] {"Layer index", "Type", "Name"} );
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral8D20A9048A9A16304B931F4C020E2E48771C572B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8D20A9048A9A16304B931F4C020E2E48771C572B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B);
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_4 = (SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D *)il2cpp_codegen_object_new(SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D_il2cpp_TypeInfo_var);
		SnapshotFields__ctor_mFEEEBAECB1019EBF9D5635D18D23FF2891144F11(L_4, L_3, /*hidden argument*/NULL);
		__this->set_context_0(L_4);
		// context["Layer index"] = snapShotIndex.ToString();
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_5 = __this->get_context_0();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___snapShotIndex0), /*hidden argument*/NULL);
		NullCheck(L_5);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_5, _stringLiteral8D20A9048A9A16304B931F4C020E2E48771C572B, L_6, /*hidden argument*/NULL);
		// context["Type"] = report.LayerType;
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_7 = __this->get_context_0();
		LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * L_8 = ___report1;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = LayerExecutionReport_get_LayerType_mF31D118837A1D7FC7EA9ED6433AFDE5ED887EB2F_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_7, _stringLiteralA15CF7E1CEFBD0C475E3A89A80B5393D417F8634, L_9, /*hidden argument*/NULL);
		// context["Name"] = report.LayerName;
		SnapshotFields_t06CB33C347B747B14E7C00C9F8A3C75D88EFE06D * L_10 = __this->get_context_0();
		LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * L_11 = ___report1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = LayerExecutionReport_get_LayerName_m09BDBB420CED2D32D9B7575F1B41F85C3DF8B3A7_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		SnapshotFields_set_Item_mB7389D552E392D1B8FA878BBC623BF1BBC117A33(L_10, _stringLiteral5BB3788A197C26B8310159EC9A81635814ABB05B, L_12, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.Model/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB2C1BBCBC1C254F68E3CD32E80C28DB345A46DA2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * L_0 = (U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA *)il2cpp_codegen_object_new(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8A2734B22B7AF2FA8BFE92C086870378C9D0917E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Model/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8A2734B22B7AF2FA8BFE92C086870378C9D0917E (U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.Model/<>c::<ToString>b__21_0(Unity.Barracuda.Model/Input)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__21_0_m813DD49EFDBBFE4F5AAF801DDC34854CF7BCDDA2 (U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * __this, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"inputs: [{string.Join(", ", inputs.Select(i => $"{i.name} ({string.Join(",", i.shape)})"))}], " +
		Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  L_0 = ___i0;
		String_t* L_1 = L_0.get_name_0();
		Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  L_2 = ___i0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2.get_shape_1();
		String_t* L_4;
		L_4 = String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/String_Join_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3307A586EDC791F7BFC22FA34BF4BA6EA0681AB4_RuntimeMethod_var);
		String_t* L_5;
		L_5 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_1, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, L_4, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Unity.Barracuda.Model/<>c::<ToString>b__21_1(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__21_1_m16B22EFE4E5F5C4CC041BDB041EA3B4BC7C1E0E9 (U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC88B7268310CF55E1332901267EC9623937285);
		s_Il2CppMethodInitialized = true;
	}
	{
		// $"memories: [{string.Join(", ", memories.Select(m => $"{m.input} {m.shape} {m.output}"))}], " +
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___m0;
		String_t* L_1 = L_0.get_input_1();
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_2 = ___m0;
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_3 = L_2.get_shape_0();
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_4 = L_3;
		RuntimeObject * L_5 = Box(TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45_il2cpp_TypeInfo_var, &L_4);
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_6 = ___m0;
		String_t* L_7 = L_6.get_output_2();
		String_t* L_8;
		L_8 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralAFC88B7268310CF55E1332901267EC9623937285, L_1, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Unity.Barracuda.Model/<>c::<ToString>b__21_2(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__21_2_m184232814E177F335BFCCB6761B38D61485A70ED (U3CU3Ec_t5DA847BA359631E17479290418628DCDC8E85EFA * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_tF9514834182131C4A5FCB2A7012599B052178D8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// $"\n{layers.Count} layers, {totalUniqueWeights:n0} weights: \n{string.Join("\n", layers.Select(i => $"{i.type} ({i})"))}";
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_1();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Type_tF9514834182131C4A5FCB2A7012599B052178D8C_il2cpp_TypeInfo_var, &L_2);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_4 = ___i0;
		String_t* L_5;
		L_5 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralA5E215A6DBE803E908043576B18C4FAD26AD44F7, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.String Unity.Barracuda.Model/ImporterWarning::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImporterWarning_get_Message_m45BB215A10B3A51D0DF69EC6103C7AB7D5C4E67C (ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Unity.Barracuda.Model/ImporterWarning::get_LayerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImporterWarning_get_LayerName_m955EE1E052F195CF9FDDDE6B5F9DD1919FF68F03 (ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504 * __this, const RuntimeMethod* method)
{
	{
		// public string LayerName { get; }
		String_t* L_0 = __this->get_U3CLayerNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.Barracuda.Model/ImporterWarning::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterWarning__ctor_mE8FA7C4956260AF549215FB9E2642C7E1131811F (ImporterWarning_tA5CBBBE943695A27038468CE4FB986CA671B9504 * __this, String_t* ___layer0, String_t* ___msg1, const RuntimeMethod* method)
{
	{
		// public ImporterWarning(string layer, string msg)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Message = msg;
		String_t* L_0 = ___msg1;
		__this->set_U3CMessageU3Ek__BackingField_0(L_0);
		// LayerName = layer;
		String_t* L_1 = ___layer0;
		__this->set_U3CLayerNameU3Ek__BackingField_1(L_1);
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
// Conversion methods for marshalling of: Unity.Barracuda.Model/Input
IL2CPP_EXTERN_C void Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshal_pinvoke(const Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834& unmarshaled, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___shape_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_shape_1());
	marshaled.___rank_2 = unmarshaled.get_rank_2();
}
IL2CPP_EXTERN_C void Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshal_pinvoke_back(const Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_pinvoke& marshaled, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_shape_1((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___shape_1));
	int32_t unmarshaled_rank_temp_2 = 0;
	unmarshaled_rank_temp_2 = marshaled.___rank_2;
	unmarshaled.set_rank_2(unmarshaled_rank_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.Model/Input
IL2CPP_EXTERN_C void Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshal_pinvoke_cleanup(Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___shape_1);
	marshaled.___shape_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Barracuda.Model/Input
IL2CPP_EXTERN_C void Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshal_com(const Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834& unmarshaled, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___shape_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_shape_1());
	marshaled.___rank_2 = unmarshaled.get_rank_2();
}
IL2CPP_EXTERN_C void Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshal_com_back(const Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_com& marshaled, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_shape_1((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___shape_1));
	int32_t unmarshaled_rank_temp_2 = 0;
	unmarshaled_rank_temp_2 = marshaled.___rank_2;
	unmarshaled.set_rank_2(unmarshaled_rank_temp_2);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.Model/Input
IL2CPP_EXTERN_C void Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshal_com_cleanup(Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___shape_1);
	marshaled.___shape_1 = NULL;
}
// Unity.Barracuda.Model/Input Unity.Barracuda.Model/Input::WithName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  Input_WithName_m10E23B64928BB22A688D157E3C50A9ECB108741E (Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Input {name = name, shape = shape};
		il2cpp_codegen_initobj((&V_0), sizeof(Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834 ));
		String_t* L_0 = ___name0;
		(&V_0)->set_name_0(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_shape_1();
		(&V_0)->set_shape_1(L_1);
		Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  Input_WithName_m10E23B64928BB22A688D157E3C50A9ECB108741E_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834 * _thisAdjusted = reinterpret_cast<Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834 *>(__this + _offset);
	Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  _returnValue;
	_returnValue = Input_WithName_m10E23B64928BB22A688D157E3C50A9ECB108741E(_thisAdjusted, ___name0, method);
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
// Conversion methods for marshalling of: Unity.Barracuda.Model/Memory
IL2CPP_EXTERN_C void Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshal_pinvoke(const Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6& unmarshaled, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_pinvoke& marshaled)
{
	marshaled.___shape_0 = unmarshaled.get_shape_0();
	marshaled.___input_1 = il2cpp_codegen_marshal_string(unmarshaled.get_input_1());
	marshaled.___output_2 = il2cpp_codegen_marshal_string(unmarshaled.get_output_2());
}
IL2CPP_EXTERN_C void Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshal_pinvoke_back(const Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_pinvoke& marshaled, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6& unmarshaled)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  unmarshaled_shape_temp_0;
	memset((&unmarshaled_shape_temp_0), 0, sizeof(unmarshaled_shape_temp_0));
	unmarshaled_shape_temp_0 = marshaled.___shape_0;
	unmarshaled.set_shape_0(unmarshaled_shape_temp_0);
	unmarshaled.set_input_1(il2cpp_codegen_marshal_string_result(marshaled.___input_1));
	unmarshaled.set_output_2(il2cpp_codegen_marshal_string_result(marshaled.___output_2));
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.Model/Memory
IL2CPP_EXTERN_C void Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshal_pinvoke_cleanup(Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___input_1);
	marshaled.___input_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___output_2);
	marshaled.___output_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Barracuda.Model/Memory
IL2CPP_EXTERN_C void Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshal_com(const Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6& unmarshaled, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_com& marshaled)
{
	marshaled.___shape_0 = unmarshaled.get_shape_0();
	marshaled.___input_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_input_1());
	marshaled.___output_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_output_2());
}
IL2CPP_EXTERN_C void Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshal_com_back(const Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_com& marshaled, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6& unmarshaled)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  unmarshaled_shape_temp_0;
	memset((&unmarshaled_shape_temp_0), 0, sizeof(unmarshaled_shape_temp_0));
	unmarshaled_shape_temp_0 = marshaled.___shape_0;
	unmarshaled.set_shape_0(unmarshaled_shape_temp_0);
	unmarshaled.set_input_1(il2cpp_codegen_marshal_bstring_result(marshaled.___input_1));
	unmarshaled.set_output_2(il2cpp_codegen_marshal_bstring_result(marshaled.___output_2));
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.Model/Memory
IL2CPP_EXTERN_C void Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshal_com_cleanup(Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___input_1);
	marshaled.___input_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___output_2);
	marshaled.___output_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Barracuda.ModelAnalyzer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAA3310D54879826A5136DE00838B1D125F49C459 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * L_0 = (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 *)il2cpp_codegen_object_new(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3D77638C0E61922F067F25E3E1457300DCD4A3CD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.ModelAnalyzer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3D77638C0E61922F067F25E3E1457300DCD4A3CD (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindUnusedLayersU3Eb__12_0_m4F47741137DF14528CC15437A2C690F7DD8C6B34 (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___i0, const RuntimeMethod* method)
{
	{
		// var layerUsageByName = model.layers.ToDictionary(i => i.name, i => false);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___i0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		return L_1;
	}
}
// System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_1(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindUnusedLayersU3Eb__12_1_m25D8AE4CAA2DE586FE7648F9462AB5DA0D288433 (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___i0, const RuntimeMethod* method)
{
	{
		// var layerUsageByName = model.layers.ToDictionary(i => i.name, i => false);
		return (bool)0;
	}
}
// System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindUnusedLayersU3Eb__12_2_m7B97A12BDF7DEC2384AB7E9A5C72980A38C09614 (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503  ___keyValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return layerUsageByName.Where(keyValue => !keyValue.Value).Select(keyValue => keyValue.Key).ToArray();
		bool L_0;
		L_0 = KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_inline((KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *)(&___keyValue0), /*hidden argument*/KeyValuePair_2_get_Value_mAC9081ECDD5DBA19DFE07653835578498B64ED1B_RuntimeMethod_var);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnusedLayers>b__12_3(System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindUnusedLayersU3Eb__12_3_mF5A9A980A077BF638D67B380D97883F89A5B9C47 (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503  ___keyValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return layerUsageByName.Where(keyValue => !keyValue.Value).Select(keyValue => keyValue.Key).ToArray();
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_inline((KeyValuePair_2_t384622AD87CBCE096A5B6142169F1A1C8C8F4503 *)(&___keyValue0), /*hidden argument*/KeyValuePair_2_get_Key_m2A4BA00E1B96F30CEEB1DC3778BBFB14E4F03535_RuntimeMethod_var);
		return L_0;
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindBrokenLinksU3Eb__13_0_mF518CA51D6F407A6C181D1C4FDEBCD0F4D9DEB04 (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___i0, const RuntimeMethod* method)
{
	{
		// var allVariables = new HashSet<string>(model.layers.Select(i => i.name));
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___i0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_1(Unity.Barracuda.Model/Input)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindBrokenLinksU3Eb__13_1_mFCD3AC768FE8A195B8CAAE61C6DB789279290E2C (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  ___i0, const RuntimeMethod* method)
{
	{
		// var globalInputs = new HashSet<string>(model.inputs.Select(i => i.name));
		Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  L_0 = ___i0;
		String_t* L_1 = L_0.get_name_0();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindBrokenLinks>b__13_2(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindBrokenLinksU3Eb__13_2_mADD8DF828D5783C50C9650AF07A258C482AA4D4F (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___i0, const RuntimeMethod* method)
{
	{
		// var memoryInputs = new HashSet<string>(model.memories.Select(i => i.input));
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___i0;
		String_t* L_1 = L_0.get_input_1();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__16_0(Unity.Barracuda.Model/Input)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_0_m7DF4DF9BC7CE0C33752E87187DE97AD7EDC592FC (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  ___i0, const RuntimeMethod* method)
{
	{
		// var unconnected = model.inputs.ToDictionary(i => i.name, i => true);
		Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  L_0 = ___i0;
		String_t* L_1 = L_0.get_name_0();
		return L_1;
	}
}
// System.Boolean Unity.Barracuda.ModelAnalyzer/<>c::<FindUnconnectedInputs>b__16_1(Unity.Barracuda.Model/Input)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindUnconnectedInputsU3Eb__16_1_m2F03A69C1C56EF88CC858C6ADC9778B0C569685B (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  ___i0, const RuntimeMethod* method)
{
	{
		// var unconnected = model.inputs.ToDictionary(i => i.name, i => true);
		return (bool)1;
	}
}
// System.String Unity.Barracuda.ModelAnalyzer/<>c::<FindLayerOutputs>b__17_1(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindLayerOutputsU3Eb__17_1_m9EC299B29AD7C0C312A4F16EC3BBAA11DC62B0A0 (U3CU3Ec_tA3A996410D0B309A48573ACC7F4FAE243111D319 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___x0, const RuntimeMethod* method)
{
	{
		// var allVariables = model.layers.Where(x => x.inputs.Contains(layerName)).Select(x => x.name);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		return L_1;
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
// System.Void Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m6475345E391FAF9255CD206CDBF171B3D9D33C0C (U3CU3Ec__DisplayClass17_0_t1DCE9939016179A18FD577C5E88D821D148A7CF7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::<FindLayerOutputs>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CFindLayerOutputsU3Eb__0_mFB23A54F5FA413D5BB26D84E1E9923C435E6552F (U3CU3Ec__DisplayClass17_0_t1DCE9939016179A18FD577C5E88D821D148A7CF7 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var allVariables = model.layers.Where(x => x.inputs.Contains(layerName)).Select(x => x.name);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___x0;
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0->get_inputs_10();
		String_t* L_2 = __this->get_layerName_0();
		bool L_3;
		L_3 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_1, L_2, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Unity.Barracuda.ModelAnalyzer/<>c__DisplayClass17_0::<FindLayerOutputs>b__2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass17_0_U3CFindLayerOutputsU3Eb__2_m54CE2F14CDEA3C32D13B2739066AB796E40C7F16 (U3CU3Ec__DisplayClass17_0_t1DCE9939016179A18FD577C5E88D821D148A7CF7 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// var globalOutputs = model.outputs.Where(x => x == layerName); ;
		String_t* L_0 = ___x0;
		String_t* L_1 = __this->get_layerName_0();
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mFF63F081A61D7373F3E72662BEF3063A891C42D6 (U3CU3Ec__DisplayClass2_0_t9D01911B1D3D1D5B0B5A1C39D9D97B100D7EB211 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelMetadataExtensions/<>c__DisplayClass2_0::<GetDownStreamLayersCount>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CGetDownStreamLayersCountU3Eb__0_m8B2AED78B8E5F7B8069C5F39378B24F281B593F2 (U3CU3Ec__DisplayClass2_0_t9D01911B1D3D1D5B0B5A1C39D9D97B100D7EB211 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return model.layers.Count(x => x.inputs.Contains(name));
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___x0;
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0->get_inputs_10();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_1, L_2, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		return L_3;
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0B43383BD6E1CC8B35478774F10EADB7F8503967 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * L_0 = (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 *)il2cpp_codegen_object_new(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m83E49D21BCB97CBE4D501DA46AFE56F2A1EF1B56(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.ModelOptimizer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m83E49D21BCB97CBE4D501DA46AFE56F2A1EF1B56 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_0(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRemoveUnusedU3Eb__1_0_mA390AB24AF56218A2A6069A89426EB1380C8DC92 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.input).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_input_1();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveUnused>b__1_1(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRemoveUnusedU3Eb__1_1_mAC0C6DAECCEE859D8C6F3C6B22F4D329159B6601 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.output)).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_output_2();
		return L_1;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<FuseActivations>b__5_0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFuseActivationsU3Eb__5_0_m0E7C56FEDA7F3E2740A320912D2CA112D33D8F9E (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModelOptimizer_tCE2770855C8C69811B8027F453E4B11AAA525DC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var fusableActivations = model.layers.Where(l => l.type == Layer.Type.Activation && IsActivationFusable(l.activation)).ToList();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_0016;
		}
	}
	{
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = ___l0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_activation_3();
		IL2CPP_RUNTIME_CLASS_INIT(ModelOptimizer_tCE2770855C8C69811B8027F453E4B11AAA525DC6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ModelOptimizer_IsActivationFusable_m44D0612FF6815368771A0FA249819A63A7C6C77B(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__7_0_m508FBAD82363D46F4B19362D3A6794B944541689 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, int32_t ___s0, const RuntimeMethod* method)
{
	{
		// && layer.pad.All(s => s == 0)
		int32_t L_0 = ___s0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__7_1_m4B96787DF4877BBE2248907DDD520E41F9C1B2B1 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, int32_t ___e0, const RuntimeMethod* method)
{
	{
		// && layer.pool.All(e => e == int.MaxValue)
		int32_t L_0 = ___e0;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0);
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c::<IsLayerNoop>b__7_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__7_2_m9C367D5CE09052D0B463977C644A34BA10610879 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, int32_t ___s0, const RuntimeMethod* method)
{
	{
		// && layer.stride.All(s => s == 1));
		int32_t L_0 = ___s0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_0(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRemoveNoopU3Eb__8_0_mE35B6D180E9BD90C7C0CB134F4DF88D866CB8357 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.input).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_input_1();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelOptimizer/<>c::<RemoveNoop>b__8_1(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRemoveNoopU3Eb__8_1_m91B7021DA965C48D7009033FA8EEFE53F0AE3891 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.output)).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_output_2();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_0(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFuseLinearU3Eb__18_0_mA10147AD48DBF86F00322433B38E7E14B823E000 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.input).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_input_1();
		return L_1;
	}
}
// System.String Unity.Barracuda.ModelOptimizer/<>c::<FuseLinear>b__18_1(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFuseLinearU3Eb__18_1_m6A85F95659EE98A493CDBB751A39957F40416963 (U3CU3Ec_t4072D1DF1873D1E67CC4650A91FF88FF97827A57 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.output)).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_output_2();
		return L_1;
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m00F9CEDCDA1FE7FBB6DAC2DF75E069665E3F16D4 (U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__0_m81D171006C75D8C0A63C6DBC7D0B35C2AAEBAD28 (U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var constInputs = layer.inputs.Count(x => constantLayers.ContainsKey(x));
		Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * L_0 = __this->get_constantLayers_0();
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_0::<PackConstants>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CPackConstantsU3Eb__1_mEE923491E38845249AED961C681083193F70E6D7 (U3CU3Ec__DisplayClass16_0_tCAEFDEB8F7A06FB3C02EDEA6B4D7B98C9ECA5F0C * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var constInput = layer.inputs.ToList().Find(x => constantLayers.ContainsKey(x));
		Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * L_0 = __this->get_constantLayers_0();
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_1__ctor_m3DE5F0B8801A3890215555CDF38E2CE4F649A83B (U3CU3Ec__DisplayClass16_1_tAC83BD003745470EFE4E9F1CC04D3F507C87C8E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass16_1::<PackConstants>b__2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_1_U3CPackConstantsU3Eb__2_m5C1A8B6F99A02A82512BD6491A4B6CAE9B82ED1C (U3CU3Ec__DisplayClass16_1_tAC83BD003745470EFE4E9F1CC04D3F507C87C8E9 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// model.layers[l].inputs = layer.inputs.Where(x => x != constInput).ToArray();
		String_t* L_0 = ___x0;
		String_t* L_1 = __this->get_constInput_0();
		bool L_2;
		L_2 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m5EFDE9F297D949121EB209AF38DB6F9FFD2BB97D (U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__4_mF39DB46E77CE1F7F2D5DD89F38190214C141D54F (U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var nonLinearInputs = layer.inputs.Where(x => !remap.ContainsKey(x) && !constantLayers.ContainsKey(x)).ToList();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_remap_0();
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * L_3 = __this->get_constantLayers_1();
		String_t* L_4 = ___x0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__5_m1E8BEDE01A4D9B7743B1906A6E800B21A050F0CB (U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var linearInputs = layer.inputs.Where(x => remap.ContainsKey(x)).ToList();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_remap_0();
		String_t* L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m5BB06692D9A48A3FEEB102881A86417DE6DA5027_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__2(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__2_m6D58EA427F1787395A95B6DA4BAE0AFF0FAA6A26 (U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m457F0808EF9F4F1B67D90F72C506D4DDB88E2656_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.layers.RemoveAll(x => mergedLayers.Contains(x));
		HashSet_1_t942E83F0404E8B07D0ED55AD4B3151E7827BFFBC * L_0 = __this->get_mergedLayers_2();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m457F0808EF9F4F1B67D90F72C506D4DDB88E2656(L_0, L_1, /*hidden argument*/HashSet_1_Contains_m457F0808EF9F4F1B67D90F72C506D4DDB88E2656_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_0::<FuseLinear>b__3(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CFuseLinearU3Eb__3_m7F081F261F1C8DA5B3FB7BFF2E114B37BD10595B (U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.layers.RemoveAll(x => constantLayers.ContainsKey(x.name) &&
		//                             !preserve.Contains(x.name) &&
		//                             (keepLayers == null ? true : !keepLayers.Contains(x.name)));
		Dictionary_2_tB14E74360A2F92B81BEB937A1E2BB24268E77832 * L_0 = __this->get_constantLayers_1();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = ___x0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E(L_0, L_2, /*hidden argument*/Dictionary_2_ContainsKey_mC0D1AD9637A7081777C1B77BB9757C136D86AD5E_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_4 = __this->get_preserve_3();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_5 = ___x0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_name_0();
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_4, L_6, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0045;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_8 = __this->get_keepLayers_4();
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_9 = __this->get_keepLayers_4();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_10 = ___x0;
		NullCheck(L_10);
		String_t* L_11 = L_10->get_name_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_9, L_11, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		return (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
	}

IL_0043:
	{
		return (bool)1;
	}

IL_0045:
	{
		return (bool)0;
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_1__ctor_m0674C30EBF18D307C1459B484F30536DDF0536ED (U3CU3Ec__DisplayClass18_1_tD8A1D1D3760E88B51CD3A0307A860544B02B962E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass18_1::<FuseLinear>b__6(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_1_U3CFuseLinearU3Eb__6_mC89AA7195A5840D8CC933A521AD1056BF9810DB2 (U3CU3Ec__DisplayClass18_1_tD8A1D1D3760E88B51CD3A0307A860544B02B962E * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int inputLayerIndex = model.layers.FindIndex(x => x.name == remap[input]);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		U3CU3Ec__DisplayClass18_0_t915D94A71809D8FF1CC240399C0370FAD83BE8F5 * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_3 = L_2->get_remap_0();
		String_t* L_4 = __this->get_input_0();
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mFCD5E71429358EE225039B602674518740D30141_RuntimeMethod_var);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_5, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m5057FA4ED4D1ECC48918894532BA164A6CD6159F (U3CU3Ec__DisplayClass1_0_tEAFF6140B916D4FCDEC2E6697489F2257B291A98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass1_0::<RemoveUnused>b__2(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CRemoveUnusedU3Eb__2_m2C66AEC906948EFFE6AE916BDA96648D19A8F32A (U3CU3Ec__DisplayClass1_0_tEAFF6140B916D4FCDEC2E6697489F2257B291A98 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.layers = model.layers.Where(l => !unusedLayers.Contains(l.name) || preserve.Contains(l.name)).ToList();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_unusedLayers_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = ___l0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_0, L_2, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_4 = __this->get_preserve_1();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_5 = ___l0;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_name_0();
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_4, L_6, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		return (bool)1;
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m041063C5C1C74D0D034B71CAB2532F3AD5F78926 (U3CU3Ec__DisplayClass4_0_t67E6B802FF69A3A1849D6C69BE42FAC8728AE2B8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass4_0::<FuseActivation>b__0(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CFuseActivationU3Eb__0_mDD32DBD6C524D7637FEC5F52098F703F04546169 (U3CU3Ec__DisplayClass4_0_t67E6B802FF69A3A1849D6C69BE42FAC8728AE2B8 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___m0, const RuntimeMethod* method)
{
	{
		// if (model.outputs.Contains(activationToFuse.name) || model.memories.Exists(m => m.output == activationToFuse.name))
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___m0;
		String_t* L_1 = L_0.get_output_2();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = __this->get_activationToFuse_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_mF5D45B47C30964A4390610803768639CC436FAED (U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_0::<FuseActivations>b__1(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CFuseActivationsU3Eb__1_m940C081E528A252CFA686423B91332FF8B619EF2 (U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	{
		// var mainLayer = model.layers.Find(l => l.name == activationLayer.inputs[0]);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = __this->get_activationLayer_0();
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2->get_inputs_10();
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_5, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_m3D92A29F736DC3F0A45FA3064A40AE696F26E30C (U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__2(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__2_m6EEBBFFC0DE3E23087A1DAD465D7C4528EC038FE (U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___m0, const RuntimeMethod* method)
{
	{
		// if (model.memories.Exists(m => m.output == mainLayer.name))
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___m0;
		String_t* L_1 = L_0.get_output_2();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = __this->get_mainLayer_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Unity.Barracuda.ModelOptimizer/<>c__DisplayClass5_1::<FuseActivations>b__3(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_1_U3CFuseActivationsU3Eb__3_m0121979110E650702D7B86462C40AFBF8BA7F4EA (U3CU3Ec__DisplayClass5_1_t4BE8A1EEB53F0902D93859457CE0D17DC711D617 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (model.layers.Exists(l => l != activationLayer && l.inputs.Contains(mainLayer.name)))
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		U3CU3Ec__DisplayClass5_0_tDDA40CFA3829F8CC917614EC99B09FA1F3D11A9C * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = L_1->get_activationLayer_0();
		if ((((RuntimeObject*)(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 *)L_0) == ((RuntimeObject*)(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 *)L_2)))
		{
			goto IL_0025;
		}
	}
	{
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_3 = ___l0;
		NullCheck(L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3->get_inputs_10();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_5 = __this->get_mainLayer_0();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_name_0();
		bool L_7;
		L_7 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_4, L_6, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
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
// System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA4FF78B339F8F193743D73C5E2B38C9E0DDA4C73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * L_0 = (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 *)il2cpp_codegen_object_new(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m15A847D71C0960E3C99145A893E5B2E873C0E5F8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m15A847D71C0960E3C99145A893E5B2E873C0E5F8 (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNCHWToNHWC>b__4_3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateRewriterNCHWToNHWCU3Eb__4_3_m20770DB74252A6133F05B16D62686A3C8E99F8FC (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layer0, ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572 * ___net1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_1 = NULL;
	int32_t G_B4_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B5_2 = NULL;
	int32_t G_B7_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B7_1 = NULL;
	int32_t G_B6_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B6_1 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B8_2 = NULL;
	int32_t G_B13_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B13_1 = NULL;
	int32_t G_B10_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B10_1 = NULL;
	int32_t G_B12_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B11_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B14_2 = NULL;
	int32_t G_B18_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B18_1 = NULL;
	int32_t G_B15_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B15_1 = NULL;
	int32_t G_B17_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B17_1 = NULL;
	int32_t G_B16_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B16_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B19_2 = NULL;
	int32_t G_B23_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B23_1 = NULL;
	int32_t G_B20_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B20_1 = NULL;
	int32_t G_B22_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B22_1 = NULL;
	int32_t G_B21_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B21_1 = NULL;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B24_2 = NULL;
	int32_t G_B31_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B31_1 = NULL;
	int32_t G_B26_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B26_1 = NULL;
	int32_t G_B30_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B30_1 = NULL;
	int32_t G_B27_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B27_1 = NULL;
	int32_t G_B29_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B29_1 = NULL;
	int32_t G_B28_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B28_1 = NULL;
	int32_t G_B32_0 = 0;
	int32_t G_B32_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B32_2 = NULL;
	int32_t G_B38_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B38_1 = NULL;
	int32_t G_B33_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B33_1 = NULL;
	int32_t G_B37_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B37_1 = NULL;
	int32_t G_B34_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B34_1 = NULL;
	int32_t G_B36_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B36_1 = NULL;
	int32_t G_B35_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B35_1 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B39_2 = NULL;
	int32_t G_B45_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B45_1 = NULL;
	int32_t G_B40_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B40_1 = NULL;
	int32_t G_B44_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B44_1 = NULL;
	int32_t G_B41_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B41_1 = NULL;
	int32_t G_B43_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B43_1 = NULL;
	int32_t G_B42_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B42_1 = NULL;
	int32_t G_B46_0 = 0;
	int32_t G_B46_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B46_2 = NULL;
	int32_t G_B52_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B52_1 = NULL;
	int32_t G_B47_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B47_1 = NULL;
	int32_t G_B51_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B51_1 = NULL;
	int32_t G_B48_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B48_1 = NULL;
	int32_t G_B50_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B50_1 = NULL;
	int32_t G_B49_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B49_1 = NULL;
	int32_t G_B53_0 = 0;
	int32_t G_B53_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B53_2 = NULL;
	int32_t G_B58_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B58_1 = NULL;
	int32_t G_B55_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B55_1 = NULL;
	int32_t G_B57_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B57_1 = NULL;
	int32_t G_B56_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B56_1 = NULL;
	int32_t G_B59_0 = 0;
	int32_t G_B59_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B59_2 = NULL;
	int32_t G_B63_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B63_1 = NULL;
	int32_t G_B60_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B60_1 = NULL;
	int32_t G_B62_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B62_1 = NULL;
	int32_t G_B61_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B61_1 = NULL;
	int32_t G_B64_0 = 0;
	int32_t G_B64_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B64_2 = NULL;
	int32_t G_B68_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B68_1 = NULL;
	int32_t G_B65_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B65_1 = NULL;
	int32_t G_B67_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B67_1 = NULL;
	int32_t G_B66_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B66_1 = NULL;
	int32_t G_B69_0 = 0;
	int32_t G_B69_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B69_2 = NULL;
	int32_t G_B73_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B73_1 = NULL;
	int32_t G_B70_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B70_1 = NULL;
	int32_t G_B72_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B72_1 = NULL;
	int32_t G_B71_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B71_1 = NULL;
	int32_t G_B74_0 = 0;
	int32_t G_B74_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B74_2 = NULL;
	int32_t G_B78_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B78_1 = NULL;
	int32_t G_B75_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B75_1 = NULL;
	int32_t G_B77_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B77_1 = NULL;
	int32_t G_B76_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B76_1 = NULL;
	int32_t G_B79_0 = 0;
	int32_t G_B79_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B79_2 = NULL;
	int32_t G_B84_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B84_1 = NULL;
	int32_t G_B81_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B81_1 = NULL;
	int32_t G_B83_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B83_1 = NULL;
	int32_t G_B82_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B82_1 = NULL;
	int32_t G_B85_0 = 0;
	int32_t G_B85_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B85_2 = NULL;
	int32_t G_B89_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B89_1 = NULL;
	int32_t G_B86_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B86_1 = NULL;
	int32_t G_B88_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B88_1 = NULL;
	int32_t G_B87_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B87_1 = NULL;
	int32_t G_B90_0 = 0;
	int32_t G_B90_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B90_2 = NULL;
	int32_t G_B94_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B94_1 = NULL;
	int32_t G_B91_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B91_1 = NULL;
	int32_t G_B93_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B93_1 = NULL;
	int32_t G_B92_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B92_1 = NULL;
	int32_t G_B95_0 = 0;
	int32_t G_B95_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B95_2 = NULL;
	int32_t G_B99_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B99_1 = NULL;
	int32_t G_B96_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B96_1 = NULL;
	int32_t G_B98_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B98_1 = NULL;
	int32_t G_B97_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B97_1 = NULL;
	int32_t G_B100_0 = 0;
	int32_t G_B100_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B100_2 = NULL;
	int32_t G_B104_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B104_1 = NULL;
	int32_t G_B101_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B101_1 = NULL;
	int32_t G_B103_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B103_1 = NULL;
	int32_t G_B102_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B102_1 = NULL;
	int32_t G_B105_0 = 0;
	int32_t G_B105_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B105_2 = NULL;
	int32_t G_B109_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B109_1 = NULL;
	int32_t G_B106_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B106_1 = NULL;
	int32_t G_B108_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B108_1 = NULL;
	int32_t G_B107_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B107_1 = NULL;
	int32_t G_B110_0 = 0;
	int32_t G_B110_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B110_2 = NULL;
	{
		// int rank = layer.pool.Length;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___layer0;
		NullCheck(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0->get_pool_6();
		NullCheck(L_1);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		// int[] onnxTranspose = layer.pool;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = ___layer0;
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2->get_pool_6();
		V_1 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)2)))
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_006e;
			}
			case 2:
			{
				goto IL_00de;
			}
			case 3:
			{
				goto IL_018f;
			}
		}
	}
	{
		goto IL_023e;
	}

IL_002d:
	{
		// layer.pool = new[] { 0, 1, 2, 3 };
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_5 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_pool_6(L_7);
		// layer.pool[0] = onnxTranspose[0] == 1 ? 3 : onnxTranspose[0];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_9 = ___layer0;
		NullCheck(L_9);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = L_9->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		G_B3_0 = 0;
		G_B3_1 = L_10;
		if ((((int32_t)L_13) == ((int32_t)1)))
		{
			G_B4_0 = 0;
			G_B4_1 = L_10;
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = 0;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B5_0 = 3;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0057:
	{
		NullCheck(G_B5_2);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (int32_t)G_B5_0);
		// layer.pool[3] = onnxTranspose[1] == 1 ? 3 : onnxTranspose[1];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_17 = ___layer0;
		NullCheck(L_17);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = L_17->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = 1;
		int32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B6_0 = 3;
		G_B6_1 = L_18;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			G_B7_0 = 3;
			G_B7_1 = L_18;
			goto IL_006a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 1;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B8_0 = L_24;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_006b;
	}

IL_006a:
	{
		G_B8_0 = 3;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_006b:
	{
		NullCheck(G_B8_2);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (int32_t)G_B8_0);
		// return true;
		return (bool)1;
	}

IL_006e:
	{
		// layer.pool = new[] { 0, 1, 2, 3 };
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_25 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = L_26;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_pool_6(L_27);
		// layer.pool[0] = onnxTranspose[0] == 1 ? 3 : onnxTranspose[0] == 2 ? 2 : onnxTranspose[0];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_29 = ___layer0;
		NullCheck(L_29);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = V_1;
		NullCheck(L_31);
		int32_t L_32 = 0;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		G_B10_0 = 0;
		G_B10_1 = L_30;
		if ((((int32_t)L_33) == ((int32_t)1)))
		{
			G_B13_0 = 0;
			G_B13_1 = L_30;
			goto IL_00a0;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 0;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		G_B11_0 = G_B10_0;
		G_B11_1 = G_B10_1;
		if ((((int32_t)L_36) == ((int32_t)2)))
		{
			G_B12_0 = G_B10_0;
			G_B12_1 = G_B10_1;
			goto IL_009d;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = V_1;
		NullCheck(L_37);
		int32_t L_38 = 0;
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		G_B14_0 = L_39;
		G_B14_1 = G_B11_0;
		G_B14_2 = G_B11_1;
		goto IL_00a1;
	}

IL_009d:
	{
		G_B14_0 = 2;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B14_0 = 3;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00a1:
	{
		NullCheck(G_B14_2);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (int32_t)G_B14_0);
		// layer.pool[3] = onnxTranspose[1] == 1 ? 3 : onnxTranspose[1] == 2 ? 2 : onnxTranspose[1];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_40 = ___layer0;
		NullCheck(L_40);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = L_40->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = 1;
		int32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		G_B15_0 = 3;
		G_B15_1 = L_41;
		if ((((int32_t)L_44) == ((int32_t)1)))
		{
			G_B18_0 = 3;
			G_B18_1 = L_41;
			goto IL_00bd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = V_1;
		NullCheck(L_45);
		int32_t L_46 = 1;
		int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		if ((((int32_t)L_47) == ((int32_t)2)))
		{
			G_B17_0 = G_B15_0;
			G_B17_1 = G_B15_1;
			goto IL_00ba;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49 = 1;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		G_B19_0 = L_50;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		goto IL_00be;
	}

IL_00ba:
	{
		G_B19_0 = 2;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_00be;
	}

IL_00bd:
	{
		G_B19_0 = 3;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_00be:
	{
		NullCheck(G_B19_2);
		(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (int32_t)G_B19_0);
		// layer.pool[2] = onnxTranspose[2] == 1 ? 3 : onnxTranspose[2] == 2 ? 2 : onnxTranspose[2];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_51 = ___layer0;
		NullCheck(L_51);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = L_51->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_1;
		NullCheck(L_53);
		int32_t L_54 = 2;
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		G_B20_0 = 2;
		G_B20_1 = L_52;
		if ((((int32_t)L_55) == ((int32_t)1)))
		{
			G_B23_0 = 2;
			G_B23_1 = L_52;
			goto IL_00da;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 2;
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
		if ((((int32_t)L_58) == ((int32_t)2)))
		{
			G_B22_0 = G_B20_0;
			G_B22_1 = G_B20_1;
			goto IL_00d7;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 2;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B24_0 = L_61;
		G_B24_1 = G_B21_0;
		G_B24_2 = G_B21_1;
		goto IL_00db;
	}

IL_00d7:
	{
		G_B24_0 = 2;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		goto IL_00db;
	}

IL_00da:
	{
		G_B24_0 = 3;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
	}

IL_00db:
	{
		NullCheck(G_B24_2);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (int32_t)G_B24_0);
		// return true;
		return (bool)1;
	}

IL_00de:
	{
		// layer.pool = new[] { 0, 1, 2, 3 };
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_62 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = L_63;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_65 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_62);
		L_62->set_pool_6(L_64);
		// layer.pool[0] = onnxTranspose[0] == 1 ? 3 : onnxTranspose[0] == 2 ? 1 : onnxTranspose[0] == 3 ? 2 : onnxTranspose[0];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_66 = ___layer0;
		NullCheck(L_66);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = L_66->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = 0;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		G_B26_0 = 0;
		G_B26_1 = L_67;
		if ((((int32_t)L_70) == ((int32_t)1)))
		{
			G_B31_0 = 0;
			G_B31_1 = L_67;
			goto IL_0119;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = V_1;
		NullCheck(L_71);
		int32_t L_72 = 0;
		int32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		G_B27_0 = G_B26_0;
		G_B27_1 = G_B26_1;
		if ((((int32_t)L_73) == ((int32_t)2)))
		{
			G_B30_0 = G_B26_0;
			G_B30_1 = G_B26_1;
			goto IL_0116;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = V_1;
		NullCheck(L_74);
		int32_t L_75 = 0;
		int32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		G_B28_0 = G_B27_0;
		G_B28_1 = G_B27_1;
		if ((((int32_t)L_76) == ((int32_t)3)))
		{
			G_B29_0 = G_B27_0;
			G_B29_1 = G_B27_1;
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = V_1;
		NullCheck(L_77);
		int32_t L_78 = 0;
		int32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		G_B32_0 = L_79;
		G_B32_1 = G_B28_0;
		G_B32_2 = G_B28_1;
		goto IL_011a;
	}

IL_0113:
	{
		G_B32_0 = 2;
		G_B32_1 = G_B29_0;
		G_B32_2 = G_B29_1;
		goto IL_011a;
	}

IL_0116:
	{
		G_B32_0 = 1;
		G_B32_1 = G_B30_0;
		G_B32_2 = G_B30_1;
		goto IL_011a;
	}

IL_0119:
	{
		G_B32_0 = 3;
		G_B32_1 = G_B31_0;
		G_B32_2 = G_B31_1;
	}

IL_011a:
	{
		NullCheck(G_B32_2);
		(G_B32_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B32_1), (int32_t)G_B32_0);
		// layer.pool[3] = onnxTranspose[1] == 1 ? 3 : onnxTranspose[1] == 2 ? 1 : onnxTranspose[1] == 3 ? 2 : onnxTranspose[1];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_80 = ___layer0;
		NullCheck(L_80);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = L_80->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = 1;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		G_B33_0 = 3;
		G_B33_1 = L_81;
		if ((((int32_t)L_84) == ((int32_t)1)))
		{
			G_B38_0 = 3;
			G_B38_1 = L_81;
			goto IL_013f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = V_1;
		NullCheck(L_85);
		int32_t L_86 = 1;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		G_B34_0 = G_B33_0;
		G_B34_1 = G_B33_1;
		if ((((int32_t)L_87) == ((int32_t)2)))
		{
			G_B37_0 = G_B33_0;
			G_B37_1 = G_B33_1;
			goto IL_013c;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_88 = V_1;
		NullCheck(L_88);
		int32_t L_89 = 1;
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		G_B35_0 = G_B34_0;
		G_B35_1 = G_B34_1;
		if ((((int32_t)L_90) == ((int32_t)3)))
		{
			G_B36_0 = G_B34_0;
			G_B36_1 = G_B34_1;
			goto IL_0139;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = V_1;
		NullCheck(L_91);
		int32_t L_92 = 1;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		G_B39_0 = L_93;
		G_B39_1 = G_B35_0;
		G_B39_2 = G_B35_1;
		goto IL_0140;
	}

IL_0139:
	{
		G_B39_0 = 2;
		G_B39_1 = G_B36_0;
		G_B39_2 = G_B36_1;
		goto IL_0140;
	}

IL_013c:
	{
		G_B39_0 = 1;
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		goto IL_0140;
	}

IL_013f:
	{
		G_B39_0 = 3;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
	}

IL_0140:
	{
		NullCheck(G_B39_2);
		(G_B39_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B39_1), (int32_t)G_B39_0);
		// layer.pool[1] = onnxTranspose[2] == 1 ? 3 : onnxTranspose[2] == 2 ? 1 : onnxTranspose[2] == 3 ? 2 : onnxTranspose[2];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_94 = ___layer0;
		NullCheck(L_94);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_95 = L_94->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = V_1;
		NullCheck(L_96);
		int32_t L_97 = 2;
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B40_0 = 1;
		G_B40_1 = L_95;
		if ((((int32_t)L_98) == ((int32_t)1)))
		{
			G_B45_0 = 1;
			G_B45_1 = L_95;
			goto IL_0165;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_99 = V_1;
		NullCheck(L_99);
		int32_t L_100 = 2;
		int32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		G_B41_0 = G_B40_0;
		G_B41_1 = G_B40_1;
		if ((((int32_t)L_101) == ((int32_t)2)))
		{
			G_B44_0 = G_B40_0;
			G_B44_1 = G_B40_1;
			goto IL_0162;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_102 = V_1;
		NullCheck(L_102);
		int32_t L_103 = 2;
		int32_t L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		G_B42_0 = G_B41_0;
		G_B42_1 = G_B41_1;
		if ((((int32_t)L_104) == ((int32_t)3)))
		{
			G_B43_0 = G_B41_0;
			G_B43_1 = G_B41_1;
			goto IL_015f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = V_1;
		NullCheck(L_105);
		int32_t L_106 = 2;
		int32_t L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		G_B46_0 = L_107;
		G_B46_1 = G_B42_0;
		G_B46_2 = G_B42_1;
		goto IL_0166;
	}

IL_015f:
	{
		G_B46_0 = 2;
		G_B46_1 = G_B43_0;
		G_B46_2 = G_B43_1;
		goto IL_0166;
	}

IL_0162:
	{
		G_B46_0 = 1;
		G_B46_1 = G_B44_0;
		G_B46_2 = G_B44_1;
		goto IL_0166;
	}

IL_0165:
	{
		G_B46_0 = 3;
		G_B46_1 = G_B45_0;
		G_B46_2 = G_B45_1;
	}

IL_0166:
	{
		NullCheck(G_B46_2);
		(G_B46_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B46_1), (int32_t)G_B46_0);
		// layer.pool[2] = onnxTranspose[3] == 1 ? 3 : onnxTranspose[3] == 2 ? 1 : onnxTranspose[3] == 3 ? 2 : onnxTranspose[3];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_108 = ___layer0;
		NullCheck(L_108);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_109 = L_108->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = V_1;
		NullCheck(L_110);
		int32_t L_111 = 3;
		int32_t L_112 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		G_B47_0 = 2;
		G_B47_1 = L_109;
		if ((((int32_t)L_112) == ((int32_t)1)))
		{
			G_B52_0 = 2;
			G_B52_1 = L_109;
			goto IL_018b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_113 = V_1;
		NullCheck(L_113);
		int32_t L_114 = 3;
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		G_B48_0 = G_B47_0;
		G_B48_1 = G_B47_1;
		if ((((int32_t)L_115) == ((int32_t)2)))
		{
			G_B51_0 = G_B47_0;
			G_B51_1 = G_B47_1;
			goto IL_0188;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_116 = V_1;
		NullCheck(L_116);
		int32_t L_117 = 3;
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		G_B49_0 = G_B48_0;
		G_B49_1 = G_B48_1;
		if ((((int32_t)L_118) == ((int32_t)3)))
		{
			G_B50_0 = G_B48_0;
			G_B50_1 = G_B48_1;
			goto IL_0185;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = V_1;
		NullCheck(L_119);
		int32_t L_120 = 3;
		int32_t L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		G_B53_0 = L_121;
		G_B53_1 = G_B49_0;
		G_B53_2 = G_B49_1;
		goto IL_018c;
	}

IL_0185:
	{
		G_B53_0 = 2;
		G_B53_1 = G_B50_0;
		G_B53_2 = G_B50_1;
		goto IL_018c;
	}

IL_0188:
	{
		G_B53_0 = 1;
		G_B53_1 = G_B51_0;
		G_B53_2 = G_B51_1;
		goto IL_018c;
	}

IL_018b:
	{
		G_B53_0 = 3;
		G_B53_1 = G_B52_0;
		G_B53_2 = G_B52_1;
	}

IL_018c:
	{
		NullCheck(G_B53_2);
		(G_B53_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B53_1), (int32_t)G_B53_0);
		// return true;
		return (bool)1;
	}

IL_018f:
	{
		// layer.pool = new[] { 0, 1, 2, 3, 4, 5, 6, 7 };
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_122 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_123 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_124 = L_123;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_125 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_124, L_125, /*hidden argument*/NULL);
		NullCheck(L_122);
		L_122->set_pool_6(L_124);
		// layer.pool[2] = onnxTranspose[0] == 0 ? 2 : onnxTranspose[0] == 1 ? 7 : onnxTranspose[0] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_126 = ___layer0;
		NullCheck(L_126);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_127 = L_126->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_128 = V_1;
		NullCheck(L_128);
		int32_t L_129 = 0;
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		G_B55_0 = 2;
		G_B55_1 = L_127;
		if (!L_130)
		{
			G_B58_0 = 2;
			G_B58_1 = L_127;
			goto IL_01c2;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_131 = V_1;
		NullCheck(L_131);
		int32_t L_132 = 0;
		int32_t L_133 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		G_B56_0 = G_B55_0;
		G_B56_1 = G_B55_1;
		if ((((int32_t)L_133) == ((int32_t)1)))
		{
			G_B57_0 = G_B55_0;
			G_B57_1 = G_B55_1;
			goto IL_01bf;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_134 = V_1;
		NullCheck(L_134);
		int32_t L_135 = 0;
		int32_t L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		G_B59_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)2));
		G_B59_1 = G_B56_0;
		G_B59_2 = G_B56_1;
		goto IL_01c3;
	}

IL_01bf:
	{
		G_B59_0 = 7;
		G_B59_1 = G_B57_0;
		G_B59_2 = G_B57_1;
		goto IL_01c3;
	}

IL_01c2:
	{
		G_B59_0 = 2;
		G_B59_1 = G_B58_0;
		G_B59_2 = G_B58_1;
	}

IL_01c3:
	{
		NullCheck(G_B59_2);
		(G_B59_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B59_1), (int32_t)G_B59_0);
		// layer.pool[7] = onnxTranspose[1] == 0 ? 2 : onnxTranspose[1] == 1 ? 7 : onnxTranspose[1] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_137 = ___layer0;
		NullCheck(L_137);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_138 = L_137->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_139 = V_1;
		NullCheck(L_139);
		int32_t L_140 = 1;
		int32_t L_141 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		G_B60_0 = 7;
		G_B60_1 = L_138;
		if (!L_141)
		{
			G_B63_0 = 7;
			G_B63_1 = L_138;
			goto IL_01e0;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_142 = V_1;
		NullCheck(L_142);
		int32_t L_143 = 1;
		int32_t L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		G_B61_0 = G_B60_0;
		G_B61_1 = G_B60_1;
		if ((((int32_t)L_144) == ((int32_t)1)))
		{
			G_B62_0 = G_B60_0;
			G_B62_1 = G_B60_1;
			goto IL_01dd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_145 = V_1;
		NullCheck(L_145);
		int32_t L_146 = 1;
		int32_t L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		G_B64_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)2));
		G_B64_1 = G_B61_0;
		G_B64_2 = G_B61_1;
		goto IL_01e1;
	}

IL_01dd:
	{
		G_B64_0 = 7;
		G_B64_1 = G_B62_0;
		G_B64_2 = G_B62_1;
		goto IL_01e1;
	}

IL_01e0:
	{
		G_B64_0 = 2;
		G_B64_1 = G_B63_0;
		G_B64_2 = G_B63_1;
	}

IL_01e1:
	{
		NullCheck(G_B64_2);
		(G_B64_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B64_1), (int32_t)G_B64_0);
		// layer.pool[4] = onnxTranspose[2] == 0 ? 2 : onnxTranspose[2] == 1 ? 7 : onnxTranspose[2] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_148 = ___layer0;
		NullCheck(L_148);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_149 = L_148->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_150 = V_1;
		NullCheck(L_150);
		int32_t L_151 = 2;
		int32_t L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		G_B65_0 = 4;
		G_B65_1 = L_149;
		if (!L_152)
		{
			G_B68_0 = 4;
			G_B68_1 = L_149;
			goto IL_01fe;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_153 = V_1;
		NullCheck(L_153);
		int32_t L_154 = 2;
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		G_B66_0 = G_B65_0;
		G_B66_1 = G_B65_1;
		if ((((int32_t)L_155) == ((int32_t)1)))
		{
			G_B67_0 = G_B65_0;
			G_B67_1 = G_B65_1;
			goto IL_01fb;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_156 = V_1;
		NullCheck(L_156);
		int32_t L_157 = 2;
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		G_B69_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)2));
		G_B69_1 = G_B66_0;
		G_B69_2 = G_B66_1;
		goto IL_01ff;
	}

IL_01fb:
	{
		G_B69_0 = 7;
		G_B69_1 = G_B67_0;
		G_B69_2 = G_B67_1;
		goto IL_01ff;
	}

IL_01fe:
	{
		G_B69_0 = 2;
		G_B69_1 = G_B68_0;
		G_B69_2 = G_B68_1;
	}

IL_01ff:
	{
		NullCheck(G_B69_2);
		(G_B69_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B69_1), (int32_t)G_B69_0);
		// layer.pool[5] = onnxTranspose[3] == 0 ? 2 : onnxTranspose[3] == 1 ? 7 : onnxTranspose[3] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_159 = ___layer0;
		NullCheck(L_159);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_160 = L_159->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_161 = V_1;
		NullCheck(L_161);
		int32_t L_162 = 3;
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		G_B70_0 = 5;
		G_B70_1 = L_160;
		if (!L_163)
		{
			G_B73_0 = 5;
			G_B73_1 = L_160;
			goto IL_021c;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_164 = V_1;
		NullCheck(L_164);
		int32_t L_165 = 3;
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		G_B71_0 = G_B70_0;
		G_B71_1 = G_B70_1;
		if ((((int32_t)L_166) == ((int32_t)1)))
		{
			G_B72_0 = G_B70_0;
			G_B72_1 = G_B70_1;
			goto IL_0219;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_167 = V_1;
		NullCheck(L_167);
		int32_t L_168 = 3;
		int32_t L_169 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		G_B74_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_169, (int32_t)2));
		G_B74_1 = G_B71_0;
		G_B74_2 = G_B71_1;
		goto IL_021d;
	}

IL_0219:
	{
		G_B74_0 = 7;
		G_B74_1 = G_B72_0;
		G_B74_2 = G_B72_1;
		goto IL_021d;
	}

IL_021c:
	{
		G_B74_0 = 2;
		G_B74_1 = G_B73_0;
		G_B74_2 = G_B73_1;
	}

IL_021d:
	{
		NullCheck(G_B74_2);
		(G_B74_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B74_1), (int32_t)G_B74_0);
		// layer.pool[6] = onnxTranspose[4] == 0 ? 2 : onnxTranspose[4] == 1 ? 7 : onnxTranspose[4] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_170 = ___layer0;
		NullCheck(L_170);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_171 = L_170->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_172 = V_1;
		NullCheck(L_172);
		int32_t L_173 = 4;
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		G_B75_0 = 6;
		G_B75_1 = L_171;
		if (!L_174)
		{
			G_B78_0 = 6;
			G_B78_1 = L_171;
			goto IL_023a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_175 = V_1;
		NullCheck(L_175);
		int32_t L_176 = 4;
		int32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		G_B76_0 = G_B75_0;
		G_B76_1 = G_B75_1;
		if ((((int32_t)L_177) == ((int32_t)1)))
		{
			G_B77_0 = G_B75_0;
			G_B77_1 = G_B75_1;
			goto IL_0237;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_178 = V_1;
		NullCheck(L_178);
		int32_t L_179 = 4;
		int32_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		G_B79_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)2));
		G_B79_1 = G_B76_0;
		G_B79_2 = G_B76_1;
		goto IL_023b;
	}

IL_0237:
	{
		G_B79_0 = 7;
		G_B79_1 = G_B77_0;
		G_B79_2 = G_B77_1;
		goto IL_023b;
	}

IL_023a:
	{
		G_B79_0 = 2;
		G_B79_1 = G_B78_0;
		G_B79_2 = G_B78_1;
	}

IL_023b:
	{
		NullCheck(G_B79_2);
		(G_B79_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B79_1), (int32_t)G_B79_0);
		// return true;
		return (bool)1;
	}

IL_023e:
	{
		// layer.pool = new[] { 0, 1, 2, 3, 4, 5, 6, 7 };
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_181 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_182 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_183 = L_182;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_184 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_183, L_184, /*hidden argument*/NULL);
		NullCheck(L_181);
		L_181->set_pool_6(L_183);
		// layer.pool[2] = onnxTranspose[0] == 0 ? 2 : onnxTranspose[0] == 1 ? 7 : onnxTranspose[0] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_185 = ___layer0;
		NullCheck(L_185);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_186 = L_185->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_187 = V_1;
		NullCheck(L_187);
		int32_t L_188 = 0;
		int32_t L_189 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		G_B81_0 = 2;
		G_B81_1 = L_186;
		if (!L_189)
		{
			G_B84_0 = 2;
			G_B84_1 = L_186;
			goto IL_0271;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_190 = V_1;
		NullCheck(L_190);
		int32_t L_191 = 0;
		int32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		G_B82_0 = G_B81_0;
		G_B82_1 = G_B81_1;
		if ((((int32_t)L_192) == ((int32_t)1)))
		{
			G_B83_0 = G_B81_0;
			G_B83_1 = G_B81_1;
			goto IL_026e;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_193 = V_1;
		NullCheck(L_193);
		int32_t L_194 = 0;
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		G_B85_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)1));
		G_B85_1 = G_B82_0;
		G_B85_2 = G_B82_1;
		goto IL_0272;
	}

IL_026e:
	{
		G_B85_0 = 7;
		G_B85_1 = G_B83_0;
		G_B85_2 = G_B83_1;
		goto IL_0272;
	}

IL_0271:
	{
		G_B85_0 = 2;
		G_B85_1 = G_B84_0;
		G_B85_2 = G_B84_1;
	}

IL_0272:
	{
		NullCheck(G_B85_2);
		(G_B85_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B85_1), (int32_t)G_B85_0);
		// layer.pool[7] = onnxTranspose[1] == 0 ? 2 : onnxTranspose[1] == 1 ? 7 : onnxTranspose[1] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_196 = ___layer0;
		NullCheck(L_196);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_197 = L_196->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_198 = V_1;
		NullCheck(L_198);
		int32_t L_199 = 1;
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		G_B86_0 = 7;
		G_B86_1 = L_197;
		if (!L_200)
		{
			G_B89_0 = 7;
			G_B89_1 = L_197;
			goto IL_028f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_201 = V_1;
		NullCheck(L_201);
		int32_t L_202 = 1;
		int32_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		G_B87_0 = G_B86_0;
		G_B87_1 = G_B86_1;
		if ((((int32_t)L_203) == ((int32_t)1)))
		{
			G_B88_0 = G_B86_0;
			G_B88_1 = G_B86_1;
			goto IL_028c;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_204 = V_1;
		NullCheck(L_204);
		int32_t L_205 = 1;
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		G_B90_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)1));
		G_B90_1 = G_B87_0;
		G_B90_2 = G_B87_1;
		goto IL_0290;
	}

IL_028c:
	{
		G_B90_0 = 7;
		G_B90_1 = G_B88_0;
		G_B90_2 = G_B88_1;
		goto IL_0290;
	}

IL_028f:
	{
		G_B90_0 = 2;
		G_B90_1 = G_B89_0;
		G_B90_2 = G_B89_1;
	}

IL_0290:
	{
		NullCheck(G_B90_2);
		(G_B90_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B90_1), (int32_t)G_B90_0);
		// layer.pool[3] = onnxTranspose[2] == 0 ? 2 : onnxTranspose[2] == 1 ? 7 : onnxTranspose[2] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_207 = ___layer0;
		NullCheck(L_207);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_208 = L_207->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_209 = V_1;
		NullCheck(L_209);
		int32_t L_210 = 2;
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		G_B91_0 = 3;
		G_B91_1 = L_208;
		if (!L_211)
		{
			G_B94_0 = 3;
			G_B94_1 = L_208;
			goto IL_02ad;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_212 = V_1;
		NullCheck(L_212);
		int32_t L_213 = 2;
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		G_B92_0 = G_B91_0;
		G_B92_1 = G_B91_1;
		if ((((int32_t)L_214) == ((int32_t)1)))
		{
			G_B93_0 = G_B91_0;
			G_B93_1 = G_B91_1;
			goto IL_02aa;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_215 = V_1;
		NullCheck(L_215);
		int32_t L_216 = 2;
		int32_t L_217 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		G_B95_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)1));
		G_B95_1 = G_B92_0;
		G_B95_2 = G_B92_1;
		goto IL_02ae;
	}

IL_02aa:
	{
		G_B95_0 = 7;
		G_B95_1 = G_B93_0;
		G_B95_2 = G_B93_1;
		goto IL_02ae;
	}

IL_02ad:
	{
		G_B95_0 = 2;
		G_B95_1 = G_B94_0;
		G_B95_2 = G_B94_1;
	}

IL_02ae:
	{
		NullCheck(G_B95_2);
		(G_B95_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B95_1), (int32_t)G_B95_0);
		// layer.pool[4] = onnxTranspose[3] == 0 ? 2 : onnxTranspose[3] == 1 ? 7 : onnxTranspose[3] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_218 = ___layer0;
		NullCheck(L_218);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_219 = L_218->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_220 = V_1;
		NullCheck(L_220);
		int32_t L_221 = 3;
		int32_t L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		G_B96_0 = 4;
		G_B96_1 = L_219;
		if (!L_222)
		{
			G_B99_0 = 4;
			G_B99_1 = L_219;
			goto IL_02cb;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_223 = V_1;
		NullCheck(L_223);
		int32_t L_224 = 3;
		int32_t L_225 = (L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		G_B97_0 = G_B96_0;
		G_B97_1 = G_B96_1;
		if ((((int32_t)L_225) == ((int32_t)1)))
		{
			G_B98_0 = G_B96_0;
			G_B98_1 = G_B96_1;
			goto IL_02c8;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_226 = V_1;
		NullCheck(L_226);
		int32_t L_227 = 3;
		int32_t L_228 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		G_B100_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)1));
		G_B100_1 = G_B97_0;
		G_B100_2 = G_B97_1;
		goto IL_02cc;
	}

IL_02c8:
	{
		G_B100_0 = 7;
		G_B100_1 = G_B98_0;
		G_B100_2 = G_B98_1;
		goto IL_02cc;
	}

IL_02cb:
	{
		G_B100_0 = 2;
		G_B100_1 = G_B99_0;
		G_B100_2 = G_B99_1;
	}

IL_02cc:
	{
		NullCheck(G_B100_2);
		(G_B100_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B100_1), (int32_t)G_B100_0);
		// layer.pool[5] = onnxTranspose[4] == 0 ? 2 : onnxTranspose[4] == 1 ? 7 : onnxTranspose[4] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_229 = ___layer0;
		NullCheck(L_229);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_230 = L_229->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_231 = V_1;
		NullCheck(L_231);
		int32_t L_232 = 4;
		int32_t L_233 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		G_B101_0 = 5;
		G_B101_1 = L_230;
		if (!L_233)
		{
			G_B104_0 = 5;
			G_B104_1 = L_230;
			goto IL_02e9;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_234 = V_1;
		NullCheck(L_234);
		int32_t L_235 = 4;
		int32_t L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		G_B102_0 = G_B101_0;
		G_B102_1 = G_B101_1;
		if ((((int32_t)L_236) == ((int32_t)1)))
		{
			G_B103_0 = G_B101_0;
			G_B103_1 = G_B101_1;
			goto IL_02e6;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_237 = V_1;
		NullCheck(L_237);
		int32_t L_238 = 4;
		int32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		G_B105_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_239, (int32_t)1));
		G_B105_1 = G_B102_0;
		G_B105_2 = G_B102_1;
		goto IL_02ea;
	}

IL_02e6:
	{
		G_B105_0 = 7;
		G_B105_1 = G_B103_0;
		G_B105_2 = G_B103_1;
		goto IL_02ea;
	}

IL_02e9:
	{
		G_B105_0 = 2;
		G_B105_1 = G_B104_0;
		G_B105_2 = G_B104_1;
	}

IL_02ea:
	{
		NullCheck(G_B105_2);
		(G_B105_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B105_1), (int32_t)G_B105_0);
		// layer.pool[6] = onnxTranspose[5] == 0 ? 2 : onnxTranspose[5] == 1 ? 7 : onnxTranspose[5] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_240 = ___layer0;
		NullCheck(L_240);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_241 = L_240->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_242 = V_1;
		NullCheck(L_242);
		int32_t L_243 = 5;
		int32_t L_244 = (L_242)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		G_B106_0 = 6;
		G_B106_1 = L_241;
		if (!L_244)
		{
			G_B109_0 = 6;
			G_B109_1 = L_241;
			goto IL_0307;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_245 = V_1;
		NullCheck(L_245);
		int32_t L_246 = 5;
		int32_t L_247 = (L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		G_B107_0 = G_B106_0;
		G_B107_1 = G_B106_1;
		if ((((int32_t)L_247) == ((int32_t)1)))
		{
			G_B108_0 = G_B106_0;
			G_B108_1 = G_B106_1;
			goto IL_0304;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_248 = V_1;
		NullCheck(L_248);
		int32_t L_249 = 5;
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		G_B110_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_250, (int32_t)1));
		G_B110_1 = G_B107_0;
		G_B110_2 = G_B107_1;
		goto IL_0308;
	}

IL_0304:
	{
		G_B110_0 = 7;
		G_B110_1 = G_B108_0;
		G_B110_2 = G_B108_1;
		goto IL_0308;
	}

IL_0307:
	{
		G_B110_0 = 2;
		G_B110_1 = G_B109_0;
		G_B110_2 = G_B109_1;
	}

IL_0308:
	{
		NullCheck(G_B110_2);
		(G_B110_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B110_1), (int32_t)G_B110_0);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__21_0(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__21_0_m5F7D901A45ED6B0C756E0EE36154888A376A9F69 (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layer0, ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572 * ___net1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	{
		// if (layer.inputs.Length == 1)
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___layer0;
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0->get_inputs_10();
		NullCheck(L_1);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0192;
		}
	}
	{
		// var size = layer.pool;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = ___layer0;
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2->get_pool_6();
		V_0 = L_3;
		// if (size.Length == 1)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		// layer.pool = new[] { _, _, size[0], _, _, 1, 1, 1 }; // [1,1,N,1,1,1,1,1]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_5 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____7A602FDD8335CC6EEF176F345DBB9ED785433541713F8B196E5F17813C9F985B_28_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = L_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_12);
		NullCheck(L_5);
		L_5->set_pool_6(L_9);
		goto IL_0192;
	}

IL_003d:
	{
		// else if (size.Length == 2)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = V_0;
		NullCheck(L_13);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_006b;
		}
	}
	{
		// layer.pool = new[] { _, _, size[0], _, _, 1, 1, size[1] }; // [1, 1, N, 1, 1, 1, 1, C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_14 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = L_15;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____815A4BC5EE36C48F5FAECF70D0327B6982FEA4706EF935110C054A6B7130AAA0_33_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = L_16;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		int32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_21);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = L_18;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 1;
		int32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_25);
		NullCheck(L_14);
		L_14->set_pool_6(L_22);
		goto IL_0192;
	}

IL_006b:
	{
		// else if (size.Length == 3)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = V_0;
		NullCheck(L_26);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))) == ((uint32_t)3))))
		{
			goto IL_009f;
		}
	}
	{
		// layer.pool = new[] { _, _, size[0], _, _, _, size[1], size[2] }; // [1,1,N,1,1,1,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_27 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = L_28;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_30 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____5145FE9D19401810AA323BC5061F99858DA8917AFD40F52CDA68F7D1D984FF32_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_29, L_30, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = L_29;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 0;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_34);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = L_31;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = 1;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_38);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = L_35;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = 2;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_42);
		NullCheck(L_27);
		L_27->set_pool_6(L_39);
		goto IL_0192;
	}

IL_009f:
	{
		// else if (size.Length == 4)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = V_0;
		NullCheck(L_43);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))) == ((uint32_t)4))))
		{
			goto IL_00d9;
		}
	}
	{
		// layer.pool = new[] { _, _, size[0], _, _, size[1], size[2], size[3] }; // [1,1,N,1,1,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_44 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = L_45;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_47 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____AB1155D3B768834956B8FD0F4D04CCC86BC231F8DD7A2D5DE258270A97536C30_47_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_46, L_47, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = L_46;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 0;
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_51);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = L_48;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 1;
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_55);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = L_52;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 2;
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_59);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = L_56;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 3;
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_63);
		NullCheck(L_44);
		L_44->set_pool_6(L_60);
		goto IL_0192;
	}

IL_00d9:
	{
		// else if (size.Length == 5)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_0;
		NullCheck(L_64);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))) == ((uint32_t)5))))
		{
			goto IL_0116;
		}
	}
	{
		// layer.pool = new[] { _, _, size[0], _, size[1], size[2], size[3], size[4] }; // [1,1,N,1,D,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_65 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = L_66;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_68 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____9FA7EA8C9718B155E625E113B95F69DBE355DC408C62EB9C43321A62FF9FC3D6_46_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_67, L_68, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_67;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = 0;
		int32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_72);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_73 = L_69;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = V_0;
		NullCheck(L_74);
		int32_t L_75 = 1;
		int32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_76);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = L_73;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = V_0;
		NullCheck(L_78);
		int32_t L_79 = 2;
		int32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_80);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = L_77;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = V_0;
		NullCheck(L_82);
		int32_t L_83 = 3;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_84);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = L_81;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = 4;
		int32_t L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_88);
		NullCheck(L_65);
		L_65->set_pool_6(L_85);
		goto IL_0192;
	}

IL_0116:
	{
		// else if (size.Length == 6)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_89 = V_0;
		NullCheck(L_89);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))) == ((uint32_t)6))))
		{
			goto IL_0156;
		}
	}
	{
		// layer.pool = new[] { _, _, size[0], size[1], size[2], size[3], size[4], size[5] }; // [1,1,N,T,D,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_90 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_92 = L_91;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_93 = L_92;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_94 = L_93;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = 0;
		int32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_97);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_98 = L_94;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_99 = V_0;
		NullCheck(L_99);
		int32_t L_100 = 1;
		int32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_101);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_102 = L_98;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = 2;
		int32_t L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_105);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_106 = L_102;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_107 = V_0;
		NullCheck(L_107);
		int32_t L_108 = 3;
		int32_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_109);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = L_106;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_111 = V_0;
		NullCheck(L_111);
		int32_t L_112 = 4;
		int32_t L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_113);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_114 = L_110;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_115 = V_0;
		NullCheck(L_115);
		int32_t L_116 = 5;
		int32_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_117);
		NullCheck(L_90);
		L_90->set_pool_6(L_114);
		goto IL_0192;
	}

IL_0156:
	{
		// layer.pool = new[] { size[0], size[1], size[2], size[3], size[4], size[5], size[6], size[7] }; // [S,R,N,T,D,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_118 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_120 = L_119;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_121 = V_0;
		NullCheck(L_121);
		int32_t L_122 = 0;
		int32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_123);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_124 = L_120;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_125 = V_0;
		NullCheck(L_125);
		int32_t L_126 = 1;
		int32_t L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_127);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_128 = L_124;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_129 = V_0;
		NullCheck(L_129);
		int32_t L_130 = 2;
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_131);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_132 = L_128;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_133 = V_0;
		NullCheck(L_133);
		int32_t L_134 = 3;
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_135);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_136 = L_132;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_137 = V_0;
		NullCheck(L_137);
		int32_t L_138 = 4;
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_139);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_140 = L_136;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_141 = V_0;
		NullCheck(L_141);
		int32_t L_142 = 5;
		int32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_143);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_144 = L_140;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_145 = V_0;
		NullCheck(L_145);
		int32_t L_146 = 6;
		int32_t L_147 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_147);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = L_144;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_149 = V_0;
		NullCheck(L_149);
		int32_t L_150 = 7;
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_151);
		NullCheck(L_118);
		L_118->set_pool_6(L_148);
	}

IL_0192:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__21_1(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__21_1_m5C39D26B7017B6E8B2991DBCBFFB8248F571588F (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layer0, ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572 * ___net1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	int32_t G_B5_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B6_2 = NULL;
	int32_t G_B8_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B8_1 = NULL;
	int32_t G_B7_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B7_1 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B9_2 = NULL;
	int32_t G_B13_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B14_2 = NULL;
	int32_t G_B16_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B15_1 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B17_2 = NULL;
	int32_t G_B19_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B19_1 = NULL;
	int32_t G_B18_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B18_1 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B20_2 = NULL;
	int32_t G_B26_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B26_1 = NULL;
	int32_t G_B25_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B25_1 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B27_2 = NULL;
	int32_t G_B29_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B29_1 = NULL;
	int32_t G_B28_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B28_1 = NULL;
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B30_2 = NULL;
	int32_t G_B32_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B32_1 = NULL;
	int32_t G_B31_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B31_1 = NULL;
	int32_t G_B33_0 = 0;
	int32_t G_B33_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B33_2 = NULL;
	int32_t G_B35_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B35_1 = NULL;
	int32_t G_B34_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B34_1 = NULL;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B36_2 = NULL;
	int32_t G_B38_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B38_1 = NULL;
	int32_t G_B37_0 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B37_1 = NULL;
	int32_t G_B39_0 = 0;
	int32_t G_B39_1 = 0;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* G_B39_2 = NULL;
	{
		// var size = layer.pool;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___layer0;
		NullCheck(L_0);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0->get_pool_6();
		V_0 = L_1;
		// if (size.Length == 1)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = V_0;
		NullCheck(L_2);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		// layer.pool = new[] { 0, 1, 2, 3 }; // [N,_,_,_]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_3 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_pool_6(L_5);
		// layer.pool[0] = size[0];
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_7 = ___layer0;
		NullCheck(L_7);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		// }
		goto IL_022a;
	}

IL_0034:
	{
		// else if (size.Length == 2)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = V_0;
		NullCheck(L_12);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_0080;
		}
	}
	{
		// layer.pool = new[] { 0, 1, 2, 3 }; // [N, _, _, C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_13 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = L_14;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_pool_6(L_15);
		// layer.pool[0] = size[0] == 0 ? 0 : size[0] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_17 = ___layer0;
		NullCheck(L_17);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = L_17->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		int32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B4_0 = 0;
		G_B4_1 = L_18;
		if (!L_21)
		{
			G_B5_0 = 0;
			G_B5_1 = L_18;
			goto IL_0064;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 0;
		int32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0065;
	}

IL_0064:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0065:
	{
		NullCheck(G_B6_2);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (int32_t)G_B6_0);
		// layer.pool[3] = size[1] == 0 ? 0 : size[1] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_25 = ___layer0;
		NullCheck(L_25);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = L_25->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 1;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		G_B7_0 = 3;
		G_B7_1 = L_26;
		if (!L_29)
		{
			G_B8_0 = 3;
			G_B8_1 = L_26;
			goto IL_0079;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 1;
		int32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)2));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_007a;
	}

IL_0079:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_007a:
	{
		NullCheck(G_B9_2);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (int32_t)G_B9_0);
		// }
		goto IL_022a;
	}

IL_0080:
	{
		// else if (size.Length == 3)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = V_0;
		NullCheck(L_33);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))) == ((uint32_t)3))))
		{
			goto IL_00e1;
		}
	}
	{
		// layer.pool = new[] { 0, 1, 2, 3 }; // [N, _, W, C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_34 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = L_35;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_50_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->set_pool_6(L_36);
		// layer.pool[0] = size[0] == 0 ? 0 : size[0] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_38 = ___layer0;
		NullCheck(L_38);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = L_38->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = 0;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		G_B12_0 = 0;
		G_B12_1 = L_39;
		if (!L_42)
		{
			G_B13_0 = 0;
			G_B13_1 = L_39;
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = V_0;
		NullCheck(L_43);
		int32_t L_44 = 0;
		int32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		G_B14_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00b1:
	{
		NullCheck(G_B14_2);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (int32_t)G_B14_0);
		// layer.pool[2] = size[1] == 0 ? 0 : size[1] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_46 = ___layer0;
		NullCheck(L_46);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = L_46->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 1;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		G_B15_0 = 2;
		G_B15_1 = L_47;
		if (!L_50)
		{
			G_B16_0 = 2;
			G_B16_1 = L_47;
			goto IL_00c5;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = 1;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		G_B17_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B17_0 = 0;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00c6:
	{
		NullCheck(G_B17_2);
		(G_B17_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B17_1), (int32_t)G_B17_0);
		// layer.pool[3] = size[2] == 0 ? 0 : size[2] + 1;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_54 = ___layer0;
		NullCheck(L_54);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_55 = L_54->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = 2;
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		G_B18_0 = 3;
		G_B18_1 = L_55;
		if (!L_58)
		{
			G_B19_0 = 3;
			G_B19_1 = L_55;
			goto IL_00da;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = 2;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		G_B20_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_00db;
	}

IL_00da:
	{
		G_B20_0 = 0;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_00db:
	{
		NullCheck(G_B20_2);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (int32_t)G_B20_0);
		// }
		goto IL_022a;
	}

IL_00e1:
	{
		// else if (size.Length == 4)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = V_0;
		NullCheck(L_62);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))) == ((uint32_t)4))))
		{
			goto IL_00f3;
		}
	}
	{
		// layer.pool = size; // [N,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_63 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = V_0;
		NullCheck(L_63);
		L_63->set_pool_6(L_64);
		goto IL_022a;
	}

IL_00f3:
	{
		// else if (size.Length == 5)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = V_0;
		NullCheck(L_65);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))) == ((uint32_t)5))))
		{
			goto IL_0181;
		}
	}
	{
		// layer.pool = new[] { 0, 1, 2, 3, 4, 5, 6, 7 }; // [_,_,N,_,D,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_66 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_68 = L_67;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_69 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_68, L_69, /*hidden argument*/NULL);
		NullCheck(L_66);
		L_66->set_pool_6(L_68);
		// layer.pool[2] = size[0] == 0 ? 2 : size[0] + 3;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_70 = ___layer0;
		NullCheck(L_70);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = L_70->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = V_0;
		NullCheck(L_72);
		int32_t L_73 = 0;
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B25_0 = 2;
		G_B25_1 = L_71;
		if (!L_74)
		{
			G_B26_0 = 2;
			G_B26_1 = L_71;
			goto IL_0126;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = V_0;
		NullCheck(L_75);
		int32_t L_76 = 0;
		int32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		G_B27_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)3));
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		goto IL_0127;
	}

IL_0126:
	{
		G_B27_0 = 2;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
	}

IL_0127:
	{
		NullCheck(G_B27_2);
		(G_B27_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B27_1), (int32_t)G_B27_0);
		// layer.pool[4] = size[1] == 0 ? 2 : size[1] + 3;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_78 = ___layer0;
		NullCheck(L_78);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = L_78->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = 1;
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		G_B28_0 = 4;
		G_B28_1 = L_79;
		if (!L_82)
		{
			G_B29_0 = 4;
			G_B29_1 = L_79;
			goto IL_013b;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = V_0;
		NullCheck(L_83);
		int32_t L_84 = 1;
		int32_t L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		G_B30_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)3));
		G_B30_1 = G_B28_0;
		G_B30_2 = G_B28_1;
		goto IL_013c;
	}

IL_013b:
	{
		G_B30_0 = 2;
		G_B30_1 = G_B29_0;
		G_B30_2 = G_B29_1;
	}

IL_013c:
	{
		NullCheck(G_B30_2);
		(G_B30_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B30_1), (int32_t)G_B30_0);
		// layer.pool[5] = size[2] == 0 ? 2 : size[2] + 3;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_86 = ___layer0;
		NullCheck(L_86);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_87 = L_86->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_88 = V_0;
		NullCheck(L_88);
		int32_t L_89 = 2;
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		G_B31_0 = 5;
		G_B31_1 = L_87;
		if (!L_90)
		{
			G_B32_0 = 5;
			G_B32_1 = L_87;
			goto IL_0150;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = V_0;
		NullCheck(L_91);
		int32_t L_92 = 2;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		G_B33_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)3));
		G_B33_1 = G_B31_0;
		G_B33_2 = G_B31_1;
		goto IL_0151;
	}

IL_0150:
	{
		G_B33_0 = 2;
		G_B33_1 = G_B32_0;
		G_B33_2 = G_B32_1;
	}

IL_0151:
	{
		NullCheck(G_B33_2);
		(G_B33_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B33_1), (int32_t)G_B33_0);
		// layer.pool[6] = size[3] == 0 ? 2 : size[3] + 3;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_94 = ___layer0;
		NullCheck(L_94);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_95 = L_94->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = V_0;
		NullCheck(L_96);
		int32_t L_97 = 3;
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		G_B34_0 = 6;
		G_B34_1 = L_95;
		if (!L_98)
		{
			G_B35_0 = 6;
			G_B35_1 = L_95;
			goto IL_0165;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_99 = V_0;
		NullCheck(L_99);
		int32_t L_100 = 3;
		int32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		G_B36_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)3));
		G_B36_1 = G_B34_0;
		G_B36_2 = G_B34_1;
		goto IL_0166;
	}

IL_0165:
	{
		G_B36_0 = 2;
		G_B36_1 = G_B35_0;
		G_B36_2 = G_B35_1;
	}

IL_0166:
	{
		NullCheck(G_B36_2);
		(G_B36_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B36_1), (int32_t)G_B36_0);
		// layer.pool[7] = size[4] == 0 ? 2 : size[4] + 3;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_102 = ___layer0;
		NullCheck(L_102);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = L_102->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105 = 4;
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		G_B37_0 = 7;
		G_B37_1 = L_103;
		if (!L_106)
		{
			G_B38_0 = 7;
			G_B38_1 = L_103;
			goto IL_017a;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_107 = V_0;
		NullCheck(L_107);
		int32_t L_108 = 4;
		int32_t L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		G_B39_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)3));
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		goto IL_017b;
	}

IL_017a:
	{
		G_B39_0 = 2;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
	}

IL_017b:
	{
		NullCheck(G_B39_2);
		(G_B39_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B39_1), (int32_t)G_B39_0);
		// }
		goto IL_022a;
	}

IL_0181:
	{
		// else if (size.Length == 6)
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = V_0;
		NullCheck(L_110);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length)))) == ((uint32_t)6))))
		{
			goto IL_01ee;
		}
	}
	{
		// layer.pool = new[] { 0, 1, 2, 3, 4, 5, 6, 7 }; // [1,1,N,T,D,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_111 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_112 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_113 = L_112;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_114 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t4EDFF45D19F7B775E6E49EC10B6183BA7D207A5B____FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_65_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_113, L_114, /*hidden argument*/NULL);
		NullCheck(L_111);
		L_111->set_pool_6(L_113);
		// layer.pool[2] = size[0] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_115 = ___layer0;
		NullCheck(L_115);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_116 = L_115->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_117 = V_0;
		NullCheck(L_117);
		int32_t L_118 = 0;
		int32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)2)));
		// layer.pool[3] = size[1] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_120 = ___layer0;
		NullCheck(L_120);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_121 = L_120->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_122 = V_0;
		NullCheck(L_122);
		int32_t L_123 = 1;
		int32_t L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)2)));
		// layer.pool[4] = size[2] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_125 = ___layer0;
		NullCheck(L_125);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_126 = L_125->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_127 = V_0;
		NullCheck(L_127);
		int32_t L_128 = 2;
		int32_t L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)2)));
		// layer.pool[5] = size[3] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_130 = ___layer0;
		NullCheck(L_130);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_131 = L_130->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_132 = V_0;
		NullCheck(L_132);
		int32_t L_133 = 3;
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)2)));
		// layer.pool[6] = size[4] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_135 = ___layer0;
		NullCheck(L_135);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_136 = L_135->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_137 = V_0;
		NullCheck(L_137);
		int32_t L_138 = 4;
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)2)));
		// layer.pool[7] = size[5] + 2;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_140 = ___layer0;
		NullCheck(L_140);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_141 = L_140->get_pool_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_142 = V_0;
		NullCheck(L_142);
		int32_t L_143 = 5;
		int32_t L_144 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)2)));
		// }
		goto IL_022a;
	}

IL_01ee:
	{
		// layer.pool = new[] { size[0], size[1], size[2], size[3], size[4], size[5], size[6], size[7] }; // [S,R,N,T,D,H,W,C]
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_145 = ___layer0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_146 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)8);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_147 = L_146;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = V_0;
		NullCheck(L_148);
		int32_t L_149 = 0;
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_150);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_151 = L_147;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_152 = V_0;
		NullCheck(L_152);
		int32_t L_153 = 1;
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		NullCheck(L_151);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_154);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_155 = L_151;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_156 = V_0;
		NullCheck(L_156);
		int32_t L_157 = 2;
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_158);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_159 = L_155;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_160 = V_0;
		NullCheck(L_160);
		int32_t L_161 = 3;
		int32_t L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_162);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_163 = L_159;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_164 = V_0;
		NullCheck(L_164);
		int32_t L_165 = 4;
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_166);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_167 = L_163;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_168 = V_0;
		NullCheck(L_168);
		int32_t L_169 = 5;
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_170);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_171 = L_167;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_172 = V_0;
		NullCheck(L_172);
		int32_t L_173 = 6;
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_174);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_175 = L_171;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_176 = V_0;
		NullCheck(L_176);
		int32_t L_177 = 7;
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		NullCheck(L_175);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_178);
		NullCheck(L_145);
		L_145->set_pool_6(L_175);
	}

IL_022a:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__21_3(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__21_3_mBDD38AC04658D532786FFED66651F0E1A9A518DD (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layer0, ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572 * ___net1, const RuntimeMethod* method)
{
	{
		// layer.type = Layer.Type.Nop;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___layer0;
		NullCheck(L_0);
		L_0->set_type_1(0);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__21_4(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__21_4_m19B48B86BC7DB117E79437DB2D83DF5AF4211418 (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layer0, ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572 * ___net1, const RuntimeMethod* method)
{
	{
		// layer.type = Layer.Type.Nop;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___layer0;
		NullCheck(L_0);
		L_0->set_type_1(0);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c::<InstantiateRewriterNHWCToNHWC>b__21_5(Unity.Barracuda.Layer,Unity.Barracuda.ModelBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CInstantiateRewriterNHWCToNHWCU3Eb__21_5_m6EB6AFC530282F3E48DB8AFEA1B08024C45824CC (U3CU3Ec_t6BCE11DD67CAF86250E88FE09F106945E63E7EC1 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___layer0, ModelBuilder_t3E234B46DDB72BA05F5016611A5447F9BCBA6572 * ___net1, const RuntimeMethod* method)
{
	{
		// layer.type = Layer.Type.Nop;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___layer0;
		NullCheck(L_0);
		L_0->set_type_1(0);
		// return true;
		return (bool)1;
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
// System.Void Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mCF0F09F5D57569312296D74B4617DBFD954925CA (U3CU3Ec__DisplayClass36_0_t97EE57A0095811F97DF74FEC41206DAECA612304 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.NCHWToNHWCPass/<>c__DisplayClass36_0::<Rewrite>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3CRewriteU3Eb__0_mF57300629C2404E9ACD026F69F0F7A2AC3A5FD42 (U3CU3Ec__DisplayClass36_0_t97EE57A0095811F97DF74FEC41206DAECA612304 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___alreadyOutputLayer0, const RuntimeMethod* method)
{
	{
		// if (nhwc.layers.Exists(alreadyOutputLayer => alreadyOutputLayer.name == l.name))
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___alreadyOutputLayer0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = __this->get_l_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
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


// Conversion methods for marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_pinvoke(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke& marshaled)
{
	Exception_t* ___kernel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'kernel' of type 'CompiledInstruction'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___kernel_0Exception, NULL);
}
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_pinvoke_back(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke& marshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled)
{
	Exception_t* ___kernel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'kernel' of type 'CompiledInstruction'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___kernel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_pinvoke_cleanup(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_com(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com& marshaled)
{
	Exception_t* ___kernel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'kernel' of type 'CompiledInstruction'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___kernel_0Exception, NULL);
}
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_com_back(const CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com& marshaled, CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46& unmarshaled)
{
	Exception_t* ___kernel_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'kernel' of type 'CompiledInstruction'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___kernel_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledInstruction
IL2CPP_EXTERN_C void CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshal_com_cleanup(CompiledInstruction_tCD066FABF7A516934C3FA95084D686FAFFF03B46_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
IL2CPP_EXTERN_C void CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshal_pinvoke(const CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5& unmarshaled, CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___instructions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'instructions' of type 'CompiledLayer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___instructions_1Exception, NULL);
}
IL2CPP_EXTERN_C void CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshal_pinvoke_back(const CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_pinvoke& marshaled, CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5& unmarshaled)
{
	Exception_t* ___instructions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'instructions' of type 'CompiledLayer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___instructions_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
IL2CPP_EXTERN_C void CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshal_pinvoke_cleanup(CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
IL2CPP_EXTERN_C void CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshal_com(const CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5& unmarshaled, CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_com& marshaled)
{
	Exception_t* ___instructions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'instructions' of type 'CompiledLayer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___instructions_1Exception, NULL);
}
IL2CPP_EXTERN_C void CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshal_com_back(const CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_com& marshaled, CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5& unmarshaled)
{
	Exception_t* ___instructions_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'instructions' of type 'CompiledLayer'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___instructions_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.PrecompiledComputeOps/CompiledLayer
IL2CPP_EXTERN_C void CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshal_com_cleanup(CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5_marshaled_com& marshaled)
{
}
// Unity.Barracuda.ComputeKernel Unity.Barracuda.PrecompiledComputeOps/CompiledLayer::get_kernel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  CompiledLayer_get_kernel_m4C628D5625CA0AF548B8A46FC468F13A9ED7F95C (CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5 * __this, const RuntimeMethod* method)
{
	ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ComputeKernel kernel { get { return (instructions == null) ? new ComputeKernel() : instructions[0].kernel; } }
		CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F* L_0 = __this->get_instructions_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		CompiledInstructionU5BU5D_tBA4CCFCEB2637570DF85BDA757706EBB6A58767F* L_1 = __this->get_instructions_1();
		NullCheck(L_1);
		ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_kernel_0();
		return L_2;
	}

IL_001a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9 ));
		ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  CompiledLayer_get_kernel_m4C628D5625CA0AF548B8A46FC468F13A9ED7F95C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5 * _thisAdjusted = reinterpret_cast<CompiledLayer_t804FC182E46A44541E39FFFCC03E67805EAD09C5 *>(__this + _offset);
	ComputeKernel_t584088C075F838DBBD38479A8C8F3E5682A132C9  _returnValue;
	_returnValue = CompiledLayer_get_kernel_m4C628D5625CA0AF548B8A46FC468F13A9ED7F95C(_thisAdjusted, method);
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
// System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m58C49BAFD6FC593CE5948940F8D8B61573C80D2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * L_0 = (U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 *)il2cpp_codegen_object_new(U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m323A3F5B29F9F9E81323B7ADF61DF59C499FD2BC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m323A3F5B29F9F9E81323B7ADF61DF59C499FD2BC (U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<Run>b__0_0(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRunU3Eb__0_0_m53E0F93D78AF25B9580C7651549C6E4E1D14FCF0 (U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// IEnumerable<string> preserve = model.memories.Select(mem => mem.input).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_input_1();
		return L_1;
	}
}
// System.String Unity.Barracuda.Compiler.Passes.PreserveLayersPass/<>c::<Run>b__0_1(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRunU3Eb__0_1_m8668F8ABA6E3E51BA9394C0171BC8E3CE9DA0CAF (U3CU3Ec_t3AC9D67E953BFEFB054F4924C3937994EA7A35C6 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___mem0, const RuntimeMethod* method)
{
	{
		// model.memories.Select(mem => mem.output)).Concat(
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___mem0;
		String_t* L_1 = L_0.get_output_2();
		return L_1;
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
// System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m423F5C4A8653D68609FC17BC62A7897D5A02D8A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * L_0 = (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE *)il2cpp_codegen_object_new(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6DB7A08FE5A3F7852D2BFDC3400DF3CF8C9F5F0D(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.ReferenceCPUOps/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6DB7A08FE5A3F7852D2BFDC3400DF3CF8C9F5F0D (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Add>b__98_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CAddU3Eb__98_0_m4A708D60A1A957FF7C40D879C045BC135949A34E (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => a + b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		return ((float)il2cpp_codegen_add((float)L_0, (float)L_1));
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Sub>b__99_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CSubU3Eb__99_0_mC442EFF3C20BE46678DD1644DBD5761AAA14B5A7 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => a - b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		return ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mul>b__100_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMulU3Eb__100_0_m8B87E0DD3050A83450B4D8D70ACD098CCA992E29 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => a * b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		return ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Div>b__101_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CDivU3Eb__101_0_m6E008591371534EC0667D7692850344D8B60D2C5 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => a / b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		return ((float)((float)L_0/(float)L_1));
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Pow>b__102_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CPowU3Eb__102_0_m547796A6856953024E4BD33768A6BA0E179FFD02 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => Mathf.Pow(a, b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2;
		L_2 = powf(L_0, L_1);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Min>b__103_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMinU3Eb__103_0_m51B91BFC817B468B51E1E4D1AD70107CABD0F45E (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => Mathf.Min(a, b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2;
		L_2 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Max>b__104_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMaxU3Eb__104_0_mDEA17394E5215FBDFAE80F6FB25972895F678662 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => Mathf.Max(a, b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2;
		L_2 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Mean>b__105_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CMeanU3Eb__105_0_mAD6C542C27FCE8D25CD23D88B4253142DE5D7829 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	{
		// Func<float, float, float> op = (a, b) => a + b;
		float L_0 = ___a0;
		float L_1 = ___b1;
		return ((float)il2cpp_codegen_add((float)L_0, (float)L_1));
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Greater>b__114_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGreaterU3Eb__114_0_mFD7BB76B1EC8F748DAE59CE1E895F507FCD15F6E (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle(a > b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)((((float)L_0) > ((float)L_1))? 1 : 0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<GreaterEqual>b__115_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CGreaterEqualU3Eb__115_0_mC991D6803FD7759EA04C41C67F9AEFF6058EEE63 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle(a >= b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)((((int32_t)((!(((float)L_0) >= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Less>b__116_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CLessU3Eb__116_0_m08D93F7CD24E16DCC0B18DAFC5A9FCCCCAFE9A27 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle(a < b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)((((float)L_0) < ((float)L_1))? 1 : 0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LessEqual>b__117_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CLessEqualU3Eb__117_0_m405A65A5B9FFE18F1089B1317338E647DE7ECDBB (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle(a <= b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)((((int32_t)((!(((float)L_0) <= ((float)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<Equal>b__118_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CEqualU3Eb__118_0_mDFC408034B8BE950B73AC0CCBE1072BC76DE3412 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle(a == b);
		float L_0 = ___a0;
		float L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)((((float)L_0) == ((float)L_1))? 1 : 0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalOr>b__119_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CLogicalOrU3Eb__119_0_mCE17A6BD3FC2AC4B2ADE2225FBDABA07A4CDFA87 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle( Convert.ToBoolean(a) || Convert.ToBoolean(b) );
		float L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		float L_2 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalAnd>b__120_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CLogicalAndU3Eb__120_0_mC1A0FB7B0DD28F6AD4FF95A156636F1487FE0D31 (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle( Convert.ToBoolean(a) && Convert.ToBoolean(b) );
		float L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		float L_2 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c::<LogicalXor>b__121_0(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CLogicalXorU3Eb__121_0_mCAE9EB2FB2C119A10BF62697BB1BBD14B0593B0A (U3CU3Ec_tAC1615292250F523AA3DB93CAF8BE0D01BFAC6EE * __this, float ___a0, float ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Func<float, float, float> logicOp = (a, b) => Convert.ToSingle( Convert.ToBoolean(a) ^ Convert.ToBoolean(b) );
		float L_0 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319(L_0, /*hidden argument*/NULL);
		float L_2 = ___b1;
		bool L_3;
		L_3 = Convert_ToBoolean_m0FAEA3827C63F9A70BF1A8893E0C9E1E82B8A319(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Convert_ToSingle_mA19B0A63304F0C4403C7FCE6D3A40DDCA02654C7((bool)((int32_t)((int32_t)L_1^(int32_t)L_3)), /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m977A43B30826933031FCD2E97BC505CE3128C0F4 (U3CU3Ec__DisplayClass33_0_tC21EF5CE455717B8DEDC0D66C630BCA38FE67CA6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass33_0::<Border2D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass33_0_U3CBorder2DU3Eb__0_mC48DE403F41A010B2295A1E67D2F07775358F9BB (U3CU3Ec__DisplayClass33_0_tC21EF5CE455717B8DEDC0D66C630BCA38FE67CA6 * __this, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___tensor0, int32_t ___b1, int32_t ___d2, int32_t ___h3, int32_t ___w4, int32_t ___c5, const RuntimeMethod* method)
{
	{
		// Func<Tensor, int, int, int, int, int, float> padOp = (tensor, b, d, h, w, c) => value;
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
// System.Void Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mA05663F6BC12C289902C4FFCD586A45379125B44 (U3CU3Ec__DisplayClass34_0_t2552CEC72F3B25C49BFE479AFD6892B4663136E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Unity.Barracuda.ReferenceCPUOps/<>c__DisplayClass34_0::<Border3D>b__0(Unity.Barracuda.Tensor,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass34_0_U3CBorder3DU3Eb__0_m3890784D5515676FE071393071C9D83AFECA8BAA (U3CU3Ec__DisplayClass34_0_t2552CEC72F3B25C49BFE479AFD6892B4663136E7 * __this, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___tensor0, int32_t ___b1, int32_t ___d2, int32_t ___h3, int32_t ___w4, int32_t ___c5, const RuntimeMethod* method)
{
	{
		// Func<Tensor, int, int, int, int, int, float> padOp = (tensor, b, d, h, w, c) => value;
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
// System.Void Unity.Barracuda.ReferenceCPUOps/Seed::.ctor(UnityEngine.Random/State[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seed__ctor_mB0D5FF72DDBE3AEA20386CA265D622D523D1B69C (Seed_t3D4DA11019C044BDD2624126499FBC3DD38AD963 * __this, StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** ___storage0, int32_t ___initialSeed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Seed(ref Random.State[] storage, int initialSeed)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// m_EngineSeed = Random.state;
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_0;
		L_0 = Random_get_state_mB5BB303DE4D0FD30AB8C8060EC0925C38A4A9020(/*hidden argument*/NULL);
		__this->set_m_EngineSeed_1(L_0);
		// if (storage == null)
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** L_1 = ___storage0;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* L_2 = *((StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A**)L_1);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		// storage = new Random.State[1];
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** L_3 = ___storage0;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* L_4 = (StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A*)(StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A*)SZArrayNew(StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A_il2cpp_TypeInfo_var, (uint32_t)1);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_4);
		// Random.InitState(initialSeed);
		int32_t L_5 = ___initialSeed1;
		Random_InitState_m9030E6387803E8EBAD0A5B0150254A89F8286A9C(L_5, /*hidden argument*/NULL);
		// storage[0] = Random.state;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** L_6 = ___storage0;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* L_7 = *((StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A**)L_6);
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_8;
		L_8 = Random_get_state_mB5BB303DE4D0FD30AB8C8060EC0925C38A4A9020(/*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (State_t8E62E640CAE29BF61164F51619D1C04936074C15 )L_8);
		// }
		goto IL_003f;
	}

IL_0032:
	{
		// Random.state = storage[0];
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** L_9 = ___storage0;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* L_10 = *((StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A**)L_9);
		NullCheck(L_10);
		int32_t L_11 = 0;
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Random_set_state_m10870B08C03C9B4058B410F1ABD056946D392E3A(L_12, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// m_SeedStorage = storage;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A** L_13 = ___storage0;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* L_14 = *((StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A**)L_13);
		__this->set_m_SeedStorage_0(L_14);
		// }
		return;
	}
}
// System.Void Unity.Barracuda.ReferenceCPUOps/Seed::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Seed_Dispose_m7A04BAC92A1E3EF8E98C95681C2085CD64F2F4F6 (Seed_t3D4DA11019C044BDD2624126499FBC3DD38AD963 * __this, const RuntimeMethod* method)
{
	{
		// m_SeedStorage[0] = Random.state;
		StateU5BU5D_t715F005A8C3D4E797006E432C8A159D71BC2DD4A* L_0 = __this->get_m_SeedStorage_0();
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_1;
		L_1 = Random_get_state_mB5BB303DE4D0FD30AB8C8060EC0925C38A4A9020(/*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (State_t8E62E640CAE29BF61164F51619D1C04936074C15 )L_1);
		// Random.state = m_EngineSeed;
		State_t8E62E640CAE29BF61164F51619D1C04936074C15  L_2 = __this->get_m_EngineSeed_1();
		Random_set_state_m10870B08C03C9B4058B410F1ABD056946D392E3A(L_2, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFDF2517CE14974419EEABB0B7B74A65B3040C4E3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * L_0 = (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 *)il2cpp_codegen_object_new(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6B667DFA520E79D734BE212F67A63B7D0DA02B27(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6B667DFA520E79D734BE212F67A63B7D0DA02B27 (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__2_0_m7AD54681F2AC3B9AB052F85844DECEE02445DAFE (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * __this, int32_t ___s0, const RuntimeMethod* method)
{
	{
		// && layer.pad.All(s => s == 0)
		int32_t L_0 = ___s0;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__2_1_mAFD02FFDEB8195457AD591554DA5041F9A4CBFE0 (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * __this, int32_t ___e0, const RuntimeMethod* method)
{
	{
		// && layer.pool.All(e => e == int.MaxValue)
		int32_t L_0 = ___e0;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)2147483647LL)))? 1 : 0);
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__2_2_m7DED3D6A6CEB8137F2E60FCFB06293288FB8BE6C (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * __this, int32_t ___s0, const RuntimeMethod* method)
{
	{
		// && layer.stride.All(s => s == 1))) ||
		int32_t L_0 = ___s0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveNoOpsPass/<>c::<IsLayerNoop>b__2_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsLayerNoopU3Eb__2_3_m1654671F30B9BB228F3DEBBE0DCF65138F0EDEB3 (U3CU3Ec_tD06567571DC484A8E5982C44DA1F786F09C1CF48 * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		// (layer.type == Layer.Type.Expand && layer.inputs.Length == 1 && layer.pool.Length >= 1 && layer.pool.All(x => x == 1));
		int32_t L_0 = ___x0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
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
// System.Void Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m6F6C43794DC173075E8AE033DB65AD74CBC9BE3D (U3CU3Ec__DisplayClass0_0_tB573DE7571B5DFA08001842DAE32174D11710780 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.Cleanup.RemoveUnusedLayersPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m2A91328FE74FADD13399E13342B12101321FFEED (U3CU3Ec__DisplayClass0_0_tB573DE7571B5DFA08001842DAE32174D11710780 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flags_tEC50C02387CC24FFD7B196DDC71FC8129A6E8AB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.layers = model.layers.Where(l => !unusedLayers.Contains(l.name) || l.flags.HasFlag(Layer.Flags.Preserve)).ToList();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_unusedLayers_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = ___l0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF(L_0, L_2, /*hidden argument*/HashSet_1_Contains_m9B35CC2F57089F860E18D73F6B603F6F845010FF_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_4 = ___l0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_flags_2();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Flags_tEC50C02387CC24FFD7B196DDC71FC8129A6E8AB3_il2cpp_TypeInfo_var, &L_6);
		int32_t L_8 = 2;
		RuntimeObject * L_9 = Box(Flags_tEC50C02387CC24FFD7B196DDC71FC8129A6E8AB3_il2cpp_TypeInfo_var, &L_8);
		NullCheck((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_7);
		bool L_10;
		L_10 = Enum_HasFlag_mF1BCDA3744B0CC82C7A3D7313C0858E82010151E((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_7, (Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002a:
	{
		return (bool)1;
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
// System.Void Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m683B8B038EBD051B8CA913D4A2C3308478EB7123 (U3CU3Ec__DisplayClass0_0_tE2B32F9D2B4B1E600F35CC0063D2A059F8F35AA8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m5F9A9E642190659159D44BAD267819E46503AA8E (U3CU3Ec__DisplayClass0_0_tE2B32F9D2B4B1E600F35CC0063D2A059F8F35AA8 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.layers.RemoveAll(l => removeLayers.Contains(l.name));
		KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * L_0 = __this->get_removeLayers_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = ___l0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_0();
		bool L_3;
		L_3 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5(L_0, L_2, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		return L_3;
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
// System.Void Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_m0FA784D3875D315799A2609DBEBE999CD7C7A45E (U3CU3Ec__DisplayClass0_1_tCF5D4A50DFACB103679B80DE5369F4A44EF8D0CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ShapeContractionPass/<>c__DisplayClass0_1::<Run>b__1(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_1_U3CRunU3Eb__1_m39DE2E45B69C680EB93791FE4AC58CFF1F3F171F (U3CU3Ec__DisplayClass0_1_tCF5D4A50DFACB103679B80DE5369F4A44EF8D0CF * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___c0, const RuntimeMethod* method)
{
	{
		// var indicesConstant = model.layers.FirstOrDefault(c => c.type == Layer.Type.Load && c.name == indicesInput);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___c0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_001f;
		}
	}
	{
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = ___c0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		String_t* L_4 = __this->get_indicesInput_0();
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001f:
	{
		return (bool)0;
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
// System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mCC6A7B2D89F70A95FDB447A4C07CA64994550E0B (U3CU3Ec__DisplayClass0_0_tD5D11EE36967DE1B5A0CAD49B0C177ABF50E6649 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass0_0::<Run>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass0_0_U3CRunU3Eb__0_m7DDF1F8D5137BAC11642ED692B41EB3DD1FCB4A9 (U3CU3Ec__DisplayClass0_0_tD5D11EE36967DE1B5A0CAD49B0C177ABF50E6649 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// model.layers.RemoveAll(l => layersToRemove.Contains(l.name));
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_layersToRemove_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = ___l0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_name_0();
		NullCheck(L_0);
		bool L_3;
		L_3 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_0, L_2, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		return L_3;
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
// System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mB68FC6AA50E86E44D39575C4C0FF5AA3BCE2BB82 (U3CU3Ec__DisplayClass1_0_t9C94A32C74131C1AE814870B7E4DDE6DB333EE82 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass1_0::<IsGather1DAndConvertingToChannelLast>b__0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass1_0_U3CIsGather1DAndConvertingToChannelLastU3Eb__0_m791BF29A639CA83A9761EEC5168789D80AC6DE05 (U3CU3Ec__DisplayClass1_0_t9C94A32C74131C1AE814870B7E4DDE6DB333EE82 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___c0, const RuntimeMethod* method)
{
	{
		// var indicesAsConstants = model.layers.FirstOrDefault(c => c.type == Layer.Type.Load && c.name == gatherLayer.inputs[1]);
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___c0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_1();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0026;
		}
	}
	{
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = ___c0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_4 = __this->get_gatherLayer_0();
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4->get_inputs_10();
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0026:
	{
		return (bool)0;
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
// System.Void Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m502FF9A5A40A68A3706EED2F8EE2430B88E20C5B (U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::<CanLayerBeRemoved>b__0(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__0_mDD65D95342EA2AF784EB3F3AE22AD277937303E0 (U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___m0, const RuntimeMethod* method)
{
	{
		// if (model.memories.Exists(m => m.output == layerToRemove.name))
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___m0;
		String_t* L_1 = L_0.get_output_2();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = __this->get_layerToRemove_0();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ShapeGatherReshapeToNHWCRemovePass/<>c__DisplayClass2_0::<CanLayerBeRemoved>b__1(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass2_0_U3CCanLayerBeRemovedU3Eb__1_mDE2050DCB62FCE0AD62FEF5A2E1198CFEAB5FCA8 (U3CU3Ec__DisplayClass2_0_tA47760459BA8CFEEB2739309782D48939515B3F4 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (model.layers.Exists(l => l != acceptedChildLayer && l.inputs.Contains(layerToRemove.name)))
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_1 = __this->get_acceptedChildLayer_1();
		if ((((RuntimeObject*)(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 *)L_0) == ((RuntimeObject*)(Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 *)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_2 = ___l0;
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2->get_inputs_10();
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_4 = __this->get_layerToRemove_0();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_name_0();
		bool L_6;
		L_6 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)L_3, L_5, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		return L_6;
	}

IL_0020:
	{
		return (bool)0;
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
// System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m73FD46B8B150A4F56CEC7991E0B895B02A943323 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * L_0 = (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 *)il2cpp_codegen_object_new(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2E1DB82BEEA6CECD9CD19ED0B3A472E6AFE97EB6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.StaticLayerOppComplexity/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2E1DB82BEEA6CECD9CD19ED0B3A472E6AFE97EB6 (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_0_m6A404F25728FFA07D403436BC4598D3C2182EB9F (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	{
		// return l.datasets.Length;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* L_1 = L_0->get_datasets_13();
		NullCheck(L_1);
		return ((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_1(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_1_m964BF0985C7F534CF2412A623550A380D133C367 (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	{
		// return l.datasets.Length;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* L_1 = L_0->get_datasets_13();
		NullCheck(L_1);
		return ((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))));
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_2(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_2_m07A564B60EBE8075A38308FDCC5F1D59A148B965 (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	{
		// return 2L;
		return ((int64_t)((int64_t)2));
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_3(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_3_m47AF2A952EEE144052385E92B698E17654E2F93B (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var W = l.datasets[0].shape;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* L_1 = L_0->get_datasets_13();
		NullCheck(L_1);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_shape_1();
		V_0 = L_2;
		// return (long)W.flatHeight * (long)W.flatWidth * 2L;
		int32_t L_3;
		L_3 = TensorShape_get_flatHeight_m8AAA001033FA68763CEC297CFCBC052EA2D93D40_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = TensorShape_get_flatWidth_m2B1B8FAAB0D61013FBD343E626D39D9DA0C3C973((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_3)), (int64_t)((int64_t)((int64_t)L_4)))), (int64_t)((int64_t)((int64_t)2))));
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_4(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_4_m432067744885DEBC6ACB84FF3F6E74BAEAD04F36 (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		// var K = l.datasets[0].shape;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* L_1 = L_0->get_datasets_13();
		NullCheck(L_1);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_shape_1();
		V_0 = L_2;
		// long n = (long)K.kernelDepth;
		int32_t L_3;
		L_3 = TensorShape_get_kernelDepth_mF470714B30FCEEF5D880107D4F990260F8EA8FFD_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		// long k = (long)K.kernelWidth * (long)K.kernelHeight * (long)K.channels;
		int32_t L_4;
		L_4 = TensorShape_get_kernelWidth_m10EC2C7BF357DCE9FB53B3FD352C86ED354B0788_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = TensorShape_get_kernelHeight_m050A24BC599F0639C7F304A39DBD51D45A620EBC_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_6 = V_0;
		int32_t L_7 = L_6.get_channels_28();
		V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_4)), (int64_t)((int64_t)((int64_t)L_5)))), (int64_t)((int64_t)((int64_t)L_7))));
		// return n * k * 2L;
		int64_t L_8 = V_1;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_3)), (int64_t)L_8)), (int64_t)((int64_t)((int64_t)2))));
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_5(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_5_m9895F21A19691B1516690DB8C7FC70420C04F845 (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		// var K = l.datasets[0].shape;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* L_1 = L_0->get_datasets_13();
		NullCheck(L_1);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_shape_1();
		V_0 = L_2;
		// long n = (long)K.kernelDepth;
		int32_t L_3;
		L_3 = TensorShape_get_kernelDepth_mF470714B30FCEEF5D880107D4F990260F8EA8FFD_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		// long k = (long)K.kernelSpatialDepth * K.kernelWidth * (long)K.kernelHeight * (long)K.channels;
		int32_t L_4;
		L_4 = TensorShape_get_kernelSpatialDepth_m8D9CB48F70D8E1126472FE7F54C5FE9988E1767D_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = TensorShape_get_kernelWidth_m10EC2C7BF357DCE9FB53B3FD352C86ED354B0788_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = TensorShape_get_kernelHeight_m050A24BC599F0639C7F304A39DBD51D45A620EBC_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_7 = V_0;
		int32_t L_8 = L_7.get_channels_28();
		V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_4)), (int64_t)((int64_t)((int64_t)L_5)))), (int64_t)((int64_t)((int64_t)L_6)))), (int64_t)((int64_t)((int64_t)L_8))));
		// return n * k * 2L;
		int64_t L_9 = V_1;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_3)), (int64_t)L_9)), (int64_t)((int64_t)((int64_t)2))));
	}
}
// System.Int64 Unity.Barracuda.StaticLayerOppComplexity/<>c::<.ctor>b__2_6(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3C_ctorU3Eb__2_6_m7C1E87C77DAF066180BCBDE0E69F28C7D772576D (U3CU3Ec_tF52A2CE9152CD81C36B0A73395A25F51CB21BE55 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___l0, const RuntimeMethod* method)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		// var K = l.datasets[0].shape;
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___l0;
		NullCheck(L_0);
		DataSetU5BU5D_tF24E71586A5A2E447006FAB25EFBA3E2FEF98824* L_1 = L_0->get_datasets_13();
		NullCheck(L_1);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_shape_1();
		V_0 = L_2;
		// long n = (long)K.kernelDepth;
		int32_t L_3;
		L_3 = TensorShape_get_kernelDepth_mF470714B30FCEEF5D880107D4F990260F8EA8FFD_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		// long k = (long)K.kernelWidth * (long)K.kernelHeight;
		int32_t L_4;
		L_4 = TensorShape_get_kernelWidth_m10EC2C7BF357DCE9FB53B3FD352C86ED354B0788_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = TensorShape_get_kernelHeight_m050A24BC599F0639C7F304A39DBD51D45A620EBC_inline((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_4)), (int64_t)((int64_t)((int64_t)L_5))));
		// return n * k * 2L;
		int64_t L_6 = V_1;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_3)), (int64_t)L_6)), (int64_t)((int64_t)((int64_t)2))));
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
// System.Void Unity.Barracuda.StatsOps/LayerStat::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerStat__ctor_mB5416577100F73753ACA0BC002D4A5CFB6904C18 (LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337 * __this, int64_t ___totalBeforeLayer0, int64_t ___layer1, const RuntimeMethod* method)
{
	{
		// this.total = totalBeforeLayer + layer;
		int64_t L_0 = ___totalBeforeLayer0;
		int64_t L_1 = ___layer1;
		__this->set_total_0(((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_1)));
		// this.layer = layer;
		int64_t L_2 = ___layer1;
		__this->set_layer_1(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void LayerStat__ctor_mB5416577100F73753ACA0BC002D4A5CFB6904C18_AdjustorThunk (RuntimeObject * __this, int64_t ___totalBeforeLayer0, int64_t ___layer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337 * _thisAdjusted = reinterpret_cast<LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337 *>(__this + _offset);
	LayerStat__ctor_mB5416577100F73753ACA0BC002D4A5CFB6904C18(_thisAdjusted, ___totalBeforeLayer0, ___layer1, method);
}
// System.Int64 Unity.Barracuda.StatsOps/LayerStat::op_Implicit(Unity.Barracuda.StatsOps/LayerStat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LayerStat_op_Implicit_m479FCC25C88C5235E58F402E54E0671A999FC0BD (LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337  ___d0, const RuntimeMethod* method)
{
	{
		// public static implicit operator long(LayerStat d) => d.total;
		LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337  L_0 = ___d0;
		int64_t L_1 = L_0.get_total_0();
		return L_1;
	}
}
// Unity.Barracuda.StatsOps/LayerStat Unity.Barracuda.StatsOps/LayerStat::op_Addition(Unity.Barracuda.StatsOps/LayerStat,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337  LayerStat_op_Addition_m9E1645720FE6A91ADF53E8C0F38FB93C8B50A099 (LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337  ___a0, int64_t ___b1, const RuntimeMethod* method)
{
	{
		// public static LayerStat operator +(LayerStat a, long b) => new LayerStat(a.total, b);
		LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337  L_0 = ___a0;
		int64_t L_1 = L_0.get_total_0();
		int64_t L_2 = ___b1;
		LayerStat_tB1E65E7D76E2D48F334811313D1C8F837EF07337  L_3;
		memset((&L_3), 0, sizeof(L_3));
		LayerStat__ctor_mB5416577100F73753ACA0BC002D4A5CFB6904C18((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Unity.Barracuda.StatsOps/Transcendental::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transcendental__ctor_m668D037B551ECC219B0182B1A8A045616464626E (Transcendental_t8C91227317E986D3FD83D36B112EC9C3C5BE044A * __this, const RuntimeMethod* method)
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
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34__ctor_mF65393DD28AA2F2A75F2B77D27271BEAA2A3A48B (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34_System_IDisposable_Dispose_m85D163D428E32590EBEE5E1BBAD7A772F064BC94 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetTensorDatasStatisticsU3Ed__34_U3CU3Em__Finally1_mBC6FED7D0AD825628781530465734DFCCFF8F7B4(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetTensorDatasStatisticsU3Ed__34_MoveNext_m6FC07F78AAF4805FBC4CDA2DAE1CC5DB32CE915F (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * V_2 = NULL;
	Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005e;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0090;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var allocatedBuffer in m_AllocatedBuffers)
			TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * L_4 = V_2;
			NullCheck(L_4);
			List_1_t328951CC7554E63CB134D7AF5C87AE38FC4FD93B * L_5 = L_4->get_m_AllocatedBuffers_3();
			NullCheck(L_5);
			Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475  L_6;
			L_6 = List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965(L_5, /*hidden argument*/List_1_GetEnumerator_m3F7CE3C3B92C9ED60344FB59C729C8EDF9BB2965_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0066;
		}

IL_003b:
		{
			// foreach (var allocatedBuffer in m_AllocatedBuffers)
			Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  L_8;
			L_8 = Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_inline((Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 *)L_7, /*hidden argument*/Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_RuntimeMethod_var);
			V_3 = L_8;
			// yield return allocatedBuffer;
			Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  L_9 = V_3;
			Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  L_10 = L_9;
			RuntimeObject * L_11 = Box(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_il2cpp_TypeInfo_var, &L_10);
			__this->set_U3CU3E2__current_1((RuntimeObject*)L_11);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0090;
		}

IL_005e:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0066:
		{
			// foreach (var allocatedBuffer in m_AllocatedBuffers)
			Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_13;
			L_13 = Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA((Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 *)L_12, /*hidden argument*/Enumerator_MoveNext_m8E4DFE06A7C3C90A623CF8FEAC6BB2968AFB33CA_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_003b;
			}
		}

IL_0073:
		{
			U3CGetTensorDatasStatisticsU3Ed__34_U3CU3Em__Finally1_mBC6FED7D0AD825628781530465734DFCCFF8F7B4(__this, /*hidden argument*/NULL);
			Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * L_14 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_14, sizeof(Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 ));
			// }
			V_0 = (bool)0;
			goto IL_0090;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0089;
	}

FAULT_0089:
	{ // begin fault (depth: 1)
		U3CGetTensorDatasStatisticsU3Ed__34_System_IDisposable_Dispose_m85D163D428E32590EBEE5E1BBAD7A772F064BC94(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(137)
	} // end fault
	IL2CPP_CLEANUP(137)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0090:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34_U3CU3Em__Finally1_mBC6FED7D0AD825628781530465734DFCCFF8F7B4 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51((Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 *)L_0, /*hidden argument*/Enumerator_Dispose_mFE4FDED0F236304A333FC2704DD744CBCC3CEF51_RuntimeMethod_var);
		return;
	}
}
// Unity.Barracuda.ITensorDataStatistics Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.Collections.Generic.IEnumerator<Unity.Barracuda.ITensorDataStatistics>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_Generic_IEnumeratorU3CUnity_Barracuda_ITensorDataStatisticsU3E_get_Current_m059A680FAA9D7474A2D761599DDA0205D234393D (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_IEnumerator_Reset_m51D7CA0DFE6A5D6C5D1083856A053F8AF6BBD3B8 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_IEnumerator_Reset_m51D7CA0DFE6A5D6C5D1083856A053F8AF6BBD3B8_RuntimeMethod_var)));
	}
}
// System.Object Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_IEnumerator_get_Current_mD2701690238CD0D47DEB1E59743F67A67EBEC34D (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.ITensorDataStatistics> Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.Collections.Generic.IEnumerable<Unity.Barracuda.ITensorDataStatistics>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_Generic_IEnumerableU3CUnity_Barracuda_ITensorDataStatisticsU3E_GetEnumerator_m15F032C341F4F12F92A12AE74E8D2655515509D4 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * V_0 = NULL;
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
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * L_3 = (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A *)il2cpp_codegen_object_new(U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A_il2cpp_TypeInfo_var);
		U3CGetTensorDatasStatisticsU3Ed__34__ctor_mF65393DD28AA2F2A75F2B77D27271BEAA2A3A48B(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * L_4 = V_0;
		TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Unity.Barracuda.TensorCachingAllocator/<GetTensorDatasStatistics>d__34::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_IEnumerable_GetEnumerator_m5754C19412AD4AAE5FF1B43C1ED57DF7F52C6080 (U3CGetTensorDatasStatisticsU3Ed__34_t4D65203705E1364893364CDF8D7E0049A118473A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetTensorDatasStatisticsU3Ed__34_System_Collections_Generic_IEnumerableU3CUnity_Barracuda_ITensorDataStatisticsU3E_GetEnumerator_m15F032C341F4F12F92A12AE74E8D2655515509D4(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33__ctor_m157CC3F0E6A67D2F6ECDDEAEDB8FDC8340A00559 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
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
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33_System_IDisposable_Dispose_m15514EAD3EA0B2EC376EB3523A5EBCF2EA38B28D (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetTensorsStatisticsU3Ed__33_U3CU3Em__Finally1_m00ED201C5B9D16C0B1EB309BB5B44B3ACF5A43F9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetTensorsStatisticsU3Ed__33_MoveNext_mFB05F8A25A8E6CC38585012FA7BB64999B0B1F52 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m116D3EE1997E383989CA36A2DF7D4503A47F4721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0E87A47F67CC15C8A9EBB5AFA9785335F18FFDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4A857635EE87B66190BFDCE0D393B3D59AD95075_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m27ED6C1E1770DD40F854C0A1CD0F8AE0A0BD687B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * V_2 = NULL;
	KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * L_1 = __this->get_U3CU3E4__this_3();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_0019;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_005f;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_0091;
		}

IL_0019:
		{
			__this->set_U3CU3E1__state_0((-1));
			// foreach (var busyTensor in m_BusyTensors)
			TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * L_4 = V_2;
			NullCheck(L_4);
			Dictionary_2_t043A83207195A95043DB54A6E82EB0FFD112506D * L_5 = L_4->get_m_BusyTensors_4();
			NullCheck(L_5);
			Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8  L_6;
			L_6 = Dictionary_2_GetEnumerator_m116D3EE1997E383989CA36A2DF7D4503A47F4721(L_5, /*hidden argument*/Dictionary_2_GetEnumerator_m116D3EE1997E383989CA36A2DF7D4503A47F4721_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_4(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0067;
		}

IL_003b:
		{
			// foreach (var busyTensor in m_BusyTensors)
			Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * L_7 = __this->get_address_of_U3CU3E7__wrap1_4();
			KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F  L_8;
			L_8 = Enumerator_get_Current_m4A857635EE87B66190BFDCE0D393B3D59AD95075_inline((Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 *)L_7, /*hidden argument*/Enumerator_get_Current_m4A857635EE87B66190BFDCE0D393B3D59AD95075_RuntimeMethod_var);
			V_3 = L_8;
			// yield return busyTensor.Key;
			Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_9;
			L_9 = KeyValuePair_2_get_Key_m27ED6C1E1770DD40F854C0A1CD0F8AE0A0BD687B_inline((KeyValuePair_2_tAF7ECDA2EDCD114E18A01529604A0C3189639E2F *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m27ED6C1E1770DD40F854C0A1CD0F8AE0A0BD687B_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0091;
		}

IL_005f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0067:
		{
			// foreach (var busyTensor in m_BusyTensors)
			Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * L_10 = __this->get_address_of_U3CU3E7__wrap1_4();
			bool L_11;
			L_11 = Enumerator_MoveNext_m0E87A47F67CC15C8A9EBB5AFA9785335F18FFDFF((Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 *)L_10, /*hidden argument*/Enumerator_MoveNext_m0E87A47F67CC15C8A9EBB5AFA9785335F18FFDFF_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_003b;
			}
		}

IL_0074:
		{
			U3CGetTensorsStatisticsU3Ed__33_U3CU3Em__Finally1_m00ED201C5B9D16C0B1EB309BB5B44B3ACF5A43F9(__this, /*hidden argument*/NULL);
			Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * L_12 = __this->get_address_of_U3CU3E7__wrap1_4();
			il2cpp_codegen_initobj(L_12, sizeof(Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 ));
			// }
			V_0 = (bool)0;
			goto IL_0091;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_008a;
	}

FAULT_008a:
	{ // begin fault (depth: 1)
		U3CGetTensorsStatisticsU3Ed__33_System_IDisposable_Dispose_m15514EAD3EA0B2EC376EB3523A5EBCF2EA38B28D(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(138)
	} // end fault
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		bool L_13 = V_0;
		return L_13;
	}
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33_U3CU3Em__Finally1_m00ED201C5B9D16C0B1EB309BB5B44B3ACF5A43F9 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C26454A6B690BFF9F775179205585E674FA29BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 * L_0 = __this->get_address_of_U3CU3E7__wrap1_4();
		Enumerator_Dispose_m5C26454A6B690BFF9F775179205585E674FA29BD((Enumerator_t7D69E95E497EEB22D1558932AF03CFB8790D34B8 *)L_0, /*hidden argument*/Enumerator_Dispose_m5C26454A6B690BFF9F775179205585E674FA29BD_RuntimeMethod_var);
		return;
	}
}
// Unity.Barracuda.ITensorStatistics Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.Collections.Generic.IEnumerator<Unity.Barracuda.ITensorStatistics>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorsStatisticsU3Ed__33_System_Collections_Generic_IEnumeratorU3CUnity_Barracuda_ITensorStatisticsU3E_get_Current_m9975DD73183F596F64F68A232CE607309B21AEB4 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTensorsStatisticsU3Ed__33_System_Collections_IEnumerator_Reset_m59E58D6C10283041467932D69FC10B93B724561B (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetTensorsStatisticsU3Ed__33_System_Collections_IEnumerator_Reset_m59E58D6C10283041467932D69FC10B93B724561B_RuntimeMethod_var)));
	}
}
// System.Object Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetTensorsStatisticsU3Ed__33_System_Collections_IEnumerator_get_Current_m7993F743B5DDDD79FAB3E22F4AA4DBEC40494439 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Unity.Barracuda.ITensorStatistics> Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.Collections.Generic.IEnumerable<Unity.Barracuda.ITensorStatistics>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorsStatisticsU3Ed__33_System_Collections_Generic_IEnumerableU3CUnity_Barracuda_ITensorStatisticsU3E_GetEnumerator_m2214311857D0046D7EEE07BC279A57B6210F7077 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * V_0 = NULL;
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
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * L_3 = (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 *)il2cpp_codegen_object_new(U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44_il2cpp_TypeInfo_var);
		U3CGetTensorsStatisticsU3Ed__33__ctor_m157CC3F0E6A67D2F6ECDDEAEDB8FDC8340A00559(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * L_4 = V_0;
		TensorCachingAllocator_t7FF6DF11A552FA7D71ED5786EE80B8FA49B0423E * L_5 = __this->get_U3CU3E4__this_3();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_3(L_5);
	}

IL_0035:
	{
		U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Unity.Barracuda.TensorCachingAllocator/<GetTensorsStatistics>d__33::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetTensorsStatisticsU3Ed__33_System_Collections_IEnumerable_GetEnumerator_m78417FD2CF649EA03FAF648807F866E12AE48151 (U3CGetTensorsStatisticsU3Ed__33_tEF5B8EEEAA035E09921ED8A4A206A0E2958C8D44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetTensorsStatisticsU3Ed__33_System_Collections_Generic_IEnumerableU3CUnity_Barracuda_ITensorStatisticsU3E_GetEnumerator_m2214311857D0046D7EEE07BC279A57B6210F7077(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.Barracuda.TensorCachingAllocator/Entry
IL2CPP_EXTERN_C void Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshal_pinvoke(const Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C& unmarshaled, Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
IL2CPP_EXTERN_C void Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshal_pinvoke_back(const Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_pinvoke& marshaled, Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C& unmarshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.TensorCachingAllocator/Entry
IL2CPP_EXTERN_C void Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshal_pinvoke_cleanup(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Barracuda.TensorCachingAllocator/Entry
IL2CPP_EXTERN_C void Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshal_com(const Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C& unmarshaled, Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_com& marshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
IL2CPP_EXTERN_C void Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshal_com_back(const Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_com& marshaled, Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C& unmarshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.TensorCachingAllocator/Entry
IL2CPP_EXTERN_C void Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshal_com_cleanup(Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C_marshaled_com& marshaled)
{
}
// System.Int32 Unity.Barracuda.TensorCachingAllocator/Entry::get_uniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entry_get_uniqueId_m01DF3E05D7A29D3EDAF2394A33EFF4AFC5C735C2 (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniqueResource_t72378FEEE8219BFF5571A80312B3921E3C1C5553_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int uniqueId => buffer.uniqueId;
		RuntimeObject* L_0 = __this->get_buffer_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Barracuda.IUniqueResource::get_uniqueId() */, IUniqueResource_t72378FEEE8219BFF5571A80312B3921E3C1C5553_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Entry_get_uniqueId_m01DF3E05D7A29D3EDAF2394A33EFF4AFC5C735C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * _thisAdjusted = reinterpret_cast<Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Entry_get_uniqueId_m01DF3E05D7A29D3EDAF2394A33EFF4AFC5C735C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Barracuda.TensorCachingAllocator/Entry::get_maxCapacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entry_get_maxCapacity_m86E3FBD27CFE4C11F54E77A929F47B6D244E1B61 (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITensorDataStatistics_t0FE12B9579C30F5DBEDDE0746E57D458512BA9D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxCapacity => buffer.maxCapacity;
		RuntimeObject* L_0 = __this->get_buffer_1();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.Barracuda.ITensorDataStatistics::get_maxCapacity() */, ITensorDataStatistics_t0FE12B9579C30F5DBEDDE0746E57D458512BA9D7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Entry_get_maxCapacity_m86E3FBD27CFE4C11F54E77A929F47B6D244E1B61_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * _thisAdjusted = reinterpret_cast<Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Entry_get_maxCapacity_m86E3FBD27CFE4C11F54E77A929F47B6D244E1B61(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Barracuda.TensorCachingAllocator/Entry::get_inUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_get_inUse_mDB762A0CE401974A5088FFD6C137EFEE84F09575 (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method)
{
	{
		// public bool inUse => !free;
		bool L_0 = __this->get_free_2();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Entry_get_inUse_mDB762A0CE401974A5088FFD6C137EFEE84F09575_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * _thisAdjusted = reinterpret_cast<Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C *>(__this + _offset);
	bool _returnValue;
	_returnValue = Entry_get_inUse_mDB762A0CE401974A5088FFD6C137EFEE84F09575(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Barracuda.TensorCachingAllocator/Entry::get_isGPUMem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Entry_get_isGPUMem_m1DA2FCBD3341858D342CE66316CBBD7423DF8D4F (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITensorDataStatistics_t0FE12B9579C30F5DBEDDE0746E57D458512BA9D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool isGPUMem => buffer.isGPUMem;
		RuntimeObject* L_0 = __this->get_buffer_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean Unity.Barracuda.ITensorDataStatistics::get_isGPUMem() */, ITensorDataStatistics_t0FE12B9579C30F5DBEDDE0746E57D458512BA9D7_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Entry_get_isGPUMem_m1DA2FCBD3341858D342CE66316CBBD7423DF8D4F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C * _thisAdjusted = reinterpret_cast<Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C *>(__this + _offset);
	bool _returnValue;
	_returnValue = Entry_get_isGPUMem_m1DA2FCBD3341858D342CE66316CBBD7423DF8D4F(_thisAdjusted, method);
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
// System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_mA9A2F22D212144E579B41BDB1EAE94849F99FA97 (U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Barracuda.TensorCachingByShapeAllocator/<>c__DisplayClass13_0::<MoveToDevice>b__0(Unity.Barracuda.ITensorData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CMoveToDeviceU3Eb__0_mEEBBC4BE77CA327195A784B77DD6846276C1EDE6 (U3CU3Ec__DisplayClass13_0_t60EA4F287605F88CC32EEF326E37EBCB9858C5D2 * __this, RuntimeObject* ___freeBuffer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (disposeDetachedBufferHint)
		bool L_0 = __this->get_disposeDetachedBufferHint_0();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// freeBuffer.Dispose();
		RuntimeObject* L_1 = ___freeBuffer0;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
		return;
	}

IL_000f:
	{
		// AdoptFreeBuffer(tensor.shape, freeBuffer);
		TensorCachingByShapeAllocator_t8364C24EBA8F6017A154DBFC1A7E9023363EEF77 * L_2 = __this->get_U3CU3E4__this_1();
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_3 = __this->get_tensor_2();
		NullCheck(L_3);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_4;
		L_4 = Tensor_get_shape_m531E03462C4E56D708057594AD97964ACCB280AE_inline(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___freeBuffer0;
		NullCheck(L_2);
		TensorCachingByShapeAllocator_AdoptFreeBuffer_m0E362B72CCF33564D39D305DF20628AC367AC4AA(L_2, L_4, L_5, /*hidden argument*/NULL);
		// });
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
// Conversion methods for marshalling of: Unity.Barracuda.TensorCachingByShapeAllocator/Entry
IL2CPP_EXTERN_C void Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshal_pinvoke(const Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E& unmarshaled, Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
IL2CPP_EXTERN_C void Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshal_pinvoke_back(const Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_pinvoke& marshaled, Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E& unmarshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.TensorCachingByShapeAllocator/Entry
IL2CPP_EXTERN_C void Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshal_pinvoke_cleanup(Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Barracuda.TensorCachingByShapeAllocator/Entry
IL2CPP_EXTERN_C void Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshal_com(const Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E& unmarshaled, Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_com& marshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
IL2CPP_EXTERN_C void Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshal_com_back(const Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_com& marshaled, Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E& unmarshaled)
{
	Exception_t* ___buffer_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'buffer' of type 'Entry': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___buffer_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.TensorCachingByShapeAllocator/Entry
IL2CPP_EXTERN_C void Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshal_com_cleanup(Entry_t91480980DFE7BF219FFF15E36366F4F2C61ABE7E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Barracuda.TensorExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFA2988EC5C918D3ABBCF7EC7F1DA930FD290644C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * L_0 = (U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE *)il2cpp_codegen_object_new(U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC78B43698E0CE36B2D28C6569958D8DCD0EAC807(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.TensorExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC78B43698E0CE36B2D28C6569958D8DCD0EAC807 (U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Barracuda.TensorExtensions/<>c::<AsInts>b__4_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAsIntsU3Eb__4_0_m22842584B74C22DA26D3BECB3C6D68FC8E7B99A7 (U3CU3Ec_t69BCCC911F0A086630FB178DCEDF436125FF94DE * __this, float ___v0, const RuntimeMethod* method)
{
	{
		// return Array.ConvertAll(x.ToReadOnlyArray(), v => v <= (float)int.MinValue ? int.MinValue : v >= (float)int.MaxValue ? int.MaxValue : (int)v);
		float L_0 = ___v0;
		if ((((float)L_0) <= ((float)(-2.14748365E+09f))))
		{
			goto IL_0019;
		}
	}
	{
		float L_1 = ___v0;
		if ((((float)L_1) >= ((float)(2.14748365E+09f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_2 = ___v0;
		return ((int32_t)((int32_t)L_2));
	}

IL_0013:
	{
		return ((int32_t)2147483647LL);
	}

IL_0019:
	{
		return ((int32_t)-2147483648LL);
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
// System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m94BB380B5E6D148CE8649661D31C9FB64A831432 (U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 * __this, const RuntimeMethod* method)
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
// System.Void Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_m88FEC1C405B3FAF4223522A4E8139859E26FCA11 (U3CU3Ec__DisplayClass13_1_t28B5AB439F2BE6E91915521682DFD9677CE098AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Unity.Barracuda.TensorExtensions/<>c__DisplayClass13_1::<ArgSort>b__0(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass13_1_U3CArgSortU3Eb__0_m05302B75FD2E0788F69A0FDF9D84CE761656EBFE (U3CU3Ec__DisplayClass13_1_t28B5AB439F2BE6E91915521682DFD9677CE098AD * __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// Array.Sort<int>(indices, (a, b) => X[sliceOffset + a].CompareTo(X[sliceOffset + b]));
		U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_1 = L_0->get_X_0();
		int32_t L_2 = __this->get_sliceOffset_0();
		int32_t L_3 = ___a0;
		NullCheck(L_1);
		float L_4;
		L_4 = Tensor_get_Item_mF767289FFD4EAC04713448070AF0E03F4EFF3EBF(L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		U3CU3Ec__DisplayClass13_0_t60C6E14BCABF7B0058970A381D54639DE5011A73 * L_5 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_5);
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_6 = L_5->get_X_0();
		int32_t L_7 = __this->get_sliceOffset_0();
		int32_t L_8 = ___b1;
		NullCheck(L_6);
		float L_9;
		L_9 = Tensor_get_Item_mF767289FFD4EAC04713448070AF0E03F4EFF3EBF(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_9, /*hidden argument*/NULL);
		return L_10;
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
// System.Void Unity.Barracuda.TensorScope/F::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F__ctor_m458E82917188F2EB96AC7BA888E6DCF8CAE3252C (F_t5830B01D9DEF2646EE416C063E90F3EB9E25244F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Unity.Barracuda.Tensor Unity.Barracuda.TensorScope/F::Invoke(Unity.Barracuda.Tensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * F_Invoke_mB0DEFA10E6ABB3A1DB41B8CE174B92B42366A49D (F_t5830B01D9DEF2646EE416C063E90F3EB9E25244F * __this, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___tensor0, const RuntimeMethod* method)
{
	Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * result = NULL;
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
				typedef Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * (*FunctionPointerType) (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___tensor0, targetMethod);
			}
			else
			{
				// closed
				typedef Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * (*FunctionPointerType) (void*, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___tensor0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(targetMethod, ___tensor0);
					else
						result = GenericVirtFuncInvoker0< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(targetMethod, ___tensor0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___tensor0);
					else
						result = VirtFuncInvoker0< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___tensor0);
				}
			}
			else
			{
				typedef Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * (*FunctionPointerType) (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___tensor0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(targetMethod, targetThis, ___tensor0);
					else
						result = GenericVirtFuncInvoker1< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(targetMethod, targetThis, ___tensor0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tensor0);
					else
						result = VirtFuncInvoker1< Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tensor0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * (*FunctionPointerType) (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___tensor0, targetMethod);
				}
				else
				{
					typedef Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * (*FunctionPointerType) (void*, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___tensor0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Barracuda.TensorScope/F::BeginInvoke(Unity.Barracuda.Tensor,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* F_BeginInvoke_mEEA418031363B4CA8AA5CC611CC39E2A9C387ACC (F_t5830B01D9DEF2646EE416C063E90F3EB9E25244F * __this, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___tensor0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___tensor0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// Unity.Barracuda.Tensor Unity.Barracuda.TensorScope/F::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * F_EndInvoke_m174767175979F095009DB19444E082FB3B153F65 (F_t5830B01D9DEF2646EE416C063E90F3EB9E25244F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 *)__result;;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Barracuda.UniqueResource/UniqueResourceHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniqueResourceHelper__ctor_mA7F83C45788CB3641DA9EEA7E356FD2837BA8B27 (UniqueResourceHelper_tE8988FC628C3F9C1E6B9F7FEADD623D7961337DE * __this, const RuntimeMethod* method)
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
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass78_0__ctor_m4B7B2CDB82F6AD8E08E7F6CB311C8D0917A512B3 (U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass78_0::<MaxPool2DInnerLoop>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass78_0_U3CMaxPool2DInnerLoopU3Eb__0_m3FB9168B0FDB65DC3A09BF859A6F8C4C22ECCEB0 (U3CU3Ec__DisplayClass78_0_t29A600A00B3758AE16216A8F9150D9AB0F72C9F3 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// for (var y = 0; y < oHeight; ++y)
		V_0 = 0;
		goto IL_011f;
	}

IL_0007:
	{
		// for (var x = 0; x < oWidth; ++x)
		V_1 = 0;
		goto IL_010f;
	}

IL_000e:
	{
		// for (var c = 0; c < oChannels; ++c)
		V_2 = 0;
		goto IL_00ff;
	}

IL_0015:
	{
		// float maxVal = float.MinValue;
		V_3 = (-(std::numeric_limits<float>::max)());
		// for (int dy = 0; dy < pool[1]; ++dy)
		V_4 = 0;
		goto IL_00c4;
	}

IL_0023:
	{
		// for (int dx = 0; dx < pool[0]; ++dx)
		V_5 = 0;
		goto IL_00af;
	}

IL_002b:
	{
		// int oy = y * stride[1] + dy - pad[1];
		int32_t L_0 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_stride_0();
		NullCheck(L_1);
		int32_t L_2 = 1;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_pad_1();
		NullCheck(L_5);
		int32_t L_6 = 1;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_3)), (int32_t)L_4)), (int32_t)L_7));
		// int ox = x * stride[0] + dx - pad[0];
		int32_t L_8 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_stride_0();
		NullCheck(L_9);
		int32_t L_10 = 0;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_pad_1();
		NullCheck(L_13);
		int32_t L_14 = 0;
		int32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_11)), (int32_t)L_12)), (int32_t)L_15));
		// if (oy < 0) continue;
		int32_t L_16 = V_6;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		// if (oy >= xHeight) continue;
		int32_t L_17 = V_6;
		int32_t L_18 = __this->get_xHeight_2();
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_00a9;
		}
	}
	{
		// if (ox < 0) continue;
		int32_t L_19 = V_7;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		// if (ox >= xWidth) continue;
		int32_t L_20 = V_7;
		int32_t L_21 = __this->get_xWidth_3();
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_00a9;
		}
	}
	{
		// float v = xPtr[n * xnMult + oy * xyMult + ox * xxMult + c];
		float* L_22 = __this->get_xPtr_4();
		int32_t L_23 = ___n0;
		int32_t L_24 = __this->get_xnMult_5();
		int32_t L_25 = V_6;
		int32_t L_26 = __this->get_xyMult_6();
		int32_t L_27 = V_7;
		int32_t L_28 = __this->get_xxMult_7();
		int32_t L_29 = V_2;
		float L_30 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)L_24)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)))), (int32_t)L_29))), (int32_t)4)))));
		// maxVal = Mathf.Max(v, maxVal);
		float L_31 = V_3;
		float L_32;
		L_32 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_30, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
	}

IL_00a9:
	{
		// for (int dx = 0; dx < pool[0]; ++dx)
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00af:
	{
		// for (int dx = 0; dx < pool[0]; ++dx)
		int32_t L_34 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = __this->get_pool_8();
		NullCheck(L_35);
		int32_t L_36 = 0;
		int32_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_34) < ((int32_t)L_37)))
		{
			goto IL_002b;
		}
	}
	{
		// for (int dy = 0; dy < pool[1]; ++dy)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00c4:
	{
		// for (int dy = 0; dy < pool[1]; ++dy)
		int32_t L_39 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = __this->get_pool_8();
		NullCheck(L_40);
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((((int32_t)L_39) < ((int32_t)L_42)))
		{
			goto IL_0023;
		}
	}
	{
		// oPtr[n * onMult + y * oyMult + x * oxMult + c] = maxVal;
		float* L_43 = __this->get_oPtr_9();
		int32_t L_44 = ___n0;
		int32_t L_45 = __this->get_onMult_10();
		int32_t L_46 = V_0;
		int32_t L_47 = __this->get_oyMult_11();
		int32_t L_48 = V_1;
		int32_t L_49 = __this->get_oxMult_12();
		int32_t L_50 = V_2;
		float L_51 = V_3;
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_43, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_44, (int32_t)L_45)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_46, (int32_t)L_47)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_48, (int32_t)L_49)))), (int32_t)L_50))), (int32_t)4))))) = (float)L_51;
		// for (var c = 0; c < oChannels; ++c)
		int32_t L_52 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00ff:
	{
		// for (var c = 0; c < oChannels; ++c)
		int32_t L_53 = V_2;
		int32_t L_54 = __this->get_oChannels_13();
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_0015;
		}
	}
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_010f:
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_56 = V_1;
		int32_t L_57 = __this->get_oWidth_14();
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_000e;
		}
	}
	{
		// for (var y = 0; y < oHeight; ++y)
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_011f:
	{
		// for (var y = 0; y < oHeight; ++y)
		int32_t L_59 = V_0;
		int32_t L_60 = __this->get_oHeight_15();
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0007;
		}
	}
	{
		// });
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
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0__ctor_mB18595564B48F563C28E942F099C79384E2BC450 (U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass80_0::<AvgPool2DInnerLoop>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass80_0_U3CAvgPool2DInnerLoopU3Eb__0_mA99A9ABEA6EE89E3D064E082B4B87B88760A8892 (U3CU3Ec__DisplayClass80_0_t0870C63B58124920264C71BE151F750AC5B5CE43 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	{
		// for (var y = 0; y < oHeight; ++y)
		V_0 = 0;
		goto IL_0133;
	}

IL_0007:
	{
		// for (var x = 0; x < oWidth; ++x)
		V_1 = 0;
		goto IL_0123;
	}

IL_000e:
	{
		// for (var c = 0; c < oChannels; ++c)
		V_2 = 0;
		goto IL_0113;
	}

IL_0015:
	{
		// float accum = 0.0f;
		V_3 = (0.0f);
		// float counter = 0.0f;
		V_4 = (0.0f);
		// for (int dy = 0; dy < pool[1]; ++dy)
		V_5 = 0;
		goto IL_00d5;
	}

IL_002a:
	{
		// for (int dx = 0; dx < pool[0]; ++dx)
		V_6 = 0;
		goto IL_00c0;
	}

IL_0032:
	{
		// int oy = y * stride[1] + dy - pad[1];
		int32_t L_0 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_stride_0();
		NullCheck(L_1);
		int32_t L_2 = 1;
		int32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_pad_1();
		NullCheck(L_5);
		int32_t L_6 = 1;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_3)), (int32_t)L_4)), (int32_t)L_7));
		// int ox = x * stride[0] + dx - pad[0];
		int32_t L_8 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_stride_0();
		NullCheck(L_9);
		int32_t L_10 = 0;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_pad_1();
		NullCheck(L_13);
		int32_t L_14 = 0;
		int32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)L_11)), (int32_t)L_12)), (int32_t)L_15));
		// if (oy < 0) continue;
		int32_t L_16 = V_7;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		// if (oy >= xHeight) continue;
		int32_t L_17 = V_7;
		int32_t L_18 = __this->get_xHeight_2();
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_00ba;
		}
	}
	{
		// if (ox < 0) continue;
		int32_t L_19 = V_8;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		// if (ox >= xWidth) continue;
		int32_t L_20 = V_8;
		int32_t L_21 = __this->get_xWidth_3();
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_00ba;
		}
	}
	{
		// float v = xPtr[n * xnMult + oy * xyMult + ox * xxMult + c];
		float* L_22 = __this->get_xPtr_4();
		int32_t L_23 = ___n0;
		int32_t L_24 = __this->get_xnMult_5();
		int32_t L_25 = V_7;
		int32_t L_26 = __this->get_xyMult_6();
		int32_t L_27 = V_8;
		int32_t L_28 = __this->get_xxMult_7();
		int32_t L_29 = V_2;
		float L_30 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_22, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)L_24)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)))), (int32_t)L_29))), (int32_t)4)))));
		V_9 = L_30;
		// accum += v;
		float L_31 = V_3;
		float L_32 = V_9;
		V_3 = ((float)il2cpp_codegen_add((float)L_31, (float)L_32));
		// ++counter;
		float L_33 = V_4;
		V_4 = ((float)il2cpp_codegen_add((float)L_33, (float)(1.0f)));
	}

IL_00ba:
	{
		// for (int dx = 0; dx < pool[0]; ++dx)
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00c0:
	{
		// for (int dx = 0; dx < pool[0]; ++dx)
		int32_t L_35 = V_6;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = __this->get_pool_8();
		NullCheck(L_36);
		int32_t L_37 = 0;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		if ((((int32_t)L_35) < ((int32_t)L_38)))
		{
			goto IL_0032;
		}
	}
	{
		// for (int dy = 0; dy < pool[1]; ++dy)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00d5:
	{
		// for (int dy = 0; dy < pool[1]; ++dy)
		int32_t L_40 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = __this->get_pool_8();
		NullCheck(L_41);
		int32_t L_42 = 1;
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		if ((((int32_t)L_40) < ((int32_t)L_43)))
		{
			goto IL_002a;
		}
	}
	{
		// oPtr[n * onMult + y * oyMult + x * oxMult + c] = accum / counter;
		float* L_44 = __this->get_oPtr_9();
		int32_t L_45 = ___n0;
		int32_t L_46 = __this->get_onMult_10();
		int32_t L_47 = V_0;
		int32_t L_48 = __this->get_oyMult_11();
		int32_t L_49 = V_1;
		int32_t L_50 = __this->get_oxMult_12();
		int32_t L_51 = V_2;
		float L_52 = V_3;
		float L_53 = V_4;
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_44, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)L_46)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_47, (int32_t)L_48)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)L_50)))), (int32_t)L_51))), (int32_t)4))))) = (float)((float)((float)L_52/(float)L_53));
		// for (var c = 0; c < oChannels; ++c)
		int32_t L_54 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0113:
	{
		// for (var c = 0; c < oChannels; ++c)
		int32_t L_55 = V_2;
		int32_t L_56 = __this->get_oChannels_13();
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0015;
		}
	}
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_57 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_0123:
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_58 = V_1;
		int32_t L_59 = __this->get_oWidth_14();
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_000e;
		}
	}
	{
		// for (var y = 0; y < oHeight; ++y)
		int32_t L_60 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0133:
	{
		// for (var y = 0; y < oHeight; ++y)
		int32_t L_61 = V_0;
		int32_t L_62 = __this->get_oHeight_15();
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_0007;
		}
	}
	{
		// });
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
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0__ctor_mCA8CF4279994B54D5FC7709B4BA19B1DAF387456 (U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass85_0::<Im2ColInnerLoop>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass85_0_U3CIm2ColInnerLoopU3Eb__0_mD9AC77213D1B33245F1CB88AB663CBBC4B8AC1D8 (U3CU3Ec__DisplayClass85_0_t5B1A2E7A7BBCA8DB4D2CBF413555CA5BD52C68AA * __this, int32_t ___n0, const RuntimeMethod* method)
{
	float* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float* V_7 = NULL;
	{
		// var to = oPtr + n * oStrideBatch;
		float* L_0 = __this->get_oPtr_0();
		int32_t L_1 = ___n0;
		int32_t L_2 = __this->get_oStrideBatch_1();
		V_0 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_2))), (int32_t)4))));
		// for (var y = 0; y < oHeight; ++y)
		V_1 = 0;
		goto IL_011c;
	}

IL_001a:
	{
		// for (var x = 0; x < oWidth; ++x)
		V_2 = 0;
		goto IL_010c;
	}

IL_0021:
	{
		// for (int dy = 0; dy < kernelHeight; ++dy)
		V_3 = 0;
		goto IL_00fc;
	}

IL_0028:
	{
		// for (int dx = 0; dx < kernelWidth; ++dx)
		V_4 = 0;
		goto IL_00eb;
	}

IL_0030:
	{
		// int readX = x * stride[0] + dx - pad[0];
		int32_t L_3 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_stride_2();
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_pad_3();
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_6)), (int32_t)L_7)), (int32_t)L_10));
		// int readY = y * stride[1] + dy - pad[1];
		int32_t L_11 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = __this->get_stride_2();
		NullCheck(L_12);
		int32_t L_13 = 1;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = __this->get_pad_3();
		NullCheck(L_16);
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_11, (int32_t)L_14)), (int32_t)L_15)), (int32_t)L_18));
		// if (readX < 0 ||
		//     readY < 0 ||
		//     readX >= xWidth ||
		//     readY >= xHeight)
		int32_t L_19 = V_5;
		if ((((int32_t)L_19) < ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_6;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_21 = V_5;
		int32_t L_22 = __this->get_xWidth_4();
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_23 = V_6;
		int32_t L_24 = __this->get_xHeight_5();
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_009a;
		}
	}

IL_007d:
	{
		// UnsafeUtility.MemClear(destination: to,
		//                        size:        xChannels * sizeof(float));
		float* L_25 = V_0;
		int32_t L_26 = __this->get_xChannels_6();
		UnsafeUtility_MemClear_m9A2B75C85CB8B6637B1286A562A8E35C82772D09((void*)(void*)L_25, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)4)))), /*hidden argument*/NULL);
		// to += xChannels;
		float* L_27 = V_0;
		int32_t L_28 = __this->get_xChannels_6();
		V_0 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_27, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_28), (int32_t)4))));
		// }
		goto IL_00e5;
	}

IL_009a:
	{
		// var from = xPtr + n * xStrideBatch + readY * xStrideHeight + readX * xStrideWidth;
		float* L_29 = __this->get_xPtr_7();
		int32_t L_30 = ___n0;
		int32_t L_31 = __this->get_xStrideBatch_8();
		int32_t L_32 = V_6;
		int32_t L_33 = __this->get_xStrideHeight_9();
		int32_t L_34 = V_5;
		int32_t L_35 = __this->get_xStrideWidth_10();
		V_7 = (float*)((float*)il2cpp_codegen_add((intptr_t)((float*)il2cpp_codegen_add((intptr_t)((float*)il2cpp_codegen_add((intptr_t)L_29, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_30, (int32_t)L_31))), (int32_t)4)))), (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_32, (int32_t)L_33))), (int32_t)4)))), (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)L_35))), (int32_t)4))));
		// UnsafeUtility.MemCpy(destination: to,
		//                      source:      from,
		//                      size:        xChannels * sizeof(float));
		float* L_36 = V_0;
		float* L_37 = V_7;
		int32_t L_38 = __this->get_xChannels_6();
		UnsafeUtility_MemCpy_m8E335BAB1C2A8483AF8531CE8464C6A69BB98C1B((void*)(void*)L_36, (void*)(void*)L_37, ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)4)))), /*hidden argument*/NULL);
		// to += xChannels;
		float* L_39 = V_0;
		int32_t L_40 = __this->get_xChannels_6();
		V_0 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_39, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_40), (int32_t)4))));
	}

IL_00e5:
	{
		// for (int dx = 0; dx < kernelWidth; ++dx)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00eb:
	{
		// for (int dx = 0; dx < kernelWidth; ++dx)
		int32_t L_42 = V_4;
		int32_t L_43 = __this->get_kernelWidth_11();
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0030;
		}
	}
	{
		// for (int dy = 0; dy < kernelHeight; ++dy)
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00fc:
	{
		// for (int dy = 0; dy < kernelHeight; ++dy)
		int32_t L_45 = V_3;
		int32_t L_46 = __this->get_kernelHeight_12();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0028;
		}
	}
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_010c:
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_48 = V_2;
		int32_t L_49 = __this->get_oWidth_13();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0021;
		}
	}
	{
		// for (var y = 0; y < oHeight; ++y)
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_011c:
	{
		// for (var y = 0; y < oHeight; ++y)
		int32_t L_51 = V_1;
		int32_t L_52 = __this->get_oHeight_14();
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_001a;
		}
	}
	{
		// });
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
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0__ctor_mD7C2A2710E569A5C61B46F0FD89C01D6376B14D5 (U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass89_0::<DepthwiseConv2DInnerLoop>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass89_0_U3CDepthwiseConv2DInnerLoopU3Eb__0_m455B85A9735BB31618A76D1B81CA643B43A8BF96 (U3CU3Ec__DisplayClass89_0_t773128424E4F04968A6ECFFDA67C7438C2E0D3E9 * __this, int32_t ___y0, const RuntimeMethod* method)
{
	float* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	float V_26 = 0.0f;
	float V_27 = 0.0f;
	float V_28 = 0.0f;
	float V_29 = 0.0f;
	{
		// float* outputAccumulators = (float*)UnsafeUtility.Malloc(accumulatorMemSize, accumulatorAlignmment, Allocator.TempJob);
		int32_t L_0 = __this->get_accumulatorMemSize_0();
		int32_t L_1 = __this->get_accumulatorAlignmment_1();
		void* L_2;
		L_2 = UnsafeUtility_Malloc_m18FCC67A056C48A4E0F939D08C43F9E876CA1CF6(((int64_t)((int64_t)L_0)), L_1, 3, /*hidden argument*/NULL);
		V_0 = (float*)L_2;
		// for (var n = 0; n < oBatch; ++n)
		V_1 = 0;
		goto IL_04dc;
	}

IL_001b:
	{
		// for (var x = 0; x < oWidth; ++x)
		V_2 = 0;
		goto IL_04cc;
	}

IL_0022:
	{
		// UnsafeUtility.MemClear(outputAccumulators, accumulatorMemSize);
		float* L_3 = V_0;
		int32_t L_4 = __this->get_accumulatorMemSize_0();
		UnsafeUtility_MemClear_m9A2B75C85CB8B6637B1286A562A8E35C82772D09((void*)(void*)L_3, ((int64_t)((int64_t)L_4)), /*hidden argument*/NULL);
		// for (int dy = 0; dy < kKernelHeight; ++dy)
		V_5 = 0;
		goto IL_0308;
	}

IL_0037:
	{
		// int oy = y * stride[1] + dy - pad[1];
		int32_t L_5 = ___y0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_stride_2();
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_5;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_pad_3();
		NullCheck(L_10);
		int32_t L_11 = 1;
		int32_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_8)), (int32_t)L_9)), (int32_t)L_12));
		// if (oy < 0) continue;
		int32_t L_13 = V_6;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		// if (oy >= xHeight) continue;
		int32_t L_14 = V_6;
		int32_t L_15 = __this->get_xHeight_4();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0302;
		}
	}
	{
		// for (int dx = 0; dx < kKernelWidth; ++dx)
		V_7 = 0;
		goto IL_02f5;
	}

IL_006c:
	{
		// int ox = x * stride[0] + dx - pad[0];
		int32_t L_16 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = __this->get_stride_2();
		NullCheck(L_17);
		int32_t L_18 = 0;
		int32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_pad_3();
		NullCheck(L_21);
		int32_t L_22 = 0;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)L_19)), (int32_t)L_20)), (int32_t)L_23));
		// if (ox < 0) continue;
		int32_t L_24 = V_8;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_02ef;
		}
	}
	{
		// if (ox >= xWidth) continue;
		int32_t L_25 = V_8;
		int32_t L_26 = __this->get_xWidth_5();
		if ((((int32_t)L_25) >= ((int32_t)L_26)))
		{
			goto IL_02ef;
		}
	}
	{
		// var k = 0;
		V_9 = 0;
		// var xIndex = n * xnMult + oy * xyMult + ox * xxMult;
		int32_t L_27 = V_1;
		int32_t L_28 = __this->get_xnMult_6();
		int32_t L_29 = V_6;
		int32_t L_30 = __this->get_xyMult_7();
		int32_t L_31 = V_8;
		int32_t L_32 = __this->get_xxMult_8();
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_29, (int32_t)L_30)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)L_32))));
		// var kIndex = dy * kyMult + dx * kxMult;
		int32_t L_33 = V_5;
		int32_t L_34 = __this->get_kyMult_9();
		int32_t L_35 = V_7;
		int32_t L_36 = __this->get_kxMult_10();
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)L_34)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)L_36))));
		goto IL_028f;
	}

IL_00d4:
	{
		// float x0 = xPtr[xIndex + 0], k0 = kPtr[kIndex + 0];
		float* L_37 = __this->get_xPtr_11();
		int32_t L_38 = V_10;
		float L_39 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_37, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_38), (int32_t)4)))));
		V_12 = L_39;
		// float x0 = xPtr[xIndex + 0], k0 = kPtr[kIndex + 0];
		float* L_40 = __this->get_kPtr_12();
		int32_t L_41 = V_11;
		float L_42 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_40, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_41), (int32_t)4)))));
		V_13 = L_42;
		// float x1 = xPtr[xIndex + 1], k1 = kPtr[kIndex + 1];
		float* L_43 = __this->get_xPtr_11();
		int32_t L_44 = V_10;
		float L_45 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_43, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1))), (int32_t)4)))));
		V_14 = L_45;
		// float x1 = xPtr[xIndex + 1], k1 = kPtr[kIndex + 1];
		float* L_46 = __this->get_kPtr_12();
		int32_t L_47 = V_11;
		float L_48 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_46, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1))), (int32_t)4)))));
		V_15 = L_48;
		// float x2 = xPtr[xIndex + 2], k2 = kPtr[kIndex + 2];
		float* L_49 = __this->get_xPtr_11();
		int32_t L_50 = V_10;
		float L_51 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_49, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)2))), (int32_t)4)))));
		V_16 = L_51;
		// float x2 = xPtr[xIndex + 2], k2 = kPtr[kIndex + 2];
		float* L_52 = __this->get_kPtr_12();
		int32_t L_53 = V_11;
		float L_54 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_52, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)2))), (int32_t)4)))));
		V_17 = L_54;
		// float x3 = xPtr[xIndex + 3], k3 = kPtr[kIndex + 3];
		float* L_55 = __this->get_xPtr_11();
		int32_t L_56 = V_10;
		float L_57 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_55, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)3))), (int32_t)4)))));
		V_18 = L_57;
		// float x3 = xPtr[xIndex + 3], k3 = kPtr[kIndex + 3];
		float* L_58 = __this->get_kPtr_12();
		int32_t L_59 = V_11;
		float L_60 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_58, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)3))), (int32_t)4)))));
		V_19 = L_60;
		// float x4 = xPtr[xIndex + 4], k4 = kPtr[kIndex + 4];
		float* L_61 = __this->get_xPtr_11();
		int32_t L_62 = V_10;
		float L_63 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_61, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)4))), (int32_t)4)))));
		V_20 = L_63;
		// float x4 = xPtr[xIndex + 4], k4 = kPtr[kIndex + 4];
		float* L_64 = __this->get_kPtr_12();
		int32_t L_65 = V_11;
		float L_66 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_64, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)4))), (int32_t)4)))));
		V_21 = L_66;
		// float x5 = xPtr[xIndex + 5], k5 = kPtr[kIndex + 5];
		float* L_67 = __this->get_xPtr_11();
		int32_t L_68 = V_10;
		float L_69 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_67, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)5))), (int32_t)4)))));
		V_22 = L_69;
		// float x5 = xPtr[xIndex + 5], k5 = kPtr[kIndex + 5];
		float* L_70 = __this->get_kPtr_12();
		int32_t L_71 = V_11;
		float L_72 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_70, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)5))), (int32_t)4)))));
		V_23 = L_72;
		// float x6 = xPtr[xIndex + 6], k6 = kPtr[kIndex + 6];
		float* L_73 = __this->get_xPtr_11();
		int32_t L_74 = V_10;
		float L_75 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_73, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)6))), (int32_t)4)))));
		V_24 = L_75;
		// float x6 = xPtr[xIndex + 6], k6 = kPtr[kIndex + 6];
		float* L_76 = __this->get_kPtr_12();
		int32_t L_77 = V_11;
		float L_78 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_76, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)6))), (int32_t)4)))));
		V_25 = L_78;
		// float x7 = xPtr[xIndex + 7], k7 = kPtr[kIndex + 7];
		float* L_79 = __this->get_xPtr_11();
		int32_t L_80 = V_10;
		float L_81 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_79, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)7))), (int32_t)4)))));
		V_26 = L_81;
		// float x7 = xPtr[xIndex + 7], k7 = kPtr[kIndex + 7];
		float* L_82 = __this->get_kPtr_12();
		int32_t L_83 = V_11;
		float L_84 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_82, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_83, (int32_t)7))), (int32_t)4)))));
		V_27 = L_84;
		// xIndex += unrollSize;
		int32_t L_85 = V_10;
		int32_t L_86 = __this->get_unrollSize_13();
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)L_86));
		// kIndex += unrollSize;
		int32_t L_87 = V_11;
		int32_t L_88 = __this->get_unrollSize_13();
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)L_88));
		// outputAccumulators[k + 0] += x0 * k0;
		float* L_89 = V_0;
		int32_t L_90 = V_9;
		float* L_91 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_89, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_90), (int32_t)4))));
		float L_92 = *((float*)L_91);
		float L_93 = V_12;
		float L_94 = V_13;
		*((float*)L_91) = (float)((float)il2cpp_codegen_add((float)L_92, (float)((float)il2cpp_codegen_multiply((float)L_93, (float)L_94))));
		// outputAccumulators[k + 1] += x1 * k1;
		float* L_95 = V_0;
		int32_t L_96 = V_9;
		float* L_97 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_95, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1))), (int32_t)4))));
		float L_98 = *((float*)L_97);
		float L_99 = V_14;
		float L_100 = V_15;
		*((float*)L_97) = (float)((float)il2cpp_codegen_add((float)L_98, (float)((float)il2cpp_codegen_multiply((float)L_99, (float)L_100))));
		// outputAccumulators[k + 2] += x2 * k2;
		float* L_101 = V_0;
		int32_t L_102 = V_9;
		float* L_103 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_101, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)2))), (int32_t)4))));
		float L_104 = *((float*)L_103);
		float L_105 = V_16;
		float L_106 = V_17;
		*((float*)L_103) = (float)((float)il2cpp_codegen_add((float)L_104, (float)((float)il2cpp_codegen_multiply((float)L_105, (float)L_106))));
		// outputAccumulators[k + 3] += x3 * k3;
		float* L_107 = V_0;
		int32_t L_108 = V_9;
		float* L_109 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_107, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)3))), (int32_t)4))));
		float L_110 = *((float*)L_109);
		float L_111 = V_18;
		float L_112 = V_19;
		*((float*)L_109) = (float)((float)il2cpp_codegen_add((float)L_110, (float)((float)il2cpp_codegen_multiply((float)L_111, (float)L_112))));
		// outputAccumulators[k + 4] += x4 * k4;
		float* L_113 = V_0;
		int32_t L_114 = V_9;
		float* L_115 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_113, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)4))), (int32_t)4))));
		float L_116 = *((float*)L_115);
		float L_117 = V_20;
		float L_118 = V_21;
		*((float*)L_115) = (float)((float)il2cpp_codegen_add((float)L_116, (float)((float)il2cpp_codegen_multiply((float)L_117, (float)L_118))));
		// outputAccumulators[k + 5] += x5 * k5;
		float* L_119 = V_0;
		int32_t L_120 = V_9;
		float* L_121 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_119, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)5))), (int32_t)4))));
		float L_122 = *((float*)L_121);
		float L_123 = V_22;
		float L_124 = V_23;
		*((float*)L_121) = (float)((float)il2cpp_codegen_add((float)L_122, (float)((float)il2cpp_codegen_multiply((float)L_123, (float)L_124))));
		// outputAccumulators[k + 6] += x6 * k6;
		float* L_125 = V_0;
		int32_t L_126 = V_9;
		float* L_127 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_125, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)6))), (int32_t)4))));
		float L_128 = *((float*)L_127);
		float L_129 = V_24;
		float L_130 = V_25;
		*((float*)L_127) = (float)((float)il2cpp_codegen_add((float)L_128, (float)((float)il2cpp_codegen_multiply((float)L_129, (float)L_130))));
		// outputAccumulators[k + 7] += x7 * k7;
		float* L_131 = V_0;
		int32_t L_132 = V_9;
		float* L_133 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_131, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)7))), (int32_t)4))));
		float L_134 = *((float*)L_133);
		float L_135 = V_26;
		float L_136 = V_27;
		*((float*)L_133) = (float)((float)il2cpp_codegen_add((float)L_134, (float)((float)il2cpp_codegen_multiply((float)L_135, (float)L_136))));
		// for (; k < kKernelCount - (unrollSize - 1); k += unrollSize)
		int32_t L_137 = V_9;
		int32_t L_138 = __this->get_unrollSize_13();
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, (int32_t)L_138));
	}

IL_028f:
	{
		// for (; k < kKernelCount - (unrollSize - 1); k += unrollSize)
		int32_t L_139 = V_9;
		int32_t L_140 = __this->get_kKernelCount_14();
		int32_t L_141 = __this->get_unrollSize_13();
		if ((((int32_t)L_139) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)1)))))))
		{
			goto IL_00d4;
		}
	}
	{
		goto IL_02e5;
	}

IL_02a7:
	{
		// float x0 = xPtr[xIndex++], k0 = kPtr[kIndex++];
		float* L_142 = __this->get_xPtr_11();
		int32_t L_143 = V_10;
		int32_t L_144 = L_143;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
		float L_145 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_142, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_144), (int32_t)4)))));
		V_28 = L_145;
		// float x0 = xPtr[xIndex++], k0 = kPtr[kIndex++];
		float* L_146 = __this->get_kPtr_12();
		int32_t L_147 = V_11;
		int32_t L_148 = L_147;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1));
		float L_149 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_146, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_148), (int32_t)4)))));
		V_29 = L_149;
		// outputAccumulators[k] += x0 * k0;
		float* L_150 = V_0;
		int32_t L_151 = V_9;
		float* L_152 = (float*)((float*)il2cpp_codegen_add((intptr_t)L_150, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_151), (int32_t)4))));
		float L_153 = *((float*)L_152);
		float L_154 = V_28;
		float L_155 = V_29;
		*((float*)L_152) = (float)((float)il2cpp_codegen_add((float)L_153, (float)((float)il2cpp_codegen_multiply((float)L_154, (float)L_155))));
		// for (; k < kKernelCount; k++)
		int32_t L_156 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)1));
	}

IL_02e5:
	{
		// for (; k < kKernelCount; k++)
		int32_t L_157 = V_9;
		int32_t L_158 = __this->get_kKernelCount_14();
		if ((((int32_t)L_157) < ((int32_t)L_158)))
		{
			goto IL_02a7;
		}
	}

IL_02ef:
	{
		// for (int dx = 0; dx < kKernelWidth; ++dx)
		int32_t L_159 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_02f5:
	{
		// for (int dx = 0; dx < kKernelWidth; ++dx)
		int32_t L_160 = V_7;
		int32_t L_161 = __this->get_kKernelWidth_15();
		if ((((int32_t)L_160) < ((int32_t)L_161)))
		{
			goto IL_006c;
		}
	}

IL_0302:
	{
		// for (int dy = 0; dy < kKernelHeight; ++dy)
		int32_t L_162 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
	}

IL_0308:
	{
		// for (int dy = 0; dy < kKernelHeight; ++dy)
		int32_t L_163 = V_5;
		int32_t L_164 = __this->get_kKernelHeight_16();
		if ((((int32_t)L_163) < ((int32_t)L_164)))
		{
			goto IL_0037;
		}
	}
	{
		// var q = 0;
		V_3 = 0;
		// var oIndex = n * onMult + y * oyMult + x * oxMult;
		int32_t L_165 = V_1;
		int32_t L_166 = __this->get_onMult_17();
		int32_t L_167 = ___y0;
		int32_t L_168 = __this->get_oyMult_18();
		int32_t L_169 = V_2;
		int32_t L_170 = __this->get_oxMult_19();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_165, (int32_t)L_166)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_167, (int32_t)L_168)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_169, (int32_t)L_170))));
		goto IL_047e;
	}

IL_0338:
	{
		// oPtr[oIndex + 0] = outputAccumulators[q + 0] + bPtr[q + 0];
		float* L_171 = __this->get_oPtr_20();
		int32_t L_172 = V_4;
		float* L_173 = V_0;
		int32_t L_174 = V_3;
		float L_175 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_173, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_174), (int32_t)4)))));
		float* L_176 = __this->get_bPtr_21();
		int32_t L_177 = V_3;
		float L_178 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_176, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_177), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_171, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_172), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_175, (float)L_178));
		// oPtr[oIndex + 1] = outputAccumulators[q + 1] + bPtr[q + 1];
		float* L_179 = __this->get_oPtr_20();
		int32_t L_180 = V_4;
		float* L_181 = V_0;
		int32_t L_182 = V_3;
		float L_183 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_181, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)1))), (int32_t)4)))));
		float* L_184 = __this->get_bPtr_21();
		int32_t L_185 = V_3;
		float L_186 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_184, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)1))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_179, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_183, (float)L_186));
		// oPtr[oIndex + 2] = outputAccumulators[q + 2] + bPtr[q + 2];
		float* L_187 = __this->get_oPtr_20();
		int32_t L_188 = V_4;
		float* L_189 = V_0;
		int32_t L_190 = V_3;
		float L_191 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_189, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)2))), (int32_t)4)))));
		float* L_192 = __this->get_bPtr_21();
		int32_t L_193 = V_3;
		float L_194 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_192, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)2))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_187, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_188, (int32_t)2))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_191, (float)L_194));
		// oPtr[oIndex + 3] = outputAccumulators[q + 3] + bPtr[q + 3];
		float* L_195 = __this->get_oPtr_20();
		int32_t L_196 = V_4;
		float* L_197 = V_0;
		int32_t L_198 = V_3;
		float L_199 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_197, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)3))), (int32_t)4)))));
		float* L_200 = __this->get_bPtr_21();
		int32_t L_201 = V_3;
		float L_202 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_200, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_201, (int32_t)3))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_195, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_196, (int32_t)3))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_199, (float)L_202));
		// oPtr[oIndex + 4] = outputAccumulators[q + 4] + bPtr[q + 4];
		float* L_203 = __this->get_oPtr_20();
		int32_t L_204 = V_4;
		float* L_205 = V_0;
		int32_t L_206 = V_3;
		float L_207 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_205, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)4))), (int32_t)4)))));
		float* L_208 = __this->get_bPtr_21();
		int32_t L_209 = V_3;
		float L_210 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_208, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_209, (int32_t)4))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_203, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_204, (int32_t)4))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_207, (float)L_210));
		// oPtr[oIndex + 5] = outputAccumulators[q + 5] + bPtr[q + 5];
		float* L_211 = __this->get_oPtr_20();
		int32_t L_212 = V_4;
		float* L_213 = V_0;
		int32_t L_214 = V_3;
		float L_215 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_213, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_214, (int32_t)5))), (int32_t)4)))));
		float* L_216 = __this->get_bPtr_21();
		int32_t L_217 = V_3;
		float L_218 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_216, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)5))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_211, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)5))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_215, (float)L_218));
		// oPtr[oIndex + 6] = outputAccumulators[q + 6] + bPtr[q + 6];
		float* L_219 = __this->get_oPtr_20();
		int32_t L_220 = V_4;
		float* L_221 = V_0;
		int32_t L_222 = V_3;
		float L_223 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_221, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)6))), (int32_t)4)))));
		float* L_224 = __this->get_bPtr_21();
		int32_t L_225 = V_3;
		float L_226 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_224, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_225, (int32_t)6))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_219, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_220, (int32_t)6))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_223, (float)L_226));
		// oPtr[oIndex + 7] = outputAccumulators[q + 7] + bPtr[q + 7];
		float* L_227 = __this->get_oPtr_20();
		int32_t L_228 = V_4;
		float* L_229 = V_0;
		int32_t L_230 = V_3;
		float L_231 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_229, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)7))), (int32_t)4)))));
		float* L_232 = __this->get_bPtr_21();
		int32_t L_233 = V_3;
		float L_234 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_232, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_233, (int32_t)7))), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_227, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)il2cpp_codegen_add((int32_t)L_228, (int32_t)7))), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_231, (float)L_234));
		// oIndex += unrollSize;
		int32_t L_235 = V_4;
		int32_t L_236 = __this->get_unrollSize_13();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_235, (int32_t)L_236));
		// for (; q < kKernelCount - (unrollSize - 1); q += unrollSize)
		int32_t L_237 = V_3;
		int32_t L_238 = __this->get_unrollSize_13();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)L_238));
	}

IL_047e:
	{
		// for (; q < kKernelCount - (unrollSize - 1); q += unrollSize)
		int32_t L_239 = V_3;
		int32_t L_240 = __this->get_kKernelCount_14();
		int32_t L_241 = __this->get_unrollSize_13();
		if ((((int32_t)L_239) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_240, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_241, (int32_t)1)))))))
		{
			goto IL_0338;
		}
	}
	{
		goto IL_04bf;
	}

IL_0495:
	{
		// oPtr[oIndex++  ] = outputAccumulators[q    ] + bPtr[q    ];
		float* L_242 = __this->get_oPtr_20();
		int32_t L_243 = V_4;
		int32_t L_244 = L_243;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)1));
		float* L_245 = V_0;
		int32_t L_246 = V_3;
		float L_247 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_245, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_246), (int32_t)4)))));
		float* L_248 = __this->get_bPtr_21();
		int32_t L_249 = V_3;
		float L_250 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_248, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_249), (int32_t)4)))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_242, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_244), (int32_t)4))))) = (float)((float)il2cpp_codegen_add((float)L_247, (float)L_250));
		// for (; q < kKernelCount; q++)
		int32_t L_251 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_251, (int32_t)1));
	}

IL_04bf:
	{
		// for (; q < kKernelCount; q++)
		int32_t L_252 = V_3;
		int32_t L_253 = __this->get_kKernelCount_14();
		if ((((int32_t)L_252) < ((int32_t)L_253)))
		{
			goto IL_0495;
		}
	}
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_254 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_254, (int32_t)1));
	}

IL_04cc:
	{
		// for (var x = 0; x < oWidth; ++x)
		int32_t L_255 = V_2;
		int32_t L_256 = __this->get_oWidth_22();
		if ((((int32_t)L_255) < ((int32_t)L_256)))
		{
			goto IL_0022;
		}
	}
	{
		// for (var n = 0; n < oBatch; ++n)
		int32_t L_257 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_257, (int32_t)1));
	}

IL_04dc:
	{
		// for (var n = 0; n < oBatch; ++n)
		int32_t L_258 = V_1;
		int32_t L_259 = __this->get_oBatch_23();
		if ((((int32_t)L_258) < ((int32_t)L_259)))
		{
			goto IL_001b;
		}
	}
	{
		// UnsafeUtility.Free(outputAccumulators, Allocator.TempJob);
		float* L_260 = V_0;
		UnsafeUtility_Free_mA805168FF1B6728E7DF3AD1DE47400B37F3441F9((void*)(void*)L_260, 3, /*hidden argument*/NULL);
		// });
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
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass90_0__ctor_m3E6B19D422CD5AB9D576B9A2BC0D1AA1FE5A52D6 (U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.Barracuda.UnsafeArrayCPUOps/<>c__DisplayClass90_0::<ApplyPadding>b__0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass90_0_U3CApplyPaddingU3Eb__0_m62E9B6545E1DEC0739499F9722896B9C3A576414 (U3CU3Ec__DisplayClass90_0_tA1E5B21A9CE4BC4CD81A48D0485602F4F593032B * __this, int32_t ___y0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	{
		// long offset = numItemInABatch * b + numItemInARow * y;
		int64_t L_0 = __this->get_numItemInABatch_13();
		int32_t L_1 = __this->get_b_15();
		int64_t L_2 = __this->get_numItemInARow_14();
		int32_t L_3 = ___y0;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_0, (int64_t)((int64_t)((int64_t)L_1)))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)((int64_t)((int64_t)L_3))))));
		// long numItemToPrepadInWidth = prePadX * O.channels;
		int32_t L_4 = __this->get_prePadX_0();
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_5 = __this->get_O_1();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Tensor_get_channels_m14D2FEC399E02BC7985F336D702044757D23252E(L_5, /*hidden argument*/NULL);
		V_1 = ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_6))));
		// for (long n = offset; n < (offset + numItemToPrepadInWidth); ++n)
		int64_t L_7 = V_0;
		V_6 = L_7;
		goto IL_0046;
	}

IL_0032:
	{
		// paddingOp(n);
		Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_8 = __this->get_paddingOp_2();
		int64_t L_9 = V_6;
		NullCheck(L_8);
		Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_8, L_9, /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
		// for (long n = offset; n < (offset + numItemToPrepadInWidth); ++n)
		int64_t L_10 = V_6;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((int64_t)((int64_t)1))));
	}

IL_0046:
	{
		// for (long n = offset; n < (offset + numItemToPrepadInWidth); ++n)
		int64_t L_11 = V_6;
		int64_t L_12 = V_0;
		int64_t L_13 = V_1;
		if ((((int64_t)L_11) < ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)L_13)))))
		{
			goto IL_0032;
		}
	}
	{
		// offset += numItemToPrepadInWidth;
		int64_t L_14 = V_0;
		int64_t L_15 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)L_15));
		// int srcFloatOffset = X.Index(b, (int)y - prePadY + preCropY, preCropX, 0) + Xoffset;
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_16 = __this->get_X_3();
		int32_t L_17 = __this->get_b_15();
		int32_t L_18 = ___y0;
		int32_t L_19 = __this->get_prePadY_4();
		int32_t L_20 = __this->get_preCropY_5();
		int32_t L_21 = __this->get_preCropX_6();
		NullCheck(L_16);
		int32_t L_22;
		L_22 = Tensor_Index_m79BE110F4315C65BEF67B1FE8CFEFA94602EB01A(L_16, L_17, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19)), (int32_t)L_20)), L_21, 0, /*hidden argument*/NULL);
		int32_t L_23 = __this->get_Xoffset_7();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		// int dstFloatOffset = O.Index(b, (int)y, prePadX, 0) + Ooffset;
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_24 = __this->get_O_1();
		int32_t L_25 = __this->get_b_15();
		int32_t L_26 = ___y0;
		int32_t L_27 = __this->get_prePadX_0();
		NullCheck(L_24);
		int32_t L_28;
		L_28 = Tensor_Index_m79BE110F4315C65BEF67B1FE8CFEFA94602EB01A(L_24, L_25, L_26, L_27, 0, /*hidden argument*/NULL);
		int32_t L_29 = __this->get_Ooffset_8();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		// int numFloatToCopy = O.channels * croppedWidth;
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_30 = __this->get_O_1();
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Tensor_get_channels_m14D2FEC399E02BC7985F336D702044757D23252E(L_30, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_croppedWidth_9();
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)L_32));
		// Buffer.BlockCopy(Xarray, srcFloatOffset * sizeof(float), Oarray, dstFloatOffset * sizeof(float), numFloatToCopy * sizeof(float));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = __this->get_Xarray_10();
		int32_t L_34 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = __this->get_Oarray_11();
		int32_t L_36 = V_3;
		int32_t L_37 = V_4;
		Buffer_BlockCopy_mD01FC13D87078586714AA235261A9E786C351725((RuntimeArray *)(RuntimeArray *)L_33, ((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)4)), (RuntimeArray *)(RuntimeArray *)L_35, ((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)4)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_37, (int32_t)4)), /*hidden argument*/NULL);
		// offset += numFloatToCopy;
		int64_t L_38 = V_0;
		int32_t L_39 = V_4;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_38, (int64_t)((int64_t)((int64_t)L_39))));
		// long numItemToPostInWidth = postPadX * O.channels;
		int32_t L_40 = __this->get_postPadX_12();
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_41 = __this->get_O_1();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Tensor_get_channels_m14D2FEC399E02BC7985F336D702044757D23252E(L_41, /*hidden argument*/NULL);
		V_5 = ((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)L_42))));
		// for (long n = offset; n < (offset + numItemToPostInWidth); ++n)
		int64_t L_43 = V_0;
		V_7 = L_43;
		goto IL_0104;
	}

IL_00f0:
	{
		// paddingOp(n);
		Action_1_tF6EE3B40781F3C053ACA01EC0FAD81029C0B4941 * L_44 = __this->get_paddingOp_2();
		int64_t L_45 = V_7;
		NullCheck(L_44);
		Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39(L_44, L_45, /*hidden argument*/Action_1_Invoke_m64C66903B2B44BF19B8D102033544C72BEF02F39_RuntimeMethod_var);
		// for (long n = offset; n < (offset + numItemToPostInWidth); ++n)
		int64_t L_46 = V_7;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_46, (int64_t)((int64_t)((int64_t)1))));
	}

IL_0104:
	{
		// for (long n = offset; n < (offset + numItemToPostInWidth); ++n)
		int64_t L_47 = V_7;
		int64_t L_48 = V_0;
		int64_t L_49 = V_5;
		if ((((int64_t)L_47) < ((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_48, (int64_t)L_49)))))
		{
			goto IL_00f0;
		}
	}
	{
		// });
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
// System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD97907FA4D508655D11053BCC39EC58B2340B78B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * L_0 = (U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 *)il2cpp_codegen_object_new(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3BFE2C94BCF1259E0BBC6DC755F34BE7ED275EB5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3BFE2C94BCF1259E0BBC6DC755F34BE7ED275EB5 (U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_0(Unity.Barracuda.Layer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindBrokenLinksU3Eb__0_0_m7EC40B3B459217D946EBEFC6AB15A7C6AFFA5A0B (U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * __this, Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * ___i0, const RuntimeMethod* method)
{
	{
		// var allVariables = new HashSet<string>(model.layers.Select(i => i.name));
		Layer_tEE98D9C2844A29D797A6F9F88088EEE4C17E7948 * L_0 = ___i0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_name_0();
		return L_1;
	}
}
// System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_1(Unity.Barracuda.Model/Input)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindBrokenLinksU3Eb__0_1_m6384EA6154FEFF019BFA7ADC73475E343AECD9EC (U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * __this, Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  ___i0, const RuntimeMethod* method)
{
	{
		// var globalInputs = new HashSet<string>(model.inputs.Select(i => i.name));
		Input_tF6AC09D6106735DC82AF1D8CB829C91D0D07D834  L_0 = ___i0;
		String_t* L_1 = L_0.get_name_0();
		return L_1;
	}
}
// System.String Unity.Barracuda.Compiler.Passes.ValidateBrokenLinksPass/<>c::<FindBrokenLinks>b__0_2(Unity.Barracuda.Model/Memory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CFindBrokenLinksU3Eb__0_2_mC4999319DB2E1ACDDC49A88ED3CEE6314B5DF077 (U3CU3Ec_t22338CE5B8235AEB6F602B9B1070AD202A4C0641 * __this, Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  ___i0, const RuntimeMethod* method)
{
	{
		// var memoryInputs = new HashSet<string>(model.memories.Select(i => i.input));
		Memory_t7F7DF58C94B9112530A0D147BA749B70F5011BE6  L_0 = ___i0;
		String_t* L_1 = L_0.get_input_1();
		return L_1;
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
// System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m21B94EF5C178AD5D9D2134C908D677434BD96703 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * L_0 = (U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B *)il2cpp_codegen_object_new(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE65A32C9140155B4171DEAA72138413C35D182D2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE65A32C9140155B4171DEAA72138413C35D182D2 (U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_0(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRunU3Eb__0_0_m1D593C61FFC5D11CC4F5228A75EBC2A5625E2EEA (U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * __this, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// int negativeRanks = ranksByName.Values.Count(x => x < 0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = ___x0;
		V_0 = L_0;
		V_1 = 0;
		int32_t L_1;
		L_1 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		int32_t L_2 = V_1;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		return (bool)((int32_t)((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)&(int32_t)L_3));
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<System.Int32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRunU3Eb__0_1_mB7D5F1EE4BFF4DB12AC0C786C5CF31660E5C0F32 (U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * __this, KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mA8568457D71134719487CDDC094FFDA001320553_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int knowRanks = ranksByName.Count(x => x.Value != null);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0;
		L_0 = KeyValuePair_2_get_Value_mA8568457D71134719487CDDC094FFDA001320553_inline((KeyValuePair_2_tF25EF01F33E96E5E1F7EB7327C579ABECF36F0A2 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mA8568457D71134719487CDDC094FFDA001320553_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ValidateNCHWShapesPass/<>c::<Run>b__0_2(System.Collections.Generic.KeyValuePair`2<System.String,System.Nullable`1<Unity.Barracuda.TensorShape>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRunU3Eb__0_2_mEFF52D38014299FD67E2A6686D5B126185749C08 (U3CU3Ec_tFB966F7B8DD0C0CDF55DBD6399E064DCDAC6E24B * __this, KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF0812DD6E41A1436214C9581CB7B56C5837BBAE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// int knowShapes = shapesByName.Count(x => x.Value != null);
		Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  L_0;
		L_0 = KeyValuePair_2_get_Value_mF0812DD6E41A1436214C9581CB7B56C5837BBAE6_inline((KeyValuePair_2_t768AC7F377675B8CE55DF1E637A65146592B2643 *)(&___x0), /*hidden argument*/KeyValuePair_2_get_Value_mF0812DD6E41A1436214C9581CB7B56C5837BBAE6_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_inline((Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_RuntimeMethod_var);
		return L_1;
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
// System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m39A612F1990B8A0F20FCA144C59F9B6B8419AC9D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * L_0 = (U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 *)il2cpp_codegen_object_new(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFABC363D0B404AAED079D4C2743FBA6BEBCE79F5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFABC363D0B404AAED079D4C2743FBA6BEBCE79F5 (U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRunU3Eb__0_0_m9BDB1E00FA31AB94F01BE45B351CF4E6EAEE84C5 (U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		// var duplicateOutputs = model.outputs.GroupBy(x => x)
		String_t* L_0 = ___x0;
		return L_0;
	}
}
// System.Boolean Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_1(System.Linq.IGrouping`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CRunU3Eb__0_1_m064E15F2F5E7039CD174919E1BE62DA564671552 (U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * __this, RuntimeObject* ___g0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(g => g.Count() > 1)
		RuntimeObject* L_0 = ___g0;
		int32_t L_1;
		L_1 = Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D(L_0, /*hidden argument*/Enumerable_Count_TisString_t_m73DFA608B1C4B59DF24B8910F113F39B62FF139D_RuntimeMethod_var);
		return (bool)((((int32_t)L_1) > ((int32_t)1))? 1 : 0);
	}
}
// System.String Unity.Barracuda.Compiler.Passes.ValidateUniqueOutputsPass/<>c::<Run>b__0_2(System.Linq.IGrouping`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRunU3Eb__0_2_m3CBFEAC7A9BDD27A657D1F6F6630D06488248BB1 (U3CU3Ec_t9D55D8E8EE66D8BB251D268A630C94164F7D4045 * __this, RuntimeObject* ___y0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGrouping_2_tFE746DB0D48BB9A4A6F250DC4C863F6A9B02CA64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(y => y.Key);
		RuntimeObject* L_0 = ___y0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Linq.IGrouping`2<System.String,System.String>::get_Key() */, IGrouping_2_tFE746DB0D48BB9A4A6F250DC4C863F6A9B02CA64_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Void Unity.Barracuda.VerboseOps/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m42C4BE5FDBF3C3820C7B20351A9BFDFA004855B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * L_0 = (U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D *)il2cpp_codegen_object_new(U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF2C85EB58B7E9707B76B2608C03FD769734EBEFE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Barracuda.VerboseOps/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF2C85EB58B7E9707B76B2608C03FD769734EBEFE (U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Unity.Barracuda.VerboseOps/<>c::<Unity.Barracuda.IOps.NonMaxSuppression>b__106_0(Unity.Barracuda.Tensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CUnity_Barracuda_IOps_NonMaxSuppressionU3Eb__106_0_m5D8514BBBD3EC3CDF1B0E01511168FE1D61295BB (U3CU3Ec_t1A038ED4BB1E63975DBF7E3BB1371A59DC97E99D * __this, Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * ___t0, const RuntimeMethod* method)
{
	TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LogLayerSummary($"{string.Join(",", Enumerable.Select(tensors, t => t.shape.ToString()))} centerPointBox: {centerPointBox} # {O.shape}");
		Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * L_0 = ___t0;
		NullCheck(L_0);
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_1;
		L_1 = Tensor_get_shape_m531E03462C4E56D708057594AD97964ACCB280AE_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = TensorShape_ToString_m6716FF66F1F11C019EBF3612026A6901B4F5C7BD((TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 *)(&V_0), /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshal_pinvoke(const WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7& unmarshaled, WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_pinvoke& marshaled)
{
	marshaled.___verbose_0 = static_cast<int32_t>(unmarshaled.get_verbose_0());
	marshaled.___compareAgainstType_1 = unmarshaled.get_compareAgainstType_1();
	marshaled.___compareLogLevel_2 = unmarshaled.get_compareLogLevel_2();
	marshaled.___compareEpsilon_3 = unmarshaled.get_compareEpsilon_3();
}
IL2CPP_EXTERN_C void WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshal_pinvoke_back(const WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_pinvoke& marshaled, WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7& unmarshaled)
{
	bool unmarshaled_verbose_temp_0 = false;
	unmarshaled_verbose_temp_0 = static_cast<bool>(marshaled.___verbose_0);
	unmarshaled.set_verbose_0(unmarshaled_verbose_temp_0);
	int32_t unmarshaled_compareAgainstType_temp_1 = 0;
	unmarshaled_compareAgainstType_temp_1 = marshaled.___compareAgainstType_1;
	unmarshaled.set_compareAgainstType_1(unmarshaled_compareAgainstType_temp_1);
	int32_t unmarshaled_compareLogLevel_temp_2 = 0;
	unmarshaled_compareLogLevel_temp_2 = marshaled.___compareLogLevel_2;
	unmarshaled.set_compareLogLevel_2(unmarshaled_compareLogLevel_temp_2);
	float unmarshaled_compareEpsilon_temp_3 = 0.0f;
	unmarshaled_compareEpsilon_temp_3 = marshaled.___compareEpsilon_3;
	unmarshaled.set_compareEpsilon_3(unmarshaled_compareEpsilon_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshal_pinvoke_cleanup(WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshal_com(const WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7& unmarshaled, WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_com& marshaled)
{
	marshaled.___verbose_0 = static_cast<int32_t>(unmarshaled.get_verbose_0());
	marshaled.___compareAgainstType_1 = unmarshaled.get_compareAgainstType_1();
	marshaled.___compareLogLevel_2 = unmarshaled.get_compareLogLevel_2();
	marshaled.___compareEpsilon_3 = unmarshaled.get_compareEpsilon_3();
}
IL2CPP_EXTERN_C void WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshal_com_back(const WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_com& marshaled, WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7& unmarshaled)
{
	bool unmarshaled_verbose_temp_0 = false;
	unmarshaled_verbose_temp_0 = static_cast<bool>(marshaled.___verbose_0);
	unmarshaled.set_verbose_0(unmarshaled_verbose_temp_0);
	int32_t unmarshaled_compareAgainstType_temp_1 = 0;
	unmarshaled_compareAgainstType_temp_1 = marshaled.___compareAgainstType_1;
	unmarshaled.set_compareAgainstType_1(unmarshaled_compareAgainstType_temp_1);
	int32_t unmarshaled_compareLogLevel_temp_2 = 0;
	unmarshaled_compareLogLevel_temp_2 = marshaled.___compareLogLevel_2;
	unmarshaled.set_compareLogLevel_2(unmarshaled_compareLogLevel_temp_2);
	float unmarshaled_compareEpsilon_temp_3 = 0.0f;
	unmarshaled_compareEpsilon_temp_3 = marshaled.___compareEpsilon_3;
	unmarshaled.set_compareEpsilon_3(unmarshaled_compareEpsilon_temp_3);
}
// Conversion method for clean up from marshalling of: Unity.Barracuda.WorkerFactory/WorkerConfiguration
IL2CPP_EXTERN_C void WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshal_com_cleanup(WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7_marshaled_com& marshaled)
{
}
// System.Void Unity.Barracuda.WorkerFactory/WorkerConfiguration::.ctor(Unity.Barracuda.WorkerFactory/Type,System.Boolean,Unity.Barracuda.CompareOpsUtils/LogLevel,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkerConfiguration__ctor_m44E189F5AF08F7CE644C1F12873F6B885107E973 (WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7 * __this, int32_t ___compareAgainstType0, bool ___verbose1, int32_t ___compareLogLevel2, float ___compareEpsilon3, const RuntimeMethod* method)
{
	{
		// this.verbose = verbose;
		bool L_0 = ___verbose1;
		__this->set_verbose_0(L_0);
		// this.compareAgainstType = compareAgainstType;
		int32_t L_1 = ___compareAgainstType0;
		__this->set_compareAgainstType_1(L_1);
		// this.compareLogLevel = compareLogLevel;
		int32_t L_2 = ___compareLogLevel2;
		__this->set_compareLogLevel_2(L_2);
		// this.compareEpsilon = compareEpsilon;
		float L_3 = ___compareEpsilon3;
		__this->set_compareEpsilon_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkerConfiguration__ctor_m44E189F5AF08F7CE644C1F12873F6B885107E973_AdjustorThunk (RuntimeObject * __this, int32_t ___compareAgainstType0, bool ___verbose1, int32_t ___compareLogLevel2, float ___compareEpsilon3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7 * _thisAdjusted = reinterpret_cast<WorkerConfiguration_tBAE8B67C1EC0E5BC892115B3C896BB653A2F45D7 *>(__this + _offset);
	WorkerConfiguration__ctor_m44E189F5AF08F7CE644C1F12873F6B885107E973(_thisAdjusted, ___compareAgainstType0, ___verbose1, ___compareLogLevel2, ___compareEpsilon3, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * SnapshotFieldsWithContexts_get_Contexts_m2CA18E2C30EBC119C99287D6C83D223B89AA7C30_inline (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, const RuntimeMethod* method)
{
	{
		// public SortedDictionary<int, SnapshotFields> Contexts { get; }
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0 = __this->get_U3CContextsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * SnapshotFieldsWithContexts_get_Fields_mD1AD10A3F2DB41AA1D7F72180E6E6D9C79C736D8_inline (SnapshotFieldsWithContexts_t3A1F21DDE27C601938ECD9E0CD26DB419EF6AE7B * __this, const RuntimeMethod* method)
{
	{
		// public SortedDictionary<int, SnapshotFields> Fields { get; }
		SortedDictionary_2_t8CDFC0CF03B80886E44E901FA602D330C4BF6415 * L_0 = __this->get_U3CFieldsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MemorySnapshotReport_get_ContextType_m025007821C67AE53763911FA9AE10C70BA548E66_inline (MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * __this, const RuntimeMethod* method)
{
	{
		// public string ContextType { get; }
		String_t* L_0 = __this->get_U3CContextTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MemorySnapshotReport_get_ContextName_mDE72FEE6E4FC5F1C96B5B4E750895B787D514DBC_inline (MemorySnapshotReport_t55755638076FAA990B7BB150A352CC621BA1AB15 * __this, const RuntimeMethod* method)
{
	{
		// public string ContextName  { get; }
		String_t* L_0 = __this->get_U3CContextNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LayerExecutionReport_get_LayerType_mF31D118837A1D7FC7EA9ED6433AFDE5ED887EB2F_inline (LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * __this, const RuntimeMethod* method)
{
	{
		// public string LayerType { get; }
		String_t* L_0 = __this->get_U3CLayerTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LayerExecutionReport_get_LayerName_m09BDBB420CED2D32D9B7575F1B41F85C3DF8B3A7_inline (LayerExecutionReport_tDA1335E6CA32407ABC3269747B0CA0FADA9475B0 * __this, const RuntimeMethod* method)
{
	{
		// public string LayerName { get; }
		String_t* L_0 = __this->get_U3CLayerNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_flatHeight_m8AAA001033FA68763CEC297CFCBC052EA2D93D40_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method)
{
	{
		// public int flatHeight { get { return batch; } }
		int32_t L_0 = __this->get_batch_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelDepth_mF470714B30FCEEF5D880107D4F990260F8EA8FFD_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method)
{
	{
		// public int kernelDepth { get { return width; } }
		int32_t L_0 = __this->get_width_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelWidth_m10EC2C7BF357DCE9FB53B3FD352C86ED354B0788_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method)
{
	{
		// public int kernelWidth { get { return height; } }
		int32_t L_0 = __this->get_height_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelHeight_m050A24BC599F0639C7F304A39DBD51D45A620EBC_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method)
{
	{
		// public int kernelHeight { get { return batch; } }//Use .batch so HWCK weight use 4D constructor for backward compatibility with 4D tensorShape.
		int32_t L_0 = __this->get_batch_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TensorShape_get_kernelSpatialDepth_m8D9CB48F70D8E1126472FE7F54C5FE9988E1767D_inline (TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45 * __this, const RuntimeMethod* method)
{
	{
		// public int kernelSpatialDepth { get { return numberOfDirections; } }
		int32_t L_0 = __this->get_numberOfDirections_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  Tensor_get_shape_m531E03462C4E56D708057594AD97964ACCB280AE_inline (Tensor_t6C55DA325EFBC9C032FC89716212B1D71BDF3760 * __this, const RuntimeMethod* method)
{
	{
		// public TensorShape shape { get; }
		TensorShape_tECE3A9EBCDFB8D5EC418FFB949ED89500C70BC45  L_0 = __this->get_U3CshapeU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9F9DF6119C16A47CA183A11447C735B01FE006C8_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mF390DA2A3078B58DD811566C1131DF2495F5052E_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  Enumerator_get_Current_m2DC9E60D6C7A4DCEC55460DC4AECB777D774E74C_gshared_inline (Enumerator_t6AAED796A745D24065A3C9DDE874AD43189EB475 * __this, const RuntimeMethod* method)
{
	{
		Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C  L_0 = (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C )__this->get_current_3();
		return (Entry_t2814CDCD82BFECE796CAE657FC55C88EDC2C7F4C )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  KeyValuePair_2_get_Value_mD8E039565E9084E0CC2280E20420B0B56EBD6AE8_gshared_inline (KeyValuePair_2_t65EB7E3BB3EDAAADC5E7C051BD6D9B0E4A5A0159 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )__this->get_value_1();
		return (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  KeyValuePair_2_get_Value_m598CDD5FBE3B1F0DBF3DF0D58D5C5EA58A9C3F26_gshared_inline (KeyValuePair_2_t74685B4B6C19C78A0DAB00C06E94C5091B654FB5 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1  L_0 = (Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 )__this->get_value_1();
		return (Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1AE080FF286D1BF3B86EC380825F7E08E63E9F29_gshared_inline (Nullable_1_t50DD052985F23B7A0FC5CF5556704135C6E8E5F1 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
