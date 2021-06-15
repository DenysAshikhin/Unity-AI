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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`2<Google.Protobuf.CodedOutputStream,Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct Action_2_t46D902958F5384A09E335DCBACA0E3A8F4288FF0;
// System.Action`2<Google.Protobuf.CodedOutputStream,Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct Action_2_tB729470FFBB8F580E343903DC45741D97329054E;
// System.Collections.Generic.EqualityComparer`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5;
// System.Collections.Generic.EqualityComparer`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C;
// Google.Protobuf.FieldCodec`1<System.Boolean>
struct FieldCodec_1_t9EB975B679EDB1F9BCE2FE5FE4C5AAEE19140D83;
// Google.Protobuf.FieldCodec`1<System.Int32>
struct FieldCodec_1_t52B4329E844FD4F2FA7538D3A85A95F1639A1DE2;
// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t80E636A5B1415EBD40A7B96CA496DD8885448E0E;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.ObservationProto>
struct FieldCodec_1_tE8061096EE50EA78AA07A7556E9687C6A605D818;
// Google.Protobuf.FieldCodec`1<System.Single>
struct FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct Func_1_tB17F1864CC6DD9054A70B01FEDDA675A64323390;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct Func_1_t9F4BAE11F2F37611237777CC684DBF6D4F378667;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_t14F15F7219CBFF413DE2F752FAB816CC3F68CDC0;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.AgentActionProto,System.Int32>
struct Func_2_t92E9F3C0504C314334380A5E2F0F1D53EF2AE193;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.AgentInfoProto,System.Int32>
struct Func_2_tD415A2656334022950E93CF1491DCE762DC899BE;
// System.Func`2<Google.Protobuf.CodedInputStream,Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct Func_2_tF81A0B932DE60E2259947B5967B263BA71899E44;
// System.Func`2<Google.Protobuf.CodedInputStream,Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct Func_2_t47C08BD43DF7F722256AFAB7E7D9825E78B9A913;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField>
struct IDictionary_2_t4037F986432CEDD570FE37E395F8FF61E4F65908;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tBAAF4ADBAEC35B6EC00EFE76CDDE4EB6E2D540E7;
// System.Collections.Generic.IEnumerable`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct IEnumerable_1_t7ABA935D9806AC9425355E035B14EF238C084C4E;
// System.Collections.Generic.IEnumerable`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct IEnumerable_1_t9A99222040AFA827EE0B5D41A7EDAFBA5371C5FE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_tA12FAEFB0B52C26310B3B17E99642955419AB586;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_tF41CBC8E6619B1094FC2D9B9EBE83331119D605D;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_t05680C26DD61C1A04E11CABAFA51A8DF6F7C2050;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_tCA7FBC06F3FD92C904CC210D7BDDCF192596DBE9;
// Google.Protobuf.FieldCodec`1/InputMerger<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct InputMerger_t39BD3372D4921BC0BC6903C455A71C534A587F82;
// Google.Protobuf.FieldCodec`1/InputMerger<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct InputMerger_tC82BA170F3077D160A48DE57436357E20FA39E89;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tEFEF0F1AAC0FFD1DA1FE95EB9864DEDCEFAFFD8C;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData>
struct MessageParser_1_tD49A3F273C1542F8D14555ED0AA0F2E2CA8074B1;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0;
// Google.Protobuf.Collections.RepeatedField`1<System.Boolean>
struct RepeatedField_1_t2D103B87B6751184696326A3BBFCF4613AA49130;
// Google.Protobuf.Collections.RepeatedField`1<System.Int32>
struct RepeatedField_1_t540529636BF2CD82F3CA0BE6B15C264CAC06DC5D;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.ObservationProto>
struct RepeatedField_1_tFA3C9DD6A95790B38E988E90BB07D46228FCDE27;
// Google.Protobuf.Collections.RepeatedField`1<System.Single>
struct RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct ValuesMerger_t71F3EEBECB8641C83D6DE3C22F0219CFF3B0D89F;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct ValuesMerger_tFC9D5AD1C515A04F5EB3517C85B16D6A71864DDA;
// Unity.MLAgents.CommunicatorObjects.AgentActionProto[]
struct AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D;
// Unity.MLAgents.CommunicatorObjects.AgentInfoProto[]
struct AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Unity.MLAgents.CommunicatorObjects.AgentActionProto
struct AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760;
// Unity.MLAgents.CommunicatorObjects.AgentInfoProto
struct AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_t7D3FB91F2D335C9C9C1B905D984BFCE432917954;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_t21E19A4CB59A86E96069844D5B2359CE81B8C23A;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_t2FB59CC8856E9DBAD8FAE46DE7863031DB27FEBB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Google.Protobuf.IMessage
struct IMessage_t34B5ECE7C442E44AB2121FA7A9FAC7C9216C0BD9;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8;
// Google.Protobuf.MessageParser
struct MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Google.Protobuf.UnknownField
struct UnknownField_tBC40006F8692A246641EFCF12B6B1EFA2F8C74F5;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t3DB5933BD66E00929627164478B321FA766EC559;
// Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData
struct FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885;
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto
struct ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF;
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto
struct ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5;
// Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c
struct U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E;
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c
struct U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1;
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c
struct U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062;

IL2CPP_EXTERN_C RuntimeClass* AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t05680C26DD61C1A04E11CABAFA51A8DF6F7C2050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_t60B224B5AAD7C4B394A07D3C2E10EAD03B56397B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisAgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_mB07A40DB8CE7DE139FECC9216ADE785B0CA5FF48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisAgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_mA7780120C1CFB3162A1D1A566F82C8E4E1614338_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m07837B976212E6FCD9D927ADE930A39FC625DC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m127744ACA844E3994BB239CBBEF3B24F1ECD3198_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m4A2CD44D5CB456E42698D5B2B4375203B8A0C25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mC7B379BA6558CBC11F8F50C9D96F49844E6D4140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_m746125F3D9496FA236BE5FFE9677110970954F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_mCBEA5D4A24BD6411E9ECEDA2EE4FCD8D3ABEC70B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_m1753A3FD2AE327758DA5D28638600DF54BA8F56D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_mDF7EC24F54AB59E2C8121CE68D828A8FA5F6AC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_mC719C8172AEC4FAB1BF611F714FD89B3F3201CAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_mE2B63B1942E48EF54E8E6E6BAF674701C09F3F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_m459E11CCF674DEBA89056507600341A0FA03288E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_mF69BD98F3B6A47B80EFFA5DFEBD4BD0367385253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_m31BB2BC4BCDCE845BC20B1DAF738C3BCAC803F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_m50019E6764ED7F7BF2FD405ABC763A230DE80BA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_m26B51FB4201CBA20D3AB2F782267D4275C8079D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_m976A203363E3FDD9C9566E1B974DAD0F410C63DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_m750357F43A3EDB5D326506F237F062472BD150C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_mDCA8255E15F742A8160A4E400231052A2A239237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__25_0_m01028E6CF34C1466CDEBC8BA65F78E0CC4FC4F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__25_0_m0ECEEBE0E61577B442268FD550057DACCBD42382_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_t46D902958F5384A09E335DCBACA0E3A8F4288FF0 * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t92E9F3C0504C314334380A5E2F0F1D53EF2AE193 * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_tF81A0B932DE60E2259947B5967B263BA71899E44 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t39BD3372D4921BC0BC6903C455A71C534A587F82 * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t71F3EEBECB8641C83D6DE3C22F0219CFF3B0D89F * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 * ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_t46D902958F5384A09E335DCBACA0E3A8F4288FF0 * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_t46D902958F5384A09E335DCBACA0E3A8F4288FF0 ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_t46D902958F5384A09E335DCBACA0E3A8F4288FF0 * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_t92E9F3C0504C314334380A5E2F0F1D53EF2AE193 * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_t92E9F3C0504C314334380A5E2F0F1D53EF2AE193 ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_t92E9F3C0504C314334380A5E2F0F1D53EF2AE193 * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_tF81A0B932DE60E2259947B5967B263BA71899E44 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_tF81A0B932DE60E2259947B5967B263BA71899E44 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_tF81A0B932DE60E2259947B5967B263BA71899E44 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_t39BD3372D4921BC0BC6903C455A71C534A587F82 * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_t39BD3372D4921BC0BC6903C455A71C534A587F82 ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_t39BD3372D4921BC0BC6903C455A71C534A587F82 * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_t71F3EEBECB8641C83D6DE3C22F0219CFF3B0D89F * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_t71F3EEBECB8641C83D6DE3C22F0219CFF3B0D89F ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_t71F3EEBECB8641C83D6DE3C22F0219CFF3B0D89F * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 * get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 ** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 * ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9_StaticFields, ___DefaultDefault_1)); }
	inline AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 * get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 ** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760 * value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_tB729470FFBB8F580E343903DC45741D97329054E * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_tD415A2656334022950E93CF1491DCE762DC899BE * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_t47C08BD43DF7F722256AFAB7E7D9825E78B9A913 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_tC82BA170F3077D160A48DE57436357E20FA39E89 * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_tFC9D5AD1C515A04F5EB3517C85B16D6A71864DDA * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 * ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_tB729470FFBB8F580E343903DC45741D97329054E * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_tB729470FFBB8F580E343903DC45741D97329054E ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_tB729470FFBB8F580E343903DC45741D97329054E * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_tD415A2656334022950E93CF1491DCE762DC899BE * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_tD415A2656334022950E93CF1491DCE762DC899BE ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_tD415A2656334022950E93CF1491DCE762DC899BE * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_t47C08BD43DF7F722256AFAB7E7D9825E78B9A913 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_t47C08BD43DF7F722256AFAB7E7D9825E78B9A913 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_t47C08BD43DF7F722256AFAB7E7D9825E78B9A913 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_tC82BA170F3077D160A48DE57436357E20FA39E89 * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_tC82BA170F3077D160A48DE57436357E20FA39E89 ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_tC82BA170F3077D160A48DE57436357E20FA39E89 * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_tFC9D5AD1C515A04F5EB3517C85B16D6A71864DDA * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_tFC9D5AD1C515A04F5EB3517C85B16D6A71864DDA ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_tFC9D5AD1C515A04F5EB3517C85B16D6A71864DDA * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 * get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 ** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 * ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C_StaticFields, ___DefaultDefault_1)); }
	inline AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 * get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 ** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4 * value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A  : public RuntimeObject
{
public:
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D* ___array_2;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_array_2() { return static_cast<int32_t>(offsetof(RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A, ___array_2)); }
	inline AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D* get_array_2() const { return ___array_2; }
	inline AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D** get_address_of_array_2() { return &___array_2; }
	inline void set_array_2(AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D* value)
	{
		___array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_2), (void*)value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

struct RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 * ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D* ___EmptyArray_1;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_tF56B817CFFE5888AFEBD53F8AA54EEFBF70C3CF5 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A_StaticFields, ___EmptyArray_1)); }
	inline AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(AgentActionProtoU5BU5D_t917E835BCFB86594D69EA81B7EAB83E68A1B6F3D* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}
};


// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0  : public RuntimeObject
{
public:
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027* ___array_2;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_array_2() { return static_cast<int32_t>(offsetof(RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0, ___array_2)); }
	inline AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027* get_array_2() const { return ___array_2; }
	inline AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027** get_address_of_array_2() { return &___array_2; }
	inline void set_array_2(AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027* value)
	{
		___array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_2), (void*)value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

struct RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE * ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027* ___EmptyArray_1;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_tD835F766E2E7B3E3DC017E3BC4590AA65C7A5FBE * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0_StaticFields, ___EmptyArray_1)); }
	inline AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(AgentInfoProtoU5BU5D_t8E773C1B94CE0A429063548C7556E45448C90027* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.AgentActionProto
struct AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.AgentActionProto::_unknownFields
	UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::vectorActionsDeprecated_
	RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * ___vectorActionsDeprecated__3;
	// System.Single Unity.MLAgents.CommunicatorObjects.AgentActionProto::value_
	float ___value__4;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::continuousActions_
	RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * ___continuousActions__6;
	// Google.Protobuf.Collections.RepeatedField`1<System.Int32> Unity.MLAgents.CommunicatorObjects.AgentActionProto::discreteActions_
	RepeatedField_1_t540529636BF2CD82F3CA0BE6B15C264CAC06DC5D * ___discreteActions__8;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760, ____unknownFields_1)); }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_vectorActionsDeprecated__3() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760, ___vectorActionsDeprecated__3)); }
	inline RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * get_vectorActionsDeprecated__3() const { return ___vectorActionsDeprecated__3; }
	inline RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 ** get_address_of_vectorActionsDeprecated__3() { return &___vectorActionsDeprecated__3; }
	inline void set_vectorActionsDeprecated__3(RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * value)
	{
		___vectorActionsDeprecated__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorActionsDeprecated__3), (void*)value);
	}

	inline static int32_t get_offset_of_value__4() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760, ___value__4)); }
	inline float get_value__4() const { return ___value__4; }
	inline float* get_address_of_value__4() { return &___value__4; }
	inline void set_value__4(float value)
	{
		___value__4 = value;
	}

	inline static int32_t get_offset_of_continuousActions__6() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760, ___continuousActions__6)); }
	inline RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * get_continuousActions__6() const { return ___continuousActions__6; }
	inline RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 ** get_address_of_continuousActions__6() { return &___continuousActions__6; }
	inline void set_continuousActions__6(RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * value)
	{
		___continuousActions__6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuousActions__6), (void*)value);
	}

	inline static int32_t get_offset_of_discreteActions__8() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760, ___discreteActions__8)); }
	inline RepeatedField_1_t540529636BF2CD82F3CA0BE6B15C264CAC06DC5D * get_discreteActions__8() const { return ___discreteActions__8; }
	inline RepeatedField_1_t540529636BF2CD82F3CA0BE6B15C264CAC06DC5D ** get_address_of_discreteActions__8() { return &___discreteActions__8; }
	inline void set_discreteActions__8(RepeatedField_1_t540529636BF2CD82F3CA0BE6B15C264CAC06DC5D * value)
	{
		___discreteActions__8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___discreteActions__8), (void*)value);
	}
};

struct AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_parser
	MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * ____parser_0;
	// Google.Protobuf.FieldCodec`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_repeated_vectorActionsDeprecated_codec
	FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * ____repeated_vectorActionsDeprecated_codec_2;
	// Google.Protobuf.FieldCodec`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_repeated_continuousActions_codec
	FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * ____repeated_continuousActions_codec_5;
	// Google.Protobuf.FieldCodec`1<System.Int32> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_repeated_discreteActions_codec
	FieldCodec_1_t52B4329E844FD4F2FA7538D3A85A95F1639A1DE2 * ____repeated_discreteActions_codec_7;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_StaticFields, ____parser_0)); }
	inline MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_vectorActionsDeprecated_codec_2() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_StaticFields, ____repeated_vectorActionsDeprecated_codec_2)); }
	inline FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * get__repeated_vectorActionsDeprecated_codec_2() const { return ____repeated_vectorActionsDeprecated_codec_2; }
	inline FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 ** get_address_of__repeated_vectorActionsDeprecated_codec_2() { return &____repeated_vectorActionsDeprecated_codec_2; }
	inline void set__repeated_vectorActionsDeprecated_codec_2(FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * value)
	{
		____repeated_vectorActionsDeprecated_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_vectorActionsDeprecated_codec_2), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_continuousActions_codec_5() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_StaticFields, ____repeated_continuousActions_codec_5)); }
	inline FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * get__repeated_continuousActions_codec_5() const { return ____repeated_continuousActions_codec_5; }
	inline FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 ** get_address_of__repeated_continuousActions_codec_5() { return &____repeated_continuousActions_codec_5; }
	inline void set__repeated_continuousActions_codec_5(FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * value)
	{
		____repeated_continuousActions_codec_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_continuousActions_codec_5), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_discreteActions_codec_7() { return static_cast<int32_t>(offsetof(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_StaticFields, ____repeated_discreteActions_codec_7)); }
	inline FieldCodec_1_t52B4329E844FD4F2FA7538D3A85A95F1639A1DE2 * get__repeated_discreteActions_codec_7() const { return ____repeated_discreteActions_codec_7; }
	inline FieldCodec_1_t52B4329E844FD4F2FA7538D3A85A95F1639A1DE2 ** get_address_of__repeated_discreteActions_codec_7() { return &____repeated_discreteActions_codec_7; }
	inline void set__repeated_discreteActions_codec_7(FieldCodec_1_t52B4329E844FD4F2FA7538D3A85A95F1639A1DE2 * value)
	{
		____repeated_discreteActions_codec_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_discreteActions_codec_7), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.AgentInfoProto
struct AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_unknownFields
	UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ____unknownFields_1;
	// System.Single Unity.MLAgents.CommunicatorObjects.AgentInfoProto::reward_
	float ___reward__2;
	// System.Boolean Unity.MLAgents.CommunicatorObjects.AgentInfoProto::done_
	bool ___done__3;
	// System.Boolean Unity.MLAgents.CommunicatorObjects.AgentInfoProto::maxStepReached_
	bool ___maxStepReached__4;
	// System.Int32 Unity.MLAgents.CommunicatorObjects.AgentInfoProto::id_
	int32_t ___id__5;
	// Google.Protobuf.Collections.RepeatedField`1<System.Boolean> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::actionMask_
	RepeatedField_1_t2D103B87B6751184696326A3BBFCF4613AA49130 * ___actionMask__7;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.ObservationProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::observations_
	RepeatedField_1_tFA3C9DD6A95790B38E988E90BB07D46228FCDE27 * ___observations__9;
	// System.Int32 Unity.MLAgents.CommunicatorObjects.AgentInfoProto::groupId_
	int32_t ___groupId__10;
	// System.Single Unity.MLAgents.CommunicatorObjects.AgentInfoProto::groupReward_
	float ___groupReward__11;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ____unknownFields_1)); }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_reward__2() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___reward__2)); }
	inline float get_reward__2() const { return ___reward__2; }
	inline float* get_address_of_reward__2() { return &___reward__2; }
	inline void set_reward__2(float value)
	{
		___reward__2 = value;
	}

	inline static int32_t get_offset_of_done__3() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___done__3)); }
	inline bool get_done__3() const { return ___done__3; }
	inline bool* get_address_of_done__3() { return &___done__3; }
	inline void set_done__3(bool value)
	{
		___done__3 = value;
	}

	inline static int32_t get_offset_of_maxStepReached__4() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___maxStepReached__4)); }
	inline bool get_maxStepReached__4() const { return ___maxStepReached__4; }
	inline bool* get_address_of_maxStepReached__4() { return &___maxStepReached__4; }
	inline void set_maxStepReached__4(bool value)
	{
		___maxStepReached__4 = value;
	}

	inline static int32_t get_offset_of_id__5() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___id__5)); }
	inline int32_t get_id__5() const { return ___id__5; }
	inline int32_t* get_address_of_id__5() { return &___id__5; }
	inline void set_id__5(int32_t value)
	{
		___id__5 = value;
	}

	inline static int32_t get_offset_of_actionMask__7() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___actionMask__7)); }
	inline RepeatedField_1_t2D103B87B6751184696326A3BBFCF4613AA49130 * get_actionMask__7() const { return ___actionMask__7; }
	inline RepeatedField_1_t2D103B87B6751184696326A3BBFCF4613AA49130 ** get_address_of_actionMask__7() { return &___actionMask__7; }
	inline void set_actionMask__7(RepeatedField_1_t2D103B87B6751184696326A3BBFCF4613AA49130 * value)
	{
		___actionMask__7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionMask__7), (void*)value);
	}

	inline static int32_t get_offset_of_observations__9() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___observations__9)); }
	inline RepeatedField_1_tFA3C9DD6A95790B38E988E90BB07D46228FCDE27 * get_observations__9() const { return ___observations__9; }
	inline RepeatedField_1_tFA3C9DD6A95790B38E988E90BB07D46228FCDE27 ** get_address_of_observations__9() { return &___observations__9; }
	inline void set_observations__9(RepeatedField_1_tFA3C9DD6A95790B38E988E90BB07D46228FCDE27 * value)
	{
		___observations__9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observations__9), (void*)value);
	}

	inline static int32_t get_offset_of_groupId__10() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___groupId__10)); }
	inline int32_t get_groupId__10() const { return ___groupId__10; }
	inline int32_t* get_address_of_groupId__10() { return &___groupId__10; }
	inline void set_groupId__10(int32_t value)
	{
		___groupId__10 = value;
	}

	inline static int32_t get_offset_of_groupReward__11() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4, ___groupReward__11)); }
	inline float get_groupReward__11() const { return ___groupReward__11; }
	inline float* get_address_of_groupReward__11() { return &___groupReward__11; }
	inline void set_groupReward__11(float value)
	{
		___groupReward__11 = value;
	}
};

struct AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_parser
	MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * ____parser_0;
	// Google.Protobuf.FieldCodec`1<System.Boolean> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_repeated_actionMask_codec
	FieldCodec_1_t9EB975B679EDB1F9BCE2FE5FE4C5AAEE19140D83 * ____repeated_actionMask_codec_6;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.ObservationProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_repeated_observations_codec
	FieldCodec_1_tE8061096EE50EA78AA07A7556E9687C6A605D818 * ____repeated_observations_codec_8;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_StaticFields, ____parser_0)); }
	inline MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_actionMask_codec_6() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_StaticFields, ____repeated_actionMask_codec_6)); }
	inline FieldCodec_1_t9EB975B679EDB1F9BCE2FE5FE4C5AAEE19140D83 * get__repeated_actionMask_codec_6() const { return ____repeated_actionMask_codec_6; }
	inline FieldCodec_1_t9EB975B679EDB1F9BCE2FE5FE4C5AAEE19140D83 ** get_address_of__repeated_actionMask_codec_6() { return &____repeated_actionMask_codec_6; }
	inline void set__repeated_actionMask_codec_6(FieldCodec_1_t9EB975B679EDB1F9BCE2FE5FE4C5AAEE19140D83 * value)
	{
		____repeated_actionMask_codec_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_actionMask_codec_6), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_observations_codec_8() { return static_cast<int32_t>(offsetof(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_StaticFields, ____repeated_observations_codec_8)); }
	inline FieldCodec_1_tE8061096EE50EA78AA07A7556E9687C6A605D818 * get__repeated_observations_codec_8() const { return ____repeated_observations_codec_8; }
	inline FieldCodec_1_tE8061096EE50EA78AA07A7556E9687C6A605D818 ** get_address_of__repeated_observations_codec_8() { return &____repeated_observations_codec_8; }
	inline void set__repeated_observations_codec_8(FieldCodec_1_tE8061096EE50EA78AA07A7556E9687C6A605D818 * value)
	{
		____repeated_observations_codec_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_observations_codec_8), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Google.Protobuf.CodedInputStream
struct CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.CodedInputStream::leaveOpen
	bool ___leaveOpen_0;
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_1;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSize
	int32_t ___bufferSize_2;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_3;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferPos
	int32_t ___bufferPos_4;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___input_5;
	// System.UInt32 Google.Protobuf.CodedInputStream::lastTag
	uint32_t ___lastTag_6;
	// System.UInt32 Google.Protobuf.CodedInputStream::nextTag
	uint32_t ___nextTag_7;
	// System.Boolean Google.Protobuf.CodedInputStream::hasNextTag
	bool ___hasNextTag_8;
	// System.Int32 Google.Protobuf.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_9;
	// System.Int32 Google.Protobuf.CodedInputStream::currentLimit
	int32_t ___currentLimit_10;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_11;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_12;
	// System.Int32 Google.Protobuf.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_13;
	// System.Boolean Google.Protobuf.CodedInputStream::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_14;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.CodedInputStream::<ExtensionRegistry>k__BackingField
	ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 * ___U3CExtensionRegistryU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_leaveOpen_0() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___leaveOpen_0)); }
	inline bool get_leaveOpen_0() const { return ___leaveOpen_0; }
	inline bool* get_address_of_leaveOpen_0() { return &___leaveOpen_0; }
	inline void set_leaveOpen_0(bool value)
	{
		___leaveOpen_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___buffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_2() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___bufferSize_2)); }
	inline int32_t get_bufferSize_2() const { return ___bufferSize_2; }
	inline int32_t* get_address_of_bufferSize_2() { return &___bufferSize_2; }
	inline void set_bufferSize_2(int32_t value)
	{
		___bufferSize_2 = value;
	}

	inline static int32_t get_offset_of_bufferSizeAfterLimit_3() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___bufferSizeAfterLimit_3)); }
	inline int32_t get_bufferSizeAfterLimit_3() const { return ___bufferSizeAfterLimit_3; }
	inline int32_t* get_address_of_bufferSizeAfterLimit_3() { return &___bufferSizeAfterLimit_3; }
	inline void set_bufferSizeAfterLimit_3(int32_t value)
	{
		___bufferSizeAfterLimit_3 = value;
	}

	inline static int32_t get_offset_of_bufferPos_4() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___bufferPos_4)); }
	inline int32_t get_bufferPos_4() const { return ___bufferPos_4; }
	inline int32_t* get_address_of_bufferPos_4() { return &___bufferPos_4; }
	inline void set_bufferPos_4(int32_t value)
	{
		___bufferPos_4 = value;
	}

	inline static int32_t get_offset_of_input_5() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___input_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_input_5() const { return ___input_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_input_5() { return &___input_5; }
	inline void set_input_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___input_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastTag_6() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___lastTag_6)); }
	inline uint32_t get_lastTag_6() const { return ___lastTag_6; }
	inline uint32_t* get_address_of_lastTag_6() { return &___lastTag_6; }
	inline void set_lastTag_6(uint32_t value)
	{
		___lastTag_6 = value;
	}

	inline static int32_t get_offset_of_nextTag_7() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___nextTag_7)); }
	inline uint32_t get_nextTag_7() const { return ___nextTag_7; }
	inline uint32_t* get_address_of_nextTag_7() { return &___nextTag_7; }
	inline void set_nextTag_7(uint32_t value)
	{
		___nextTag_7 = value;
	}

	inline static int32_t get_offset_of_hasNextTag_8() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___hasNextTag_8)); }
	inline bool get_hasNextTag_8() const { return ___hasNextTag_8; }
	inline bool* get_address_of_hasNextTag_8() { return &___hasNextTag_8; }
	inline void set_hasNextTag_8(bool value)
	{
		___hasNextTag_8 = value;
	}

	inline static int32_t get_offset_of_totalBytesRetired_9() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___totalBytesRetired_9)); }
	inline int32_t get_totalBytesRetired_9() const { return ___totalBytesRetired_9; }
	inline int32_t* get_address_of_totalBytesRetired_9() { return &___totalBytesRetired_9; }
	inline void set_totalBytesRetired_9(int32_t value)
	{
		___totalBytesRetired_9 = value;
	}

	inline static int32_t get_offset_of_currentLimit_10() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___currentLimit_10)); }
	inline int32_t get_currentLimit_10() const { return ___currentLimit_10; }
	inline int32_t* get_address_of_currentLimit_10() { return &___currentLimit_10; }
	inline void set_currentLimit_10(int32_t value)
	{
		___currentLimit_10 = value;
	}

	inline static int32_t get_offset_of_recursionDepth_11() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___recursionDepth_11)); }
	inline int32_t get_recursionDepth_11() const { return ___recursionDepth_11; }
	inline int32_t* get_address_of_recursionDepth_11() { return &___recursionDepth_11; }
	inline void set_recursionDepth_11(int32_t value)
	{
		___recursionDepth_11 = value;
	}

	inline static int32_t get_offset_of_recursionLimit_12() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___recursionLimit_12)); }
	inline int32_t get_recursionLimit_12() const { return ___recursionLimit_12; }
	inline int32_t* get_address_of_recursionLimit_12() { return &___recursionLimit_12; }
	inline void set_recursionLimit_12(int32_t value)
	{
		___recursionLimit_12 = value;
	}

	inline static int32_t get_offset_of_sizeLimit_13() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___sizeLimit_13)); }
	inline int32_t get_sizeLimit_13() const { return ___sizeLimit_13; }
	inline int32_t* get_address_of_sizeLimit_13() { return &___sizeLimit_13; }
	inline void set_sizeLimit_13(int32_t value)
	{
		___sizeLimit_13 = value;
	}

	inline static int32_t get_offset_of_U3CDiscardUnknownFieldsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___U3CDiscardUnknownFieldsU3Ek__BackingField_14)); }
	inline bool get_U3CDiscardUnknownFieldsU3Ek__BackingField_14() const { return ___U3CDiscardUnknownFieldsU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CDiscardUnknownFieldsU3Ek__BackingField_14() { return &___U3CDiscardUnknownFieldsU3Ek__BackingField_14; }
	inline void set_U3CDiscardUnknownFieldsU3Ek__BackingField_14(bool value)
	{
		___U3CDiscardUnknownFieldsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CExtensionRegistryU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC, ___U3CExtensionRegistryU3Ek__BackingField_15)); }
	inline ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 * get_U3CExtensionRegistryU3Ek__BackingField_15() const { return ___U3CExtensionRegistryU3Ek__BackingField_15; }
	inline ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 ** get_address_of_U3CExtensionRegistryU3Ek__BackingField_15() { return &___U3CExtensionRegistryU3Ek__BackingField_15; }
	inline void set_U3CExtensionRegistryU3Ek__BackingField_15(ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 * value)
	{
		___U3CExtensionRegistryU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionRegistryU3Ek__BackingField_15), (void*)value);
	}
};


// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.CodedOutputStream::leaveOpen
	bool ___leaveOpen_2;
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer_3;
	// System.Int32 Google.Protobuf.CodedOutputStream::limit
	int32_t ___limit_4;
	// System.Int32 Google.Protobuf.CodedOutputStream::position
	int32_t ___position_5;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___output_6;

public:
	inline static int32_t get_offset_of_leaveOpen_2() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1, ___leaveOpen_2)); }
	inline bool get_leaveOpen_2() const { return ___leaveOpen_2; }
	inline bool* get_address_of_leaveOpen_2() { return &___leaveOpen_2; }
	inline void set_leaveOpen_2(bool value)
	{
		___leaveOpen_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1, ___buffer_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_limit_4() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1, ___limit_4)); }
	inline int32_t get_limit_4() const { return ___limit_4; }
	inline int32_t* get_address_of_limit_4() { return &___limit_4; }
	inline void set_limit_4(int32_t value)
	{
		___limit_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1, ___position_5)); }
	inline int32_t get_position_5() const { return ___position_5; }
	inline int32_t* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(int32_t value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_output_6() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1, ___output_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_output_6() const { return ___output_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_output_6() { return &___output_6; }
	inline void set_output_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___output_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_6), (void*)value);
	}
};

struct CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1_StaticFields
{
public:
	// System.Text.Encoding Google.Protobuf.CodedOutputStream::Utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___Utf8Encoding_0;
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_1;

public:
	inline static int32_t get_offset_of_Utf8Encoding_0() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1_StaticFields, ___Utf8Encoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_Utf8Encoding_0() const { return ___Utf8Encoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_Utf8Encoding_0() { return &___Utf8Encoding_0; }
	inline void set_Utf8Encoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___Utf8Encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Utf8Encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultBufferSize_1() { return static_cast<int32_t>(offsetof(CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1_StaticFields, ___DefaultBufferSize_1)); }
	inline int32_t get_DefaultBufferSize_1() const { return ___DefaultBufferSize_1; }
	inline int32_t* get_address_of_DefaultBufferSize_1() { return &___DefaultBufferSize_1; }
	inline void set_DefaultBufferSize_1(int32_t value)
	{
		___DefaultBufferSize_1 = value;
	}
};


// Google.Protobuf.Reflection.DescriptorBase
struct DescriptorBase_tD02F86B7F7881ABCC3C0791BABD46001412E14B1  : public RuntimeObject
{
public:
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_t2FB59CC8856E9DBAD8FAE46DE7863031DB27FEBB * ___U3CFileU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DescriptorBase_tD02F86B7F7881ABCC3C0791BABD46001412E14B1, ___U3CIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_0() const { return ___U3CIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_0() { return &___U3CIndexU3Ek__BackingField_0; }
	inline void set_U3CIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFullNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DescriptorBase_tD02F86B7F7881ABCC3C0791BABD46001412E14B1, ___U3CFullNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CFullNameU3Ek__BackingField_1() const { return ___U3CFullNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFullNameU3Ek__BackingField_1() { return &___U3CFullNameU3Ek__BackingField_1; }
	inline void set_U3CFullNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CFullNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFullNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFileU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DescriptorBase_tD02F86B7F7881ABCC3C0791BABD46001412E14B1, ___U3CFileU3Ek__BackingField_2)); }
	inline FileDescriptor_t2FB59CC8856E9DBAD8FAE46DE7863031DB27FEBB * get_U3CFileU3Ek__BackingField_2() const { return ___U3CFileU3Ek__BackingField_2; }
	inline FileDescriptor_t2FB59CC8856E9DBAD8FAE46DE7863031DB27FEBB ** get_address_of_U3CFileU3Ek__BackingField_2() { return &___U3CFileU3Ek__BackingField_2; }
	inline void set_U3CFileU3Ek__BackingField_2(FileDescriptor_t2FB59CC8856E9DBAD8FAE46DE7863031DB27FEBB * value)
	{
		___U3CFileU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFileU3Ek__BackingField_2), (void*)value);
	}
};


// Google.Protobuf.MessageParser
struct MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7  : public RuntimeObject
{
public:
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_t14F15F7219CBFF413DE2F752FAB816CC3F68CDC0 * ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 * ___U3CExtensionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7, ___factory_0)); }
	inline Func_1_t14F15F7219CBFF413DE2F752FAB816CC3F68CDC0 * get_factory_0() const { return ___factory_0; }
	inline Func_1_t14F15F7219CBFF413DE2F752FAB816CC3F68CDC0 ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(Func_1_t14F15F7219CBFF413DE2F752FAB816CC3F68CDC0 * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDiscardUnknownFieldsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7, ___U3CDiscardUnknownFieldsU3Ek__BackingField_1)); }
	inline bool get_U3CDiscardUnknownFieldsU3Ek__BackingField_1() const { return ___U3CDiscardUnknownFieldsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDiscardUnknownFieldsU3Ek__BackingField_1() { return &___U3CDiscardUnknownFieldsU3Ek__BackingField_1; }
	inline void set_U3CDiscardUnknownFieldsU3Ek__BackingField_1(bool value)
	{
		___U3CDiscardUnknownFieldsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CExtensionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7, ___U3CExtensionsU3Ek__BackingField_2)); }
	inline ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 * get_U3CExtensionsU3Ek__BackingField_2() const { return ___U3CExtensionsU3Ek__BackingField_2; }
	inline ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 ** get_address_of_U3CExtensionsU3Ek__BackingField_2() { return &___U3CExtensionsU3Ek__BackingField_2; }
	inline void set_U3CExtensionsU3Ek__BackingField_2(ExtensionRegistry_t85EAE2A5A73AF57D85ABE7461FB2B813588CD9C6 * value)
	{
		___U3CExtensionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionsU3Ek__BackingField_2), (void*)value);
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


// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField> Google.Protobuf.UnknownFieldSet::fields
	RuntimeObject* ___fields_0;
	// System.Int32 Google.Protobuf.UnknownFieldSet::lastFieldNumber
	int32_t ___lastFieldNumber_1;
	// Google.Protobuf.UnknownField Google.Protobuf.UnknownFieldSet::lastField
	UnknownField_tBC40006F8692A246641EFCF12B6B1EFA2F8C74F5 * ___lastField_2;

public:
	inline static int32_t get_offset_of_fields_0() { return static_cast<int32_t>(offsetof(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303, ___fields_0)); }
	inline RuntimeObject* get_fields_0() const { return ___fields_0; }
	inline RuntimeObject** get_address_of_fields_0() { return &___fields_0; }
	inline void set_fields_0(RuntimeObject* value)
	{
		___fields_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fields_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastFieldNumber_1() { return static_cast<int32_t>(offsetof(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303, ___lastFieldNumber_1)); }
	inline int32_t get_lastFieldNumber_1() const { return ___lastFieldNumber_1; }
	inline int32_t* get_address_of_lastFieldNumber_1() { return &___lastFieldNumber_1; }
	inline void set_lastFieldNumber_1(int32_t value)
	{
		___lastFieldNumber_1 = value;
	}

	inline static int32_t get_offset_of_lastField_2() { return static_cast<int32_t>(offsetof(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303, ___lastField_2)); }
	inline UnknownField_tBC40006F8692A246641EFCF12B6B1EFA2F8C74F5 * get_lastField_2() const { return ___lastField_2; }
	inline UnknownField_tBC40006F8692A246641EFCF12B6B1EFA2F8C74F5 ** get_address_of_lastField_2() { return &___lastField_2; }
	inline void set_lastField_2(UnknownField_tBC40006F8692A246641EFCF12B6B1EFA2F8C74F5 * value)
	{
		___lastField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastField_2), (void*)value);
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

// Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData
struct FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData::_unknownFields
	UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData::data_
	RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * ___data__3;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885, ____unknownFields_1)); }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_data__3() { return static_cast<int32_t>(offsetof(FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885, ___data__3)); }
	inline RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * get_data__3() const { return ___data__3; }
	inline RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 ** get_address_of_data__3() { return &___data__3; }
	inline void set_data__3(RepeatedField_1_tE4B884872E653D1F40FED75B2DE962FF8D364045 * value)
	{
		___data__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data__3), (void*)value);
	}
};

struct FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData> Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData::_parser
	MessageParser_1_tD49A3F273C1542F8D14555ED0AA0F2E2CA8074B1 * ____parser_0;
	// Google.Protobuf.FieldCodec`1<System.Single> Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData::_repeated_data_codec
	FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * ____repeated_data_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_StaticFields, ____parser_0)); }
	inline MessageParser_1_tD49A3F273C1542F8D14555ED0AA0F2E2CA8074B1 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_tD49A3F273C1542F8D14555ED0AA0F2E2CA8074B1 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_tD49A3F273C1542F8D14555ED0AA0F2E2CA8074B1 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_data_codec_2() { return static_cast<int32_t>(offsetof(FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_StaticFields, ____repeated_data_codec_2)); }
	inline FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * get__repeated_data_codec_2() const { return ____repeated_data_codec_2; }
	inline FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 ** get_address_of__repeated_data_codec_2() { return &____repeated_data_codec_2; }
	inline void set__repeated_data_codec_2(FieldCodec_1_t94026E4B20DB90A79A126BB32F3BF0198DEA5585 * value)
	{
		____repeated_data_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_data_codec_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto
struct ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::_unknownFields
	UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::value_
	RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * ___value__3;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF, ____unknownFields_1)); }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_value__3() { return static_cast<int32_t>(offsetof(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF, ___value__3)); }
	inline RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * get_value__3() const { return ___value__3; }
	inline RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A ** get_address_of_value__3() { return &___value__3; }
	inline void set_value__3(RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * value)
	{
		___value__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value__3), (void*)value);
	}
};

struct ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::_parser
	MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * ____parser_0;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::_repeated_value_codec
	FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * ____repeated_value_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields, ____parser_0)); }
	inline MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_value_codec_2() { return static_cast<int32_t>(offsetof(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields, ____repeated_value_codec_2)); }
	inline FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * get__repeated_value_codec_2() const { return ____repeated_value_codec_2; }
	inline FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 ** get_address_of__repeated_value_codec_2() { return &____repeated_value_codec_2; }
	inline void set__repeated_value_codec_2(FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * value)
	{
		____repeated_value_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_value_codec_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto
struct ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::_unknownFields
	UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::value_
	RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * ___value__3;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5, ____unknownFields_1)); }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_value__3() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5, ___value__3)); }
	inline RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * get_value__3() const { return ___value__3; }
	inline RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 ** get_address_of_value__3() { return &___value__3; }
	inline void set_value__3(RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * value)
	{
		___value__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value__3), (void*)value);
	}
};

struct ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::_parser
	MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * ____parser_0;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::_repeated_value_codec
	FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * ____repeated_value_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields, ____parser_0)); }
	inline MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_value_codec_2() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields, ____repeated_value_codec_2)); }
	inline FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * get__repeated_value_codec_2() const { return ____repeated_value_codec_2; }
	inline FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C ** get_address_of__repeated_value_codec_2() { return &____repeated_value_codec_2; }
	inline void set__repeated_value_codec_2(FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * value)
	{
		____repeated_value_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_value_codec_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c
struct U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c::<>9
	U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c
struct U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::<>9
	U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c
struct U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::<>9
	U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A  : public MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tB17F1864CC6DD9054A70B01FEDDA675A64323390 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A, ___factory_3)); }
	inline Func_1_tB17F1864CC6DD9054A70B01FEDDA675A64323390 * get_factory_3() const { return ___factory_3; }
	inline Func_1_tB17F1864CC6DD9054A70B01FEDDA675A64323390 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_tB17F1864CC6DD9054A70B01FEDDA675A64323390 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD  : public MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t9F4BAE11F2F37611237777CC684DBF6D4F378667 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD, ___factory_3)); }
	inline Func_1_t9F4BAE11F2F37611237777CC684DBF6D4F378667 * get_factory_3() const { return ___factory_3; }
	inline Func_1_t9F4BAE11F2F37611237777CC684DBF6D4F378667 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t9F4BAE11F2F37611237777CC684DBF6D4F378667 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2  : public MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2, ___factory_3)); }
	inline Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF * get_factory_3() const { return ___factory_3; }
	inline Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4  : public MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4, ___factory_3)); }
	inline Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 * get_factory_3() const { return ___factory_3; }
	inline Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
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


// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8  : public DescriptorBase_tD02F86B7F7881ABCC3C0791BABD46001412E14B1
{
public:
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_t7D3FB91F2D335C9C9C1B905D984BFCE432917954 * ___U3CProtoU3Ek__BackingField_7;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t * ___U3CClrTypeU3Ek__BackingField_8;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7 * ___U3CParserU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ___U3CContainingTypeU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t3DB5933BD66E00929627164478B321FA766EC559 * ___U3CFieldsU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_t21E19A4CB59A86E96069844D5B2359CE81B8C23A * ___U3CExtensionsU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_fieldsInDeclarationOrder_4() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___fieldsInDeclarationOrder_4)); }
	inline RuntimeObject* get_fieldsInDeclarationOrder_4() const { return ___fieldsInDeclarationOrder_4; }
	inline RuntimeObject** get_address_of_fieldsInDeclarationOrder_4() { return &___fieldsInDeclarationOrder_4; }
	inline void set_fieldsInDeclarationOrder_4(RuntimeObject* value)
	{
		___fieldsInDeclarationOrder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldsInDeclarationOrder_4), (void*)value);
	}

	inline static int32_t get_offset_of_fieldsInNumberOrder_5() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___fieldsInNumberOrder_5)); }
	inline RuntimeObject* get_fieldsInNumberOrder_5() const { return ___fieldsInNumberOrder_5; }
	inline RuntimeObject** get_address_of_fieldsInNumberOrder_5() { return &___fieldsInNumberOrder_5; }
	inline void set_fieldsInNumberOrder_5(RuntimeObject* value)
	{
		___fieldsInNumberOrder_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldsInNumberOrder_5), (void*)value);
	}

	inline static int32_t get_offset_of_jsonFieldMap_6() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___jsonFieldMap_6)); }
	inline RuntimeObject* get_jsonFieldMap_6() const { return ___jsonFieldMap_6; }
	inline RuntimeObject** get_address_of_jsonFieldMap_6() { return &___jsonFieldMap_6; }
	inline void set_jsonFieldMap_6(RuntimeObject* value)
	{
		___jsonFieldMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonFieldMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProtoU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CProtoU3Ek__BackingField_7)); }
	inline DescriptorProto_t7D3FB91F2D335C9C9C1B905D984BFCE432917954 * get_U3CProtoU3Ek__BackingField_7() const { return ___U3CProtoU3Ek__BackingField_7; }
	inline DescriptorProto_t7D3FB91F2D335C9C9C1B905D984BFCE432917954 ** get_address_of_U3CProtoU3Ek__BackingField_7() { return &___U3CProtoU3Ek__BackingField_7; }
	inline void set_U3CProtoU3Ek__BackingField_7(DescriptorProto_t7D3FB91F2D335C9C9C1B905D984BFCE432917954 * value)
	{
		___U3CProtoU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProtoU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClrTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CClrTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CClrTypeU3Ek__BackingField_8() const { return ___U3CClrTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CClrTypeU3Ek__BackingField_8() { return &___U3CClrTypeU3Ek__BackingField_8; }
	inline void set_U3CClrTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CClrTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClrTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParserU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CParserU3Ek__BackingField_9)); }
	inline MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7 * get_U3CParserU3Ek__BackingField_9() const { return ___U3CParserU3Ek__BackingField_9; }
	inline MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7 ** get_address_of_U3CParserU3Ek__BackingField_9() { return &___U3CParserU3Ek__BackingField_9; }
	inline void set_U3CParserU3Ek__BackingField_9(MessageParser_tE8E58578D59AECAA58BA47E3525F1880325DF4D7 * value)
	{
		___U3CParserU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParserU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContainingTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CContainingTypeU3Ek__BackingField_10)); }
	inline MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * get_U3CContainingTypeU3Ek__BackingField_10() const { return ___U3CContainingTypeU3Ek__BackingField_10; }
	inline MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 ** get_address_of_U3CContainingTypeU3Ek__BackingField_10() { return &___U3CContainingTypeU3Ek__BackingField_10; }
	inline void set_U3CContainingTypeU3Ek__BackingField_10(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * value)
	{
		___U3CContainingTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContainingTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CFieldsU3Ek__BackingField_11)); }
	inline FieldCollection_t3DB5933BD66E00929627164478B321FA766EC559 * get_U3CFieldsU3Ek__BackingField_11() const { return ___U3CFieldsU3Ek__BackingField_11; }
	inline FieldCollection_t3DB5933BD66E00929627164478B321FA766EC559 ** get_address_of_U3CFieldsU3Ek__BackingField_11() { return &___U3CFieldsU3Ek__BackingField_11; }
	inline void set_U3CFieldsU3Ek__BackingField_11(FieldCollection_t3DB5933BD66E00929627164478B321FA766EC559 * value)
	{
		___U3CFieldsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtensionsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CExtensionsU3Ek__BackingField_12)); }
	inline ExtensionCollection_t21E19A4CB59A86E96069844D5B2359CE81B8C23A * get_U3CExtensionsU3Ek__BackingField_12() const { return ___U3CExtensionsU3Ek__BackingField_12; }
	inline ExtensionCollection_t21E19A4CB59A86E96069844D5B2359CE81B8C23A ** get_address_of_U3CExtensionsU3Ek__BackingField_12() { return &___U3CExtensionsU3Ek__BackingField_12; }
	inline void set_U3CExtensionsU3Ek__BackingField_12(ExtensionCollection_t21E19A4CB59A86E96069844D5B2359CE81B8C23A * value)
	{
		___U3CExtensionsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNestedTypesU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CNestedTypesU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CNestedTypesU3Ek__BackingField_13() const { return ___U3CNestedTypesU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CNestedTypesU3Ek__BackingField_13() { return &___U3CNestedTypesU3Ek__BackingField_13; }
	inline void set_U3CNestedTypesU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CNestedTypesU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNestedTypesU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnumTypesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3CEnumTypesU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CEnumTypesU3Ek__BackingField_14() const { return ___U3CEnumTypesU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CEnumTypesU3Ek__BackingField_14() { return &___U3CEnumTypesU3Ek__BackingField_14; }
	inline void set_U3CEnumTypesU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CEnumTypesU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnumTypesU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3COneofsU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8, ___U3COneofsU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3COneofsU3Ek__BackingField_15() const { return ___U3COneofsU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3COneofsU3Ek__BackingField_15() { return &___U3COneofsU3Ek__BackingField_15; }
	inline void set_U3COneofsU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3COneofsU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COneofsU3Ek__BackingField_15), (void*)value);
	}
};

struct MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___WellKnownTypeNames_3;

public:
	inline static int32_t get_offset_of_WellKnownTypeNames_3() { return static_cast<int32_t>(offsetof(MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8_StaticFields, ___WellKnownTypeNames_3)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_WellKnownTypeNames_3() const { return ___WellKnownTypeNames_3; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_WellKnownTypeNames_3() { return &___WellKnownTypeNames_3; }
	inline void set_WellKnownTypeNames_3(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___WellKnownTypeNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WellKnownTypeNames_3), (void*)value);
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

// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1__ctor_mE8BDFE4BE3D9F7B811F26AA3634A0E7401EB0260_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.RepeatedField`1<!0> Google.Protobuf.Collections.RepeatedField`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * RepeatedField_1_Clone_mBF6FAFE27F5FFE44663D889940C4FEA184D50C94_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.Object>::Equals(Google.Protobuf.Collections.RepeatedField`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedField_1_Equals_mA7AFAE6DDC17F347F21B19F0561A1DE8ABE6DA4E_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * ___other0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.FieldCodec`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_WriteTo_m1A4055ED133DB0ADA2CB5F73477BEBD197445EA4_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * ___output0, FieldCodec_1_t80E636A5B1415EBD40A7B96CA496DD8885448E0E * ___codec1, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::CalculateSize(Google.Protobuf.FieldCodec`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RepeatedField_1_CalculateSize_m82EB6CFACFB456F15AE1BD9A158F89C6C95BC53B_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, FieldCodec_1_t80E636A5B1415EBD40A7B96CA496DD8885448E0E * ___codec0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::Add(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_Add_m2AC064D67A32FF27D3A34FBC30ACD313DE9EA1A0_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, RuntimeObject* ___values0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_AddEntriesFrom_mA2D92B447B1221D44B4B920A464FEC8A8EEF45DD_gshared (RepeatedField_1_t23C23BA82D6535394E7F687B6561F27C9B0A9E9B * __this, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * ___input0, FieldCodec_1_t80E636A5B1415EBD40A7B96CA496DD8885448E0E * ___codec1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Google.Protobuf.MessageParser`1<System.Object>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageParser_1__ctor_m560AEB3CBB59541505BFA3D73517107265562EF1_gshared (MessageParser_1_tEFEF0F1AAC0FFD1DA1FE95EB9864DEDCEFAFFD8C * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___factory0, const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<System.Object>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t80E636A5B1415EBD40A7B96CA496DD8885448E0E * FieldCodec_ForMessage_TisRuntimeObject_m5553D9C91C542940C8E89932CD7CE57AA93F85CE_gshared (uint32_t ___tag0, MessageParser_1_tEFEF0F1AAC0FFD1DA1FE95EB9864DEDCEFAFFD8C * ___parser1, const RuntimeMethod* method);

// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * UnityRLInputProto_get_Descriptor_mBD300DE8C70502CD01E6AE3AD1BC387C7E12C7CD (const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_mFAD3E104D110267F14A7A38EB37322A8E8C821D6_inline (MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * __this, const RuntimeMethod* method);
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ListAgentActionProto_get_Descriptor_m7761AD2046A9D1C71C547A1B98A2D05C2DCD50A0 (const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::.ctor()
inline void RepeatedField_1__ctor_mDCA8255E15F742A8160A4E400231052A2A239237 (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, const RuntimeMethod*))RepeatedField_1__ctor_mE8BDFE4BE3D9F7B811F26AA3634A0E7401EB0260_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_mCE34C0822ABC92DDAB72EB25AB114000D33A5E45 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.RepeatedField`1<!0> Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::Clone()
inline RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * RepeatedField_1_Clone_mF69BD98F3B6A47B80EFFA5DFEBD4BD0367385253 (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, const RuntimeMethod*))RepeatedField_1_Clone_mBF6FAFE27F5FFE44663D889940C4FEA184D50C94_gshared)(__this, method);
}
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::Clone(Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * UnknownFieldSet_Clone_m2AA07651D4FF4EE917E9AC60FC67FC31B5F57C99 (UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ___other0, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_m8C8672752CAF17D32DFD161C68E9E25C28B91405 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * ___other0, const RuntimeMethod* method);
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentActionProto_Equals_mC03D738AA0B2B3040B279F4CC6CE73544DA3D7D0 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * ___other0, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::Equals(Google.Protobuf.Collections.RepeatedField`1<!0>)
inline bool RepeatedField_1_Equals_m31BB2BC4BCDCE845BC20B1DAF738C3BCAC803F6E (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, const RuntimeMethod*))RepeatedField_1_Equals_mA7AFAE6DDC17F347F21B19F0561A1DE8ABE6DA4E_gshared)(__this, ___other0, method);
}
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.String Google.Protobuf.JsonFormatter::ToDiagnosticString(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToDiagnosticString_m7258F175C473FCE9FFE3129663537BC6643D62E0 (RuntimeObject* ___message0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_WriteTo_m26B51FB4201CBA20D3AB2F782267D4275C8079D5 (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * ___output0, FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 *, FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 *, const RuntimeMethod*))RepeatedField_1_WriteTo_m1A4055ED133DB0ADA2CB5F73477BEBD197445EA4_gshared)(__this, ___output0, ___codec1, method);
}
// System.Void Google.Protobuf.UnknownFieldSet::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownFieldSet_WriteTo_m3E1FF12458C4123EC5E264B0D9FA9A46A8CB8FC5 (UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * __this, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * ___output0, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::CalculateSize(Google.Protobuf.FieldCodec`1<!0>)
inline int32_t RepeatedField_1_CalculateSize_mC719C8172AEC4FAB1BF611F714FD89B3F3201CAE (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 *, const RuntimeMethod*))RepeatedField_1_CalculateSize_m82EB6CFACFB456F15AE1BD9A158F89C6C95BC53B_gshared)(__this, ___codec0, method);
}
// System.Int32 Google.Protobuf.UnknownFieldSet::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnknownFieldSet_CalculateSize_mD51F03E0D402BA16A8DFA1611B7B39E81661959B (UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * __this, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::Add(System.Collections.Generic.IEnumerable`1<!0>)
inline void RepeatedField_1_Add_m1753A3FD2AE327758DA5D28638600DF54BA8F56D (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_m2AC064D67A32FF27D3A34FBC30ACD313DE9EA1A0_gshared)(__this, ___values0, method);
}
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * UnknownFieldSet_MergeFrom_mE9DA70E8E90E2D9F20766C0036A6D98F1E2E7C30 (UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ___unknownFields0, UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ___other1, const RuntimeMethod* method);
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFieldFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * UnknownFieldSet_MergeFieldFrom_m914D20106FB9DF2E408EE84A0509B6B482672827 (UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * ___unknownFields0, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * ___input1, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_AddEntriesFrom_m746125F3D9496FA236BE5FFE9677110970954F1D (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * __this, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * ___input0, FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC *, FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 *, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_mA2D92B447B1221D44B4B920A464FEC8A8EEF45DD_gshared)(__this, ___input0, ___codec1, method);
}
// System.UInt32 Google.Protobuf.CodedInputStream::ReadTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadTag_m3949BCAE57D81376E084BE4E1A96DEE2D2D67776 (CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m07837B976212E6FCD9D927ADE930A39FC625DC66 (Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::.ctor(System.Func`1<!0>)
inline void MessageParser_1__ctor_mC7B379BA6558CBC11F8F50C9D96F49844E6D4140 (MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * __this, Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF * ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 *, Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF *, const RuntimeMethod*))MessageParser_1__ctor_m560AEB3CBB59541505BFA3D73517107265562EF1_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.AgentActionProto::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * AgentActionProto_get_Parser_mFF62F81E46D54360F9DB9B9EBC50F9A98686F403_inline (const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<Unity.MLAgents.CommunicatorObjects.AgentActionProto>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
inline FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * FieldCodec_ForMessage_TisAgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_mB07A40DB8CE7DE139FECC9216ADE785B0CA5FF48 (uint32_t ___tag0, MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * (*) (uint32_t, MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A *, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_m5553D9C91C542940C8E89932CD7CE57AA93F85CE_gshared)(___tag0, ___parser1, method);
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * UnityRLOutputProto_get_Descriptor_m410DAD46028EC3FFAA9DD56A400E7349BBD53D6B (const RuntimeMethod* method);
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ListAgentInfoProto_get_Descriptor_m0524FBBE887A22339C6E00F7ED41DCE757124AC0 (const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::.ctor()
inline void RepeatedField_1__ctor_m750357F43A3EDB5D326506F237F062472BD150C2 (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, const RuntimeMethod*))RepeatedField_1__ctor_mE8BDFE4BE3D9F7B811F26AA3634A0E7401EB0260_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_mD6804758545863CF8E4DB5EE501B7F3A7AFA85E5 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.RepeatedField`1<!0> Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::Clone()
inline RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * RepeatedField_1_Clone_m459E11CCF674DEBA89056507600341A0FA03288E (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, const RuntimeMethod*))RepeatedField_1_Clone_mBF6FAFE27F5FFE44663D889940C4FEA184D50C94_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_m2CBA7E17614C4FCC23D329DE91BD6C672471CA1C (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * ___other0, const RuntimeMethod* method);
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentInfoProto_Equals_m18428F9ACDD4E94F1CE07FEDAEB2DC9543ACDD8E (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * ___other0, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::Equals(Google.Protobuf.Collections.RepeatedField`1<!0>)
inline bool RepeatedField_1_Equals_m50019E6764ED7F7BF2FD405ABC763A230DE80BA6 (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, const RuntimeMethod*))RepeatedField_1_Equals_mA7AFAE6DDC17F347F21B19F0561A1DE8ABE6DA4E_gshared)(__this, ___other0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_WriteTo_m976A203363E3FDD9C9566E1B974DAD0F410C63DC (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * ___output0, FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 *, FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C *, const RuntimeMethod*))RepeatedField_1_WriteTo_m1A4055ED133DB0ADA2CB5F73477BEBD197445EA4_gshared)(__this, ___output0, ___codec1, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::CalculateSize(Google.Protobuf.FieldCodec`1<!0>)
inline int32_t RepeatedField_1_CalculateSize_mE2B63B1942E48EF54E8E6E6BAF674701C09F3F33 (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C *, const RuntimeMethod*))RepeatedField_1_CalculateSize_m82EB6CFACFB456F15AE1BD9A158F89C6C95BC53B_gshared)(__this, ___codec0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::Add(System.Collections.Generic.IEnumerable`1<!0>)
inline void RepeatedField_1_Add_mDF7EC24F54AB59E2C8121CE68D828A8FA5F6AC05 (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_m2AC064D67A32FF27D3A34FBC30ACD313DE9EA1A0_gshared)(__this, ___values0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_AddEntriesFrom_mCBEA5D4A24BD6411E9ECEDA2EE4FCD8D3ABEC70B (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * __this, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * ___input0, FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC *, FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C *, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_mA2D92B447B1221D44B4B920A464FEC8A8EEF45DD_gshared)(__this, ___input0, ___codec1, method);
}
// System.Void System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m127744ACA844E3994BB239CBBEF3B24F1ECD3198 (Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::.ctor(System.Func`1<!0>)
inline void MessageParser_1__ctor_m4A2CD44D5CB456E42698D5B2B4375203B8A0C25F (MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * __this, Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 * ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 *, Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 *, const RuntimeMethod*))MessageParser_1__ctor_m560AEB3CBB59541505BFA3D73517107265562EF1_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::get_Parser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * AgentInfoProto_get_Parser_m14150A90706B5A082E24B9BCD1A89343F70D7B4B_inline (const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
inline FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * FieldCodec_ForMessage_TisAgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_mA7780120C1CFB3162A1D1A566F82C8E4E1614338 (uint32_t ___tag0, MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * (*) (uint32_t, MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD *, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_m5553D9C91C542940C8E89932CD7CE57AA93F85CE_gshared)(___tag0, ___parser1, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD00AB79C0BD6CEF448BF586EEE0D186CB688D7D6 (U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatData__ctor_mC361BFD104C98A1BF2F749FB90AC38283DE76AE1 (FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m703A40B0946186BD4804E8F95E88FBF718D4EB41 (U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3C3C23D356A82EDBC514472386390571B559C1E3 (U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * ListAgentActionProto_get_Parser_mAD2FF068C768973191F7DD1EE9924F39586583AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ListAgentActionProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * L_0 = ((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ListAgentActionProto_get_Descriptor_m7761AD2046A9D1C71C547A1B98A2D05C2DCD50A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t05680C26DD61C1A04E11CABAFA51A8DF6F7C2050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Descriptor.NestedTypes[0]; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_t584C4F61C5780674180A40F56A45EDF628DA1851_il2cpp_TypeInfo_var);
		MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * L_0;
		L_0 = UnityRLInputProto_get_Descriptor_mBD300DE8C70502CD01E6AE3AD1BC387C7E12C7CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_mFAD3E104D110267F14A7A38EB37322A8E8C821D6_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_t05680C26DD61C1A04E11CABAFA51A8DF6F7C2050_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ListAgentActionProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mDF3132EF6B164EFFC68F97EC82599E9C531D5648 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * L_0;
		L_0 = ListAgentActionProto_get_Descriptor_m7761AD2046A9D1C71C547A1B98A2D05C2DCD50A0(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_mCE34C0822ABC92DDAB72EB25AB114000D33A5E45 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1__ctor_mDCA8255E15F742A8160A4E400231052A2A239237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentActionProto> value_ = new pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentActionProto>();
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_0 = (RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A *)il2cpp_codegen_object_new(RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A_il2cpp_TypeInfo_var);
		RepeatedField_1__ctor_mDCA8255E15F742A8160A4E400231052A2A239237(L_0, /*hidden argument*/RepeatedField_1__ctor_mDCA8255E15F742A8160A4E400231052A2A239237_RuntimeMethod_var);
		__this->set_value__3(L_0);
		// public ListAgentActionProto() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_m8C8672752CAF17D32DFD161C68E9E25C28B91405 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Clone_mF69BD98F3B6A47B80EFFA5DFEBD4BD0367385253_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ListAgentActionProto(ListAgentActionProto other) : this() {
		ListAgentActionProto__ctor_mCE34C0822ABC92DDAB72EB25AB114000D33A5E45(__this, /*hidden argument*/NULL);
		// value_ = other.value_.Clone();
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_0 = ___other0;
		NullCheck(L_0);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_1 = L_0->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_2;
		L_2 = RepeatedField_1_Clone_mF69BD98F3B6A47B80EFFA5DFEBD4BD0367385253(L_1, /*hidden argument*/RepeatedField_1_Clone_mF69BD98F3B6A47B80EFFA5DFEBD4BD0367385253_RuntimeMethod_var);
		__this->set_value__3(L_2);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_3 = ___other0;
		NullCheck(L_3);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = L_3->get__unknownFields_1();
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_5;
		L_5 = UnknownFieldSet_Clone_m2AA07651D4FF4EE917E9AC60FC67FC31B5F57C99(L_4, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_5);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * ListAgentActionProto_Clone_mC5105F5271B40E7AC41B905A3E7FD440C2ED3D18 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ListAgentActionProto(this);
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_0 = (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF *)il2cpp_codegen_object_new(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		ListAgentActionProto__ctor_m8C8672752CAF17D32DFD161C68E9E25C28B91405(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * ListAgentActionProto_get_Value_m77F44A10D1826DDE66ED8A9CE1836CDB228119A7 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	{
		// get { return value_; }
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_0 = __this->get_value__3();
		return L_0;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentActionProto_Equals_mFB913E506159336F45920A180238F2FFB4B23D52 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as ListAgentActionProto);
		RuntimeObject * L_0 = ___other0;
		bool L_1;
		L_1 = ListAgentActionProto_Equals_mC03D738AA0B2B3040B279F4CC6CE73544DA3D7D0(__this, ((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF *)IsInstSealed((RuntimeObject*)L_0, ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentActionProto_Equals_mC03D738AA0B2B3040B279F4CC6CE73544DA3D7D0 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Equals_m31BB2BC4BCDCE845BC20B1DAF738C3BCAC803F6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_1 = ___other0;
		if ((!(((RuntimeObject*)(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF *)L_1) == ((RuntimeObject*)(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF *)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if(!value_.Equals(other.value_)) return false;
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_2 = __this->get_value__3();
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_3 = ___other0;
		NullCheck(L_3);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_4 = L_3->get_value__3();
		NullCheck(L_2);
		bool L_5;
		L_5 = RepeatedField_1_Equals_m31BB2BC4BCDCE845BC20B1DAF738C3BCAC803F6E(L_2, L_4, /*hidden argument*/RepeatedField_1_Equals_m31BB2BC4BCDCE845BC20B1DAF738C3BCAC803F6E_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if(!value_.Equals(other.value_)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_6 = __this->get__unknownFields_1();
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_8 = L_7->get__unknownFields_1();
		bool L_9;
		L_9 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentActionProto_GetHashCode_mA5B39F94D0C457A55D2F4BBB4193D3114DF9625B (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// hash ^= value_.GetHashCode();
		int32_t L_0 = V_0;
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_1 = __this->get_value__3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// if (_unknownFields != null) {
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_4 = V_0;
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_5 = __this->get__unknownFields_1();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
	}

IL_0026:
	{
		// return hash;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListAgentActionProto_ToString_mBA6C6A1C1E6034C5458218F81EF204C6F8AEFC72 (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_t60B224B5AAD7C4B394A07D3C2E10EAD03B56397B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonFormatter_t60B224B5AAD7C4B394A07D3C2E10EAD03B56397B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_m7258F175C473FCE9FFE3129663537BC6643D62E0(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto_WriteTo_m36F37BCD69ECBC5A6F33E239E03B3FF0179FE33E (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_WriteTo_m26B51FB4201CBA20D3AB2F782267D4275C8079D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value_.WriteTo(output, _repeated_value_codec);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_0 = __this->get_value__3();
		CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * L_2 = ((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_0);
		RepeatedField_1_WriteTo_m26B51FB4201CBA20D3AB2F782267D4275C8079D5(L_0, L_1, L_2, /*hidden argument*/RepeatedField_1_WriteTo_m26B51FB4201CBA20D3AB2F782267D4275C8079D5_RuntimeMethod_var);
		// if (_unknownFields != null) {
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// _unknownFields.WriteTo(output);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = __this->get__unknownFields_1();
		CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * L_5 = ___output0;
		NullCheck(L_4);
		UnknownFieldSet_WriteTo_m3E1FF12458C4123EC5E264B0D9FA9A46A8CB8FC5(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentActionProto_CalculateSize_m4E8640B72B0AC05573E60F8C3AF11D2E4401957F (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_CalculateSize_mC719C8172AEC4FAB1BF611F714FD89B3F3201CAE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// size += value_.CalculateSize(_repeated_value_codec);
		int32_t L_0 = V_0;
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_1 = __this->get_value__3();
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * L_2 = ((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = RepeatedField_1_CalculateSize_mC719C8172AEC4FAB1BF611F714FD89B3F3201CAE(L_1, L_2, /*hidden argument*/RepeatedField_1_CalculateSize_mC719C8172AEC4FAB1BF611F714FD89B3F3201CAE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// if (_unknownFields != null) {
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = __this->get__unknownFields_1();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_5 = V_0;
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_6 = __this->get__unknownFields_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = UnknownFieldSet_CalculateSize_mD51F03E0D402BA16A8DFA1611B7B39E81661959B(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
	}

IL_002b:
	{
		// return size;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::MergeFrom(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto_MergeFrom_m28355491B18D1344670601B1C60B68FB623FDE7A (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Add_m1753A3FD2AE327758DA5D28638600DF54BA8F56D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == null) {
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_0 = ___other0;
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
		// value_.Add(other.value_);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_1 = __this->get_value__3();
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_2 = ___other0;
		NullCheck(L_2);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_3 = L_2->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_Add_m1753A3FD2AE327758DA5D28638600DF54BA8F56D(L_1, L_3, /*hidden argument*/RepeatedField_1_Add_m1753A3FD2AE327758DA5D28638600DF54BA8F56D_RuntimeMethod_var);
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = __this->get__unknownFields_1();
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_5 = ___other0;
		NullCheck(L_5);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_6 = L_5->get__unknownFields_1();
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_7;
		L_7 = UnknownFieldSet_MergeFrom_mE9DA70E8E90E2D9F20766C0036A6D98F1E2E7C30(L_4, L_6, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_7);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto_MergeFrom_m5F3EFF91351B4C6893004D70B36B79F8858178DB (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * __this, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_AddEntriesFrom_m746125F3D9496FA236BE5FFE9677110970954F1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		goto IL_002c;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001b;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_1 = __this->get__unknownFields_1();
		CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * L_2 = ___input0;
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_3;
		L_3 = UnknownFieldSet_MergeFieldFrom_m914D20106FB9DF2E408EE84A0509B6B482672827(L_1, L_2, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_3);
		// break;
		goto IL_002c;
	}

IL_001b:
	{
		// value_.AddEntriesFrom(input, _repeated_value_codec);
		RepeatedField_1_t4802821F2F01E917ACD01D597D2E9C42DD20C65A * L_4 = __this->get_value__3();
		CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * L_5 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * L_6 = ((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_4);
		RepeatedField_1_AddEntriesFrom_m746125F3D9496FA236BE5FFE9677110970954F1D(L_4, L_5, L_6, /*hidden argument*/RepeatedField_1_AddEntriesFrom_m746125F3D9496FA236BE5FFE9677110970954F1D_RuntimeMethod_var);
	}

IL_002c:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * L_7 = ___input0;
		NullCheck(L_7);
		uint32_t L_8;
		L_8 = CodedInputStream_ReadTag_m3949BCAE57D81376E084BE4E1A96DEE2D2D67776(L_7, /*hidden argument*/NULL);
		uint32_t L_9 = L_8;
		V_0 = L_9;
		if (L_9)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__cctor_m4752A9845F7813EC1C271D39FF7B5476D8F1E4DE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCodec_ForMessage_TisAgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_mB07A40DB8CE7DE139FECC9216ADE785B0CA5FF48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m07837B976212E6FCD9D927ADE930A39FC625DC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_mC7B379BA6558CBC11F8F50C9D96F49844E6D4140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__25_0_m01028E6CF34C1466CDEBC8BA65F78E0CC4FC4F1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentActionProto> _parser = new pb::MessageParser<ListAgentActionProto>(() => new ListAgentActionProto());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var);
		U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * L_0 = ((U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF * L_1 = (Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF *)il2cpp_codegen_object_new(Func_1_t6B1B992832AAB2A41AD1665F9AFECD1D3F0F6CBF_il2cpp_TypeInfo_var);
		Func_1__ctor_m07837B976212E6FCD9D927ADE930A39FC625DC66(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__25_0_m01028E6CF34C1466CDEBC8BA65F78E0CC4FC4F1E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m07837B976212E6FCD9D927ADE930A39FC625DC66_RuntimeMethod_var);
		MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 * L_2 = (MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2 *)il2cpp_codegen_object_new(MessageParser_1_tCBC1E36B4EBC9905D694B5C2E738CEA8239B01C2_il2cpp_TypeInfo_var);
		MessageParser_1__ctor_mC7B379BA6558CBC11F8F50C9D96F49844E6D4140(L_2, L_1, /*hidden argument*/MessageParser_1__ctor_mC7B379BA6558CBC11F8F50C9D96F49844E6D4140_RuntimeMethod_var);
		((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var))->set__parser_0(L_2);
		// private static readonly pb::FieldCodec<global::Unity.MLAgents.CommunicatorObjects.AgentActionProto> _repeated_value_codec
		//     = pb::FieldCodec.ForMessage(10, global::Unity.MLAgents.CommunicatorObjects.AgentActionProto.Parser);
		IL2CPP_RUNTIME_CLASS_INIT(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_il2cpp_TypeInfo_var);
		MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * L_3;
		L_3 = AgentActionProto_get_Parser_mFF62F81E46D54360F9DB9B9EBC50F9A98686F403_inline(/*hidden argument*/NULL);
		FieldCodec_1_t9C8B89E806F30A72DCFB710B1459DE284546B4C9 * L_4;
		L_4 = FieldCodec_ForMessage_TisAgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_mB07A40DB8CE7DE139FECC9216ADE785B0CA5FF48(((int32_t)10), L_3, /*hidden argument*/FieldCodec_ForMessage_TisAgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_mB07A40DB8CE7DE139FECC9216ADE785B0CA5FF48_RuntimeMethod_var);
		((ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var))->set__repeated_value_codec_2(L_4);
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
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * ListAgentInfoProto_get_Parser_mB1F770E941F407EC3114C695F80E5798D7EA4F7C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ListAgentInfoProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * L_0 = ((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ListAgentInfoProto_get_Descriptor_m0524FBBE887A22339C6E00F7ED41DCE757124AC0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t05680C26DD61C1A04E11CABAFA51A8DF6F7C2050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Descriptor.NestedTypes[0]; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_t827CDB22CFE433D1AAD9106A6B4167CACF3FD43C_il2cpp_TypeInfo_var);
		MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * L_0;
		L_0 = UnityRLOutputProto_get_Descriptor_m410DAD46028EC3FFAA9DD56A400E7349BBD53D6B(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MessageDescriptor_get_NestedTypes_mFAD3E104D110267F14A7A38EB37322A8E8C821D6_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * L_2;
		L_2 = InterfaceFuncInvoker1< MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_t05680C26DD61C1A04E11CABAFA51A8DF6F7C2050_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * ListAgentInfoProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m8C2DA676B18FC6E74B99B1594064625298CEC425 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * L_0;
		L_0 = ListAgentInfoProto_get_Descriptor_m0524FBBE887A22339C6E00F7ED41DCE757124AC0(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_mD6804758545863CF8E4DB5EE501B7F3A7AFA85E5 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1__ctor_m750357F43A3EDB5D326506F237F062472BD150C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto> value_ = new pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto>();
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_0 = (RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 *)il2cpp_codegen_object_new(RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0_il2cpp_TypeInfo_var);
		RepeatedField_1__ctor_m750357F43A3EDB5D326506F237F062472BD150C2(L_0, /*hidden argument*/RepeatedField_1__ctor_m750357F43A3EDB5D326506F237F062472BD150C2_RuntimeMethod_var);
		__this->set_value__3(L_0);
		// public ListAgentInfoProto() {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_m2CBA7E17614C4FCC23D329DE91BD6C672471CA1C (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Clone_m459E11CCF674DEBA89056507600341A0FA03288E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ListAgentInfoProto(ListAgentInfoProto other) : this() {
		ListAgentInfoProto__ctor_mD6804758545863CF8E4DB5EE501B7F3A7AFA85E5(__this, /*hidden argument*/NULL);
		// value_ = other.value_.Clone();
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_0 = ___other0;
		NullCheck(L_0);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_1 = L_0->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_2;
		L_2 = RepeatedField_1_Clone_m459E11CCF674DEBA89056507600341A0FA03288E(L_1, /*hidden argument*/RepeatedField_1_Clone_m459E11CCF674DEBA89056507600341A0FA03288E_RuntimeMethod_var);
		__this->set_value__3(L_2);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_3 = ___other0;
		NullCheck(L_3);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = L_3->get__unknownFields_1();
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_5;
		L_5 = UnknownFieldSet_Clone_m2AA07651D4FF4EE917E9AC60FC67FC31B5F57C99(L_4, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_5);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * ListAgentInfoProto_Clone_mC85511EFF06504FE071ABAA07FD8B2E603CBB186 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ListAgentInfoProto(this);
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_0 = (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 *)il2cpp_codegen_object_new(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		ListAgentInfoProto__ctor_m2CBA7E17614C4FCC23D329DE91BD6C672471CA1C(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * ListAgentInfoProto_get_Value_mFCBBF5A3DC61527438967D979637CBDD2561AC1D (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	{
		// get { return value_; }
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_0 = __this->get_value__3();
		return L_0;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentInfoProto_Equals_m3A5AF2E1AEB67B31CB816D7649ECC8FFCF98C684 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as ListAgentInfoProto);
		RuntimeObject * L_0 = ___other0;
		bool L_1;
		L_1 = ListAgentInfoProto_Equals_m18428F9ACDD4E94F1CE07FEDAEB2DC9543ACDD8E(__this, ((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 *)IsInstSealed((RuntimeObject*)L_0, ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentInfoProto_Equals_m18428F9ACDD4E94F1CE07FEDAEB2DC9543ACDD8E (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Equals_m50019E6764ED7F7BF2FD405ABC763A230DE80BA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 *)L_1) == ((RuntimeObject*)(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 *)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if(!value_.Equals(other.value_)) return false;
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_2 = __this->get_value__3();
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_3 = ___other0;
		NullCheck(L_3);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_4 = L_3->get_value__3();
		NullCheck(L_2);
		bool L_5;
		L_5 = RepeatedField_1_Equals_m50019E6764ED7F7BF2FD405ABC763A230DE80BA6(L_2, L_4, /*hidden argument*/RepeatedField_1_Equals_m50019E6764ED7F7BF2FD405ABC763A230DE80BA6_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if(!value_.Equals(other.value_)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_6 = __this->get__unknownFields_1();
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_8 = L_7->get__unknownFields_1();
		bool L_9;
		L_9 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentInfoProto_GetHashCode_m450C6BDF3F2C68FB8436D2E7BD140C066D286420 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// hash ^= value_.GetHashCode();
		int32_t L_0 = V_0;
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_1 = __this->get_value__3();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// if (_unknownFields != null) {
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_4 = V_0;
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_5 = __this->get__unknownFields_1();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
	}

IL_0026:
	{
		// return hash;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.String Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListAgentInfoProto_ToString_m4A829D4BB12357ABD52AEE6E4ACCC9FAABA579C9 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonFormatter_t60B224B5AAD7C4B394A07D3C2E10EAD03B56397B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonFormatter_t60B224B5AAD7C4B394A07D3C2E10EAD03B56397B_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = JsonFormatter_ToDiagnosticString_m7258F175C473FCE9FFE3129663537BC6643D62E0(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto_WriteTo_m4C845FF2BC77764964AE297D703F96B634450C20 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_WriteTo_m976A203363E3FDD9C9566E1B974DAD0F410C63DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value_.WriteTo(output, _repeated_value_codec);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_0 = __this->get_value__3();
		CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * L_2 = ((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_0);
		RepeatedField_1_WriteTo_m976A203363E3FDD9C9566E1B974DAD0F410C63DC(L_0, L_1, L_2, /*hidden argument*/RepeatedField_1_WriteTo_m976A203363E3FDD9C9566E1B974DAD0F410C63DC_RuntimeMethod_var);
		// if (_unknownFields != null) {
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// _unknownFields.WriteTo(output);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = __this->get__unknownFields_1();
		CodedOutputStream_tA534BFBE4EF9B8B74A22344AC468CC2C6BA69BE1 * L_5 = ___output0;
		NullCheck(L_4);
		UnknownFieldSet_WriteTo_m3E1FF12458C4123EC5E264B0D9FA9A46A8CB8FC5(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentInfoProto_CalculateSize_mD5654C96128D33A3EBCF9764E932F5D8DDEAF146 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_CalculateSize_mE2B63B1942E48EF54E8E6E6BAF674701C09F3F33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// size += value_.CalculateSize(_repeated_value_codec);
		int32_t L_0 = V_0;
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_1 = __this->get_value__3();
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * L_2 = ((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_1);
		int32_t L_3;
		L_3 = RepeatedField_1_CalculateSize_mE2B63B1942E48EF54E8E6E6BAF674701C09F3F33(L_1, L_2, /*hidden argument*/RepeatedField_1_CalculateSize_mE2B63B1942E48EF54E8E6E6BAF674701C09F3F33_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// if (_unknownFields != null) {
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = __this->get__unknownFields_1();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_5 = V_0;
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_6 = __this->get__unknownFields_1();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = UnknownFieldSet_CalculateSize_mD51F03E0D402BA16A8DFA1611B7B39E81661959B(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
	}

IL_002b:
	{
		// return size;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::MergeFrom(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto_MergeFrom_mB73D8207733526C9036DF85E97C6A1E90B8225CD (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_Add_mDF7EC24F54AB59E2C8121CE68D828A8FA5F6AC05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == null) {
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_0 = ___other0;
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
		// value_.Add(other.value_);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_1 = __this->get_value__3();
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_2 = ___other0;
		NullCheck(L_2);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_3 = L_2->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_Add_mDF7EC24F54AB59E2C8121CE68D828A8FA5F6AC05(L_1, L_3, /*hidden argument*/RepeatedField_1_Add_mDF7EC24F54AB59E2C8121CE68D828A8FA5F6AC05_RuntimeMethod_var);
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_4 = __this->get__unknownFields_1();
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_5 = ___other0;
		NullCheck(L_5);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_6 = L_5->get__unknownFields_1();
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_7;
		L_7 = UnknownFieldSet_MergeFrom_mE9DA70E8E90E2D9F20766C0036A6D98F1E2E7C30(L_4, L_6, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_7);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto_MergeFrom_m18F7E90BD4C1D0C66CED0F3F99663CB0BCA7CA54 (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * __this, CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_AddEntriesFrom_mCBEA5D4A24BD6411E9ECEDA2EE4FCD8D3ABEC70B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		goto IL_002c;
	}

IL_0002:
	{
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001b;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_1 = __this->get__unknownFields_1();
		CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * L_2 = ___input0;
		UnknownFieldSet_tC31F737FAD8397C83A2F8394F1E56DFA0F6F0303 * L_3;
		L_3 = UnknownFieldSet_MergeFieldFrom_m914D20106FB9DF2E408EE84A0509B6B482672827(L_1, L_2, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_3);
		// break;
		goto IL_002c;
	}

IL_001b:
	{
		// value_.AddEntriesFrom(input, _repeated_value_codec);
		RepeatedField_1_tBEEC9B542214F33571EA4D1F0083CA86723821C0 * L_4 = __this->get_value__3();
		CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * L_5 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * L_6 = ((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_4);
		RepeatedField_1_AddEntriesFrom_mCBEA5D4A24BD6411E9ECEDA2EE4FCD8D3ABEC70B(L_4, L_5, L_6, /*hidden argument*/RepeatedField_1_AddEntriesFrom_mCBEA5D4A24BD6411E9ECEDA2EE4FCD8D3ABEC70B_RuntimeMethod_var);
	}

IL_002c:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t25F721DB2686E5902C583F4FD9B30F2D54C320BC * L_7 = ___input0;
		NullCheck(L_7);
		uint32_t L_8;
		L_8 = CodedInputStream_ReadTag_m3949BCAE57D81376E084BE4E1A96DEE2D2D67776(L_7, /*hidden argument*/NULL);
		uint32_t L_9 = L_8;
		V_0 = L_9;
		if (L_9)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__cctor_m6F03F913597216A8CB0C9C730C41BF8660B67C87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldCodec_ForMessage_TisAgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_mA7780120C1CFB3162A1D1A566F82C8E4E1614338_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m127744ACA844E3994BB239CBBEF3B24F1ECD3198_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1__ctor_m4A2CD44D5CB456E42698D5B2B4375203B8A0C25F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__25_0_m0ECEEBE0E61577B442268FD550057DACCBD42382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentInfoProto> _parser = new pb::MessageParser<ListAgentInfoProto>(() => new ListAgentInfoProto());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var);
		U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * L_0 = ((U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 * L_1 = (Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3 *)il2cpp_codegen_object_new(Func_1_t40A59C0FA9FB305AE6A4215C13F818F9E1FEB7F3_il2cpp_TypeInfo_var);
		Func_1__ctor_m127744ACA844E3994BB239CBBEF3B24F1ECD3198(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__25_0_m0ECEEBE0E61577B442268FD550057DACCBD42382_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m127744ACA844E3994BB239CBBEF3B24F1ECD3198_RuntimeMethod_var);
		MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 * L_2 = (MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4 *)il2cpp_codegen_object_new(MessageParser_1_tA8AC940E27EEE1F5D8429870E858E41306FC99C4_il2cpp_TypeInfo_var);
		MessageParser_1__ctor_m4A2CD44D5CB456E42698D5B2B4375203B8A0C25F(L_2, L_1, /*hidden argument*/MessageParser_1__ctor_m4A2CD44D5CB456E42698D5B2B4375203B8A0C25F_RuntimeMethod_var);
		((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var))->set__parser_0(L_2);
		// private static readonly pb::FieldCodec<global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto> _repeated_value_codec
		//     = pb::FieldCodec.ForMessage(10, global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto.Parser);
		IL2CPP_RUNTIME_CLASS_INIT(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_il2cpp_TypeInfo_var);
		MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * L_3;
		L_3 = AgentInfoProto_get_Parser_m14150A90706B5A082E24B9BCD1A89343F70D7B4B_inline(/*hidden argument*/NULL);
		FieldCodec_1_t629D89E4236A29196217DEADE80C8EEEB77DDF3C * L_4;
		L_4 = FieldCodec_ForMessage_TisAgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_mA7780120C1CFB3162A1D1A566F82C8E4E1614338(((int32_t)10), L_3, /*hidden argument*/FieldCodec_ForMessage_TisAgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_mA7780120C1CFB3162A1D1A566F82C8E4E1614338_RuntimeMethod_var);
		((ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var))->set__repeated_value_codec_2(L_4);
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
// System.Void Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD4CA7D19727317FA4F91CCC439CE005A227FCAE5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * L_0 = (U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E *)il2cpp_codegen_object_new(U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD00AB79C0BD6CEF448BF586EEE0D186CB688D7D6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD00AB79C0BD6CEF448BF586EEE0D186CB688D7D6 (U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData Unity.MLAgents.CommunicatorObjects.ObservationProto/Types/FloatData/<>c::<.cctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885 * U3CU3Ec_U3C_cctorU3Eb__25_0_m0EA979B28587113268E32BB5B93B02BE3CB955B0 (U3CU3Ec_tC30C3936DC47D90648B0365E42CDCBBDCC33D26E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<FloatData> _parser = new pb::MessageParser<FloatData>(() => new FloatData());
		FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885 * L_0 = (FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885 *)il2cpp_codegen_object_new(FloatData_tC09C8D45738E44FB8AC3F2D38B08DF0223FC9885_il2cpp_TypeInfo_var);
		FloatData__ctor_mC361BFD104C98A1BF2F749FB90AC38283DE76AE1(L_0, /*hidden argument*/NULL);
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
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC70923827E4CD9F536C9167A04F8F702A2C6236A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * L_0 = (U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 *)il2cpp_codegen_object_new(U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m703A40B0946186BD4804E8F95E88FBF718D4EB41(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m703A40B0946186BD4804E8F95E88FBF718D4EB41 (U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::<.cctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * U3CU3Ec_U3C_cctorU3Eb__25_0_m01028E6CF34C1466CDEBC8BA65F78E0CC4FC4F1E (U3CU3Ec_t21817671B1BB5C8B2EB009740E953A408178FAB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentActionProto> _parser = new pb::MessageParser<ListAgentActionProto>(() => new ListAgentActionProto());
		ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF * L_0 = (ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF *)il2cpp_codegen_object_new(ListAgentActionProto_t27207E0FF79E66279584019A1302E897EDAAA5EF_il2cpp_TypeInfo_var);
		ListAgentActionProto__ctor_mCE34C0822ABC92DDAB72EB25AB114000D33A5E45(L_0, /*hidden argument*/NULL);
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
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m732EAC0D7590881DE3F7E26457453E2BA3EF5C31 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * L_0 = (U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 *)il2cpp_codegen_object_new(U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3C3C23D356A82EDBC514472386390571B559C1E3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3C3C23D356A82EDBC514472386390571B559C1E3 (U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::<.cctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * U3CU3Ec_U3C_cctorU3Eb__25_0_m0ECEEBE0E61577B442268FD550057DACCBD42382 (U3CU3Ec_t87D66CD5FA00B5DBD8E7E2AD4E97E3DD2CF16062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentInfoProto> _parser = new pb::MessageParser<ListAgentInfoProto>(() => new ListAgentInfoProto());
		ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 * L_0 = (ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5 *)il2cpp_codegen_object_new(ListAgentInfoProto_t305B3503F6758548E815BF7A783116AA9A40E7E5_il2cpp_TypeInfo_var);
		ListAgentInfoProto__ctor_mD6804758545863CF8E4DB5EE501B7F3A7AFA85E5(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_mFAD3E104D110267F14A7A38EB37322A8E8C821D6_inline (MessageDescriptor_t04AB37BB6661E0BCA2E5E3AC406A58B10C8808B8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CNestedTypesU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * AgentActionProto_get_Parser_mFF62F81E46D54360F9DB9B9EBC50F9A98686F403_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<AgentActionProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_il2cpp_TypeInfo_var);
		MessageParser_1_tE2D3140527634767D34107218B6C56ADAC98897A * L_0 = ((AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_StaticFields*)il2cpp_codegen_static_fields_for(AgentActionProto_t82CDAD81F908D4DB780CE69E4CB3A5F6B28BF760_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * AgentInfoProto_get_Parser_m14150A90706B5A082E24B9BCD1A89343F70D7B4B_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<AgentInfoProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_il2cpp_TypeInfo_var);
		MessageParser_1_t61CDEF979FB8F504B86D48BCB0299147EEC80DFD * L_0 = ((AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_StaticFields*)il2cpp_codegen_static_fields_for(AgentInfoProto_tE8472EAFFB161E64DDCB19A8DAEB88672CDB32A4_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
