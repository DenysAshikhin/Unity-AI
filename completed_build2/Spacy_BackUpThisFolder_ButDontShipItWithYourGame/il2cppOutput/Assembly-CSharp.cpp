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

// System.Action`1<Unity.MLAgents.Agent>
struct Action_1_tCD41DDB54E8660C6A76F830AF180A0D0148CB129;
// System.Collections.Generic.ISet`1<Unity.MLAgents.Demonstrations.DemonstrationWriter>
struct ISet_1_t32BD76E307DAF2C73A58B375F7C643AF0B440528;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Unity.MLAgents.Sensors.ISensor>
struct List_1_t862204774D7420C5909CCAABCD712D8DB10B14E3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF;
// Unity.MLAgents.Actuators.ActuatorManager
struct ActuatorManager_t0099A71D418C8307B1F60180929B5DA329CDB7C7;
// Unity.MLAgents.Agent
struct Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11;
// AimBeam
struct AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// Unity.MLAgents.Policies.BehaviorParameters
struct BehaviorParameters_t06C363279E58FE21B42415C20AFD0CD81A34342E;
// Unity.MLAgents.Sensors.BufferSensor
struct BufferSensor_t8C9336F4E9B2972790867A08F1E7F879F3FAF231;
// Unity.MLAgents.Sensors.BufferSensorComponent
struct BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322;
// BulletPool
struct BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Crosshair
struct Crosshair_t47D938F560B143D37D65F2B0825D454574D0E643;
// CustomPointer
struct CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B;
// ExampleShipControl
struct ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Unity.MLAgents.Actuators.IActuator
struct IActuator_t40E8C381F15B2A47B1760E93CF0C1A0005D6B602;
// Unity.MLAgents.Policies.IPolicy
struct IPolicy_t20461AE9EA645C2AEC3375E5B3D9F942C1940FF4;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3AF66EFDCBDF4D546C5D58095F0B13B878991914;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PSDestroy
struct PSDestroy_t894C30FB98DBEC2AC0B84EFC72C3BFA5248F70EE;
// ParallaxLayer
struct ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PlayerControlledTurret
struct PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Unity.MLAgents.RecursionChecker
struct RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// ShipCamera
struct ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91;
// System.String
struct String_t;
// Unity.Entities.SystemBase
struct SystemBase_t236012EC818059A231628BBC6A7E0F142001EB75;
// Unity.Entities.SystemState
struct SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// Unity.MLAgents.Sensors.VectorSensor
struct VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// bulletRadar
struct bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875;
// fighterAI
struct fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D;
// fpsCounter
struct fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0;
// testerJob
struct testerJob_t43737275AC74FF14901C7C5EAD263FA3F65F9CB6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral13033B13C82DCDB46E35F05C27E118719D37AD3A;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral313DA2379B0B88AB6469FC553185A248B1162326;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral7F50876F690AB8DF4647D07BA607C34629A6A18E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB2B5D4D1B88417CD7976C0D40CBD46CC00DFFA90;
IL2CPP_EXTERN_C String_t* _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F;
IL2CPP_EXTERN_C String_t* _stringLiteralC7DB27B18C7041D9392EA06384420490D7253D1C;
IL2CPP_EXTERN_C String_t* _stringLiteralD77E863B1403B72CFCA0CF2B41234BF8F5039963;
IL2CPP_EXTERN_C String_t* _stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2;
IL2CPP_EXTERN_C String_t* _stringLiteralEDFD4D20C33290BB70BBA904B4E928860ABAE131;
IL2CPP_EXTERN_C const RuntimeMethod* ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_mA9596DB68DB818B57C7AD1D6A6EDC76D0BBDED39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322_m211D630C9E72AC36670CCCFB9A88B3A8797C3AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// Unity.Entities.ComponentSystemBase
struct ComponentSystemBase_t8008ABC5BDE453061672EA262B5698047849A3BC  : public RuntimeObject
{
public:
	// Unity.Entities.SystemState* Unity.Entities.ComponentSystemBase::m_StatePtr
	SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 * ___m_StatePtr_0;

public:
	inline static int32_t get_offset_of_m_StatePtr_0() { return static_cast<int32_t>(offsetof(ComponentSystemBase_t8008ABC5BDE453061672EA262B5698047849A3BC, ___m_StatePtr_0)); }
	inline SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 * get_m_StatePtr_0() const { return ___m_StatePtr_0; }
	inline SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 ** get_address_of_m_StatePtr_0() { return &___m_StatePtr_0; }
	inline void set_m_StatePtr_0(SystemState_t36E4EBEDC1A8DE324669E6A495E2CD70B8B12D95 * value)
	{
		___m_StatePtr_0 = value;
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

// bulletRadar
struct bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> bulletRadar::bullets
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___bullets_0;

public:
	inline static int32_t get_offset_of_bullets_0() { return static_cast<int32_t>(offsetof(bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875, ___bullets_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_bullets_0() const { return ___bullets_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_bullets_0() { return &___bullets_0; }
	inline void set_bullets_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___bullets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullets_0), (void*)value);
	}
};


// Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>
struct ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD 
{
public:
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Offset
	int32_t ___Offset_0;
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Length
	int32_t ___Length_1;
	// T[] Unity.MLAgents.Actuators.ActionSegment`1::<Array>k__BackingField
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CArrayU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_U3CArrayU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD, ___U3CArrayU3Ek__BackingField_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CArrayU3Ek__BackingField_3() const { return ___U3CArrayU3Ek__BackingField_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CArrayU3Ek__BackingField_3() { return &___U3CArrayU3Ek__BackingField_3; }
	inline void set_U3CArrayU3Ek__BackingField_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CArrayU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CArrayU3Ek__BackingField_3), (void*)value);
	}
};

struct ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD_StaticFields
{
public:
	// Unity.MLAgents.Actuators.ActionSegment`1<T> Unity.MLAgents.Actuators.ActionSegment`1::Empty
	ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD_StaticFields, ___Empty_2)); }
	inline ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  get_Empty_2() const { return ___Empty_2; }
	inline ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_2))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
	}
};


// Unity.MLAgents.Actuators.ActionSegment`1<System.Single>
struct ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229 
{
public:
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Offset
	int32_t ___Offset_0;
	// System.Int32 Unity.MLAgents.Actuators.ActionSegment`1::Length
	int32_t ___Length_1;
	// T[] Unity.MLAgents.Actuators.ActionSegment`1::<Array>k__BackingField
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CArrayU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_U3CArrayU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229, ___U3CArrayU3Ek__BackingField_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CArrayU3Ek__BackingField_3() const { return ___U3CArrayU3Ek__BackingField_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CArrayU3Ek__BackingField_3() { return &___U3CArrayU3Ek__BackingField_3; }
	inline void set_U3CArrayU3Ek__BackingField_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CArrayU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CArrayU3Ek__BackingField_3), (void*)value);
	}
};

struct ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229_StaticFields
{
public:
	// Unity.MLAgents.Actuators.ActionSegment`1<T> Unity.MLAgents.Actuators.ActionSegment`1::Empty
	ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229_StaticFields, ___Empty_2)); }
	inline ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  get_Empty_2() const { return ___Empty_2; }
	inline ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Empty_2))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
	}
};


// Unity.MLAgents.InplaceArray`1<System.Int32>
struct InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9 
{
public:
	// System.Int32 Unity.MLAgents.InplaceArray`1::m_Length
	int32_t ___m_Length_1;
	// T Unity.MLAgents.InplaceArray`1::m_Elem0
	int32_t ___m_Elem0_2;
	// T Unity.MLAgents.InplaceArray`1::m_Elem1
	int32_t ___m_Elem1_3;
	// T Unity.MLAgents.InplaceArray`1::m_Elem2
	int32_t ___m_Elem2_4;
	// T Unity.MLAgents.InplaceArray`1::m_Elem3
	int32_t ___m_Elem3_5;

public:
	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_Elem0_2() { return static_cast<int32_t>(offsetof(InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9, ___m_Elem0_2)); }
	inline int32_t get_m_Elem0_2() const { return ___m_Elem0_2; }
	inline int32_t* get_address_of_m_Elem0_2() { return &___m_Elem0_2; }
	inline void set_m_Elem0_2(int32_t value)
	{
		___m_Elem0_2 = value;
	}

	inline static int32_t get_offset_of_m_Elem1_3() { return static_cast<int32_t>(offsetof(InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9, ___m_Elem1_3)); }
	inline int32_t get_m_Elem1_3() const { return ___m_Elem1_3; }
	inline int32_t* get_address_of_m_Elem1_3() { return &___m_Elem1_3; }
	inline void set_m_Elem1_3(int32_t value)
	{
		___m_Elem1_3 = value;
	}

	inline static int32_t get_offset_of_m_Elem2_4() { return static_cast<int32_t>(offsetof(InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9, ___m_Elem2_4)); }
	inline int32_t get_m_Elem2_4() const { return ___m_Elem2_4; }
	inline int32_t* get_address_of_m_Elem2_4() { return &___m_Elem2_4; }
	inline void set_m_Elem2_4(int32_t value)
	{
		___m_Elem2_4 = value;
	}

	inline static int32_t get_offset_of_m_Elem3_5() { return static_cast<int32_t>(offsetof(InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9, ___m_Elem3_5)); }
	inline int32_t get_m_Elem3_5() const { return ___m_Elem3_5; }
	inline int32_t* get_address_of_m_Elem3_5() { return &___m_Elem3_5; }
	inline void set_m_Elem3_5(int32_t value)
	{
		___m_Elem3_5 = value;
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3AF66EFDCBDF4D546C5D58095F0B13B878991914  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// Unity.Entities.SystemBase
struct SystemBase_t236012EC818059A231628BBC6A7E0F142001EB75  : public ComponentSystemBase_t8008ABC5BDE453061672EA262B5698047849A3BC
{
public:

public:
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF 
{
public:
	// Unity.MLAgents.Actuators.ActionSegment`1<System.Single> Unity.MLAgents.Actuators.ActionBuffers::<ContinuousActions>k__BackingField
	ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  ___U3CContinuousActionsU3Ek__BackingField_1;
	// Unity.MLAgents.Actuators.ActionSegment`1<System.Int32> Unity.MLAgents.Actuators.ActionBuffers::<DiscreteActions>k__BackingField
	ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  ___U3CDiscreteActionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CContinuousActionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF, ___U3CContinuousActionsU3Ek__BackingField_1)); }
	inline ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  get_U3CContinuousActionsU3Ek__BackingField_1() const { return ___U3CContinuousActionsU3Ek__BackingField_1; }
	inline ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229 * get_address_of_U3CContinuousActionsU3Ek__BackingField_1() { return &___U3CContinuousActionsU3Ek__BackingField_1; }
	inline void set_U3CContinuousActionsU3Ek__BackingField_1(ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  value)
	{
		___U3CContinuousActionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CContinuousActionsU3Ek__BackingField_1))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CDiscreteActionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF, ___U3CDiscreteActionsU3Ek__BackingField_2)); }
	inline ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  get_U3CDiscreteActionsU3Ek__BackingField_2() const { return ___U3CDiscreteActionsU3Ek__BackingField_2; }
	inline ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD * get_address_of_U3CDiscreteActionsU3Ek__BackingField_2() { return &___U3CDiscreteActionsU3Ek__BackingField_2; }
	inline void set_U3CDiscreteActionsU3Ek__BackingField_2(ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  value)
	{
		___U3CDiscreteActionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CDiscreteActionsU3Ek__BackingField_2))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
	}
};

struct ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF_StaticFields
{
public:
	// Unity.MLAgents.Actuators.ActionBuffers Unity.MLAgents.Actuators.ActionBuffers::Empty
	ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF_StaticFields, ___Empty_0)); }
	inline ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  get_Empty_0() const { return ___Empty_0; }
	inline ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_0))->___U3CContinuousActionsU3Ek__BackingField_1))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Empty_0))->___U3CDiscreteActionsU3Ek__BackingField_2))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF_marshaled_pinvoke
{
	ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  ___U3CContinuousActionsU3Ek__BackingField_1;
	ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  ___U3CDiscreteActionsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of Unity.MLAgents.Actuators.ActionBuffers
struct ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF_marshaled_com
{
	ActionSegment_1_t0AE60FF7AAE624955F4ABC6FF903684408F7F229  ___U3CContinuousActionsU3Ek__BackingField_1;
	ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  ___U3CDiscreteActionsU3Ek__BackingField_2;
};

// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// Unity.MLAgents.Sensors.DimensionProperty
struct DimensionProperty_t016DE8ADCBE7221F9B7ACEC463F778C2FCD998CA 
{
public:
	// System.Int32 Unity.MLAgents.Sensors.DimensionProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DimensionProperty_t016DE8ADCBE7221F9B7ACEC463F778C2FCD998CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Unity.MLAgents.Sensors.ObservationType
struct ObservationType_t20CB3083B58C0EAB20E47CC16956BF9E27571275 
{
public:
	// System.Int32 Unity.MLAgents.Sensors.ObservationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservationType_t20CB3083B58C0EAB20E47CC16956BF9E27571275, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// testerJob
struct testerJob_t43737275AC74FF14901C7C5EAD263FA3F65F9CB6  : public SystemBase_t236012EC818059A231628BBC6A7E0F142001EB75
{
public:

public:
};


// Unity.MLAgents.InplaceArray`1<Unity.MLAgents.Sensors.DimensionProperty>
struct InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D 
{
public:
	// System.Int32 Unity.MLAgents.InplaceArray`1::m_Length
	int32_t ___m_Length_1;
	// T Unity.MLAgents.InplaceArray`1::m_Elem0
	int32_t ___m_Elem0_2;
	// T Unity.MLAgents.InplaceArray`1::m_Elem1
	int32_t ___m_Elem1_3;
	// T Unity.MLAgents.InplaceArray`1::m_Elem2
	int32_t ___m_Elem2_4;
	// T Unity.MLAgents.InplaceArray`1::m_Elem3
	int32_t ___m_Elem3_5;

public:
	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_Elem0_2() { return static_cast<int32_t>(offsetof(InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D, ___m_Elem0_2)); }
	inline int32_t get_m_Elem0_2() const { return ___m_Elem0_2; }
	inline int32_t* get_address_of_m_Elem0_2() { return &___m_Elem0_2; }
	inline void set_m_Elem0_2(int32_t value)
	{
		___m_Elem0_2 = value;
	}

	inline static int32_t get_offset_of_m_Elem1_3() { return static_cast<int32_t>(offsetof(InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D, ___m_Elem1_3)); }
	inline int32_t get_m_Elem1_3() const { return ___m_Elem1_3; }
	inline int32_t* get_address_of_m_Elem1_3() { return &___m_Elem1_3; }
	inline void set_m_Elem1_3(int32_t value)
	{
		___m_Elem1_3 = value;
	}

	inline static int32_t get_offset_of_m_Elem2_4() { return static_cast<int32_t>(offsetof(InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D, ___m_Elem2_4)); }
	inline int32_t get_m_Elem2_4() const { return ___m_Elem2_4; }
	inline int32_t* get_address_of_m_Elem2_4() { return &___m_Elem2_4; }
	inline void set_m_Elem2_4(int32_t value)
	{
		___m_Elem2_4 = value;
	}

	inline static int32_t get_offset_of_m_Elem3_5() { return static_cast<int32_t>(offsetof(InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D, ___m_Elem3_5)); }
	inline int32_t get_m_Elem3_5() const { return ___m_Elem3_5; }
	inline int32_t* get_address_of_m_Elem3_5() { return &___m_Elem3_5; }
	inline void set_m_Elem3_5(int32_t value)
	{
		___m_Elem3_5 = value;
	}
};


// Unity.MLAgents.AgentInfo
struct AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24 
{
public:
	// Unity.MLAgents.Actuators.ActionBuffers Unity.MLAgents.AgentInfo::storedActions
	ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  ___storedActions_0;
	// System.Boolean[] Unity.MLAgents.AgentInfo::discreteActionMasks
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___discreteActionMasks_1;
	// System.Single Unity.MLAgents.AgentInfo::reward
	float ___reward_2;
	// System.Single Unity.MLAgents.AgentInfo::groupReward
	float ___groupReward_3;
	// System.Boolean Unity.MLAgents.AgentInfo::done
	bool ___done_4;
	// System.Boolean Unity.MLAgents.AgentInfo::maxStepReached
	bool ___maxStepReached_5;
	// System.Int32 Unity.MLAgents.AgentInfo::episodeId
	int32_t ___episodeId_6;
	// System.Int32 Unity.MLAgents.AgentInfo::groupId
	int32_t ___groupId_7;

public:
	inline static int32_t get_offset_of_storedActions_0() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___storedActions_0)); }
	inline ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  get_storedActions_0() const { return ___storedActions_0; }
	inline ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF * get_address_of_storedActions_0() { return &___storedActions_0; }
	inline void set_storedActions_0(ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  value)
	{
		___storedActions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___storedActions_0))->___U3CContinuousActionsU3Ek__BackingField_1))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___storedActions_0))->___U3CDiscreteActionsU3Ek__BackingField_2))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_discreteActionMasks_1() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___discreteActionMasks_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_discreteActionMasks_1() const { return ___discreteActionMasks_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_discreteActionMasks_1() { return &___discreteActionMasks_1; }
	inline void set_discreteActionMasks_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___discreteActionMasks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___discreteActionMasks_1), (void*)value);
	}

	inline static int32_t get_offset_of_reward_2() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___reward_2)); }
	inline float get_reward_2() const { return ___reward_2; }
	inline float* get_address_of_reward_2() { return &___reward_2; }
	inline void set_reward_2(float value)
	{
		___reward_2 = value;
	}

	inline static int32_t get_offset_of_groupReward_3() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___groupReward_3)); }
	inline float get_groupReward_3() const { return ___groupReward_3; }
	inline float* get_address_of_groupReward_3() { return &___groupReward_3; }
	inline void set_groupReward_3(float value)
	{
		___groupReward_3 = value;
	}

	inline static int32_t get_offset_of_done_4() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___done_4)); }
	inline bool get_done_4() const { return ___done_4; }
	inline bool* get_address_of_done_4() { return &___done_4; }
	inline void set_done_4(bool value)
	{
		___done_4 = value;
	}

	inline static int32_t get_offset_of_maxStepReached_5() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___maxStepReached_5)); }
	inline bool get_maxStepReached_5() const { return ___maxStepReached_5; }
	inline bool* get_address_of_maxStepReached_5() { return &___maxStepReached_5; }
	inline void set_maxStepReached_5(bool value)
	{
		___maxStepReached_5 = value;
	}

	inline static int32_t get_offset_of_episodeId_6() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___episodeId_6)); }
	inline int32_t get_episodeId_6() const { return ___episodeId_6; }
	inline int32_t* get_address_of_episodeId_6() { return &___episodeId_6; }
	inline void set_episodeId_6(int32_t value)
	{
		___episodeId_6 = value;
	}

	inline static int32_t get_offset_of_groupId_7() { return static_cast<int32_t>(offsetof(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24, ___groupId_7)); }
	inline int32_t get_groupId_7() const { return ___groupId_7; }
	inline int32_t* get_address_of_groupId_7() { return &___groupId_7; }
	inline void set_groupId_7(int32_t value)
	{
		___groupId_7 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.MLAgents.AgentInfo
struct AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24_marshaled_pinvoke
{
	ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF_marshaled_pinvoke ___storedActions_0;
	int32_t* ___discreteActionMasks_1;
	float ___reward_2;
	float ___groupReward_3;
	int32_t ___done_4;
	int32_t ___maxStepReached_5;
	int32_t ___episodeId_6;
	int32_t ___groupId_7;
};
// Native definition for COM marshalling of Unity.MLAgents.AgentInfo
struct AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24_marshaled_com
{
	ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF_marshaled_com ___storedActions_0;
	int32_t* ___discreteActionMasks_1;
	float ___reward_2;
	float ___groupReward_3;
	int32_t ___done_4;
	int32_t ___maxStepReached_5;
	int32_t ___episodeId_6;
	int32_t ___groupId_7;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Unity.MLAgents.Sensors.ObservationSpec
struct ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07 
{
public:
	// Unity.MLAgents.InplaceArray`1<System.Int32> Unity.MLAgents.Sensors.ObservationSpec::m_Shape
	InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9  ___m_Shape_0;
	// Unity.MLAgents.InplaceArray`1<Unity.MLAgents.Sensors.DimensionProperty> Unity.MLAgents.Sensors.ObservationSpec::m_DimensionProperties
	InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D  ___m_DimensionProperties_1;
	// Unity.MLAgents.Sensors.ObservationType Unity.MLAgents.Sensors.ObservationSpec::m_ObservationType
	int32_t ___m_ObservationType_2;

public:
	inline static int32_t get_offset_of_m_Shape_0() { return static_cast<int32_t>(offsetof(ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07, ___m_Shape_0)); }
	inline InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9  get_m_Shape_0() const { return ___m_Shape_0; }
	inline InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9 * get_address_of_m_Shape_0() { return &___m_Shape_0; }
	inline void set_m_Shape_0(InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9  value)
	{
		___m_Shape_0 = value;
	}

	inline static int32_t get_offset_of_m_DimensionProperties_1() { return static_cast<int32_t>(offsetof(ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07, ___m_DimensionProperties_1)); }
	inline InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D  get_m_DimensionProperties_1() const { return ___m_DimensionProperties_1; }
	inline InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D * get_address_of_m_DimensionProperties_1() { return &___m_DimensionProperties_1; }
	inline void set_m_DimensionProperties_1(InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D  value)
	{
		___m_DimensionProperties_1 = value;
	}

	inline static int32_t get_offset_of_m_ObservationType_2() { return static_cast<int32_t>(offsetof(ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07, ___m_ObservationType_2)); }
	inline int32_t get_m_ObservationType_2() const { return ___m_ObservationType_2; }
	inline int32_t* get_address_of_m_ObservationType_2() { return &___m_ObservationType_2; }
	inline void set_m_ObservationType_2(int32_t value)
	{
		___m_ObservationType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.MLAgents.Sensors.ObservationSpec
struct ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07_marshaled_pinvoke
{
	InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9  ___m_Shape_0;
	InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D  ___m_DimensionProperties_1;
	int32_t ___m_ObservationType_2;
};
// Native definition for COM marshalling of Unity.MLAgents.Sensors.ObservationSpec
struct ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07_marshaled_com
{
	InplaceArray_1_t75B0F7560E99DC1A4F801814801BF56C1FCC43D9  ___m_Shape_0;
	InplaceArray_1_t38926776BAA65E8D0E7C8B39147858451BE9271D  ___m_DimensionProperties_1;
	int32_t ___m_ObservationType_2;
};

// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Unity.MLAgents.Sensors.VectorSensor
struct VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Single> Unity.MLAgents.Sensors.VectorSensor::m_Observations
	List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___m_Observations_0;
	// Unity.MLAgents.Sensors.ObservationSpec Unity.MLAgents.Sensors.VectorSensor::m_ObservationSpec
	ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07  ___m_ObservationSpec_1;
	// System.String Unity.MLAgents.Sensors.VectorSensor::m_Name
	String_t* ___m_Name_2;

public:
	inline static int32_t get_offset_of_m_Observations_0() { return static_cast<int32_t>(offsetof(VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89, ___m_Observations_0)); }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * get_m_Observations_0() const { return ___m_Observations_0; }
	inline List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA ** get_address_of_m_Observations_0() { return &___m_Observations_0; }
	inline void set_m_Observations_0(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * value)
	{
		___m_Observations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observations_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObservationSpec_1() { return static_cast<int32_t>(offsetof(VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89, ___m_ObservationSpec_1)); }
	inline ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07  get_m_ObservationSpec_1() const { return ___m_ObservationSpec_1; }
	inline ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07 * get_address_of_m_ObservationSpec_1() { return &___m_ObservationSpec_1; }
	inline void set_m_ObservationSpec_1(ObservationSpec_tFBD2B9DB663373A3DF08A6DB2D464AFC46148E07  value)
	{
		___m_ObservationSpec_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}
};


// Unity.MLAgents.Agent
struct Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Unity.MLAgents.Policies.IPolicy Unity.MLAgents.Agent::m_Brain
	RuntimeObject* ___m_Brain_4;
	// Unity.MLAgents.Policies.BehaviorParameters Unity.MLAgents.Agent::m_PolicyFactory
	BehaviorParameters_t06C363279E58FE21B42415C20AFD0CD81A34342E * ___m_PolicyFactory_5;
	// Unity.MLAgents.Agent/AgentParameters Unity.MLAgents.Agent::agentParameters
	AgentParameters_tE428926AD1CD4ADB9385A83BC166FCEE691FB770  ___agentParameters_6;
	// System.Boolean Unity.MLAgents.Agent::hasUpgradedFromAgentParameters
	bool ___hasUpgradedFromAgentParameters_7;
	// System.Int32 Unity.MLAgents.Agent::MaxStep
	int32_t ___MaxStep_8;
	// Unity.MLAgents.AgentInfo Unity.MLAgents.Agent::m_Info
	AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24  ___m_Info_9;
	// System.Single Unity.MLAgents.Agent::m_Reward
	float ___m_Reward_10;
	// System.Single Unity.MLAgents.Agent::m_GroupReward
	float ___m_GroupReward_11;
	// System.Single Unity.MLAgents.Agent::m_CumulativeReward
	float ___m_CumulativeReward_12;
	// System.Boolean Unity.MLAgents.Agent::m_RequestAction
	bool ___m_RequestAction_13;
	// System.Boolean Unity.MLAgents.Agent::m_RequestDecision
	bool ___m_RequestDecision_14;
	// System.Int32 Unity.MLAgents.Agent::m_StepCount
	int32_t ___m_StepCount_15;
	// System.Int32 Unity.MLAgents.Agent::m_CompletedEpisodes
	int32_t ___m_CompletedEpisodes_16;
	// System.Int32 Unity.MLAgents.Agent::m_EpisodeId
	int32_t ___m_EpisodeId_17;
	// System.Boolean Unity.MLAgents.Agent::m_Initialized
	bool ___m_Initialized_18;
	// System.Collections.Generic.ISet`1<Unity.MLAgents.Demonstrations.DemonstrationWriter> Unity.MLAgents.Agent::DemonstrationWriters
	RuntimeObject* ___DemonstrationWriters_19;
	// System.Collections.Generic.List`1<Unity.MLAgents.Sensors.ISensor> Unity.MLAgents.Agent::sensors
	List_1_t862204774D7420C5909CCAABCD712D8DB10B14E3 * ___sensors_20;
	// Unity.MLAgents.Sensors.VectorSensor Unity.MLAgents.Agent::collectObservationsSensor
	VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * ___collectObservationsSensor_21;
	// Unity.MLAgents.RecursionChecker Unity.MLAgents.Agent::m_CollectObservationsChecker
	RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C * ___m_CollectObservationsChecker_22;
	// Unity.MLAgents.RecursionChecker Unity.MLAgents.Agent::m_OnEpisodeBeginChecker
	RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C * ___m_OnEpisodeBeginChecker_23;
	// Unity.MLAgents.Actuators.ActuatorManager Unity.MLAgents.Agent::m_ActuatorManager
	ActuatorManager_t0099A71D418C8307B1F60180929B5DA329CDB7C7 * ___m_ActuatorManager_24;
	// Unity.MLAgents.Actuators.IActuator Unity.MLAgents.Agent::m_VectorActuator
	RuntimeObject* ___m_VectorActuator_25;
	// System.Int32 Unity.MLAgents.Agent::m_GroupId
	int32_t ___m_GroupId_26;
	// System.Action`1<Unity.MLAgents.Agent> Unity.MLAgents.Agent::OnAgentDisabled
	Action_1_tCD41DDB54E8660C6A76F830AF180A0D0148CB129 * ___OnAgentDisabled_27;

public:
	inline static int32_t get_offset_of_m_Brain_4() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_Brain_4)); }
	inline RuntimeObject* get_m_Brain_4() const { return ___m_Brain_4; }
	inline RuntimeObject** get_address_of_m_Brain_4() { return &___m_Brain_4; }
	inline void set_m_Brain_4(RuntimeObject* value)
	{
		___m_Brain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Brain_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PolicyFactory_5() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_PolicyFactory_5)); }
	inline BehaviorParameters_t06C363279E58FE21B42415C20AFD0CD81A34342E * get_m_PolicyFactory_5() const { return ___m_PolicyFactory_5; }
	inline BehaviorParameters_t06C363279E58FE21B42415C20AFD0CD81A34342E ** get_address_of_m_PolicyFactory_5() { return &___m_PolicyFactory_5; }
	inline void set_m_PolicyFactory_5(BehaviorParameters_t06C363279E58FE21B42415C20AFD0CD81A34342E * value)
	{
		___m_PolicyFactory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PolicyFactory_5), (void*)value);
	}

	inline static int32_t get_offset_of_agentParameters_6() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___agentParameters_6)); }
	inline AgentParameters_tE428926AD1CD4ADB9385A83BC166FCEE691FB770  get_agentParameters_6() const { return ___agentParameters_6; }
	inline AgentParameters_tE428926AD1CD4ADB9385A83BC166FCEE691FB770 * get_address_of_agentParameters_6() { return &___agentParameters_6; }
	inline void set_agentParameters_6(AgentParameters_tE428926AD1CD4ADB9385A83BC166FCEE691FB770  value)
	{
		___agentParameters_6 = value;
	}

	inline static int32_t get_offset_of_hasUpgradedFromAgentParameters_7() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___hasUpgradedFromAgentParameters_7)); }
	inline bool get_hasUpgradedFromAgentParameters_7() const { return ___hasUpgradedFromAgentParameters_7; }
	inline bool* get_address_of_hasUpgradedFromAgentParameters_7() { return &___hasUpgradedFromAgentParameters_7; }
	inline void set_hasUpgradedFromAgentParameters_7(bool value)
	{
		___hasUpgradedFromAgentParameters_7 = value;
	}

	inline static int32_t get_offset_of_MaxStep_8() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___MaxStep_8)); }
	inline int32_t get_MaxStep_8() const { return ___MaxStep_8; }
	inline int32_t* get_address_of_MaxStep_8() { return &___MaxStep_8; }
	inline void set_MaxStep_8(int32_t value)
	{
		___MaxStep_8 = value;
	}

	inline static int32_t get_offset_of_m_Info_9() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_Info_9)); }
	inline AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24  get_m_Info_9() const { return ___m_Info_9; }
	inline AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24 * get_address_of_m_Info_9() { return &___m_Info_9; }
	inline void set_m_Info_9(AgentInfo_t7085CA2F9DA1D5AE444FE431847C0EFFA4438F24  value)
	{
		___m_Info_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Info_9))->___storedActions_0))->___U3CContinuousActionsU3Ek__BackingField_1))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_Info_9))->___storedActions_0))->___U3CDiscreteActionsU3Ek__BackingField_2))->___U3CArrayU3Ek__BackingField_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Info_9))->___discreteActionMasks_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Reward_10() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_Reward_10)); }
	inline float get_m_Reward_10() const { return ___m_Reward_10; }
	inline float* get_address_of_m_Reward_10() { return &___m_Reward_10; }
	inline void set_m_Reward_10(float value)
	{
		___m_Reward_10 = value;
	}

	inline static int32_t get_offset_of_m_GroupReward_11() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_GroupReward_11)); }
	inline float get_m_GroupReward_11() const { return ___m_GroupReward_11; }
	inline float* get_address_of_m_GroupReward_11() { return &___m_GroupReward_11; }
	inline void set_m_GroupReward_11(float value)
	{
		___m_GroupReward_11 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeReward_12() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_CumulativeReward_12)); }
	inline float get_m_CumulativeReward_12() const { return ___m_CumulativeReward_12; }
	inline float* get_address_of_m_CumulativeReward_12() { return &___m_CumulativeReward_12; }
	inline void set_m_CumulativeReward_12(float value)
	{
		___m_CumulativeReward_12 = value;
	}

	inline static int32_t get_offset_of_m_RequestAction_13() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_RequestAction_13)); }
	inline bool get_m_RequestAction_13() const { return ___m_RequestAction_13; }
	inline bool* get_address_of_m_RequestAction_13() { return &___m_RequestAction_13; }
	inline void set_m_RequestAction_13(bool value)
	{
		___m_RequestAction_13 = value;
	}

	inline static int32_t get_offset_of_m_RequestDecision_14() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_RequestDecision_14)); }
	inline bool get_m_RequestDecision_14() const { return ___m_RequestDecision_14; }
	inline bool* get_address_of_m_RequestDecision_14() { return &___m_RequestDecision_14; }
	inline void set_m_RequestDecision_14(bool value)
	{
		___m_RequestDecision_14 = value;
	}

	inline static int32_t get_offset_of_m_StepCount_15() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_StepCount_15)); }
	inline int32_t get_m_StepCount_15() const { return ___m_StepCount_15; }
	inline int32_t* get_address_of_m_StepCount_15() { return &___m_StepCount_15; }
	inline void set_m_StepCount_15(int32_t value)
	{
		___m_StepCount_15 = value;
	}

	inline static int32_t get_offset_of_m_CompletedEpisodes_16() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_CompletedEpisodes_16)); }
	inline int32_t get_m_CompletedEpisodes_16() const { return ___m_CompletedEpisodes_16; }
	inline int32_t* get_address_of_m_CompletedEpisodes_16() { return &___m_CompletedEpisodes_16; }
	inline void set_m_CompletedEpisodes_16(int32_t value)
	{
		___m_CompletedEpisodes_16 = value;
	}

	inline static int32_t get_offset_of_m_EpisodeId_17() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_EpisodeId_17)); }
	inline int32_t get_m_EpisodeId_17() const { return ___m_EpisodeId_17; }
	inline int32_t* get_address_of_m_EpisodeId_17() { return &___m_EpisodeId_17; }
	inline void set_m_EpisodeId_17(int32_t value)
	{
		___m_EpisodeId_17 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_18() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_Initialized_18)); }
	inline bool get_m_Initialized_18() const { return ___m_Initialized_18; }
	inline bool* get_address_of_m_Initialized_18() { return &___m_Initialized_18; }
	inline void set_m_Initialized_18(bool value)
	{
		___m_Initialized_18 = value;
	}

	inline static int32_t get_offset_of_DemonstrationWriters_19() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___DemonstrationWriters_19)); }
	inline RuntimeObject* get_DemonstrationWriters_19() const { return ___DemonstrationWriters_19; }
	inline RuntimeObject** get_address_of_DemonstrationWriters_19() { return &___DemonstrationWriters_19; }
	inline void set_DemonstrationWriters_19(RuntimeObject* value)
	{
		___DemonstrationWriters_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DemonstrationWriters_19), (void*)value);
	}

	inline static int32_t get_offset_of_sensors_20() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___sensors_20)); }
	inline List_1_t862204774D7420C5909CCAABCD712D8DB10B14E3 * get_sensors_20() const { return ___sensors_20; }
	inline List_1_t862204774D7420C5909CCAABCD712D8DB10B14E3 ** get_address_of_sensors_20() { return &___sensors_20; }
	inline void set_sensors_20(List_1_t862204774D7420C5909CCAABCD712D8DB10B14E3 * value)
	{
		___sensors_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sensors_20), (void*)value);
	}

	inline static int32_t get_offset_of_collectObservationsSensor_21() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___collectObservationsSensor_21)); }
	inline VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * get_collectObservationsSensor_21() const { return ___collectObservationsSensor_21; }
	inline VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 ** get_address_of_collectObservationsSensor_21() { return &___collectObservationsSensor_21; }
	inline void set_collectObservationsSensor_21(VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * value)
	{
		___collectObservationsSensor_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectObservationsSensor_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CollectObservationsChecker_22() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_CollectObservationsChecker_22)); }
	inline RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C * get_m_CollectObservationsChecker_22() const { return ___m_CollectObservationsChecker_22; }
	inline RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C ** get_address_of_m_CollectObservationsChecker_22() { return &___m_CollectObservationsChecker_22; }
	inline void set_m_CollectObservationsChecker_22(RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C * value)
	{
		___m_CollectObservationsChecker_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CollectObservationsChecker_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEpisodeBeginChecker_23() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_OnEpisodeBeginChecker_23)); }
	inline RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C * get_m_OnEpisodeBeginChecker_23() const { return ___m_OnEpisodeBeginChecker_23; }
	inline RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C ** get_address_of_m_OnEpisodeBeginChecker_23() { return &___m_OnEpisodeBeginChecker_23; }
	inline void set_m_OnEpisodeBeginChecker_23(RecursionChecker_t7A918745677BECBE3728AD18219CA5A3F15CBB1C * value)
	{
		___m_OnEpisodeBeginChecker_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEpisodeBeginChecker_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActuatorManager_24() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_ActuatorManager_24)); }
	inline ActuatorManager_t0099A71D418C8307B1F60180929B5DA329CDB7C7 * get_m_ActuatorManager_24() const { return ___m_ActuatorManager_24; }
	inline ActuatorManager_t0099A71D418C8307B1F60180929B5DA329CDB7C7 ** get_address_of_m_ActuatorManager_24() { return &___m_ActuatorManager_24; }
	inline void set_m_ActuatorManager_24(ActuatorManager_t0099A71D418C8307B1F60180929B5DA329CDB7C7 * value)
	{
		___m_ActuatorManager_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActuatorManager_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_VectorActuator_25() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_VectorActuator_25)); }
	inline RuntimeObject* get_m_VectorActuator_25() const { return ___m_VectorActuator_25; }
	inline RuntimeObject** get_address_of_m_VectorActuator_25() { return &___m_VectorActuator_25; }
	inline void set_m_VectorActuator_25(RuntimeObject* value)
	{
		___m_VectorActuator_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VectorActuator_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupId_26() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___m_GroupId_26)); }
	inline int32_t get_m_GroupId_26() const { return ___m_GroupId_26; }
	inline int32_t* get_address_of_m_GroupId_26() { return &___m_GroupId_26; }
	inline void set_m_GroupId_26(int32_t value)
	{
		___m_GroupId_26 = value;
	}

	inline static int32_t get_offset_of_OnAgentDisabled_27() { return static_cast<int32_t>(offsetof(Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11, ___OnAgentDisabled_27)); }
	inline Action_1_tCD41DDB54E8660C6A76F830AF180A0D0148CB129 * get_OnAgentDisabled_27() const { return ___OnAgentDisabled_27; }
	inline Action_1_tCD41DDB54E8660C6A76F830AF180A0D0148CB129 ** get_address_of_OnAgentDisabled_27() { return &___OnAgentDisabled_27; }
	inline void set_OnAgentDisabled_27(Action_1_tCD41DDB54E8660C6A76F830AF180A0D0148CB129 * value)
	{
		___OnAgentDisabled_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAgentDisabled_27), (void*)value);
	}
};


// AimBeam
struct AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LineRenderer AimBeam::lnRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lnRenderer_4;
	// System.Single AimBeam::visual_Distance
	float ___visual_Distance_5;
	// UnityEngine.Vector2 AimBeam::beam
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___beam_6;

public:
	inline static int32_t get_offset_of_lnRenderer_4() { return static_cast<int32_t>(offsetof(AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712, ___lnRenderer_4)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lnRenderer_4() const { return ___lnRenderer_4; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lnRenderer_4() { return &___lnRenderer_4; }
	inline void set_lnRenderer_4(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lnRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lnRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_visual_Distance_5() { return static_cast<int32_t>(offsetof(AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712, ___visual_Distance_5)); }
	inline float get_visual_Distance_5() const { return ___visual_Distance_5; }
	inline float* get_address_of_visual_Distance_5() { return &___visual_Distance_5; }
	inline void set_visual_Distance_5(float value)
	{
		___visual_Distance_5 = value;
	}

	inline static int32_t get_offset_of_beam_6() { return static_cast<int32_t>(offsetof(AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712, ___beam_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_beam_6() const { return ___beam_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_beam_6() { return &___beam_6; }
	inline void set_beam_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___beam_6 = value;
	}
};


// BulletPool
struct BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BulletPool::bullets
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___bullets_5;
	// UnityEngine.GameObject BulletPool::objectToPool
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectToPool_6;
	// System.Int32 BulletPool::amountToPool
	int32_t ___amountToPool_7;
	// System.Boolean BulletPool::shouldExpand
	bool ___shouldExpand_8;

public:
	inline static int32_t get_offset_of_bullets_5() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___bullets_5)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_bullets_5() const { return ___bullets_5; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_bullets_5() { return &___bullets_5; }
	inline void set_bullets_5(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___bullets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullets_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectToPool_6() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___objectToPool_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_objectToPool_6() const { return ___objectToPool_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_objectToPool_6() { return &___objectToPool_6; }
	inline void set_objectToPool_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___objectToPool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectToPool_6), (void*)value);
	}

	inline static int32_t get_offset_of_amountToPool_7() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___amountToPool_7)); }
	inline int32_t get_amountToPool_7() const { return ___amountToPool_7; }
	inline int32_t* get_address_of_amountToPool_7() { return &___amountToPool_7; }
	inline void set_amountToPool_7(int32_t value)
	{
		___amountToPool_7 = value;
	}

	inline static int32_t get_offset_of_shouldExpand_8() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F, ___shouldExpand_8)); }
	inline bool get_shouldExpand_8() const { return ___shouldExpand_8; }
	inline bool* get_address_of_shouldExpand_8() { return &___shouldExpand_8; }
	inline void set_shouldExpand_8(bool value)
	{
		___shouldExpand_8 = value;
	}
};

struct BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields
{
public:
	// BulletPool BulletPool::SharedInstance
	BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * ___SharedInstance_4;

public:
	inline static int32_t get_offset_of_SharedInstance_4() { return static_cast<int32_t>(offsetof(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields, ___SharedInstance_4)); }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * get_SharedInstance_4() const { return ___SharedInstance_4; }
	inline BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F ** get_address_of_SharedInstance_4() { return &___SharedInstance_4; }
	inline void set_SharedInstance_4(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * value)
	{
		___SharedInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SharedInstance_4), (void*)value);
	}
};


// Crosshair
struct Crosshair_t47D938F560B143D37D65F2B0825D454574D0E643  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Crosshair::wanted_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wanted_position_4;

public:
	inline static int32_t get_offset_of_wanted_position_4() { return static_cast<int32_t>(offsetof(Crosshair_t47D938F560B143D37D65F2B0825D454574D0E643, ___wanted_position_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_wanted_position_4() const { return ___wanted_position_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_wanted_position_4() { return &___wanted_position_4; }
	inline void set_wanted_position_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___wanted_position_4 = value;
	}
};


// CustomPointer
struct CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture CustomPointer::pointerTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___pointerTexture_4;
	// System.Boolean CustomPointer::use_mouse_input
	bool ___use_mouse_input_5;
	// System.Boolean CustomPointer::use_gamepad_input
	bool ___use_gamepad_input_6;
	// System.Boolean CustomPointer::pointer_returns_to_center
	bool ___pointer_returns_to_center_7;
	// System.Boolean CustomPointer::instant_snapping
	bool ___instant_snapping_8;
	// System.Single CustomPointer::center_speed
	float ___center_speed_9;
	// System.Boolean CustomPointer::invert_y_axis
	bool ___invert_y_axis_10;
	// System.Single CustomPointer::deadzone_radius
	float ___deadzone_radius_11;
	// System.Single CustomPointer::thumbstick_speed_modifier
	float ___thumbstick_speed_modifier_12;
	// System.Single CustomPointer::mouse_sensitivity_modifier
	float ___mouse_sensitivity_modifier_13;
	// UnityEngine.Rect CustomPointer::deadzone_rect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___deadzone_rect_15;

public:
	inline static int32_t get_offset_of_pointerTexture_4() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___pointerTexture_4)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_pointerTexture_4() const { return ___pointerTexture_4; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_pointerTexture_4() { return &___pointerTexture_4; }
	inline void set_pointerTexture_4(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___pointerTexture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerTexture_4), (void*)value);
	}

	inline static int32_t get_offset_of_use_mouse_input_5() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___use_mouse_input_5)); }
	inline bool get_use_mouse_input_5() const { return ___use_mouse_input_5; }
	inline bool* get_address_of_use_mouse_input_5() { return &___use_mouse_input_5; }
	inline void set_use_mouse_input_5(bool value)
	{
		___use_mouse_input_5 = value;
	}

	inline static int32_t get_offset_of_use_gamepad_input_6() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___use_gamepad_input_6)); }
	inline bool get_use_gamepad_input_6() const { return ___use_gamepad_input_6; }
	inline bool* get_address_of_use_gamepad_input_6() { return &___use_gamepad_input_6; }
	inline void set_use_gamepad_input_6(bool value)
	{
		___use_gamepad_input_6 = value;
	}

	inline static int32_t get_offset_of_pointer_returns_to_center_7() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___pointer_returns_to_center_7)); }
	inline bool get_pointer_returns_to_center_7() const { return ___pointer_returns_to_center_7; }
	inline bool* get_address_of_pointer_returns_to_center_7() { return &___pointer_returns_to_center_7; }
	inline void set_pointer_returns_to_center_7(bool value)
	{
		___pointer_returns_to_center_7 = value;
	}

	inline static int32_t get_offset_of_instant_snapping_8() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___instant_snapping_8)); }
	inline bool get_instant_snapping_8() const { return ___instant_snapping_8; }
	inline bool* get_address_of_instant_snapping_8() { return &___instant_snapping_8; }
	inline void set_instant_snapping_8(bool value)
	{
		___instant_snapping_8 = value;
	}

	inline static int32_t get_offset_of_center_speed_9() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___center_speed_9)); }
	inline float get_center_speed_9() const { return ___center_speed_9; }
	inline float* get_address_of_center_speed_9() { return &___center_speed_9; }
	inline void set_center_speed_9(float value)
	{
		___center_speed_9 = value;
	}

	inline static int32_t get_offset_of_invert_y_axis_10() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___invert_y_axis_10)); }
	inline bool get_invert_y_axis_10() const { return ___invert_y_axis_10; }
	inline bool* get_address_of_invert_y_axis_10() { return &___invert_y_axis_10; }
	inline void set_invert_y_axis_10(bool value)
	{
		___invert_y_axis_10 = value;
	}

	inline static int32_t get_offset_of_deadzone_radius_11() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___deadzone_radius_11)); }
	inline float get_deadzone_radius_11() const { return ___deadzone_radius_11; }
	inline float* get_address_of_deadzone_radius_11() { return &___deadzone_radius_11; }
	inline void set_deadzone_radius_11(float value)
	{
		___deadzone_radius_11 = value;
	}

	inline static int32_t get_offset_of_thumbstick_speed_modifier_12() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___thumbstick_speed_modifier_12)); }
	inline float get_thumbstick_speed_modifier_12() const { return ___thumbstick_speed_modifier_12; }
	inline float* get_address_of_thumbstick_speed_modifier_12() { return &___thumbstick_speed_modifier_12; }
	inline void set_thumbstick_speed_modifier_12(float value)
	{
		___thumbstick_speed_modifier_12 = value;
	}

	inline static int32_t get_offset_of_mouse_sensitivity_modifier_13() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___mouse_sensitivity_modifier_13)); }
	inline float get_mouse_sensitivity_modifier_13() const { return ___mouse_sensitivity_modifier_13; }
	inline float* get_address_of_mouse_sensitivity_modifier_13() { return &___mouse_sensitivity_modifier_13; }
	inline void set_mouse_sensitivity_modifier_13(float value)
	{
		___mouse_sensitivity_modifier_13 = value;
	}

	inline static int32_t get_offset_of_deadzone_rect_15() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A, ___deadzone_rect_15)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_deadzone_rect_15() const { return ___deadzone_rect_15; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_deadzone_rect_15() { return &___deadzone_rect_15; }
	inline void set_deadzone_rect_15(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___deadzone_rect_15 = value;
	}
};

struct CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields
{
public:
	// UnityEngine.Vector2 CustomPointer::pointerPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pointerPosition_14;
	// CustomPointer CustomPointer::instance
	CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * ___instance_16;

public:
	inline static int32_t get_offset_of_pointerPosition_14() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields, ___pointerPosition_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pointerPosition_14() const { return ___pointerPosition_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pointerPosition_14() { return &___pointerPosition_14; }
	inline void set_pointerPosition_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pointerPosition_14 = value;
	}

	inline static int32_t get_offset_of_instance_16() { return static_cast<int32_t>(offsetof(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields, ___instance_16)); }
	inline CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * get_instance_16() const { return ___instance_16; }
	inline CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A ** get_address_of_instance_16() { return &___instance_16; }
	inline void set_instance_16(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * value)
	{
		___instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_16), (void*)value);
	}
};


// ExampleShipControl
struct ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ExampleShipControl::acceleration_amount
	float ___acceleration_amount_4;
	// System.Single ExampleShipControl::rotation_speed
	float ___rotation_speed_5;
	// UnityEngine.GameObject ExampleShipControl::turret
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___turret_6;
	// System.Single ExampleShipControl::turret_rotation_speed
	float ___turret_rotation_speed_7;
	// UnityEngine.GameObject ExampleShipControl::explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosion_8;
	// UnityEngine.GameObject ExampleShipControl::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_9;
	// System.Single ExampleShipControl::fireRate
	float ___fireRate_10;
	// System.Int32 ExampleShipControl::team
	int32_t ___team_11;
	// System.Boolean ExampleShipControl::control
	bool ___control_12;
	// System.Int32 ExampleShipControl::health
	int32_t ___health_13;
	// System.Single ExampleShipControl::timeToFire
	float ___timeToFire_14;
	// UnityEngine.Vector3 ExampleShipControl::startingVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startingVector_15;
	// UnityEngine.Vector3 ExampleShipControl::startingRotate
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startingRotate_16;

public:
	inline static int32_t get_offset_of_acceleration_amount_4() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___acceleration_amount_4)); }
	inline float get_acceleration_amount_4() const { return ___acceleration_amount_4; }
	inline float* get_address_of_acceleration_amount_4() { return &___acceleration_amount_4; }
	inline void set_acceleration_amount_4(float value)
	{
		___acceleration_amount_4 = value;
	}

	inline static int32_t get_offset_of_rotation_speed_5() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___rotation_speed_5)); }
	inline float get_rotation_speed_5() const { return ___rotation_speed_5; }
	inline float* get_address_of_rotation_speed_5() { return &___rotation_speed_5; }
	inline void set_rotation_speed_5(float value)
	{
		___rotation_speed_5 = value;
	}

	inline static int32_t get_offset_of_turret_6() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___turret_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_turret_6() const { return ___turret_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_turret_6() { return &___turret_6; }
	inline void set_turret_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___turret_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turret_6), (void*)value);
	}

	inline static int32_t get_offset_of_turret_rotation_speed_7() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___turret_rotation_speed_7)); }
	inline float get_turret_rotation_speed_7() const { return ___turret_rotation_speed_7; }
	inline float* get_address_of_turret_rotation_speed_7() { return &___turret_rotation_speed_7; }
	inline void set_turret_rotation_speed_7(float value)
	{
		___turret_rotation_speed_7 = value;
	}

	inline static int32_t get_offset_of_explosion_8() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___explosion_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosion_8() const { return ___explosion_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosion_8() { return &___explosion_8; }
	inline void set_explosion_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosion_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_8), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_9() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___bullet_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_9() const { return ___bullet_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_9() { return &___bullet_9; }
	inline void set_bullet_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_9), (void*)value);
	}

	inline static int32_t get_offset_of_fireRate_10() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___fireRate_10)); }
	inline float get_fireRate_10() const { return ___fireRate_10; }
	inline float* get_address_of_fireRate_10() { return &___fireRate_10; }
	inline void set_fireRate_10(float value)
	{
		___fireRate_10 = value;
	}

	inline static int32_t get_offset_of_team_11() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___team_11)); }
	inline int32_t get_team_11() const { return ___team_11; }
	inline int32_t* get_address_of_team_11() { return &___team_11; }
	inline void set_team_11(int32_t value)
	{
		___team_11 = value;
	}

	inline static int32_t get_offset_of_control_12() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___control_12)); }
	inline bool get_control_12() const { return ___control_12; }
	inline bool* get_address_of_control_12() { return &___control_12; }
	inline void set_control_12(bool value)
	{
		___control_12 = value;
	}

	inline static int32_t get_offset_of_health_13() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___health_13)); }
	inline int32_t get_health_13() const { return ___health_13; }
	inline int32_t* get_address_of_health_13() { return &___health_13; }
	inline void set_health_13(int32_t value)
	{
		___health_13 = value;
	}

	inline static int32_t get_offset_of_timeToFire_14() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___timeToFire_14)); }
	inline float get_timeToFire_14() const { return ___timeToFire_14; }
	inline float* get_address_of_timeToFire_14() { return &___timeToFire_14; }
	inline void set_timeToFire_14(float value)
	{
		___timeToFire_14 = value;
	}

	inline static int32_t get_offset_of_startingVector_15() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___startingVector_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startingVector_15() const { return ___startingVector_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startingVector_15() { return &___startingVector_15; }
	inline void set_startingVector_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startingVector_15 = value;
	}

	inline static int32_t get_offset_of_startingRotate_16() { return static_cast<int32_t>(offsetof(ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9, ___startingRotate_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startingRotate_16() const { return ___startingRotate_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startingRotate_16() { return &___startingRotate_16; }
	inline void set_startingRotate_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startingRotate_16 = value;
	}
};


// PSDestroy
struct PSDestroy_t894C30FB98DBEC2AC0B84EFC72C3BFA5248F70EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ParallaxLayer
struct ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 ParallaxLayer::wantedPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wantedPosition_4;
	// System.Single ParallaxLayer::movement_resistance
	float ___movement_resistance_5;

public:
	inline static int32_t get_offset_of_wantedPosition_4() { return static_cast<int32_t>(offsetof(ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C, ___wantedPosition_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_wantedPosition_4() const { return ___wantedPosition_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_wantedPosition_4() { return &___wantedPosition_4; }
	inline void set_wantedPosition_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___wantedPosition_4 = value;
	}

	inline static int32_t get_offset_of_movement_resistance_5() { return static_cast<int32_t>(offsetof(ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C, ___movement_resistance_5)); }
	inline float get_movement_resistance_5() const { return ___movement_resistance_5; }
	inline float* get_address_of_movement_resistance_5() { return &___movement_resistance_5; }
	inline void set_movement_resistance_5(float value)
	{
		___movement_resistance_5 = value;
	}
};


// PlayerControlledTurret
struct PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlayerControlledTurret::weapon_prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___weapon_prefab_4;
	// UnityEngine.GameObject[] PlayerControlledTurret::barrel_hardpoints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___barrel_hardpoints_5;
	// System.Single PlayerControlledTurret::turret_rotation_speed
	float ___turret_rotation_speed_6;
	// System.Single PlayerControlledTurret::shot_speed
	float ___shot_speed_7;
	// System.Int32 PlayerControlledTurret::barrel_index
	int32_t ___barrel_index_8;

public:
	inline static int32_t get_offset_of_weapon_prefab_4() { return static_cast<int32_t>(offsetof(PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA, ___weapon_prefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_weapon_prefab_4() const { return ___weapon_prefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_weapon_prefab_4() { return &___weapon_prefab_4; }
	inline void set_weapon_prefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___weapon_prefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapon_prefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_barrel_hardpoints_5() { return static_cast<int32_t>(offsetof(PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA, ___barrel_hardpoints_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_barrel_hardpoints_5() const { return ___barrel_hardpoints_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_barrel_hardpoints_5() { return &___barrel_hardpoints_5; }
	inline void set_barrel_hardpoints_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___barrel_hardpoints_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barrel_hardpoints_5), (void*)value);
	}

	inline static int32_t get_offset_of_turret_rotation_speed_6() { return static_cast<int32_t>(offsetof(PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA, ___turret_rotation_speed_6)); }
	inline float get_turret_rotation_speed_6() const { return ___turret_rotation_speed_6; }
	inline float* get_address_of_turret_rotation_speed_6() { return &___turret_rotation_speed_6; }
	inline void set_turret_rotation_speed_6(float value)
	{
		___turret_rotation_speed_6 = value;
	}

	inline static int32_t get_offset_of_shot_speed_7() { return static_cast<int32_t>(offsetof(PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA, ___shot_speed_7)); }
	inline float get_shot_speed_7() const { return ___shot_speed_7; }
	inline float* get_address_of_shot_speed_7() { return &___shot_speed_7; }
	inline void set_shot_speed_7(float value)
	{
		___shot_speed_7 = value;
	}

	inline static int32_t get_offset_of_barrel_index_8() { return static_cast<int32_t>(offsetof(PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA, ___barrel_index_8)); }
	inline int32_t get_barrel_index_8() const { return ___barrel_index_8; }
	inline int32_t* get_address_of_barrel_index_8() { return &___barrel_index_8; }
	inline void set_barrel_index_8(int32_t value)
	{
		___barrel_index_8 = value;
	}
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Projectile::shoot_effect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shoot_effect_4;
	// UnityEngine.GameObject Projectile::hit_effect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hit_effect_5;
	// UnityEngine.GameObject Projectile::firing_ship
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___firing_ship_6;
	// System.Single Projectile::speed
	float ___speed_7;
	// System.Int32 Projectile::damage
	int32_t ___damage_8;
	// System.Int32 Projectile::team
	int32_t ___team_9;

public:
	inline static int32_t get_offset_of_shoot_effect_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___shoot_effect_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shoot_effect_4() const { return ___shoot_effect_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shoot_effect_4() { return &___shoot_effect_4; }
	inline void set_shoot_effect_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shoot_effect_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shoot_effect_4), (void*)value);
	}

	inline static int32_t get_offset_of_hit_effect_5() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___hit_effect_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hit_effect_5() const { return ___hit_effect_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hit_effect_5() { return &___hit_effect_5; }
	inline void set_hit_effect_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hit_effect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hit_effect_5), (void*)value);
	}

	inline static int32_t get_offset_of_firing_ship_6() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___firing_ship_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_firing_ship_6() const { return ___firing_ship_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_firing_ship_6() { return &___firing_ship_6; }
	inline void set_firing_ship_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___firing_ship_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firing_ship_6), (void*)value);
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_damage_8() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___damage_8)); }
	inline int32_t get_damage_8() const { return ___damage_8; }
	inline int32_t* get_address_of_damage_8() { return &___damage_8; }
	inline void set_damage_8(int32_t value)
	{
		___damage_8 = value;
	}

	inline static int32_t get_offset_of_team_9() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___team_9)); }
	inline int32_t get_team_9() const { return ___team_9; }
	inline int32_t* get_address_of_team_9() { return &___team_9; }
	inline void set_team_9(int32_t value)
	{
		___team_9 = value;
	}
};


// Unity.MLAgents.Sensors.SensorComponent
struct SensorComponent_t99C404ACA6A36929CD2F121F4F12150102139F22  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ShipCamera
struct ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform ShipCamera::target_object
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_object_4;
	// System.Single ShipCamera::follow_tightness
	float ___follow_tightness_5;
	// UnityEngine.Vector3 ShipCamera::wanted_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wanted_position_6;

public:
	inline static int32_t get_offset_of_target_object_4() { return static_cast<int32_t>(offsetof(ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91, ___target_object_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_object_4() const { return ___target_object_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_object_4() { return &___target_object_4; }
	inline void set_target_object_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_object_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_object_4), (void*)value);
	}

	inline static int32_t get_offset_of_follow_tightness_5() { return static_cast<int32_t>(offsetof(ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91, ___follow_tightness_5)); }
	inline float get_follow_tightness_5() const { return ___follow_tightness_5; }
	inline float* get_address_of_follow_tightness_5() { return &___follow_tightness_5; }
	inline void set_follow_tightness_5(float value)
	{
		___follow_tightness_5 = value;
	}

	inline static int32_t get_offset_of_wanted_position_6() { return static_cast<int32_t>(offsetof(ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91, ___wanted_position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_wanted_position_6() const { return ___wanted_position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_wanted_position_6() { return &___wanted_position_6; }
	inline void set_wanted_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___wanted_position_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// fpsCounter
struct fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text fpsCounter::_fpsText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ____fpsText_4;
	// System.Single fpsCounter::_hudRefreshRate
	float ____hudRefreshRate_5;
	// System.Single fpsCounter::_timer
	float ____timer_6;

public:
	inline static int32_t get_offset_of__fpsText_4() { return static_cast<int32_t>(offsetof(fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0, ____fpsText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get__fpsText_4() const { return ____fpsText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of__fpsText_4() { return &____fpsText_4; }
	inline void set__fpsText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		____fpsText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fpsText_4), (void*)value);
	}

	inline static int32_t get_offset_of__hudRefreshRate_5() { return static_cast<int32_t>(offsetof(fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0, ____hudRefreshRate_5)); }
	inline float get__hudRefreshRate_5() const { return ____hudRefreshRate_5; }
	inline float* get_address_of__hudRefreshRate_5() { return &____hudRefreshRate_5; }
	inline void set__hudRefreshRate_5(float value)
	{
		____hudRefreshRate_5 = value;
	}

	inline static int32_t get_offset_of__timer_6() { return static_cast<int32_t>(offsetof(fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0, ____timer_6)); }
	inline float get__timer_6() const { return ____timer_6; }
	inline float* get_address_of__timer_6() { return &____timer_6; }
	inline void set__timer_6(float value)
	{
		____timer_6 = value;
	}
};


// Unity.MLAgents.Sensors.BufferSensorComponent
struct BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322  : public SensorComponent_t99C404ACA6A36929CD2F121F4F12150102139F22
{
public:
	// System.String Unity.MLAgents.Sensors.BufferSensorComponent::m_SensorName
	String_t* ___m_SensorName_4;
	// System.Int32 Unity.MLAgents.Sensors.BufferSensorComponent::m_ObservableSize
	int32_t ___m_ObservableSize_5;
	// System.Int32 Unity.MLAgents.Sensors.BufferSensorComponent::m_MaxNumObservables
	int32_t ___m_MaxNumObservables_6;
	// Unity.MLAgents.Sensors.BufferSensor Unity.MLAgents.Sensors.BufferSensorComponent::m_Sensor
	BufferSensor_t8C9336F4E9B2972790867A08F1E7F879F3FAF231 * ___m_Sensor_7;

public:
	inline static int32_t get_offset_of_m_SensorName_4() { return static_cast<int32_t>(offsetof(BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322, ___m_SensorName_4)); }
	inline String_t* get_m_SensorName_4() const { return ___m_SensorName_4; }
	inline String_t** get_address_of_m_SensorName_4() { return &___m_SensorName_4; }
	inline void set_m_SensorName_4(String_t* value)
	{
		___m_SensorName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SensorName_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObservableSize_5() { return static_cast<int32_t>(offsetof(BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322, ___m_ObservableSize_5)); }
	inline int32_t get_m_ObservableSize_5() const { return ___m_ObservableSize_5; }
	inline int32_t* get_address_of_m_ObservableSize_5() { return &___m_ObservableSize_5; }
	inline void set_m_ObservableSize_5(int32_t value)
	{
		___m_ObservableSize_5 = value;
	}

	inline static int32_t get_offset_of_m_MaxNumObservables_6() { return static_cast<int32_t>(offsetof(BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322, ___m_MaxNumObservables_6)); }
	inline int32_t get_m_MaxNumObservables_6() const { return ___m_MaxNumObservables_6; }
	inline int32_t* get_address_of_m_MaxNumObservables_6() { return &___m_MaxNumObservables_6; }
	inline void set_m_MaxNumObservables_6(int32_t value)
	{
		___m_MaxNumObservables_6 = value;
	}

	inline static int32_t get_offset_of_m_Sensor_7() { return static_cast<int32_t>(offsetof(BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322, ___m_Sensor_7)); }
	inline BufferSensor_t8C9336F4E9B2972790867A08F1E7F879F3FAF231 * get_m_Sensor_7() const { return ___m_Sensor_7; }
	inline BufferSensor_t8C9336F4E9B2972790867A08F1E7F879F3FAF231 ** get_address_of_m_Sensor_7() { return &___m_Sensor_7; }
	inline void set_m_Sensor_7(BufferSensor_t8C9336F4E9B2972790867A08F1E7F879F3FAF231 * value)
	{
		___m_Sensor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sensor_7), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// fighterAI
struct fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D  : public Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11
{
public:
	// System.Single fighterAI::acceleration_amount
	float ___acceleration_amount_28;
	// System.Single fighterAI::rotation_speed
	float ___rotation_speed_29;
	// UnityEngine.GameObject fighterAI::turret
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___turret_30;
	// System.Single fighterAI::turret_rotation_speed
	float ___turret_rotation_speed_31;
	// UnityEngine.GameObject fighterAI::explosion
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___explosion_32;
	// UnityEngine.GameObject fighterAI::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_33;
	// System.Single fighterAI::fireRate
	float ___fireRate_34;
	// System.Int32 fighterAI::team
	int32_t ___team_35;
	// System.Boolean fighterAI::control
	bool ___control_36;
	// System.Int32 fighterAI::health
	int32_t ___health_37;
	// System.Single fighterAI::timeToFire
	float ___timeToFire_38;
	// System.Single fighterAI::xLength
	float ___xLength_39;
	// System.Single fighterAI::yLength
	float ___yLength_40;
	// System.Single fighterAI::maxVel
	float ___maxVel_41;
	// System.Single fighterAI::maxAngleVel
	float ___maxAngleVel_42;
	// bulletRadar fighterAI::bulletRadar
	bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * ___bulletRadar_43;
	// Unity.MLAgents.Sensors.BufferSensorComponent fighterAI::bufferSensor
	BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * ___bufferSensor_44;
	// UnityEngine.GameObject fighterAI::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_45;
	// UnityEngine.Rigidbody2D fighterAI::rigidBody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigidBody_46;
	// System.Single fighterAI::lastStep
	float ___lastStep_47;

public:
	inline static int32_t get_offset_of_acceleration_amount_28() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___acceleration_amount_28)); }
	inline float get_acceleration_amount_28() const { return ___acceleration_amount_28; }
	inline float* get_address_of_acceleration_amount_28() { return &___acceleration_amount_28; }
	inline void set_acceleration_amount_28(float value)
	{
		___acceleration_amount_28 = value;
	}

	inline static int32_t get_offset_of_rotation_speed_29() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___rotation_speed_29)); }
	inline float get_rotation_speed_29() const { return ___rotation_speed_29; }
	inline float* get_address_of_rotation_speed_29() { return &___rotation_speed_29; }
	inline void set_rotation_speed_29(float value)
	{
		___rotation_speed_29 = value;
	}

	inline static int32_t get_offset_of_turret_30() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___turret_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_turret_30() const { return ___turret_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_turret_30() { return &___turret_30; }
	inline void set_turret_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___turret_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turret_30), (void*)value);
	}

	inline static int32_t get_offset_of_turret_rotation_speed_31() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___turret_rotation_speed_31)); }
	inline float get_turret_rotation_speed_31() const { return ___turret_rotation_speed_31; }
	inline float* get_address_of_turret_rotation_speed_31() { return &___turret_rotation_speed_31; }
	inline void set_turret_rotation_speed_31(float value)
	{
		___turret_rotation_speed_31 = value;
	}

	inline static int32_t get_offset_of_explosion_32() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___explosion_32)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_explosion_32() const { return ___explosion_32; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_explosion_32() { return &___explosion_32; }
	inline void set_explosion_32(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___explosion_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___explosion_32), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_33() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___bullet_33)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_33() const { return ___bullet_33; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_33() { return &___bullet_33; }
	inline void set_bullet_33(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_33), (void*)value);
	}

	inline static int32_t get_offset_of_fireRate_34() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___fireRate_34)); }
	inline float get_fireRate_34() const { return ___fireRate_34; }
	inline float* get_address_of_fireRate_34() { return &___fireRate_34; }
	inline void set_fireRate_34(float value)
	{
		___fireRate_34 = value;
	}

	inline static int32_t get_offset_of_team_35() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___team_35)); }
	inline int32_t get_team_35() const { return ___team_35; }
	inline int32_t* get_address_of_team_35() { return &___team_35; }
	inline void set_team_35(int32_t value)
	{
		___team_35 = value;
	}

	inline static int32_t get_offset_of_control_36() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___control_36)); }
	inline bool get_control_36() const { return ___control_36; }
	inline bool* get_address_of_control_36() { return &___control_36; }
	inline void set_control_36(bool value)
	{
		___control_36 = value;
	}

	inline static int32_t get_offset_of_health_37() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___health_37)); }
	inline int32_t get_health_37() const { return ___health_37; }
	inline int32_t* get_address_of_health_37() { return &___health_37; }
	inline void set_health_37(int32_t value)
	{
		___health_37 = value;
	}

	inline static int32_t get_offset_of_timeToFire_38() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___timeToFire_38)); }
	inline float get_timeToFire_38() const { return ___timeToFire_38; }
	inline float* get_address_of_timeToFire_38() { return &___timeToFire_38; }
	inline void set_timeToFire_38(float value)
	{
		___timeToFire_38 = value;
	}

	inline static int32_t get_offset_of_xLength_39() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___xLength_39)); }
	inline float get_xLength_39() const { return ___xLength_39; }
	inline float* get_address_of_xLength_39() { return &___xLength_39; }
	inline void set_xLength_39(float value)
	{
		___xLength_39 = value;
	}

	inline static int32_t get_offset_of_yLength_40() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___yLength_40)); }
	inline float get_yLength_40() const { return ___yLength_40; }
	inline float* get_address_of_yLength_40() { return &___yLength_40; }
	inline void set_yLength_40(float value)
	{
		___yLength_40 = value;
	}

	inline static int32_t get_offset_of_maxVel_41() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___maxVel_41)); }
	inline float get_maxVel_41() const { return ___maxVel_41; }
	inline float* get_address_of_maxVel_41() { return &___maxVel_41; }
	inline void set_maxVel_41(float value)
	{
		___maxVel_41 = value;
	}

	inline static int32_t get_offset_of_maxAngleVel_42() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___maxAngleVel_42)); }
	inline float get_maxAngleVel_42() const { return ___maxAngleVel_42; }
	inline float* get_address_of_maxAngleVel_42() { return &___maxAngleVel_42; }
	inline void set_maxAngleVel_42(float value)
	{
		___maxAngleVel_42 = value;
	}

	inline static int32_t get_offset_of_bulletRadar_43() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___bulletRadar_43)); }
	inline bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * get_bulletRadar_43() const { return ___bulletRadar_43; }
	inline bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 ** get_address_of_bulletRadar_43() { return &___bulletRadar_43; }
	inline void set_bulletRadar_43(bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * value)
	{
		___bulletRadar_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletRadar_43), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSensor_44() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___bufferSensor_44)); }
	inline BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * get_bufferSensor_44() const { return ___bufferSensor_44; }
	inline BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 ** get_address_of_bufferSensor_44() { return &___bufferSensor_44; }
	inline void set_bufferSensor_44(BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * value)
	{
		___bufferSensor_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferSensor_44), (void*)value);
	}

	inline static int32_t get_offset_of_target_45() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___target_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_45() const { return ___target_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_45() { return &___target_45; }
	inline void set_target_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_45), (void*)value);
	}

	inline static int32_t get_offset_of_rigidBody_46() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___rigidBody_46)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigidBody_46() const { return ___rigidBody_46; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigidBody_46() { return &___rigidBody_46; }
	inline void set_rigidBody_46(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigidBody_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidBody_46), (void*)value);
	}

	inline static int32_t get_offset_of_lastStep_47() { return static_cast<int32_t>(offsetof(fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D, ___lastStep_47)); }
	inline float get_lastStep_47() const { return ___lastStep_47; }
	inline float* get_address_of_lastStep_47() { return &___lastStep_47; }
	inline void set_lastStep_47(float value)
	{
		___lastStep_47 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_gshared (ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Projectile>()
inline Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Projectile::resetBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_resetBullet_mA4E543DF848931B6D15ACFC1AE2C65AAC0968A07 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Screen::set_lockCursor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_lockCursor_m2F5F772746AACFEB8E81D7DD9040DF847019B106 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___image1, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::get_lockCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_lockCursor_m5B918C1CC558ACC73A845239BE5A759ED475ECD9 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___torque0, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_angularVelocity_m5A202B05024DE0C8F9A8C86900F7EF111574D8A3 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.GameObject BulletPool::GetPooledObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BulletPool_GetPooledObject_m578EBC345CBB1A3A30BB49AF347216A1BBDF4DC0 (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<fighterAI>()
inline fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void fighterAI::died()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_died_mE1E63EA305DA4535C1FA1C7FD1533E476DCB5A2C (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.ParticleSystem::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystem_get_duration_m25C0E6C6B0EC084ED59977966AF2C2EDE529FA44 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m6A298166BC9A889DFB7D69D0B04CFDAB9A008946 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ExampleShipControl>()
inline ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void fighterAI::killed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_killed_m53E4F7D74FEF0B13688E4F60155E3576BECCD970 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<fighterAI>()
inline fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * GameObject_GetComponentInParent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_mA9596DB68DB818B57C7AD1D6A6EDC76D0BBDED39 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared)(__this, method);
}
// System.Void bulletRadar::addBullet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar_addBullet_m2185A28EC9C3A8FBC2D5C9CFC90A11E931D2BBAF (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.TrailRenderer>()
inline TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.TrailRenderer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailRenderer_Clear_mF9AAA91E20A28ECE700EA2B3D2605F0D9C294663 (TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void bulletRadar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar__ctor_mBBD39B90860EFF707515BA3DFC4C19D0BD7686AF (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Unity.MLAgents.Sensors.BufferSensorComponent>()
inline BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * GameObject_GetComponent_TisBufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322_m211D630C9E72AC36670CCCFB9A88B3A8797C3AEA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void Unity.MLAgents.Sensors.VectorSensor::AddObservation(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_mC848DE3D270F3720A5C31844781DAFC7B6507E85 (VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___observation0, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Sensors.VectorSensor::AddObservation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VectorSensor_AddObservation_m74CC9AE74033F7631224F5D0BD755E39138A8525 (VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * __this, float ___observation0, const RuntimeMethod* method);
// System.Void bulletRadar::checkActiveBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar_checkActiveBullets_m896760ABEFA50AA2818117160B8EEB110D31BED0 (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Sensors.BufferSensorComponent::AppendObservation(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferSensorComponent_AppendObservation_m77B71980D1BBA6D9412BAA4CFC643716007906E8 (BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___obs0, const RuntimeMethod* method);
// System.Void bulletRadar::resetAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar_resetAll_m043A3F3F5A9C3BCB45043A061507F2BB2E26300E (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, const RuntimeMethod* method);
// System.Void fighterAI::randomSpawns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_randomSpawns_m60F850A54C642B5167796356B6E206D6C1DC10F5 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method);
// Unity.MLAgents.Actuators.ActionSegment`1<System.Int32> Unity.MLAgents.Actuators.ActionBuffers::get_DiscreteActions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  ActionBuffers_get_DiscreteActions_m88DEE060B2752435116FAEDE9CEAAFC0C36B53C0_inline (ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF * __this, const RuntimeMethod* method);
// !0 Unity.MLAgents.Actuators.ActionSegment`1<System.Int32>::get_Item(System.Int32)
inline int32_t ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD (ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *, int32_t, const RuntimeMethod*))ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_gshared)(__this, ___index0, method);
}
// System.Void Unity.MLAgents.Agent::AddReward(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_AddReward_m644D6499BD3B8E25069C731324E7944D8C0F555C (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, float ___increment0, const RuntimeMethod* method);
// System.Int32 Unity.MLAgents.Agent::get_StepCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Agent::EndEpisode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent_EndEpisode_m2248EF94767BBF9D92CF53D429BD17317606E8AC (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, const RuntimeMethod* method);
// System.Single Unity.MLAgents.Agent::GetCumulativeReward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Agent_GetCumulativeReward_m5C84BE73DBCFC77148B4244CDA24AF945E026D75_inline (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.Agent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Agent__ctor_mB7CF1FF03A9DC6A9301A8574E89E3F33A6E35C03 (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void Unity.Entities.SystemBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemBase__ctor_m72216162580C72C731BF1BD6D491A990E6984CFA (SystemBase_t236012EC818059A231628BBC6A7E0F142001EB75 * __this, const RuntimeMethod* method);
// System.Void Unity.Entities.SystemBase::OnCreateForCompiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemBase_OnCreateForCompiler_m0EBA19005313E80E2C977432945363AC0AB29864 (SystemBase_t236012EC818059A231628BBC6A7E0F142001EB75 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AimBeam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AimBeam_Start_mF161940AFF80268185574BCF7661CF390A59B0A0 (AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712 * __this, const RuntimeMethod* method)
{
	{
		// beam = new Vector2(0, visual_Distance);
		float L_0 = __this->get_visual_Distance_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (0.0f), L_0, /*hidden argument*/NULL);
		__this->set_beam_6(L_1);
		// lnRenderer.SetPosition(0, Vector2.zero);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lnRenderer_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_2, 0, L_4, /*hidden argument*/NULL);
		// lnRenderer.SetPosition(1, beam);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5 = __this->get_lnRenderer_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = __this->get_beam_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_5, 1, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AimBeam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AimBeam_Update_m09F4DECDBB28D78578A49290E856EA1A56586082 (AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AimBeam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AimBeam__ctor_m58A165BA53E4F06ADE2204F165F7E746BAE2EC07 (AimBeam_tD569F44DE3DD23FEE664832B2FEA0A1B3EF20712 * __this, const RuntimeMethod* method)
{
	{
		// public float visual_Distance = 1024f;
		__this->set_visual_Distance_5((1024.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BulletPool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletPool_Awake_m2F0337CDC769689BA1D71C3139CD29F3469C66A7 (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SharedInstance = this;
		((BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields*)il2cpp_codegen_static_fields_for(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var))->set_SharedInstance_4(__this);
		// }
		return;
	}
}
// System.Void BulletPool::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletPool_Start_mAFBB73C4D201952436D9F088DD4B727E62EA97BC (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// bullets = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_bullets_5(L_0);
		// for (int i = 0; i < amountToPool; i++)
		V_1 = 0;
		goto IL_0032;
	}

IL_000f:
	{
		// tmp = Instantiate(objectToPool);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_objectToPool_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_2;
		// tmp.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// bullets.Add(tmp);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_bullets_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// for (int i = 0; i < amountToPool; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < amountToPool; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = __this->get_amountToPool_7();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}
	{
		// SharedInstance = this;
		((BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields*)il2cpp_codegen_static_fields_for(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var))->set_SharedInstance_4(__this);
		// }
		return;
	}
}
// UnityEngine.GameObject BulletPool::GetPooledObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * BulletPool_GetPooledObject_m578EBC345CBB1A3A30BB49AF347216A1BBDF4DC0 (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// for (int i = 0; i < bullets.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (!bullets[i].activeInHierarchy)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_bullets_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return bullets[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_bullets_5();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		return L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_8 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_bullets_5();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_9, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// if (shouldExpand)
		bool L_11 = __this->get_shouldExpand_8();
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// GameObject obj = (GameObject)Instantiate(objectToPool);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_objectToPool_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_13;
		// obj.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_1;
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// bullets.Add(obj);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_15 = __this->get_bullets_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_1;
		NullCheck(L_15);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_15, L_16, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// return obj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_1;
		return L_17;
	}

IL_005f:
	{
		// return null;
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}
}
// System.Void BulletPool::resetAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletPool_resetAll_m7BFEEA7B0A3D75626B0216E3452357F87E587802 (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < bullets.Count; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// bullets[i].GetComponent<Projectile>().resetBullet();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_bullets_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_2);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_3;
		L_3 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_2, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		NullCheck(L_3);
		Projectile_resetBullet_mA4E543DF848931B6D15ACFC1AE2C65AAC0968A07(L_3, /*hidden argument*/NULL);
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001e:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_5 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = __this->get_bullets_5();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_6, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BulletPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletPool__ctor_m2C24B4E6D7681931E725EA27685BD27CF718F25F (BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * __this, const RuntimeMethod* method)
{
	{
		// public bool shouldExpand = true;
		__this->set_shouldExpand_8((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Crosshair::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshair_Start_mE62D09246B21B7389C0848F2BCC23D8E5EAB39BA (Crosshair_t47D938F560B143D37D65F2B0825D454574D0E643 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Crosshair::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshair_Update_m99469700B87D4AAEEEDA3758ECE2BD93EC5B250A (Crosshair_t47D938F560B143D37D65F2B0825D454574D0E643 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wanted_position = CustomPointer.pointerPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_pointerPosition_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_0, /*hidden argument*/NULL);
		__this->set_wanted_position_4(L_1);
		// wanted_position.z = transform.position.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_wanted_position_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		L_2->set_z_4(L_5);
		// transform.position =  wanted_position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = __this->get_wanted_position_4();
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Crosshair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crosshair__ctor_m72269C98CBE11D6CF0C1E1783E0AE3DD861A269D (Crosshair_t47D938F560B143D37D65F2B0825D454574D0E643 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CustomPointer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointer_Awake_m2CF79A8E423CE17D26D070EC9D1511CAFFCD3CD5 (CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointerPosition = new Vector2 (Screen.width / 2, Screen.height / 2); //Set pointer position to center of screen
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), ((float)((float)((int32_t)((int32_t)L_0/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))), /*hidden argument*/NULL);
		((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->set_pointerPosition_14(L_2);
		// instance = this;
		((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->set_instance_16(__this);
		// }
		return;
	}
}
// System.Void CustomPointer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointer_Start_mB780EE429DA705A4A8B626A6F72B76FE25D37166 (CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F50876F690AB8DF4647D07BA607C34629A6A18E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.lockCursor = true;
		Screen_set_lockCursor_m2F5F772746AACFEB8E81D7DD9040DF847019B106((bool)1, /*hidden argument*/NULL);
		// deadzone_rect = new Rect((Screen.width / 2) - (deadzone_radius), (Screen.height / 2) - (deadzone_radius), deadzone_radius * 2, deadzone_radius * 2);
		int32_t L_0;
		L_0 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_1 = __this->get_deadzone_radius_11();
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_3 = __this->get_deadzone_radius_11();
		float L_4 = __this->get_deadzone_radius_11();
		float L_5 = __this->get_deadzone_radius_11();
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_6), ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)((int32_t)L_0/(int32_t)2)))), (float)L_1)), ((float)il2cpp_codegen_subtract((float)((float)((float)((int32_t)((int32_t)L_2/(int32_t)2)))), (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_4, (float)(2.0f))), ((float)il2cpp_codegen_multiply((float)L_5, (float)(2.0f))), /*hidden argument*/NULL);
		__this->set_deadzone_rect_15(L_6);
		// if (!use_mouse_input && !use_gamepad_input)
		bool L_7 = __this->get_use_mouse_input_5();
		if (L_7)
		{
			goto IL_0061;
		}
	}
	{
		bool L_8 = __this->get_use_gamepad_input_6();
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError("(FlightControls) No input method selected! See the Custom Pointer script on the Main Camera and select either mouse or gamepad.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral7F50876F690AB8DF4647D07BA607C34629A6A18E, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void CustomPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointer_Update_m5631AB12174148933A42F0DC792F74B4337522AF (CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Screen.lockCursor = true;
		Screen_set_lockCursor_m2F5F772746AACFEB8E81D7DD9040DF847019B106((bool)1, /*hidden argument*/NULL);
		// if (use_mouse_input) {
		bool L_0 = __this->get_use_mouse_input_5();
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		// float x_axis = Input.GetAxis("Mouse X");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		V_0 = L_1;
		// float y_axis = Input.GetAxis("Mouse Y");
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		V_1 = L_2;
		// if (invert_y_axis)
		bool L_3 = __this->get_invert_y_axis_10();
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// y_axis = -y_axis;
		float L_4 = V_1;
		V_1 = ((-L_4));
	}

IL_002f:
	{
		// pointerPosition += new Vector2(x_axis * mouse_sensitivity_modifier,
		//                                y_axis * mouse_sensitivity_modifier);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_pointerPosition_14();
		float L_6 = V_0;
		float L_7 = __this->get_mouse_sensitivity_modifier_13();
		float L_8 = V_1;
		float L_9 = __this->get_mouse_sensitivity_modifier_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_5, L_10, /*hidden argument*/NULL);
		((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->set_pointerPosition_14(L_11);
		// } else if (use_gamepad_input) {
		goto IL_00cc;
	}

IL_0055:
	{
		// } else if (use_gamepad_input) {
		bool L_12 = __this->get_use_gamepad_input_6();
		if (!L_12)
		{
			goto IL_00cc;
		}
	}
	{
		// float x_axis = Input.GetAxis("Horizontal");
		float L_13;
		L_13 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_2 = L_13;
		// float y_axis = Input.GetAxis("Vertical");
		float L_14;
		L_14 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_3 = L_14;
		// if (invert_y_axis)
		bool L_15 = __this->get_invert_y_axis_10();
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// y_axis = -y_axis;
		float L_16 = V_3;
		V_3 = ((-L_16));
	}

IL_007e:
	{
		// pointerPosition += new Vector2(x_axis * thumbstick_speed_modifier * Mathf.Pow(Input.GetAxis("Horizontal"), 2),
		//                                    y_axis * thumbstick_speed_modifier * Mathf.Pow(Input.GetAxis("Vertical"), 2));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = ((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_pointerPosition_14();
		float L_18 = V_2;
		float L_19 = __this->get_thumbstick_speed_modifier_12();
		float L_20;
		L_20 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_21;
		L_21 = powf(L_20, (2.0f));
		float L_22 = V_3;
		float L_23 = __this->get_thumbstick_speed_modifier_12();
		float L_24;
		L_24 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_25;
		L_25 = powf(L_24, (2.0f));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_26), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), (float)L_21)), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)), (float)L_25)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_17, L_26, /*hidden argument*/NULL);
		((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->set_pointerPosition_14(L_27);
	}

IL_00cc:
	{
		// if (pointer_returns_to_center && !deadzone_rect.Contains(pointerPosition)) {
		bool L_28 = __this->get_pointer_returns_to_center_7();
		if (!L_28)
		{
			goto IL_018c;
		}
	}
	{
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * L_29 = __this->get_address_of_deadzone_rect_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = ((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_pointerPosition_14();
		bool L_31;
		L_31 = Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)L_29, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_018c;
		}
	}
	{
		// if (Input.GetAxis("Horizontal") == 0 && Input.GetAxis("Vertical") == 0 && instant_snapping) {
		float L_32;
		L_32 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if ((!(((float)L_32) == ((float)(0.0f)))))
		{
			goto IL_0132;
		}
	}
	{
		float L_33;
		L_33 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if ((!(((float)L_33) == ((float)(0.0f)))))
		{
			goto IL_0132;
		}
	}
	{
		bool L_34 = __this->get_instant_snapping_8();
		if (!L_34)
		{
			goto IL_0132;
		}
	}
	{
		// pointerPosition = new Vector2 (Screen.width / 2, Screen.height / 2); //Place pointer at the center.
		int32_t L_35;
		L_35 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_36;
		L_36 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_37), ((float)((float)((int32_t)((int32_t)L_35/(int32_t)2)))), ((float)((float)((int32_t)((int32_t)L_36/(int32_t)2)))), /*hidden argument*/NULL);
		((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->set_pointerPosition_14(L_37);
		// } else {
		goto IL_018c;
	}

IL_0132:
	{
		// pointerPosition.x = Mathf.Lerp (pointerPosition.x, Screen.width / 2, center_speed * Time.deltaTime);
		float L_38 = (((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->get_x_0();
		int32_t L_39;
		L_39 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_40 = __this->get_center_speed_9();
		float L_41;
		L_41 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_42;
		L_42 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_38, ((float)((float)((int32_t)((int32_t)L_39/(int32_t)2)))), ((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), /*hidden argument*/NULL);
		(((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->set_x_0(L_42);
		// pointerPosition.y = Mathf.Lerp (pointerPosition.y, Screen.height / 2, center_speed * Time.deltaTime);
		float L_43 = (((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->get_y_1();
		int32_t L_44;
		L_44 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_45 = __this->get_center_speed_9();
		float L_46;
		L_46 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_47;
		L_47 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_43, ((float)((float)((int32_t)((int32_t)L_44/(int32_t)2)))), ((float)il2cpp_codegen_multiply((float)L_45, (float)L_46)), /*hidden argument*/NULL);
		(((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->set_y_1(L_47);
	}

IL_018c:
	{
		// pointerPosition.x = Mathf.Clamp (pointerPosition.x, 0, Screen.width);
		float L_48 = (((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->get_x_0();
		int32_t L_49;
		L_49 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		float L_50;
		L_50 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_48, (0.0f), ((float)((float)L_49)), /*hidden argument*/NULL);
		(((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->set_x_0(L_50);
		// pointerPosition.y = Mathf.Clamp (pointerPosition.y, 0, Screen.height);
		float L_51 = (((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->get_y_1();
		int32_t L_52;
		L_52 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_53;
		L_53 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_51, (0.0f), ((float)((float)L_52)), /*hidden argument*/NULL);
		(((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->set_y_1(L_53);
		// }
		return;
	}
}
// System.Void CustomPointer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointer_OnGUI_m965C01AF9ACE14CA1DCFCC5E0BC6567AE8EAED67 (CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointerTexture != null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_pointerTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		// GUI.DrawTexture(new Rect(pointerPosition.x - (pointerTexture.width / 2), Screen.height - pointerPosition.y - (pointerTexture.height / 2), pointerTexture.width, pointerTexture.height), pointerTexture);
		float L_2 = (((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->get_x_0();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_3 = __this->get_pointerTexture_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_3);
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		float L_6 = (((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_address_of_pointerPosition_14())->get_y_1();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_7 = __this->get_pointerTexture_4();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_9 = __this->get_pointerTexture_4();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_11 = __this->get_pointerTexture_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_13), ((float)il2cpp_codegen_subtract((float)L_2, (float)((float)((float)((int32_t)((int32_t)L_4/(int32_t)2)))))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)((float)L_5)), (float)L_6)), (float)((float)((float)((int32_t)((int32_t)L_8/(int32_t)2)))))), ((float)((float)L_10)), ((float)((float)L_12)), /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_14 = __this->get_pointerTexture_4();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mDD0221088900E3F53BA7B8A03B9E5CD2E6FDD0F8(L_13, L_14, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void CustomPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointer__ctor_m5F4EC347C7C2970A2A73D4682BE3E93A13CCEF15 (CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A * __this, const RuntimeMethod* method)
{
	{
		// public float center_speed = 5f; //How fast the pointer returns to the center.
		__this->set_center_speed_9((5.0f));
		// public float thumbstick_speed_modifier = 1f; //Speed multiplier for joysticks.
		__this->set_thumbstick_speed_modifier_12((1.0f));
		// public float mouse_sensitivity_modifier = 15f; //Speed multiplier for the mouse.
		__this->set_mouse_sensitivity_modifier_13((15.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m90D0B6DEB625101355554D49B2EE2FB67C875860 (EmbeddedAttribute_tD9AECC2A5FF80678B3EF0F991A8F7864D4D6217B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void ExampleShipControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleShipControl_Start_m72FB627046765F37668023953B3F1A426A7BF832 (ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * __this, const RuntimeMethod* method)
{
	{
		// startingVector = new Vector3(gameObject.transform.localPosition.x, gameObject.transform.localPosition.y, gameObject.transform.localPosition.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_3, L_7, L_11, /*hidden argument*/NULL);
		__this->set_startingVector_15(L_12);
		// startingRotate = new Vector3(gameObject.transform.eulerAngles.x, gameObject.transform.eulerAngles.y, gameObject.transform.eulerAngles.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), L_16, L_20, L_24, /*hidden argument*/NULL);
		__this->set_startingRotate_16(L_25);
		// }
		return;
	}
}
// System.Void ExampleShipControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleShipControl_Update_m7274D02BE2919CB95A37C953000E28DAE4639FF5 (ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (control)
		bool L_0 = __this->get_control_12();
		if (!L_0)
		{
			goto IL_0307;
		}
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Screen.lockCursor = !Screen.lockCursor;
		bool L_2;
		L_2 = Screen_get_lockCursor_m5B918C1CC558ACC73A845239BE5A759ED475ECD9(/*hidden argument*/NULL);
		Screen_set_lockCursor_m2F5F772746AACFEB8E81D7DD9040DF847019B106((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0021:
	{
		// if (Input.GetKey(KeyCode.W))
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce(transform.up * acceleration_amount * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4;
		L_4 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_acceleration_amount_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_4, L_11, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_12;
		L_12 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0098;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce((-transform.up) * acceleration_amount * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13;
		L_13 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_15, /*hidden argument*/NULL);
		float L_17 = __this->get_acceleration_amount_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_16, L_17, /*hidden argument*/NULL);
		float L_19;
		L_19 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_13);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_13, L_21, /*hidden argument*/NULL);
	}

IL_0098:
	{
		// if (Input.GetKey(KeyCode.A) && Input.GetKey(KeyCode.LeftShift))
		bool L_22;
		L_22 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ec;
		}
	}
	{
		bool L_23;
		L_23 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ec;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce((-transform.right) * acceleration_amount * 0.6f * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_24;
		L_24 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_acceleration_amount_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, (0.600000024f), /*hidden argument*/NULL);
		float L_31;
		L_31 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33;
		L_33 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_24);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_24, L_33, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// if (Input.GetKey(KeyCode.D) && Input.GetKey(KeyCode.LeftShift))
		bool L_34;
		L_34 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_013b;
		}
	}
	{
		bool L_35;
		L_35 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_013b;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce((transform.right) * acceleration_amount * 0.6f * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_36;
		L_36 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_37, /*hidden argument*/NULL);
		float L_39 = __this->get_acceleration_amount_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_38, L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, (0.600000024f), /*hidden argument*/NULL);
		float L_42;
		L_42 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_41, L_42, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_43, /*hidden argument*/NULL);
		NullCheck(L_36);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_36, L_44, /*hidden argument*/NULL);
	}

IL_013b:
	{
		// if (Input.GetKey(KeyCode.D) && !Input.GetKey(KeyCode.LeftShift))
		bool L_45;
		L_45 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0168;
		}
	}
	{
		bool L_46;
		L_46 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0168;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddTorque(-rotation_speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_47;
		L_47 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		float L_48 = __this->get_rotation_speed_5();
		float L_49;
		L_49 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_47);
		Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901(L_47, ((float)il2cpp_codegen_multiply((float)((-L_48)), (float)L_49)), /*hidden argument*/NULL);
	}

IL_0168:
	{
		// if (Input.GetKey(KeyCode.A) && !Input.GetKey(KeyCode.LeftShift))
		bool L_50;
		L_50 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0194;
		}
	}
	{
		bool L_51;
		L_51 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0194;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddTorque(rotation_speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_52;
		L_52 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		float L_53 = __this->get_rotation_speed_5();
		float L_54;
		L_54 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_52);
		Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901(L_52, ((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)), /*hidden argument*/NULL);
	}

IL_0194:
	{
		// if (Input.GetKey(KeyCode.C))
		bool L_55;
		L_55 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)99), /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0201;
		}
	}
	{
		// GetComponent<Rigidbody2D>().angularVelocity = Mathf.Lerp(GetComponent<Rigidbody2D>().angularVelocity, 0, rotation_speed * 0.06f * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_56;
		L_56 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_57;
		L_57 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_57);
		float L_58;
		L_58 = Rigidbody2D_get_angularVelocity_m5A202B05024DE0C8F9A8C86900F7EF111574D8A3(L_57, /*hidden argument*/NULL);
		float L_59 = __this->get_rotation_speed_5();
		float L_60;
		L_60 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_61;
		L_61 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_58, (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_59, (float)(0.0599999987f))), (float)L_60)), /*hidden argument*/NULL);
		NullCheck(L_56);
		Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66(L_56, L_61, /*hidden argument*/NULL);
		// GetComponent<Rigidbody2D>().velocity = Vector2.Lerp(GetComponent<Rigidbody2D>().velocity, Vector2.zero, acceleration_amount * 0.06f * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_62;
		L_62 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63;
		L_63 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_63);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_63, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		L_65 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		float L_66 = __this->get_acceleration_amount_4();
		float L_67;
		L_67 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_68;
		L_68 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_64, L_65, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_66, (float)(0.0599999987f))), (float)L_67)), /*hidden argument*/NULL);
		NullCheck(L_62);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_62, L_68, /*hidden argument*/NULL);
	}

IL_0201:
	{
		// if (Input.GetKey(KeyCode.H))
		bool L_69;
		L_69 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)104), /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0229;
		}
	}
	{
		// transform.localPosition = new Vector3(0, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_71), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_70);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_70, L_71, /*hidden argument*/NULL);
	}

IL_0229:
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_72;
		L_72 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)32), /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_0307;
		}
	}
	{
		// if (Time.time > timeToFire)
		float L_73;
		L_73 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_74 = __this->get_timeToFire_14();
		if ((!(((float)L_73) > ((float)L_74))))
		{
			goto IL_0307;
		}
	}
	{
		// timeToFire = Time.time + 1 / fireRate;
		float L_75;
		L_75 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_76 = __this->get_fireRate_10();
		__this->set_timeToFire_14(((float)il2cpp_codegen_add((float)L_75, (float)((float)((float)(1.0f)/(float)L_76)))));
		// GameObject newBullet = BulletPool.SharedInstance.GetPooledObject();
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_77 = ((BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields*)il2cpp_codegen_static_fields_for(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var))->get_SharedInstance_4();
		NullCheck(L_77);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78;
		L_78 = BulletPool_GetPooledObject_m578EBC345CBB1A3A30BB49AF347216A1BBDF4DC0(L_77, /*hidden argument*/NULL);
		V_0 = L_78;
		// if (newBullet != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_79, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_0307;
		}
	}
	{
		// newBullet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = V_0;
		NullCheck(L_81);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_81, (bool)1, /*hidden argument*/NULL);
		// Projectile script = newBullet.GetComponent<Projectile>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = V_0;
		NullCheck(L_82);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_83;
		L_83 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_82, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		// script.firing_ship = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_83);
		L_83->set_firing_ship_6(L_84);
		// newBullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = V_0;
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88;
		L_88 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_87, /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_86, L_88, /*hidden argument*/NULL);
		// newBullet.transform.rotation = transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89 = V_0;
		NullCheck(L_89);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90;
		L_90 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_89, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_91);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_92;
		L_92 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_90, L_92, /*hidden argument*/NULL);
		// Vector2 tempV = new Vector2(transform.up.normalized.x * 10f, transform.up.normalized.y * 10f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_93);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
		L_94 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_93, /*hidden argument*/NULL);
		V_2 = L_94;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_96 = L_95.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		L_98 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_97, /*hidden argument*/NULL);
		V_2 = L_98;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		float L_100 = L_99.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), ((float)il2cpp_codegen_multiply((float)L_96, (float)(10.0f))), ((float)il2cpp_codegen_multiply((float)L_100, (float)(10.0f))), /*hidden argument*/NULL);
		// newBullet.GetComponent<Rigidbody2D>().velocity = tempV;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = V_0;
		NullCheck(L_101);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_102;
		L_102 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_101, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_103 = V_1;
		NullCheck(L_102);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_102, L_103, /*hidden argument*/NULL);
	}

IL_0307:
	{
		// }
		return;
	}
}
// System.Void ExampleShipControl::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleShipControl_OnCollisionEnter2D_m42C1F4126B212BA1B4F99C074DF915DB8C95C539 (ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Wall")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// gameObject.GetComponent<fighterAI>().died();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * L_5;
		L_5 = GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856(L_4, /*hidden argument*/GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856_RuntimeMethod_var);
		NullCheck(L_5);
		fighterAI_died_mE1E63EA305DA4535C1FA1C7FD1533E476DCB5A2C(L_5, /*hidden argument*/NULL);
		// Instantiate(explosion, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_explosion_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_6, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ExampleShipControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExampleShipControl__ctor_m58A5FE094A6846042B14B310AA392087A0B51EF2 (ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * __this, const RuntimeMethod* method)
{
	{
		// public float acceleration_amount = 100f;
		__this->set_acceleration_amount_4((100.0f));
		// public float rotation_speed = 1f;
		__this->set_rotation_speed_5((1.0f));
		// public float turret_rotation_speed = 3f;
		__this->set_turret_rotation_speed_7((3.0f));
		// public float fireRate = 5;
		__this->set_fireRate_10((5.0f));
		// public bool control = true;
		__this->set_control_12((bool)1);
		// public int health = 100;
		__this->set_health_13(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mF1843241F60B2240CFAE651F1FD8A7AE17E32ECD (IsReadOnlyAttribute_t3AF66EFDCBDF4D546C5D58095F0B13B878991914 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void PSDestroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PSDestroy_Start_m16A66080D34E76B27BC5D464361DC780E487B65A (PSDestroy_t894C30FB98DBEC2AC0B84EFC72C3BFA5248F70EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, GetComponent<ParticleSystem>().duration);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_1;
		L_1 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		NullCheck(L_1);
		float L_2;
		L_2 = ParticleSystem_get_duration_m25C0E6C6B0EC084ED59977966AF2C2EDE529FA44(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PSDestroy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PSDestroy_Update_m3D8E78F4A4A30103C770569FF171C2FBB668741C (PSDestroy_t894C30FB98DBEC2AC0B84EFC72C3BFA5248F70EE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PSDestroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PSDestroy__ctor_mF5CB0EC7B1A1EF22A6694B1D1B8E9304289D61B5 (PSDestroy_t894C30FB98DBEC2AC0B84EFC72C3BFA5248F70EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ParallaxLayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallaxLayer_Start_m5B8585772C04F3CABDBE19D7191C8F43D2350F55 (ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ParallaxLayer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallaxLayer_FixedUpdate_mCEC1D810503FD50B870752251F6426E21F33EA6D (ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C * __this, const RuntimeMethod* method)
{
	{
		// wantedPosition = Camera.main.transform.position * movement_resistance;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_movement_resistance_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		__this->set_wantedPosition_4(L_4);
		// wantedPosition.z = transform.position.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_wantedPosition_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		L_5->set_z_4(L_8);
		// transform.position = wantedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = __this->get_wantedPosition_4();
		NullCheck(L_9);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ParallaxLayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallaxLayer__ctor_mFD579164D98ABB7EA164B707DAA01CD60F4C3E4E (ParallaxLayer_tDCE9C7039D51B1823FBCF295B836782AEFAAB40C * __this, const RuntimeMethod* method)
{
	{
		// public float movement_resistance = 1f; //1 = no movement, 0.9 = some movement, 0.5 = more movement, etc, 0 = centered at origin, layer is now foreground
		__this->set_movement_resistance_5((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerControlledTurret::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlledTurret_Start_m60119FD387BD3755E35FAE2C68DC76EC82B73A73 (PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerControlledTurret::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlledTurret_Update_m7A05BAB23A60E0A6B132F67FA43C0DC2934226C7 (PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	{
		// Vector2 turretPosition = Camera.main.WorldToScreenPoint(transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// Vector3 direction = CustomPointer.pointerPosition - turretPosition;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ((CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_StaticFields*)il2cpp_codegen_static_fields_for(CustomPointer_t399675CF9B941E0699C42F91ECB23C4A274B074A_il2cpp_TypeInfo_var))->get_pointerPosition_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// transform.rotation = Quaternion.Euler (new Vector3(0, 0, Mathf.LerpAngle(transform.rotation.eulerAngles.z, (Mathf.Atan2 (direction.y,direction.x) * Mathf.Rad2Deg) - 90f, turret_rotation_speed * Time.deltaTime)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_2), /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		float L_15 = L_14.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		float L_17 = L_16.get_x_2();
		float L_18;
		L_18 = atan2f(L_15, L_17);
		float L_19 = __this->get_turret_rotation_speed_6();
		float L_20;
		L_20 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_21;
		L_21 = Mathf_LerpAngle_m6A298166BC9A889DFB7D69D0B04CFDAB9A008946(L_13, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_18, (float)(57.2957802f))), (float)(90.0f))), ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_22), (0.0f), (0.0f), L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_22, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_9, L_23, /*hidden argument*/NULL);
		// if (Input.GetMouseButtonDown(0) && barrel_hardpoints != null) {
		bool L_24;
		L_24 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_013b;
		}
	}
	{
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_barrel_hardpoints_5();
		if (!L_25)
		{
			goto IL_013b;
		}
	}
	{
		// GameObject bullet = (GameObject) Instantiate(weapon_prefab, barrel_hardpoints[barrel_index].transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_weapon_prefab_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = __this->get_barrel_hardpoints_5();
		int32_t L_28 = __this->get_barrel_index_8();
		NullCheck(L_27);
		int32_t L_29 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_26, L_32, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_3 = L_35;
		// bullet.GetComponent<Rigidbody2D>().AddForce(bullet.transform.up * shot_speed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = V_3;
		NullCheck(L_36);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_37;
		L_37 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_36, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = V_3;
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_39, /*hidden argument*/NULL);
		float L_41 = __this->get_shot_speed_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_40, L_41, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_42, /*hidden argument*/NULL);
		NullCheck(L_37);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_37, L_43, /*hidden argument*/NULL);
		// bullet.GetComponent<Projectile>().firing_ship = transform.parent.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_3;
		NullCheck(L_44);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_45;
		L_45 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_44, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		L_45->set_firing_ship_6(L_48);
		// barrel_index++; //This will cycle sequentially through the barrels in the barrel_hardpoints array
		int32_t L_49 = __this->get_barrel_index_8();
		__this->set_barrel_index_8(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)));
		// if (barrel_index >= barrel_hardpoints.Length)
		int32_t L_50 = __this->get_barrel_index_8();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_51 = __this->get_barrel_hardpoints_5();
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))))))
		{
			goto IL_013b;
		}
	}
	{
		// barrel_index = 0;
		__this->set_barrel_index_8(0);
	}

IL_013b:
	{
		// }
		return;
	}
}
// System.Void PlayerControlledTurret::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerControlledTurret__ctor_m635C5C0B9F50797FF0477A0C76190D23AE624AB7 (PlayerControlledTurret_tA0BCBE4E8E40ECB5B19A0526F7281175FDE1B7CA * __this, const RuntimeMethod* method)
{
	{
		// public float turret_rotation_speed = 3f;
		__this->set_turret_rotation_speed_6((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Projectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Start_m065C53350564E17D5A0A0322FF064F8C9697DAB6 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Projectile::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnTriggerEnter2D_m555D86B29742738A756C391F8806270B8CEB1E80 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_mA9596DB68DB818B57C7AD1D6A6EDC76D0BBDED39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13033B13C82DCDB46E35F05C27E118719D37AD3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDFD4D20C33290BB70BBA904B4E928860ABAE131);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject != firing_ship && col.gameObject.tag == "Ship")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_firing_ship_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___col0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralEDFD4D20C33290BB70BBA904B4E928860ABAE131, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_008d;
		}
	}
	{
		// Instantiate(hit_effect, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_hit_effect_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// col.gameObject.GetComponent<ExampleShipControl>().health -= damage;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___col0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * L_15;
		L_15 = GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA(L_14, /*hidden argument*/GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA_RuntimeMethod_var);
		ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_health_13();
		int32_t L_18 = __this->get_damage_8();
		NullCheck(L_16);
		L_16->set_health_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)));
		// if (col.gameObject.GetComponent<ExampleShipControl>().health <= 0)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19 = ___col0;
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		ExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9 * L_21;
		L_21 = GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA(L_20, /*hidden argument*/GameObject_GetComponent_TisExampleShipControl_t837CFC902976D7997296A788BDE99A304807CAD9_mB09B3B8320EC20101549CE3F5964E491F0953EDA_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22 = L_21->get_health_13();
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// firing_ship.GetComponent<fighterAI>().killed();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_firing_ship_6();
		NullCheck(L_23);
		fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * L_24;
		L_24 = GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856(L_23, /*hidden argument*/GameObject_GetComponent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_m4DD2ACDAD8AD277A950DD43B4CB4B000B8DD4856_RuntimeMethod_var);
		NullCheck(L_24);
		fighterAI_killed_m53E4F7D74FEF0B13688E4F60155E3576BECCD970(L_24, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// resetBullet();
		Projectile_resetBullet_mA4E543DF848931B6D15ACFC1AE2C65AAC0968A07(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008d:
	{
		// else if (col.tag == "FighterRadar")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_25 = ___col0;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_26, _stringLiteral13033B13C82DCDB46E35F05C27E118719D37AD3A, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ba;
		}
	}
	{
		// col.gameObject.GetComponentInParent<fighterAI>().bulletRadar.addBullet(gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_28 = ___col0;
		NullCheck(L_28);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * L_30;
		L_30 = GameObject_GetComponentInParent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_mA9596DB68DB818B57C7AD1D6A6EDC76D0BBDED39(L_29, /*hidden argument*/GameObject_GetComponentInParent_TisfighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D_mA9596DB68DB818B57C7AD1D6A6EDC76D0BBDED39_RuntimeMethod_var);
		NullCheck(L_30);
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_31 = L_30->get_bulletRadar_43();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		bulletRadar_addBullet_m2185A28EC9C3A8FBC2D5C9CFC90A11E931D2BBAF(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Projectile::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnTriggerExit2D_mA9F0A9C84CAE0C17288B80EA4A6360B7E0A51CD1 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.tag == "Projectile" && col.gameObject.tag == "Wall")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralC00C36D0E5E4DEE3EE46C5BBA529B7DA5B5C005F, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___col0;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// resetBullet();
		Projectile_resetBullet_mA4E543DF848931B6D15ACFC1AE2C65AAC0968A07(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Projectile::resetBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_resetBullet_mA4E543DF848931B6D15ACFC1AE2C65AAC0968A07 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<TrailRenderer>().Clear();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * L_1;
		L_1 = GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8(L_0, /*hidden argument*/GameObject_GetComponent_TisTrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01_m6BF02D14A2BF23863B8F688EEA112E78DD7B4AB8_RuntimeMethod_var);
		NullCheck(L_1);
		TrailRenderer_Clear_mF9AAA91E20A28ECE700EA2B3D2605F0D9C294663(L_1, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 50;
		__this->set_speed_7((50.0f));
		// public int damage = 100;
		__this->set_damage_8(((int32_t)100));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShipCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipCamera_Start_m836E4154FBD42E494F7C712C184F9A5BE245DA08 (ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ShipCamera::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipCamera_FixedUpdate_m1BC28A332383F06284C9632F0C7BF78EA5E3ADC0 (ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91 * __this, const RuntimeMethod* method)
{
	{
		// wanted_position = target_object.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_object_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_wanted_position_6(L_1);
		// wanted_position.z = transform.position.z;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_wanted_position_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_z_4();
		L_2->set_z_4(L_5);
		// transform.position = Vector3.Lerp(transform.position, wanted_position, Time.deltaTime * follow_tightness);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_wanted_position_6();
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_11 = __this->get_follow_tightness_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_8, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShipCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipCamera__ctor_m32494B3BB927E66BC8EEFE4B6EBC39B4D3FEEA2E (ShipCamera_t61CDC1503C469EACC1BF003A07969E0A82652E91 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void bulletRadar::addBullet(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar_addBullet_m2185A28EC9C3A8FBC2D5C9CFC90A11E931D2BBAF (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bullets.Add(bullet);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_bullets_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___bullet0;
		NullCheck(L_0);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_0, L_1, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void bulletRadar::resetAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar_resetAll_m043A3F3F5A9C3BCB45043A061507F2BB2E26300E (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < bullets.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0004:
	{
		// if (bullets[i].activeInHierarchy)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_bullets_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// bullets[i].GetComponent<Projectile>().resetBullet();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_bullets_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_6);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_7;
		L_7 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_6, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		NullCheck(L_7);
		Projectile_resetBullet_mA4E543DF848931B6D15ACFC1AE2C65AAC0968A07(L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_9 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_bullets_0();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_10, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// bullets.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = __this->get_bullets_0();
		NullCheck(L_12);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_12, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void bulletRadar::checkActiveBullets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar_checkActiveBullets_m896760ABEFA50AA2818117160B8EEB110D31BED0 (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < bullets.Count; i++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		// if (!bullets[i].activeInHierarchy)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_bullets_0();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// bullets.RemoveAt(i);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_bullets_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0(L_4, L_5, /*hidden argument*/List_1_RemoveAt_mAB148BF0E3CF1F336D76377BD01824F30A0582C0_RuntimeMethod_var);
	}

IL_0023:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < bullets.Count; i++)
		int32_t L_7 = V_0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_bullets_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_8, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void bulletRadar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bulletRadar__ctor_mBBD39B90860EFF707515BA3DFC4C19D0BD7686AF (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> bullets = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_bullets_0(L_0);
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
// System.Void fighterAI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_Start_m9C32A61869EA50273748CC87DE720903DAAAC070 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322_m211D630C9E72AC36670CCCFB9A88B3A8797C3AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7DB27B18C7041D9392EA06384420490D7253D1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// bulletRadar = new bulletRadar();
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_0 = (bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 *)il2cpp_codegen_object_new(bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875_il2cpp_TypeInfo_var);
		bulletRadar__ctor_mBBD39B90860EFF707515BA3DFC4C19D0BD7686AF(L_0, /*hidden argument*/NULL);
		__this->set_bulletRadar_43(L_0);
		// rigidBody = gameObject.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		__this->set_rigidBody_46(L_2);
		// bufferSensor = gameObject.GetComponent<BufferSensorComponent>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * L_4;
		L_4 = GameObject_GetComponent_TisBufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322_m211D630C9E72AC36670CCCFB9A88B3A8797C3AEA(L_3, /*hidden argument*/GameObject_GetComponent_TisBufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322_m211D630C9E72AC36670CCCFB9A88B3A8797C3AEA_RuntimeMethod_var);
		__this->set_bufferSensor_44(L_4);
		// Debug.Log("Started");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC7DB27B18C7041D9392EA06384420490D7253D1C, /*hidden argument*/NULL);
		// float xlen = xLength - 0.5f;
		float L_5 = __this->get_xLength_39();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_5, (float)(0.5f)));
		// float ylen = yLength - 0.5f;
		float L_6 = __this->get_yLength_40();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_6, (float)(0.5f)));
		// gameObject.transform.localPosition = new Vector3(Random.Range(-xlen, xlen), Random.Range(-ylen, ylen), 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		float L_9 = V_0;
		float L_10 = V_0;
		float L_11;
		L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_9)), L_10, /*hidden argument*/NULL);
		float L_12 = V_1;
		float L_13 = V_1;
		float L_14;
		L_14 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_12)), L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), L_11, L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_8, L_15, /*hidden argument*/NULL);
		// target.GetComponent<Transform>().localPosition = new Vector3(Random.Range(-xlen, xlen), Random.Range(-ylen, ylen), 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_target_45();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_16, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		float L_18 = V_0;
		float L_19 = V_0;
		float L_20;
		L_20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_18)), L_19, /*hidden argument*/NULL);
		float L_21 = V_1;
		float L_22 = V_1;
		float L_23;
		L_23 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_21)), L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), L_20, L_23, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_17, L_24, /*hidden argument*/NULL);
		// gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_26;
		L_26 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_25, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_26, L_28, /*hidden argument*/NULL);
		// gameObject.GetComponent<Rigidbody2D>().angularVelocity = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30;
		L_30 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_29, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_30);
		Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66(L_30, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fighterAI::CollectObservations(Unity.MLAgents.Sensors.VectorSensor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_CollectObservations_mF4AA394F355FC1865BBD5059BA3B6639F4664077 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * ___sensor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_3 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_4 = NULL;
	{
		// sensor.AddObservation(new Vector2(transform.localPosition.x / xLength, transform.localPosition.y / yLength)); //Normalized x,y
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_0 = ___sensor0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_xLength_39();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		float L_8 = __this->get_yLength_40();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), ((float)((float)L_3/(float)L_4)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		NullCheck(L_0);
		VectorSensor_AddObservation_mC848DE3D270F3720A5C31844781DAFC7B6507E85(L_0, L_9, /*hidden argument*/NULL);
		// sensor.AddObservation(new Vector2(rigidBody.velocity.x / maxVel, rigidBody.velocity.y / maxVel)); // Normalized velocity x,y
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_10 = ___sensor0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11 = __this->get_rigidBody_46();
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		float L_14 = __this->get_maxVel_41();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = __this->get_rigidBody_46();
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_1();
		float L_18 = __this->get_maxVel_41();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_19), ((float)((float)L_13/(float)L_14)), ((float)((float)L_17/(float)L_18)), /*hidden argument*/NULL);
		NullCheck(L_10);
		VectorSensor_AddObservation_mC848DE3D270F3720A5C31844781DAFC7B6507E85(L_10, L_19, /*hidden argument*/NULL);
		// sensor.AddObservation((transform.rotation.z % 360f) / 360f); // Normalized angle
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_20 = ___sensor0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_z_2();
		NullCheck(L_20);
		VectorSensor_AddObservation_m74CC9AE74033F7631224F5D0BD755E39138A8525(L_20, ((float)((float)(fmodf(L_23, (360.0f)))/(float)(360.0f))), /*hidden argument*/NULL);
		// sensor.AddObservation(rigidBody.angularVelocity / maxAngleVel); // Normalized angular velocity
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_24 = ___sensor0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25 = __this->get_rigidBody_46();
		NullCheck(L_25);
		float L_26;
		L_26 = Rigidbody2D_get_angularVelocity_m5A202B05024DE0C8F9A8C86900F7EF111574D8A3(L_25, /*hidden argument*/NULL);
		float L_27 = __this->get_maxAngleVel_42();
		NullCheck(L_24);
		VectorSensor_AddObservation_m74CC9AE74033F7631224F5D0BD755E39138A8525(L_24, ((float)((float)L_26/(float)L_27)), /*hidden argument*/NULL);
		// Rigidbody2D targetRigid = target.GetComponent<Rigidbody2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_target_45();
		NullCheck(L_28);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_29;
		L_29 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_28, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_0 = L_29;
		// sensor.AddObservation(new Vector2(target.transform.localPosition.x / xLength, target.transform.localPosition.y / yLength)); //Normalized x,y
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_30 = ___sensor0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_target_45();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		float L_35 = __this->get_xLength_39();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_target_45();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_y_3();
		float L_40 = __this->get_yLength_40();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_41), ((float)((float)L_34/(float)L_35)), ((float)((float)L_39/(float)L_40)), /*hidden argument*/NULL);
		NullCheck(L_30);
		VectorSensor_AddObservation_mC848DE3D270F3720A5C31844781DAFC7B6507E85(L_30, L_41, /*hidden argument*/NULL);
		// sensor.AddObservation(new Vector2(targetRigid.velocity.x / maxVel, targetRigid.velocity.y / maxVel)); // Normalized velocity x,y
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_42 = ___sensor0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_43 = V_0;
		NullCheck(L_43);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_44;
		L_44 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_x_0();
		float L_46 = __this->get_maxVel_41();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_47 = V_0;
		NullCheck(L_47);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		L_48 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_1();
		float L_50 = __this->get_maxVel_41();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_51), ((float)((float)L_45/(float)L_46)), ((float)((float)L_49/(float)L_50)), /*hidden argument*/NULL);
		NullCheck(L_42);
		VectorSensor_AddObservation_mC848DE3D270F3720A5C31844781DAFC7B6507E85(L_42, L_51, /*hidden argument*/NULL);
		// sensor.AddObservation((target.transform.rotation.z % 360f) / 360f); // Normalized angle
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_52 = ___sensor0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_target_45();
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_z_2();
		NullCheck(L_52);
		VectorSensor_AddObservation_m74CC9AE74033F7631224F5D0BD755E39138A8525(L_52, ((float)((float)(fmodf(L_56, (360.0f)))/(float)(360.0f))), /*hidden argument*/NULL);
		// sensor.AddObservation(targetRigid.angularVelocity / maxAngleVel); // Normalized angular velocity
		VectorSensor_tC8C73DD2B8E05ADB9C04CF93475F83314277EC89 * L_57 = ___sensor0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_58 = V_0;
		NullCheck(L_58);
		float L_59;
		L_59 = Rigidbody2D_get_angularVelocity_m5A202B05024DE0C8F9A8C86900F7EF111574D8A3(L_58, /*hidden argument*/NULL);
		float L_60 = __this->get_maxAngleVel_42();
		NullCheck(L_57);
		VectorSensor_AddObservation_m74CC9AE74033F7631224F5D0BD755E39138A8525(L_57, ((float)((float)L_59/(float)L_60)), /*hidden argument*/NULL);
		// bulletRadar.checkActiveBullets();
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_61 = __this->get_bulletRadar_43();
		NullCheck(L_61);
		bulletRadar_checkActiveBullets_m896760ABEFA50AA2818117160B8EEB110D31BED0(L_61, /*hidden argument*/NULL);
		// for (int i = 0; i < bulletRadar.bullets.Count; i++)
		V_1 = 0;
		goto IL_0230;
	}

IL_0176:
	{
		// Transform tempTran = bulletRadar.bullets[i].GetComponent<Transform>();
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_62 = __this->get_bulletRadar_43();
		NullCheck(L_62);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_63 = L_62->get_bullets_0();
		int32_t L_64 = V_1;
		NullCheck(L_63);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_63, L_64, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_65, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		V_2 = L_66;
		// Rigidbody2D tempRigid = bulletRadar.bullets[i].GetComponent<Rigidbody2D>();
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_67 = __this->get_bulletRadar_43();
		NullCheck(L_67);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_68 = L_67->get_bullets_0();
		int32_t L_69 = V_1;
		NullCheck(L_68);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_68, L_69, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_70);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_71;
		L_71 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_70, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		V_3 = L_71;
		// float[] temp = { tempTran.localPosition.x / xLength, tempTran.localPosition.y / yLength, tempRigid.velocity.x / maxVel, tempRigid.velocity.y / maxVel, (transform.rotation.z % 360f) / 360f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_72 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)5);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_73 = L_72;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74 = V_2;
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_74, /*hidden argument*/NULL);
		float L_76 = L_75.get_x_2();
		float L_77 = __this->get_xLength_39();
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_76/(float)L_77)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_78 = L_73;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79 = V_2;
		NullCheck(L_79);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		L_80 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_79, /*hidden argument*/NULL);
		float L_81 = L_80.get_y_3();
		float L_82 = __this->get_yLength_40();
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_81/(float)L_82)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_83 = L_78;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_84 = V_3;
		NullCheck(L_84);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85;
		L_85 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_84, /*hidden argument*/NULL);
		float L_86 = L_85.get_x_0();
		float L_87 = __this->get_maxVel_41();
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((float)L_86/(float)L_87)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = L_83;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_89 = V_3;
		NullCheck(L_89);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90;
		L_90 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_89, /*hidden argument*/NULL);
		float L_91 = L_90.get_y_1();
		float L_92 = __this->get_maxVel_41();
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)((float)((float)L_91/(float)L_92)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_93 = L_88;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_94);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_95;
		L_95 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_94, /*hidden argument*/NULL);
		float L_96 = L_95.get_z_2();
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(4), (float)((float)((float)(fmodf(L_96, (360.0f)))/(float)(360.0f))));
		V_4 = L_93;
		// bufferSensor.AppendObservation(temp);
		BufferSensorComponent_t24D9750B39B24DD079C50B64D84244C5B5D08322 * L_97 = __this->get_bufferSensor_44();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_98 = V_4;
		NullCheck(L_97);
		BufferSensorComponent_AppendObservation_m77B71980D1BBA6D9412BAA4CFC643716007906E8(L_97, L_98, /*hidden argument*/NULL);
		// for (int i = 0; i < bulletRadar.bullets.Count; i++)
		int32_t L_99 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
	}

IL_0230:
	{
		// for (int i = 0; i < bulletRadar.bullets.Count; i++)
		int32_t L_100 = V_1;
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_101 = __this->get_bulletRadar_43();
		NullCheck(L_101);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_102 = L_101->get_bullets_0();
		NullCheck(L_102);
		int32_t L_103;
		L_103 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_102, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_100) < ((int32_t)L_103)))
		{
			goto IL_0176;
		}
	}
	{
		// }
		return;
	}
}
// System.Void fighterAI::OnEpisodeBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_OnEpisodeBegin_mA01DE804B00E5A1AD1E24B3E4321B7266A987253 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method)
{
	{
		// bulletRadar.resetAll();
		bulletRadar_t8B3480A1805C5AEB907861712A8FD77A3C477875 * L_0 = __this->get_bulletRadar_43();
		NullCheck(L_0);
		bulletRadar_resetAll_m043A3F3F5A9C3BCB45043A061507F2BB2E26300E(L_0, /*hidden argument*/NULL);
		// randomSpawns();
		fighterAI_randomSpawns_m60F850A54C642B5167796356B6E206D6C1DC10F5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fighterAI::randomSpawns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_randomSpawns_m60F850A54C642B5167796356B6E206D6C1DC10F5 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// float xlen = xLength - 0.5f;
		float L_0 = __this->get_xLength_39();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)(0.5f)));
		// float ylen = yLength - 0.5f;
		float L_1 = __this->get_yLength_40();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)(0.5f)));
		// float tempX = Random.Range(-xlen, xlen);
		float L_2 = V_0;
		float L_3 = V_0;
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_2)), L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		// float tempY = Random.Range(-ylen, ylen);
		float L_5 = V_1;
		float L_6 = V_1;
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_5)), L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// target.GetComponent<Transform>().localPosition = new Vector3(tempX, tempY, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_target_45();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_8, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		float L_10 = V_2;
		float L_11 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_10, L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_12, /*hidden argument*/NULL);
		// if (Mathf.Abs(tempX) < 0.25)
		float L_13 = V_2;
		float L_14;
		L_14 = fabsf(L_13);
		if ((!(((double)((double)((double)L_14))) < ((double)(0.25)))))
		{
			goto IL_0062;
		}
	}
	{
		// tempX *= 3;
		float L_15 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_15, (float)(3.0f)));
	}

IL_0062:
	{
		// if (Mathf.Abs(tempY) < 0.25)
		float L_16 = V_3;
		float L_17;
		L_17 = fabsf(L_16);
		if ((!(((double)((double)((double)L_17))) < ((double)(0.25)))))
		{
			goto IL_007c;
		}
	}
	{
		// tempY *= 3;
		float L_18 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_18, (float)(3.0f)));
	}

IL_007c:
	{
		// gameObject.transform.localPosition = new Vector3(-tempX, -tempY, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		float L_21 = V_2;
		float L_22 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((-L_21)), ((-L_22)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_20, L_23, /*hidden argument*/NULL);
		// gameObject.GetComponent<Rigidbody2D>().velocity = Vector3.zero;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_25;
		L_25 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_24, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_25, L_27, /*hidden argument*/NULL);
		// gameObject.GetComponent<Rigidbody2D>().angularVelocity = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_29;
		L_29 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_28, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_29);
		Rigidbody2D_set_angularVelocity_m53F03D07251B600A01A05A27F16D2D8C0D3C5A66(L_29, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fighterAI::Heuristic(Unity.MLAgents.Actuators.ActionBuffers& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_Heuristic_m9DBF35AB9203899393595DC63750A6E86679E221 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF * ___actionsOut0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void fighterAI::OnActionReceived(Unity.MLAgents.Actuators.ActionBuffers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_OnActionReceived_mA8699210447C0F077EE7288E10213FD8267772E9 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF  ___actions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t G_B5_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// ActionSegment<int> vectorAction = actions.DiscreteActions;
		ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  L_0;
		L_0 = ActionBuffers_get_DiscreteActions_m88DEE060B2752435116FAEDE9CEAAFC0C36B53C0_inline((ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF *)(&___actions0), /*hidden argument*/NULL);
		V_0 = L_0;
		// int forward = (int)vectorAction[0];
		int32_t L_1;
		L_1 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 0, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		// int backward = (int)vectorAction[1];
		int32_t L_2;
		L_2 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 1, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		V_1 = L_2;
		// int strafeLeft = (int)vectorAction[2];
		int32_t L_3;
		L_3 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 2, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		V_2 = L_3;
		// int strafeRight = (int)vectorAction[3];
		int32_t L_4;
		L_4 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 3, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		V_3 = L_4;
		// int rotateLeft = (int)vectorAction[4];
		int32_t L_5;
		L_5 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 4, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		V_4 = L_5;
		// int rotateRight = (int)vectorAction[5];
		int32_t L_6;
		L_6 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 5, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		V_5 = L_6;
		// int fire = (int)vectorAction[6];
		int32_t L_7;
		L_7 = ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD((ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD *)(&V_0), 6, /*hidden argument*/ActionSegment_1_get_Item_mA337CDF6DFAD8C30D2C77316F7C1B4A1AF5C35DD_RuntimeMethod_var);
		// if (fire == 1)
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			G_B5_0 = L_1;
			goto IL_0134;
		}
	}
	{
		// if (Time.time > timeToFire)
		float L_8;
		L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get_timeToFire_38();
		G_B2_0 = G_B1_0;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			G_B4_0 = G_B1_0;
			goto IL_0129;
		}
	}
	{
		// timeToFire = Time.time + 1 / fireRate;
		float L_10;
		L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_11 = __this->get_fireRate_34();
		__this->set_timeToFire_38(((float)il2cpp_codegen_add((float)L_10, (float)((float)((float)(1.0f)/(float)L_11)))));
		// GameObject newBullet = BulletPool.SharedInstance.GetPooledObject();
		BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F * L_12 = ((BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_StaticFields*)il2cpp_codegen_static_fields_for(BulletPool_t74B6D8A2924B1D4DCC92576852BB9F3311A6491F_il2cpp_TypeInfo_var))->get_SharedInstance_4();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = BulletPool_GetPooledObject_m578EBC345CBB1A3A30BB49AF347216A1BBDF4DC0(L_12, /*hidden argument*/NULL);
		V_6 = L_13;
		// if (newBullet != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_15)
		{
			G_B4_0 = G_B2_0;
			goto IL_0129;
		}
	}
	{
		// newBullet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_6;
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// Projectile script = newBullet.GetComponent<Projectile>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_6;
		NullCheck(L_17);
		Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * L_18;
		L_18 = GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E(L_17, /*hidden argument*/GameObject_GetComponent_TisProjectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F_mE0408265DA7AF79800C59B3243C5AD2ABED77D4E_RuntimeMethod_var);
		// script.firing_ship = this.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_firing_ship_6(L_19);
		// newBullet.transform.position = transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_6;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_23, /*hidden argument*/NULL);
		// newBullet.transform.rotation = transform.rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_6;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_25, L_27, /*hidden argument*/NULL);
		// Vector2 tempV = new Vector2(transform.up.normalized.x * 10f, transform.up.normalized.y * 10f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_8), /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_7), ((float)il2cpp_codegen_multiply((float)L_31, (float)(10.0f))), ((float)il2cpp_codegen_multiply((float)L_35, (float)(10.0f))), /*hidden argument*/NULL);
		// newBullet.GetComponent<Rigidbody2D>().velocity = tempV;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = V_6;
		NullCheck(L_36);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_37;
		L_37 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_36, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_38 = V_7;
		NullCheck(L_37);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_37, L_38, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
	}

IL_0129:
	{
		// AddReward(-0.01f);
		Agent_AddReward_m644D6499BD3B8E25069C731324E7944D8C0F555C(__this, (-0.00999999978f), /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
	}

IL_0134:
	{
		// if (forward == 1)
		if ((!(((uint32_t)G_B5_0) == ((uint32_t)1))))
		{
			goto IL_0167;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce(transform.up * acceleration_amount * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_39;
		L_39 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_40, /*hidden argument*/NULL);
		float L_42 = __this->get_acceleration_amount_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_41, L_42, /*hidden argument*/NULL);
		float L_44;
		L_44 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, L_44, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		L_46 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_39);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_39, L_46, /*hidden argument*/NULL);
	}

IL_0167:
	{
		// if (backward == 1)
		int32_t L_47 = V_1;
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_01a0;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce((-transform.up) * acceleration_amount * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_48;
		L_48 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_50, /*hidden argument*/NULL);
		float L_52 = __this->get_acceleration_amount_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_51, L_52, /*hidden argument*/NULL);
		float L_54;
		L_54 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_53, L_54, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		L_56 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_55, /*hidden argument*/NULL);
		NullCheck(L_48);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_48, L_56, /*hidden argument*/NULL);
	}

IL_01a0:
	{
		// if (strafeLeft == 1)
		int32_t L_57 = V_2;
		if ((!(((uint32_t)L_57) == ((uint32_t)1))))
		{
			goto IL_01e3;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce((-transform.right) * acceleration_amount * 0.6f * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_58;
		L_58 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_59, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_60, /*hidden argument*/NULL);
		float L_62 = __this->get_acceleration_amount_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_61, L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_63, (0.600000024f), /*hidden argument*/NULL);
		float L_65;
		L_65 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_64, L_65, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		L_67 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_66, /*hidden argument*/NULL);
		NullCheck(L_58);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_58, L_67, /*hidden argument*/NULL);
	}

IL_01e3:
	{
		// if (strafeRight == 1)
		int32_t L_68 = V_3;
		if ((!(((uint32_t)L_68) == ((uint32_t)1))))
		{
			goto IL_0221;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddForce((transform.right) * acceleration_amount * 0.6f * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_69;
		L_69 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_70, /*hidden argument*/NULL);
		float L_72 = __this->get_acceleration_amount_28();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_71, L_72, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_73, (0.600000024f), /*hidden argument*/NULL);
		float L_75;
		L_75 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_74, L_75, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_77;
		L_77 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_76, /*hidden argument*/NULL);
		NullCheck(L_69);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_69, L_77, /*hidden argument*/NULL);
	}

IL_0221:
	{
		// if (rotateLeft == 1)
		int32_t L_78 = V_4;
		if ((!(((uint32_t)L_78) == ((uint32_t)1))))
		{
			goto IL_023d;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddTorque(rotation_speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_79;
		L_79 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		float L_80 = __this->get_rotation_speed_29();
		float L_81;
		L_81 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_79);
		Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901(L_79, ((float)il2cpp_codegen_multiply((float)L_80, (float)L_81)), /*hidden argument*/NULL);
	}

IL_023d:
	{
		// if (rotateRight == 1)
		int32_t L_82 = V_5;
		if ((!(((uint32_t)L_82) == ((uint32_t)1))))
		{
			goto IL_025a;
		}
	}
	{
		// GetComponent<Rigidbody2D>().AddTorque(-rotation_speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_83;
		L_83 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		float L_84 = __this->get_rotation_speed_29();
		float L_85;
		L_85 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_83);
		Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901(L_83, ((float)il2cpp_codegen_multiply((float)((-L_84)), (float)L_85)), /*hidden argument*/NULL);
	}

IL_025a:
	{
		// }
		return;
	}
}
// System.Void fighterAI::died()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_died_mE1E63EA305DA4535C1FA1C7FD1533E476DCB5A2C (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral313DA2379B0B88AB6469FC553185A248B1162326);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Debug.Log("Loss: " + (-1f - (((float)MaxStep / (float)StepCount))).ToString());
		int32_t L_0 = ((Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 *)__this)->get_MaxStep_8();
		int32_t L_1;
		L_1 = Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline(__this, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)(-1.0f), (float)((float)((float)((float)((float)L_0))/(float)((float)((float)L_1))))));
		String_t* L_2;
		L_2 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral313DA2379B0B88AB6469FC553185A248B1162326, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// if ((float)StepCount < 2)
		int32_t L_4;
		L_4 = Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_4))) < ((float)(2.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// AddReward(-1f - 1000f);
		Agent_AddReward_m644D6499BD3B8E25069C731324E7944D8C0F555C(__this, (-1001.0f), /*hidden argument*/NULL);
		// EndEpisode();
		Agent_EndEpisode_m2248EF94767BBF9D92CF53D429BD17317606E8AC(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// AddReward(-1f - (((float)MaxStep / (float)StepCount)));
		int32_t L_5 = ((Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 *)__this)->get_MaxStep_8();
		int32_t L_6;
		L_6 = Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline(__this, /*hidden argument*/NULL);
		Agent_AddReward_m644D6499BD3B8E25069C731324E7944D8C0F555C(__this, ((float)il2cpp_codegen_subtract((float)(-1.0f), (float)((float)((float)((float)((float)L_5))/(float)((float)((float)L_6)))))), /*hidden argument*/NULL);
		// EndEpisode();
		Agent_EndEpisode_m2248EF94767BBF9D92CF53D429BD17317606E8AC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fighterAI::killed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_killed_m53E4F7D74FEF0B13688E4F60155E3576BECCD970 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD77E863B1403B72CFCA0CF2B41234BF8F5039963);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (lastStep == 0)
		float L_0 = __this->get_lastStep_47();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_001a;
		}
	}
	{
		// lastStep = StepCount;
		int32_t L_1;
		L_1 = Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline(__this, /*hidden argument*/NULL);
		__this->set_lastStep_47(((float)((float)L_1)));
	}

IL_001a:
	{
		// AddReward(1f);
		Agent_AddReward_m644D6499BD3B8E25069C731324E7944D8C0F555C(__this, (1.0f), /*hidden argument*/NULL);
		// Debug.Log("Cumulative Score: " + (GetCumulativeReward()).ToString());
		float L_2;
		L_2 = Agent_GetCumulativeReward_m5C84BE73DBCFC77148B4244CDA24AF945E026D75_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD77E863B1403B72CFCA0CF2B41234BF8F5039963, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// lastStep = (float)StepCount;
		int32_t L_5;
		L_5 = Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline(__this, /*hidden argument*/NULL);
		__this->set_lastStep_47(((float)((float)L_5)));
		// randomSpawns();
		fighterAI_randomSpawns_m60F850A54C642B5167796356B6E206D6C1DC10F5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fighterAI::onTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI_onTriggerEnter2D_m281E249E00D92E0519A4E472285C007C6F872E8C (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2B5D4D1B88417CD7976C0D40CBD46CC00DFFA90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Entered FIGHTER!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB2B5D4D1B88417CD7976C0D40CBD46CC00DFFA90, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void fighterAI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fighterAI__ctor_m3868B8E7AEF828192C5DE72BF07EDA7E0D0E03D7 (fighterAI_tEDEFB2ECE2B01035DF1AB1A8CBCBEABD06978F6D * __this, const RuntimeMethod* method)
{
	{
		// public float acceleration_amount = 100f;
		__this->set_acceleration_amount_28((100.0f));
		// public float rotation_speed = 1f;
		__this->set_rotation_speed_29((1.0f));
		// public float turret_rotation_speed = 3f;
		__this->set_turret_rotation_speed_31((3.0f));
		// public float fireRate = 5;
		__this->set_fireRate_34((5.0f));
		// public bool control = true;
		__this->set_control_36((bool)1);
		// public int health = 100;
		__this->set_health_37(((int32_t)100));
		// public float xLength = 20.07f / 2f;
		__this->set_xLength_39((10.0349998f));
		// public float yLength = 10f / 2f;
		__this->set_yLength_40((5.0f));
		// public float maxVel = 5f;
		__this->set_maxVel_41((5.0f));
		// public float maxAngleVel = 1000f;
		__this->set_maxAngleVel_42((1000.0f));
		Agent__ctor_mB7CF1FF03A9DC6A9301A8574E89E3F33A6E35C03(__this, /*hidden argument*/NULL);
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
// System.Void fpsCounter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fpsCounter_Update_mFCE7A9F3AAFC3F8943807BEAFB412C9EB3BBFB53 (fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Time.unscaledTime > _timer)
		float L_0;
		L_0 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		float L_1 = __this->get__timer_6();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0048;
		}
	}
	{
		// int fps = (int)(1f / Time.unscaledDeltaTime);
		float L_2;
		L_2 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((float)((float)(1.0f)/(float)L_2))));
		// _fpsText.text = "FPS: " + fps;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get__fpsText_4();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEB0BB5D4FA59FF963FDE2494755AB4182D0F8AA2, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// _timer = Time.unscaledTime + _hudRefreshRate;
		float L_6;
		L_6 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258(/*hidden argument*/NULL);
		float L_7 = __this->get__hudRefreshRate_5();
		__this->set__timer_6(((float)il2cpp_codegen_add((float)L_6, (float)L_7)));
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void fpsCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fpsCounter__ctor_mC335D03F77EAFFF1F4FA2A67777558A7BC6B7E47 (fpsCounter_t410D8D0B604F58B07665634B0056292C9E8C69F0 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float _hudRefreshRate = 1f;
		__this->set__hudRefreshRate_5((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void testerJob::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void testerJob_OnUpdate_mE9E1F66B38EDB712F65FAA5EF0F300AEFFDFB0E0 (testerJob_t43737275AC74FF14901C7C5EAD263FA3F65F9CB6 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void testerJob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void testerJob__ctor_m05A080FCD20DE3C4ADDA63B84CA59F06EE25225A (testerJob_t43737275AC74FF14901C7C5EAD263FA3F65F9CB6 * __this, const RuntimeMethod* method)
{
	{
		SystemBase__ctor_m72216162580C72C731BF1BD6D491A990E6984CFA(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void testerJob::OnCreateForCompiler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void testerJob_OnCreateForCompiler_mFC4E5D987272A2939E2D6297DB37CD6DD2BD4990 (testerJob_t43737275AC74FF14901C7C5EAD263FA3F65F9CB6 * __this, const RuntimeMethod* method)
{
	{
		SystemBase_OnCreateForCompiler_m0EBA19005313E80E2C977432945363AC0AB29864(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  ActionBuffers_get_DiscreteActions_m88DEE060B2752435116FAEDE9CEAAFC0C36B53C0_inline (ActionBuffers_tB6734ECE817ADB84A4E726B6729D6BE73035AFEF * __this, const RuntimeMethod* method)
{
	{
		// public ActionSegment<int> DiscreteActions { get; }
		ActionSegment_1_t3990CFEAB39797D7EB9F51AC35C291F2880F8BAD  L_0 = __this->get_U3CDiscreteActionsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Agent_get_StepCount_m95CA642725E734CF5F3C85FC5A5D68021491A3A5_inline (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_StepCount; }
		int32_t L_0 = __this->get_m_StepCount_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Agent_GetCumulativeReward_m5C84BE73DBCFC77148B4244CDA24AF945E026D75_inline (Agent_t6976FCBCCC03A7AE041EE4717D4216E812A1CD11 * __this, const RuntimeMethod* method)
{
	{
		// return m_CumulativeReward;
		float L_0 = __this->get_m_CumulativeReward_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
