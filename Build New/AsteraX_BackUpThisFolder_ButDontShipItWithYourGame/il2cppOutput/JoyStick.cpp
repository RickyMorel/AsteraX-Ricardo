#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DynamicJoystick
struct DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_tFAB75AD5521A71081AB7646905698A22A64A8F92;
// FloatingJoystick
struct FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Joystick
struct Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE;
// JoystickPlayerExample
struct JoystickPlayerExample_tF36384CDE696FC998E452A1B199CB4AD42723E14;
// JoystickSetterExample
struct JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VariableJoystick
struct VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsJoyStick[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UI[];
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick_HandleInput_mCAE97BAA61DADB82382779333C0DBC3DB25F642C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick_OnPointerDown_m6C941EFC85903429A05475FCA3D3F433B48F79C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick_OnPointerUp_mC3D37CF544CFB590758ADCDCC88A7211C2408FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick_Start_m6CDBF0DC80E8522B589E4FE3022FBC3287662881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick__ctor_m888E8D07886D358BD3FA2926D98BE42AF79B5356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick_get_MoveThreshold_m738812CC8D3F6B27BB20D12BFB70E32E56F9DE3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicJoystick_set_MoveThreshold_m1CCCA4CCA18EE0EC56BED3D910323D713E93CD29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FixedJoystick__ctor_mEB04C5EB3F4F14A3819DADDB6C816C510E2F4AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FloatingJoystick_OnPointerDown_mE9925CD78E45F5C27F4DFF54573C188D5F9F3248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FloatingJoystick_OnPointerUp_m970AE3F888399B2E5F2409C56EC72E3488D1D661_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FloatingJoystick_Start_mA6BAD2A50D7ACFEC299D148C7373C616E4265FE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FloatingJoystick__ctor_m09D3A5ADF5D411659B42C430F59631A66A9D869F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickPlayerExample_FixedUpdate_mE3ABA42D74A8DEB3B0320AD9916F1FC0EF448D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickPlayerExample__ctor_mA88F4E9EC4DF0C474A722772676D00267A0BD0B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickSetterExample_AxisChanged_mB1C8ED70CF610CF2F8089E9D91CE7A546E5B76C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickSetterExample_ModeChanged_m92B5E1D80DA6522BD63CFCC2D21AC5590B459B2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickSetterExample_SnapX_mF5918DFF813FAD89D877447F179E30F947BAEF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickSetterExample_SnapY_m851D52A9D145205C22824242558B74712469D963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickSetterExample_Update_m499998CE361234B56C6F5ED1E1B82251D6B53415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickSetterExample__ctor_m8A1C64498AD8980D42430B3D385561C58F14F1F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_FormatInput_m99FD10AD0E68135596BC174403CBFF840D2D1BEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_OnDrag_m1C44D4CA5394E32DBBCEC2ACC083350070841319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_AxisOptions_mDD4DE6B40224DF568A02CC5579FE457B277DC869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_DeadZone_mB94F4C12240464DAABF96F2C15038A39D494B72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_Direction_m33265F4ECE1D7EA865BD81BABD6F2A1F390B854F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_HandleRange_mA8FDBCEFE7BC0D2066ECC8D15E91099F8BDCA4A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_SnapX_m7D6638DB365864F5EC5ED9FB60EA788ACCBCB7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_SnapY_m245F01EF6C3BE3CE5DA7F8D4575AF62E430BA86B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_set_DeadZone_m9F393CDAE25CFB481CF9E61DAA5B479BF9337EBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_set_HandleRange_m8CCF971534C9B9D220E05E44FB3E6258BD386262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_set_SnapX_mA78361D42D49F9FE22D65E79FBE77C99C5E959B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Joystick_set_SnapY_m4D92167459A7E2F7478A8E2DFA19D1D5DDDB5B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_HandleInput_m8D8575F3F12E7C8E60B96F53252701DCB0E2B6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_OnPointerDown_mFE1433A4211ABF6EE92C295DEBA128ECDC95DBF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_OnPointerUp_m087A30312C3FB4C8CCA11F68C03DA50DC76614FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_Start_mF28548B6585EBD2E20B354FA7BB93F60456990D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick__ctor_m320951F553702B5034A62E86A5F6E843B17007B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_get_MoveThreshold_m37D728A9525972FED553A3A1B0DB5CC27CBBFB6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VariableJoystick_set_MoveThreshold_m9AD2E68BA692C22D93D12210876092A39BCCC0D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisOptions_t531212BCB5B183CF8B38AC4E12BEF8F146471AE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JoystickPlayerExample_tF36384CDE696FC998E452A1B199CB4AD42723E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;

struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6F12BFEC9384B969E1943A92BB6CFAA025DAA217 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Joystick
struct Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tF36384CDE696FC998E452A1B199CB4AD42723E14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DynamicJoystick
struct DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685  : public Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_tFAB75AD5521A71081AB7646905698A22A64A8F92  : public Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE
{
};

// FloatingJoystick
struct FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0  : public Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// VariableJoystick
struct VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7  : public Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mA78361D42D49F9FE22D65E79FBE77C99C5E959B0 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m4D92167459A7E2F7478A8E2DFA19D1D5DDDB5B43 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m33265F4ECE1D7EA865BD81BABD6F2A1F390B854F (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mDD4DE6B40224DF568A02CC5579FE457B277DC869 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m8CCF971534C9B9D220E05E44FB3E6258BD386262 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_m9F393CDAE25CFB481CF9E61DAA5B479BF9337EBF (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1C44D4CA5394E32DBBCEC2ACC083350070841319 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_m99FD10AD0E68135596BC174403CBFF840D2D1BEF (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m1CCCA4CCA18EE0EC56BED3D910323D713E93CD29 (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_mE3ABA42D74A8DEB3B0320AD9916F1FC0EF448D34 (JoystickPlayerExample_tF36384CDE696FC998E452A1B199CB4AD42723E14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickPlayerExample_FixedUpdate_mE3ABA42D74A8DEB3B0320AD9916F1FC0EF448D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickPlayerExample_tF36384CDE696FC998E452A1B199CB4AD42723E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickPlayerExample_FixedUpdate_mE3ABA42D74A8DEB3B0320AD9916F1FC0EF448D34_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 2));
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 4));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_1 = __this->___variableJoystick_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 5));
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 5));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 6));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 7));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_5 = __this->___variableJoystick_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 8));
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 8));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 9));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 10));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 10));
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 11));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 12));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 13));
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 14));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 15));
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 15));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 16));
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_mA88F4E9EC4DF0C474A722772676D00267A0BD0B1 (JoystickPlayerExample_tF36384CDE696FC998E452A1B199CB4AD42723E14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickPlayerExample__ctor_mA88F4E9EC4DF0C474A722772676D00267A0BD0B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickPlayerExample__ctor_mA88F4E9EC4DF0C474A722772676D00267A0BD0B1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m92B5E1D80DA6522BD63CFCC2D21AC5590B459B2F (JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_ModeChanged_m92B5E1D80DA6522BD63CFCC2D21AC5590B459B2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickSetterExample_ModeChanged_m92B5E1D80DA6522BD63CFCC2D21AC5590B459B2F_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 17));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 18));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 19));
		// switch(index)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 20));
		int32_t L_0 = ___index0;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 21));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 22));
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0037;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0019:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 23));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_3 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 24));
		NullCheck(L_3);
		VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5(L_3, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 24));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 25));
		goto IL_0048;
	}

IL_0028:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 26));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_4 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 27));
		NullCheck(L_4);
		VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5(L_4, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 27));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 28));
		goto IL_0048;
	}

IL_0037:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 29));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_5 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 30));
		NullCheck(L_5);
		VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5(L_5, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 30));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 31));
		goto IL_0048;
	}

IL_0046:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 32));
		goto IL_0048;
	}

IL_0048:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 33));
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_mB1C8ED70CF610CF2F8089E9D91CE7A546E5B76C0 (JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_AxisChanged_mB1C8ED70CF610CF2F8089E9D91CE7A546E5B76C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___index0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickSetterExample_AxisChanged_mB1C8ED70CF610CF2F8089E9D91CE7A546E5B76C0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 34));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 35));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 36));
		// switch (index)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 37));
		int32_t L_0 = ___index0;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 38));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 39));
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_005f;
			}
		}
	}
	{
		goto IL_0082;
	}

IL_0019:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 40));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_3 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 41));
		NullCheck(L_3);
		Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2(L_3, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 41));
		// background.sprite = axisSprites[index];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 42));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_5 = __this->___axisSprites_7;
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 43));
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 43));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 44));
		goto IL_0084;
	}

IL_003c:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 45));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_9 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 46));
		NullCheck(L_9);
		Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2(L_9, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 46));
		// background.sprite = axisSprites[index];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 47));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_11 = __this->___axisSprites_7;
		int32_t L_12 = ___index0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 48));
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 48));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 49));
		goto IL_0084;
	}

IL_005f:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 50));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_15 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 51));
		NullCheck(L_15);
		Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2(L_15, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 51));
		// background.sprite = axisSprites[index];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 52));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_17 = __this->___axisSprites_7;
		int32_t L_18 = ___index0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 53));
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 53));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 54));
		goto IL_0084;
	}

IL_0082:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 55));
		goto IL_0084;
	}

IL_0084:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 56));
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_mF5918DFF813FAD89D877447F179E30F947BAEF30 (JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_SnapX_mF5918DFF813FAD89D877447F179E30F947BAEF30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickSetterExample_SnapX_mF5918DFF813FAD89D877447F179E30F947BAEF30_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 57));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 58));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 59));
		// variableJoystick.SnapX = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 60));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 61));
		NullCheck(L_0);
		Joystick_set_SnapX_mA78361D42D49F9FE22D65E79FBE77C99C5E959B0(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 61));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 62));
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m851D52A9D145205C22824242558B74712469D963 (JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_SnapY_m851D52A9D145205C22824242558B74712469D963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickSetterExample_SnapY_m851D52A9D145205C22824242558B74712469D963_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 63));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 64));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 65));
		// variableJoystick.SnapY = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 66));
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 67));
		NullCheck(L_0);
		Joystick_set_SnapY_m4D92167459A7E2F7478A8E2DFA19D1D5DDDB5B43(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 67));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 68));
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m499998CE361234B56C6F5ED1E1B82251D6B53415 (JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_Update_m499998CE361234B56C6F5ED1E1B82251D6B53415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickSetterExample_Update_m499998CE361234B56C6F5ED1E1B82251D6B53415_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 69));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 70));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 71));
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 72));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* L_1 = __this->___variableJoystick_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 73));
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m33265F4ECE1D7EA865BD81BABD6F2A1F390B854F(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 73));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 74));
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 74));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 75));
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 75));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 76));
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 76));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 77));
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m8A1C64498AD8980D42430B3D385561C58F14F1F1 (JoystickSetterExample_t3AA3F4FAEAC0EEEFDE29A8500D1AA620197F510D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickSetterExample__ctor_m8A1C64498AD8980D42430B3D385561C58F14F1F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, JoystickSetterExample__ctor_m8A1C64498AD8980D42430B3D385561C58F14F1F1_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 78));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 79));
	float G_B3_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 80));
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 81));
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 82));
		float L_5;
		L_5 = Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E(__this, L_4, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 82));
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 83));
		float L_6 = V_0;
		return L_6;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 84));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 85));
	float G_B3_0 = 0.0f;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 86));
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 87));
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 88));
		float L_5;
		L_5 = Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E(__this, L_4, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 88));
		G_B3_0 = L_5;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 89));
		float L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m33265F4ECE1D7EA865BD81BABD6F2A1F390B854F (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_Direction_m33265F4ECE1D7EA865BD81BABD6F2A1F390B854F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_Direction_m33265F4ECE1D7EA865BD81BABD6F2A1F390B854F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 90));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 91));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 92));
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 93));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 94));
		float L_0;
		L_0 = Joystick_get_Horizontal_mF53EE4D5EB5C983A2BE3824BAD6EC7298320317C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 94));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 95));
		float L_1;
		L_1 = Joystick_get_Vertical_mBB917FCA0497504C75428F9211C050A36EF38E52(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 95));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 96));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 96));
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 97));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		return L_3;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mA8FDBCEFE7BC0D2066ECC8D15E91099F8BDCA4A2 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_HandleRange_mA8FDBCEFE7BC0D2066ECC8D15E91099F8BDCA4A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_HandleRange_mA8FDBCEFE7BC0D2066ECC8D15E91099F8BDCA4A2_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 98));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 99));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 100));
		// get { return handleRange; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 101));
		float L_0 = __this->___handleRange_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return handleRange; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 102));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m8CCF971534C9B9D220E05E44FB3E6258BD386262 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_set_HandleRange_m8CCF971534C9B9D220E05E44FB3E6258BD386262_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_set_HandleRange_m8CCF971534C9B9D220E05E44FB3E6258BD386262_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 103));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 104));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 105));
		// set { handleRange = Mathf.Abs(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 106));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 107));
		float L_1;
		L_1 = fabsf(L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 107));
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 108));
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mB94F4C12240464DAABF96F2C15038A39D494B72C (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_DeadZone_mB94F4C12240464DAABF96F2C15038A39D494B72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_DeadZone_mB94F4C12240464DAABF96F2C15038A39D494B72C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 110));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 111));
		// get { return deadZone; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 112));
		float L_0 = __this->___deadZone_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return deadZone; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 113));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_m9F393CDAE25CFB481CF9E61DAA5B479BF9337EBF (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_set_DeadZone_m9F393CDAE25CFB481CF9E61DAA5B479BF9337EBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_set_DeadZone_m9F393CDAE25CFB481CF9E61DAA5B479BF9337EBF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 114));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 115));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 116));
		// set { deadZone = Mathf.Abs(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 117));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 118));
		float L_1;
		L_1 = fabsf(L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 118));
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 119));
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mDD4DE6B40224DF568A02CC5579FE457B277DC869 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisOptions_t531212BCB5B183CF8B38AC4E12BEF8F146471AE8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_AxisOptions_mDD4DE6B40224DF568A02CC5579FE457B277DC869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_AxisOptions_mDD4DE6B40224DF568A02CC5579FE457B277DC869_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 120));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 121));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 122));
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 123));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 124));
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mDD4DE6B40224DF568A02CC5579FE457B277DC869(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 124));
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 125));
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_set_AxisOptions_m7D3BD2632863893C902F3E280DBE39B48680C5C2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 127));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 128));
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 129));
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 130));
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m7D6638DB365864F5EC5ED9FB60EA788ACCBCB7E4 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_SnapX_m7D6638DB365864F5EC5ED9FB60EA788ACCBCB7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_SnapX_m7D6638DB365864F5EC5ED9FB60EA788ACCBCB7E4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 131));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 132));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 133));
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 134));
		bool L_0 = __this->___snapX_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 135));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mA78361D42D49F9FE22D65E79FBE77C99C5E959B0 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_set_SnapX_mA78361D42D49F9FE22D65E79FBE77C99C5E959B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_set_SnapX_mA78361D42D49F9FE22D65E79FBE77C99C5E959B0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 136));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 137));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 138));
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 139));
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 140));
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m245F01EF6C3BE3CE5DA7F8D4575AF62E430BA86B (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_get_SnapY_m245F01EF6C3BE3CE5DA7F8D4575AF62E430BA86B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_get_SnapY_m245F01EF6C3BE3CE5DA7F8D4575AF62E430BA86B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 141));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 142));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 143));
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 144));
		bool L_0 = __this->___snapY_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 145));
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m4D92167459A7E2F7478A8E2DFA19D1D5DDDB5B43 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_set_SnapY_m4D92167459A7E2F7478A8E2DFA19D1D5DDDB5B43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_set_SnapY_m4D92167459A7E2F7478A8E2DFA19D1D5DDDB5B43_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 146));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 147));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 148));
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 149));
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 150));
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 151));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 152));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 153));
		// HandleRange = handleRange;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 154));
		float L_0 = __this->___handleRange_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 155));
		Joystick_set_HandleRange_m8CCF971534C9B9D220E05E44FB3E6258BD386262(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 155));
		// DeadZone = deadZone;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 156));
		float L_1 = __this->___deadZone_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 157));
		Joystick_set_DeadZone_m9F393CDAE25CFB481CF9E61DAA5B479BF9337EBF(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 157));
		// baseRect = GetComponent<RectTransform>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 158));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 159));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 159));
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 160));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 161));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 161));
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 162));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 163));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 163));
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 164));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 165));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 166));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 166));
	}

IL_004e:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 167));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 168));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 168));
		// background.pivot = center;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 169));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 170));
		NullCheck(L_7);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 170));
		// handle.anchorMin = center;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 171));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 172));
		NullCheck(L_9);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 172));
		// handle.anchorMax = center;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 173));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 174));
		NullCheck(L_11);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 174));
		// handle.pivot = center;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 175));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 176));
		NullCheck(L_13);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 176));
		// handle.anchoredPosition = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 177));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = __this->___handle_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 178));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 178));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 179));
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_15, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 179));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 180));
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 181));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 182));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 183));
		// OnDrag(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 184));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 185));
		Joystick_OnDrag_m1C44D4CA5394E32DBBCEC2ACC083350070841319(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 185));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 186));
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1C44D4CA5394E32DBBCEC2ACC083350070841319 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_OnDrag_m1C44D4CA5394E32DBBCEC2ACC083350070841319_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_OnDrag_m1C44D4CA5394E32DBBCEC2ACC083350070841319_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 187));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 188));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 189));
		// cam = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 190));
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 191));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 192));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 192));
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 193));
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// cam = canvas.worldCamera;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 194));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___canvas_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 195));
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 195));
		__this->___cam_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_4);
	}

IL_002b:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 196));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 197));
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 197));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 198));
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F(L_5, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 198));
		V_0 = L_8;
		// Vector2 radius = background.sizeDelta / 2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 199));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = __this->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 200));
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 200));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 201));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_10, (2.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 201));
		V_1 = L_11;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 202));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 203));
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 203));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 204));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 204));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = __this->___canvas_12;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 205));
		NullCheck(L_17);
		float L_18;
		L_18 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 205));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 206));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_16, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 206));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 207));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_15, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 207));
		__this->___input_14 = L_20;
		// FormatInput();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 208));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 209));
		Joystick_FormatInput_m99FD10AD0E68135596BC174403CBFF840D2D1BEF(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 209));
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 210));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___input_14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 211));
		float L_22;
		L_22 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_21, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 211));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___input_14);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 212));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 212));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_26 = __this->___cam_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 213));
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_22, L_24, L_25, L_26);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 213));
		// handle.anchoredPosition = input * radius * handleRange;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 214));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 215));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_28, L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 215));
		float L_31 = __this->___handleRange_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 216));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_30, L_31, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 216));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 217));
		NullCheck(L_27);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_27, L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 217));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 218));
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___magnitude0), (&___normalised1), (&___radius2), (&___cam3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 219));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 220));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 221));
		// if (magnitude > deadZone)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 222));
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 223));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 224));
		// if (magnitude > 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 225));
		float L_3 = ___magnitude0;
		V_1 = (bool)((((float)L_3) > ((float)(1.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 226));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// input = normalised;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 227));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___normalised1;
		__this->___input_14 = L_5;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 228));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 229));
		goto IL_0030;
	}

IL_0025:
	{
		// input = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 230));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 231));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 231));
		__this->___input_14 = L_6;
	}

IL_0030:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 232));
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_m99FD10AD0E68135596BC174403CBFF840D2D1BEF (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_FormatInput_m99FD10AD0E68135596BC174403CBFF840D2D1BEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_FormatInput_m99FD10AD0E68135596BC174403CBFF840D2D1BEF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 233));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 234));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 235));
		// if (axisOptions == AxisOptions.Horizontal)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 236));
		int32_t L_0 = __this->___axisOptions_6;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 237));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 238));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___input_14);
		float L_3 = L_2->___x_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 239));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_3, (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 239));
		__this->___input_14 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 240));
		goto IL_0053;
	}

IL_002b:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 241));
		int32_t L_5 = __this->___axisOptions_6;
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 242));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 243));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___input_14);
		float L_8 = L_7->___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 244));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), (0.0f), L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 244));
		__this->___input_14 = L_9;
	}

IL_0053:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 245));
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0), (&___snapAxis1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_SnapFloat_m7E6D4EEFB6930982844A3769A6DB0CF0F23AAB2E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 246));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 247));
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B22_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 248));
		// if (value == 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 249));
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 250));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 251));
		float L_2 = ___value0;
		V_1 = L_2;
		goto IL_00eb;
	}

IL_0014:
	{
		// if (axisOptions == AxisOptions.Both)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 252));
		int32_t L_3 = __this->___axisOptions_6;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 253));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00b5;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 254));
		// float angle = Vector2.Angle(input, Vector2.up);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 255));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___input_14;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 256));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 256));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 257));
		float L_7;
		L_7 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 257));
		V_3 = L_7;
		// if (snapAxis == AxisOptions.Horizontal)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 258));
		int32_t L_8 = ___snapAxis1;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 259));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 260));
		// if (angle < 22.5f || angle > 157.5f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 261));
		float L_10 = V_3;
		if ((((float)L_10) < ((float)(22.5f))))
		{
			goto IL_0053;
		}
	}
	{
		float L_11 = V_3;
		G_B7_0 = ((((float)L_11) > ((float)(157.5f)))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B7_0 = 1;
	}

IL_0054:
	{
		V_5 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 262));
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 263));
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 264));
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B12_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B12_0 = 1;
	}

IL_0071:
	{
		V_1 = ((float)G_B12_0);
		goto IL_00eb;
	}

IL_0075:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 265));
		int32_t L_14 = ___snapAxis1;
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 266));
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_00b1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 267));
		// if (angle > 67.5f && angle < 112.5f)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 268));
		float L_16 = V_3;
		if ((!(((float)L_16) > ((float)(67.5f)))))
		{
			goto IL_0092;
		}
	}
	{
		float L_17 = V_3;
		G_B17_0 = ((((float)L_17) < ((float)(112.5f)))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B17_0 = 0;
	}

IL_0093:
	{
		V_7 = (bool)G_B17_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 269));
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// return 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 270));
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_00a1:
	{
		// return (value > 0) ? 1 : -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 271));
		float L_19 = ___value0;
		if ((((float)L_19) > ((float)(0.0f))))
		{
			goto IL_00ac;
		}
	}
	{
		G_B22_0 = (-1);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B22_0 = 1;
	}

IL_00ad:
	{
		V_1 = ((float)G_B22_0);
		goto IL_00eb;
	}

IL_00b1:
	{
		// return value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 272));
		float L_20 = ___value0;
		V_1 = L_20;
		goto IL_00eb;
	}

IL_00b5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 273));
		// if (value > 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 274));
		float L_21 = ___value0;
		V_8 = (bool)((((float)L_21) > ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 275));
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		// return 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 276));
		V_1 = (1.0f);
		goto IL_00eb;
	}

IL_00cc:
	{
		// if (value < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 277));
		float L_23 = ___value0;
		V_9 = (bool)((((float)L_23) < ((float)(0.0f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 278));
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		// return -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 279));
		V_1 = (-1.0f);
		goto IL_00eb;
	}

IL_00e2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 280));
		// return 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 281));
		V_1 = (0.0f);
		goto IL_00eb;
	}

IL_00eb:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 282));
		float L_25 = V_1;
		return L_25;
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 283));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 284));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 285));
		// input = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 286));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 287));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 287));
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 288));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 289));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 290));
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 290));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 291));
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___screenPosition0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 292));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 293));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 294));
		// Vector2 localPoint = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 295));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 296));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 296));
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 297));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 298));
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_2, L_3, (&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 298));
		V_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 299));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 300));
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 301));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___baseRect_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 302));
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 302));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___baseRect_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 303));
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 303));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 304));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_7, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 304));
		V_2 = L_10;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 305));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 306));
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 306));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___baseRect_11;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 307));
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 307));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 308));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_13, L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 308));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 309));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_11, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 309));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 310));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 310));
		V_3 = L_19;
		goto IL_006e;
	}

IL_0066:
	{
		// return Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 311));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 312));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 312));
		V_3 = L_20;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 313));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		return L_21;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738 (Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 314));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 315));
	{
		// [SerializeField] private float handleRange = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 316));
		__this->___handleRange_4 = (1.0f);
		// [SerializeField] private float deadZone = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 317));
		__this->___deadZone_5 = (0.0f);
		// [SerializeField] private AxisOptions axisOptions = AxisOptions.Both;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 318));
		__this->___axisOptions_6 = 0;
		// [SerializeField] private bool snapX = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 319));
		__this->___snapX_7 = (bool)0;
		// [SerializeField] private bool snapY = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 320));
		__this->___snapY_8 = (bool)0;
		// [SerializeField] protected RectTransform background = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 321));
		__this->___background_9 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___background_9), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// [SerializeField] private RectTransform handle = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 322));
		__this->___handle_10 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_10), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private RectTransform baseRect = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 323));
		__this->___baseRect_11 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)(RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL);
		// private Vector2 input = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 324));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 325));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 325));
		__this->___input_14 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 326));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 326));
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m738812CC8D3F6B27BB20D12BFB70E32E56F9DE3E (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_get_MoveThreshold_m738812CC8D3F6B27BB20D12BFB70E32E56F9DE3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick_get_MoveThreshold_m738812CC8D3F6B27BB20D12BFB70E32E56F9DE3E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 327));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 328));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 329));
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 330));
		float L_0 = __this->___moveThreshold_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 331));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m1CCCA4CCA18EE0EC56BED3D910323D713E93CD29 (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_set_MoveThreshold_m1CCCA4CCA18EE0EC56BED3D910323D713E93CD29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick_set_MoveThreshold_m1CCCA4CCA18EE0EC56BED3D910323D713E93CD29_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 332));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 333));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 334));
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 335));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 336));
		float L_1;
		L_1 = fabsf(L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 336));
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 337));
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_m6CDBF0DC80E8522B589E4FE3022FBC3287662881 (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_Start_m6CDBF0DC80E8522B589E4FE3022FBC3287662881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick_Start_m6CDBF0DC80E8522B589E4FE3022FBC3287662881_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 338));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 339));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 340));
		// MoveThreshold = moveThreshold;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 341));
		float L_0 = __this->___moveThreshold_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 342));
		DynamicJoystick_set_MoveThreshold_m1CCCA4CCA18EE0EC56BED3D910323D713E93CD29(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 342));
		// base.Start();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 343));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 344));
		Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 344));
		// background.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 345));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 346));
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 346));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 347));
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 347));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 348));
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_m6C941EFC85903429A05475FCA3D3F433B48F79C5 (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_OnPointerDown_m6C941EFC85903429A05475FCA3D3F433B48F79C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick_OnPointerDown_m6C941EFC85903429A05475FCA3D3F433B48F79C5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 349));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 350));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 351));
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 352));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 353));
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 353));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 354));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 354));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 355));
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 355));
		// background.gameObject.SetActive(true);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 356));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 357));
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 357));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 358));
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 358));
		// base.OnPointerDown(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 359));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 360));
		Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728(__this, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 360));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 361));
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_mC3D37CF544CFB590758ADCDCC88A7211C2408FBA (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_OnPointerUp_mC3D37CF544CFB590758ADCDCC88A7211C2408FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick_OnPointerUp_mC3D37CF544CFB590758ADCDCC88A7211C2408FBA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 362));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 363));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 364));
		// background.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 365));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 366));
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 366));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 367));
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 367));
		// base.OnPointerUp(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 368));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 369));
		Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 369));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 370));
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_mCAE97BAA61DADB82382779333C0DBC3DB25F642C (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_HandleInput_mCAE97BAA61DADB82382779333C0DBC3DB25F642C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___magnitude0), (&___normalised1), (&___radius2), (&___cam3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick_HandleInput_mCAE97BAA61DADB82382779333C0DBC3DB25F642C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 371));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 372));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 373));
		// if (magnitude > moveThreshold)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 374));
		float L_0 = ___magnitude0;
		float L_1 = __this->___moveThreshold_15;
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 375));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 376));
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 377));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->___moveThreshold_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 378));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 378));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___radius2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 379));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 379));
		V_1 = L_8;
		// background.anchoredPosition += difference;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 380));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 381));
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 381));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 382));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 382));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 383));
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 383));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 384));
	}

IL_003d:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 385));
		float L_14 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 386));
		Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE(__this, L_14, L_15, L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 386));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 387));
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m888E8D07886D358BD3FA2926D98BE42AF79B5356 (DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick__ctor_m888E8D07886D358BD3FA2926D98BE42AF79B5356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicJoystick_tAF3F0404C0D3A65CA3FD259389BB2AD7C8C46685_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DynamicJoystick__ctor_m888E8D07886D358BD3FA2926D98BE42AF79B5356_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 388));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 389));
	{
		// [SerializeField] private float moveThreshold = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 390));
		__this->___moveThreshold_15 = (1.0f);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 391));
		Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 391));
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_mEB04C5EB3F4F14A3819DADDB6C816C510E2F4AFD (FixedJoystick_tFAB75AD5521A71081AB7646905698A22A64A8F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedJoystick__ctor_mEB04C5EB3F4F14A3819DADDB6C816C510E2F4AFD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FixedJoystick__ctor_mEB04C5EB3F4F14A3819DADDB6C816C510E2F4AFD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738(__this, NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mA6BAD2A50D7ACFEC299D148C7373C616E4265FE1 (FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick_Start_mA6BAD2A50D7ACFEC299D148C7373C616E4265FE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FloatingJoystick_Start_mA6BAD2A50D7ACFEC299D148C7373C616E4265FE1_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 392));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 393));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 394));
		// base.Start();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 395));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 396));
		Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 396));
		// background.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 397));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 398));
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 398));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 399));
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 399));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 400));
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mE9925CD78E45F5C27F4DFF54573C188D5F9F3248 (FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick_OnPointerDown_mE9925CD78E45F5C27F4DFF54573C188D5F9F3248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FloatingJoystick_OnPointerDown_mE9925CD78E45F5C27F4DFF54573C188D5F9F3248_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 401));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 402));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 403));
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 404));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 405));
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 405));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 406));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 406));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 407));
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 407));
		// background.gameObject.SetActive(true);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 408));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 409));
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 409));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 410));
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 410));
		// base.OnPointerDown(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 411));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 412));
		Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728(__this, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 412));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 413));
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m970AE3F888399B2E5F2409C56EC72E3488D1D661 (FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick_OnPointerUp_m970AE3F888399B2E5F2409C56EC72E3488D1D661_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FloatingJoystick_OnPointerUp_m970AE3F888399B2E5F2409C56EC72E3488D1D661_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 414));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 415));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 416));
		// background.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 417));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 418));
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 418));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 419));
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 419));
		// base.OnPointerUp(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 420));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 421));
		Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 421));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 422));
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m09D3A5ADF5D411659B42C430F59631A66A9D869F (FloatingJoystick_t00B5512B34630515A77A8102E993D2FA9F8C6BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingJoystick__ctor_m09D3A5ADF5D411659B42C430F59631A66A9D869F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FloatingJoystick__ctor_m09D3A5ADF5D411659B42C430F59631A66A9D869F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738(__this, NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m37D728A9525972FED553A3A1B0DB5CC27CBBFB6C (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_get_MoveThreshold_m37D728A9525972FED553A3A1B0DB5CC27CBBFB6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_get_MoveThreshold_m37D728A9525972FED553A3A1B0DB5CC27CBBFB6C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 423));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 424));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 425));
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 426));
		float L_0 = __this->___moveThreshold_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 427));
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m9AD2E68BA692C22D93D12210876092A39BCCC0D5 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_set_MoveThreshold_m9AD2E68BA692C22D93D12210876092A39BCCC0D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_set_MoveThreshold_m9AD2E68BA692C22D93D12210876092A39BCCC0D5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 428));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 429));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 430));
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 431));
		float L_0 = ___value0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 432));
		float L_1;
		L_1 = fabsf(L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 432));
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 433));
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___joystickType0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 434));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 435));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 436));
		// this.joystickType = joystickType;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 437));
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 438));
		int32_t L_1 = ___joystickType0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 439));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 440));
		// background.anchoredPosition = fixedPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 441));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___fixedPosition_17;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 442));
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 442));
		// background.gameObject.SetActive(true);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 443));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 444));
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 444));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 445));
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 445));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 446));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 447));
		goto IL_004a;
	}

IL_0038:
	{
		// background.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 448));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 449));
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 449));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 450));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 450));
	}

IL_004a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 451));
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_mF28548B6585EBD2E20B354FA7BB93F60456990D3 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_Start_mF28548B6585EBD2E20B354FA7BB93F60456990D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_Start_mF28548B6585EBD2E20B354FA7BB93F60456990D3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 454));
		// base.Start();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 455));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 456));
		Joystick_Start_m8AD98F5F051201DD38DAD91D0773F82880FC7335(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 456));
		// fixedPosition = background.anchoredPosition;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 457));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 458));
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 458));
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 459));
		int32_t L_2 = __this->___joystickType_16;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 460));
		VariableJoystick_SetMode_m7CE204916638620E84B5230597EB1A3E2BC75AC5(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 460));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 461));
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_mFE1433A4211ABF6EE92C295DEBA128ECDC95DBF7 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_OnPointerDown_mFE1433A4211ABF6EE92C295DEBA128ECDC95DBF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_OnPointerDown_mFE1433A4211ABF6EE92C295DEBA128ECDC95DBF7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 462));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 463));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 464));
		// if(joystickType != JoystickType.Fixed)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 465));
		int32_t L_0 = __this->___joystickType_16;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 466));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 467));
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 468));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 469));
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 470));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Joystick_ScreenPointToAnchoredPosition_mC1AAEA270786D389CA40DD39823FAE9100C8E7E5(__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 470));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 471));
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 471));
		// background.gameObject.SetActive(true);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 472));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 473));
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 473));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 474));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 474));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 475));
	}

IL_003a:
	{
		// base.OnPointerDown(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 476));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 477));
		Joystick_OnPointerDown_m45BDB9C20A39D1FD15167F791A504036DCB98728(__this, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 477));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 478));
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m087A30312C3FB4C8CCA11F68C03DA50DC76614FD (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_OnPointerUp_m087A30312C3FB4C8CCA11F68C03DA50DC76614FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___eventData0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_OnPointerUp_m087A30312C3FB4C8CCA11F68C03DA50DC76614FD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 479));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 480));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 481));
		// if(joystickType != JoystickType.Fixed)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 482));
		int32_t L_0 = __this->___joystickType_16;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 483));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// background.gameObject.SetActive(false);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 484));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 485));
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 485));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 486));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 486));
	}

IL_0020:
	{
		// base.OnPointerUp(eventData);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 487));
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 488));
		Joystick_OnPointerUp_m5361779B563CE0F07398A3FCC479775FC447B615(__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 488));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 489));
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m8D8575F3F12E7C8E60B96F53252701DCB0E2B6D1 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_HandleInput_m8D8575F3F12E7C8E60B96F53252701DCB0E2B6D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___magnitude0), (&___normalised1), (&___radius2), (&___cam3));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick_HandleInput_m8D8575F3F12E7C8E60B96F53252701DCB0E2B6D1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 490));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 491));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 492));
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 493));
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		G_B3_0 = ((((float)L_1) > ((float)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 494));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 495));
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 496));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___normalised1;
		float L_5 = ___magnitude0;
		float L_6 = __this->___moveThreshold_15;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 497));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_4, ((float)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 497));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___radius2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 498));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_7, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 498));
		V_1 = L_9;
		// background.anchoredPosition += difference;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 499));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = ((Joystick_tF23E8AD9B80201356DCEE5B5613970C4F6790EDE*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 500));
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 500));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 501));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_12, L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 501));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 502));
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_11, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 502));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 503));
	}

IL_0049:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 504));
		float L_15 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = ___cam3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 505));
		Joystick_HandleInput_m0FCE777EDC4263E71D0ACCBFF6BCD4616879FAEE(__this, L_15, L_16, L_17, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 505));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 506));
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m320951F553702B5034A62E86A5F6E843B17007B7 (VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick__ctor_m320951F553702B5034A62E86A5F6E843B17007B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableJoystick_tEF0CA125616CF494389E4C5FAD454E8C021DF0C7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VariableJoystick__ctor_m320951F553702B5034A62E86A5F6E843B17007B7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 507));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsJoyStick + 508));
	{
		// [SerializeField] private float moveThreshold = 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 509));
		__this->___moveThreshold_15 = (1.0f);
		// [SerializeField] private JoystickType joystickType = JoystickType.Fixed;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 510));
		__this->___joystickType_16 = 0;
		// private Vector2 fixedPosition = Vector2.zero;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 511));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 512));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 512));
		__this->___fixedPosition_17 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 513));
		Joystick__ctor_m642909277172991EC0B7C4CC64FCFABE4C929738(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsJoyStick + 513));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7004));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7005));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7006));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7007));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7008));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___d1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7052));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7053));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7054));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7055));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7056));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7056));
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7057));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7029));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7030));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7031));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7032));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7033));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7034));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7035));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7036));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7037));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7038));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7038));
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7039));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6093));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6094));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6095));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6096));
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6097));
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6098));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6306));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6307));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6308));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6309));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6310));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___d1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6275));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6276));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6277));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6278));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6279));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6279));
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6280));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21826));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21827));
	{
		// public Vector2 position { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UI + 21828));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6239));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6240));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6241));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6242));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6243));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6243));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6244));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___d1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6263));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6264));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6265));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6266));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6267));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6267));
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6268));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6251));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6252));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6253));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6254));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6255));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6255));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6256));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6190));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6191));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6192));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6193));
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6194));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6194));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6195));
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6132));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6133));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6134));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6135));
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6136));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6136));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6137));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6138));
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6138));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6139));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6140));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6245));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6246));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6247));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6248));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6249));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6249));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6250));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6316));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6317));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6318));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6319));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6320));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___from0), (&___to1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6201));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6202));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6203));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6204));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6205));
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6205));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6206));
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6206));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6207));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6207));
		V_0 = ((float)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6208));
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6209));
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6210));
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6211));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6212));
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6212));
		float L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6213));
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6213));
		V_1 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6214));
		float L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6215));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6215));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6216));
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___a0), (&___b1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6233));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6234));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6235));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6236));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6237));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6237));
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6238));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1), (&___z2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6878));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6879));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6880));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6881));
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6882));
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6883));
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6884));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6120));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6121));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6122));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6123));
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6123));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6124));
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6125));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6126));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6127));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6127));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6128));
		goto IL_0033;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6129));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6130));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6130));
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6131));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6196));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6197));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6198));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6199));
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6200));
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6185));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6186));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6187));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6188));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 6189));
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0), (&___min1), (&___max2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7665));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7666));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7667));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7668));
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7669));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7670));
		float L_3 = ___min1;
		___value0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7671));
		goto IL_0019;
	}

IL_000e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7672));
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7673));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7674));
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7675));
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7676));
		float L_9 = V_2;
		return L_9;
	}
}
