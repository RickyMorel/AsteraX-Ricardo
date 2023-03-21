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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct KeyCollection_t5139D729B43788C8618F24D1F6B76B894363E655;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct KeyCollection_t0E9A2C72E46C1A4FE7861BB40E8035E7D4F67174;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct ValueCollection_tC4E52A001D3CCFFBDFC279A1458CEC1C823D9F91;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct ValueCollection_t5C470EAF9AA6787C72B36CCEE35F46DBB4C9FCCA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>[]
struct EntryU5BU5D_t1C870790D27AB51836CCACB01C95C83D56DB8DDF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>[]
struct EntryU5BU5D_tDF03C6AF2EFF2661D3B821514E06D6DF189BAAA7;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA;
// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C;
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
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3;
// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9;
IL2CPP_EXTERN_C String_t* _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralE1921D3070489B1532E810684C2992B44215A052;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1C870790D27AB51836CCACB01C95C83D56DB8DDF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5139D729B43788C8618F24D1F6B76B894363E655* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC4E52A001D3CCFFBDFC279A1458CEC1C823D9F91* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDF03C6AF2EFF2661D3B821514E06D6DF189BAAA7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0E9A2C72E46C1A4FE7861BB40E8035E7D4F67174* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5C470EAF9AA6787C72B36CCEE35F46DBB4C9FCCA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager
struct CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8  : public RuntimeObject
{
};

struct CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields
{
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::activeInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___activeInput_0;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_TouchInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___s_TouchInput_1;
	// UnityStandardAssets.CrossPlatformInput.VirtualInput UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::s_HardwareInput
	VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* ___s_HardwareInput_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::m_Value
	float ___m_Value_1;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_2;
};

// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton
struct VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460  : public RuntimeObject
{
	// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::<matchWithInputManager>k__BackingField
	bool ___U3CmatchWithInputManagerU3Ek__BackingField_1;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_LastPressedFrame
	int32_t ___m_LastPressedFrame_2;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_ReleasedFrame
	int32_t ___m_ReleasedFrame_3;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::m_Pressed
	bool ___m_Pressed_4;
};

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75  : public RuntimeObject
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_AlwaysUseVirtual_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
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

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100  : public VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityStandardAssets.CrossPlatformInput.AxisTouchButton
struct AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisName
	String_t* ___axisName_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::axisValue
	float ___axisValue_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::responseSpeed
	float ___responseSpeed_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.AxisTouchButton::returnToCentreSpeed
	float ___returnToCentreSpeed_7;
	// UnityStandardAssets.CrossPlatformInput.AxisTouchButton UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_PairedWith
	AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* ___m_PairedWith_8;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.AxisTouchButton::m_Axis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_Axis_9;
};

// UnityStandardAssets.CrossPlatformInput.ButtonHandler
struct ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.ButtonHandler::Name
	String_t* ___Name_4;
};

// UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar
struct InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::axis
	String_t* ___axis_4;
};

// UnityStandardAssets.CrossPlatformInput.Joystick
struct Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityStandardAssets.CrossPlatformInput.Joystick::MovementRange
	int32_t ___MovementRange_4;
	// UnityStandardAssets.CrossPlatformInput.Joystick/AxisOption UnityStandardAssets.CrossPlatformInput.Joystick::axesToUse
	int32_t ___axesToUse_5;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.Joystick::verticalAxisName
	String_t* ___verticalAxisName_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.Joystick::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_8;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseX
	bool ___m_UseX_9;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.Joystick::m_UseY
	bool ___m_UseY_10;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_HorizontalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_HorizontalVirtualAxis_11;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.Joystick::m_VerticalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_VerticalVirtualAxis_12;
};

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* ___mapping_4;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_7;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_SteerAxis_8;
};

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_4;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_5;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_6;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_7;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_8;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_StartPos_10;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousDelta_11;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_JoytickOutput_12;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_13;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_14;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_HorizontalVirtualAxis_15;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___m_VerticalVirtualAxis_16;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_17;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_18;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousTouchPos_19;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_20;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_Image_21;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
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

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_18;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_20;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_21;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_22;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_26;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_28;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_29;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_30;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityStandardAssets.CrossPlatformInput.AxisTouchButton[]
struct AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6  : public RuntimeArray
{
	ALIGN_FIELD (8) AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* m_Items[1];

	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF (String_t* ___name0, bool ___raw1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C (String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9 (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70 (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::Remove(TKey)
inline bool Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::Remove(TKey)
inline bool Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::get_Item(TKey)
inline VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716 (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>::.ctor()
inline void Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::.ctor()
inline void Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>::get_Item(TKey)
inline VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6 (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* (*) (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) ;
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
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
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnEnable_mA0CB06BE093AC878BF534BBD84243381FD3B77DC (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CrossPlatformInputManager.AxisExists(axisName))
		String_t* L_0 = __this->___axisName_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_0, NULL);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		// m_Axis = new CrossPlatformInputManager.VirtualAxis(axisName);
		String_t* L_2 = __this->___axisName_4;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_3, L_2, NULL);
		__this->___m_Axis_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Axis_9), (void*)L_3);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_Axis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = __this->___m_Axis_9;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_4, NULL);
		goto IL_003c;
	}

IL_002b:
	{
		// m_Axis = CrossPlatformInputManager.VirtualAxisReference(axisName);
		String_t* L_5 = __this->___axisName_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0(L_5, NULL);
		__this->___m_Axis_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Axis_9), (void*)L_6);
	}

IL_003c:
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::FindPairedButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var otherAxisButtons = FindObjectsOfType(typeof(AxisTouchButton)) as AxisTouchButton[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_1, NULL);
		V_0 = ((AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6*)IsInst((RuntimeObject*)L_2, AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6_il2cpp_TypeInfo_var));
		// if (otherAxisButtons != null)
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		V_1 = 0;
		goto IL_0049;
	}

IL_001c:
	{
		// if (otherAxisButtons[i].axisName == axisName && otherAxisButtons[i] != this)
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		String_t* L_8 = L_7->___axisName_4;
		String_t* L_9 = __this->___axisName_4;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, __this, NULL);
		if (!L_15)
		{
			goto IL_0045;
		}
	}
	{
		// m_PairedWith = otherAxisButtons[i];
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->___m_PairedWith_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PairedWith_8), (void*)L_19);
	}

IL_0045:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < otherAxisButtons.Length; i++)
		int32_t L_21 = V_1;
		AxisTouchButtonU5BU5D_tC58268F081E5FFE49407E8C4A4AA36D79B866AF6* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_001c;
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnDisable_m8AA98C419101C6E74916DCC6D374FAA16E2447E6 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	{
		// m_Axis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_Axis_9;
		NullCheck(L_0);
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerDown_mEAFB55F3168F0EB8686D4DD6806F1D6E7CEA587F (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PairedWith == null)
		AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* L_0 = __this->___m_PairedWith_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FindPairedButton();
		AxisTouchButton_FindPairedButton_mB4C5174F4B9526854860916FFC52CDB5EFA169D6(__this, NULL);
	}

IL_0014:
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, axisValue, responseSpeed * Time.deltaTime));
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2 = __this->___m_Axis_9;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = __this->___m_Axis_9;
		NullCheck(L_3);
		float L_4;
		L_4 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_3, NULL);
		float L_5 = __this->___axisValue_5;
		float L_6 = __this->___responseSpeed_6;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8;
		L_8 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_4, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		NullCheck(L_2);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_2, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton_OnPointerUp_mC153F4DEF33CD567AAC5F34655C9800A937D5921 (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// m_Axis.Update(Mathf.MoveTowards(m_Axis.GetValue, 0, responseSpeed * Time.deltaTime));
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_Axis_9;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = __this->___m_Axis_9;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_1, NULL);
		float L_3 = __this->___responseSpeed_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_5;
		L_5 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_2, (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		NullCheck(L_0);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.AxisTouchButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisTouchButton__ctor_m9AF8E700094EE8527AB82CEBDB0A44DA0C95AF5C (AxisTouchButton_tD0A289F1E554B299469640502DFFCE34FEF605E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string axisName = "Horizontal"; // The name of the axis
		__this->___axisName_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___axisName_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public float axisValue = 1; // The axis that the value has
		__this->___axisValue_5 = (1.0f);
		// public float responseSpeed = 3; // The speed at which the axis touch button responds
		__this->___responseSpeed_6 = (3.0f);
		// public float returnToCentreSpeed = 3; // The speed at which the button will return to its centre
		__this->___returnToCentreSpeed_7 = (3.0f);
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
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_OnEnable_m21C7296FBD3571A6B202081ACD849E1F7D1BE1BE (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetDownState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetDownState_m2D3541EE8B5D405AED991208F80E878C6ED20476 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonDown(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetUpState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetUpState_m929AE70FC12438D4C1A1CE08ED2F50486A349DF3 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetButtonUp(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisPositiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisPositiveState_mD39C82A2278A40FF24C07F4ACA2CE50F7D781C07 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisPositive(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNeutralState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNeutralState_m64A43BE9D146431594B57B87BB2F06C513BC7DAE (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisZero(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::SetAxisNegativeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_SetAxisNegativeState_m9BE3FEF95560F79235800816EC2550D1BFA15D21 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxisNegative(Name);
		String_t* L_0 = __this->___Name_4;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler_Update_m2222E2C4831F0A1CC88D1632E831845549903F29 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.ButtonHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonHandler__ctor_m5D30325215B941B3A4F4DDBB1579D011CA20B6E1 (ButtonHandler_t4463390EB95D613C1AD6630DFCE647E4D966E233* __this, const RuntimeMethod* method) 
{
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
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager__cctor_m33746463243A0E08FFB62BBA37D748B8AD555B12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_TouchInput = new MobileInput();
		MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* L_0 = (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C*)il2cpp_codegen_object_new(MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4(L_0, NULL);
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1), (void*)L_0);
		// s_HardwareInput = new StandaloneInput();
		StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* L_1 = (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100*)il2cpp_codegen_object_new(StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB(L_1, NULL);
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2), (void*)L_1);
		// activeInput = s_TouchInput;
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SwitchActiveInputMethod(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/ActiveInputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SwitchActiveInputMethod_m0EF5871383993606792E15D981EB3F8E80B7D21E (int32_t ___activeInputMethod0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___activeInputMethod0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___activeInputMethod0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// activeInput = s_HardwareInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_HardwareInput_2;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_2);
		// break;
		return;
	}

IL_0013:
	{
		// activeInput = s_TouchInput;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_3 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___s_TouchInput_1;
		((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0), (void*)L_3);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.AxisExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_ButtonExists_mC20C99C73743856EE697EEBA83EA2208CE336A81 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.ButtonExists(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualAxis(axis);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = ___axis0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.RegisterVirtualButton(button);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = ___button0;
		NullCheck(L_0);
		VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (name == null)
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("name");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99_RuntimeMethod_var)));
	}

IL_000e:
	{
		// activeInput.UnRegisterVirtualAxis(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_2 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.UnRegisterVirtualButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* CrossPlatformInputManager_VirtualAxisReference_m7B0C59BFDD8CA9A07F867DCA25C66302F8A159D0 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.VirtualAxisReference(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2;
		L_2 = VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m4E6A8F63511CE1066CEDB9A0B8599A36D0F5B531 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, false);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxisRaw_m1E30C7F4B0BC79DFEB94B689712773864E1BEA1E (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetAxis(name, true);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF(L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_m76603787E550743A0435C79808C50D08B22F7CAF (String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetAxis(name, raw);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		bool L_2 = ___raw1;
		NullCheck(L_0);
		float L_3;
		L_3 = VirtualFuncInvoker2< float, String_t*, bool >::Invoke(4 /* System.Single UnityStandardAssets.CrossPlatformInput.VirtualInput::GetAxis(System.String,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButton_mD402C26AEAD64708BE60A84F3B16BE4C186AE920 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButton(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(5 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButton(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonDown_m9B8928DC7CBC33DA6CC7350B42208BE838030577 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonDown(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CrossPlatformInputManager_GetButtonUp_m6C03EE4715D687BD60050AE4B18956D9D6B6D970 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return activeInput.GetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, String_t* >::Invoke(7 /* System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::GetButtonUp(System.String) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonDown_m93D4E560268528C051E4DE3EFD92D09A0C433955 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonDown(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonDown(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetButtonUp_m71613C8A8314A796EE7F64B427FF2C850C9DF399 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetButtonUp(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetButtonUp(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisPositive_mABA34C4D74CE8561895326960A49963019D00B86 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisPositive(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisPositive(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisNegative_mA5C338ADF67DA6F43797D609FA051428A36236F7 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisNegative(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisNegative(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxisZero_mEB48765F91B6654E57350E616E43F6C71225F4B9 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxisZero(name);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(12 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxisZero(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C (String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetAxis(name, value);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		String_t* L_1 = ___name0;
		float L_2 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker2< String_t*, float >::Invoke(13 /* System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetAxis(System.String,System.Single) */, L_0, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CrossPlatformInputManager_get_mousePosition_m325A1685C29391023DB1F369D4857424E0EC8510 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return activeInput.MousePosition(); }
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14 /* UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::MousePosition() */, L_0);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9 (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionX(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionY(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70 (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeInput.SetVirtualMousePositionZ(f);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* L_0 = ((CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_StaticFields*)il2cpp_codegen_static_fields_for(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var))->___activeInput_0;
		float L_1 = ___f0;
		NullCheck(L_0);
		VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C(L_0, L_1, NULL);
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis__ctor_mEF9E240AFF803DBE02BF614A15621E4D0F696EDF (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) 
{
	{
		// public VirtualAxis(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualAxis(name);
		String_t* L_0;
		L_0 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::Update(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis::get_GetValueRaw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValueRaw_mEBE9F18357FD0B69593E8AB20379A5A5926AD589 (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
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
// System.String UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_matchWithInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::set_matchWithInputManager(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// : this(name, true)
		String_t* L_0 = ___name0;
		VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8(__this, L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton__ctor_m7359FD51DC02CA167EAAC0E41B6B1C6EC9C096A8 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___name0, bool ___matchToInputSettings1, const RuntimeMethod* method) 
{
	{
		// private int m_LastPressedFrame = -5;
		__this->___m_LastPressedFrame_2 = ((int32_t)-5);
		// private int m_ReleasedFrame = -5;
		__this->___m_ReleasedFrame_3 = ((int32_t)-5);
		// public VirtualButton(string name, bool matchToInputSettings)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline(__this, L_0, NULL);
		// matchWithInputManager = matchToInputSettings;
		bool L_1 = ___matchToInputSettings1;
		VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Pressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Pressed)
		bool L_0 = __this->___m_Pressed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Pressed = true;
		__this->___m_Pressed_4 = (bool)1;
		// m_LastPressedFrame = Time.frameCount;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_LastPressedFrame_2 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Released()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// m_Pressed = false;
		__this->___m_Pressed_4 = (bool)0;
		// m_ReleasedFrame = Time.frameCount;
		int32_t L_0;
		L_0 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->___m_ReleasedFrame_3 = L_0;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualButton_Remove_m6A4CB0975158B909842CF00389034652DF8AD7A6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnRegisterVirtualButton(name);
		String_t* L_0;
		L_0 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualButton_m1E6A9A7651B30B0DE215978492BBCD5AE02AC05D(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// return m_LastPressedFrame - Time.frameCount == -1;
		int32_t L_0 = __this->___m_LastPressedFrame_2;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		return (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton::get_GetButtonUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6 (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// return (m_ReleasedFrame == Time.frameCount - 1);
		int32_t L_0 = __this->___m_ReleasedFrame_3;
		int32_t L_1;
		L_1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))? 1 : 0);
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
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_Update_m8CCBB44BABB19D73FAE53FFD156A9D255BF23D1E (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, const RuntimeMethod* method) 
{
	{
		// void Update() { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::HandleInput(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar_HandleInput_mE8DC6032B7922720E3A38AA79C079BDC3E3C8FDD (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.SetAxis(axis, (value*2f) - 1f);
		String_t* L_0 = __this->___axis_4;
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetAxis_m0D1AB307179B4D57152E83DD463437D38899B14C(L_0, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, (2.0f))), (1.0f))), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.InputAxisScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxisScrollbar__ctor_m08089402416DD6BF7DA04774F504B2051AB8B1F1 (InputAxisScrollbar_t20252601C5FA8B26065A610E5FA4E473916609FA* __this, const RuntimeMethod* method) 
{
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
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnEnable_m01755C6055086498BC9A53A7EF7E086642A96658 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// CreateVirtualAxes();
		Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_mAA898386E4DDBE88E5CBC3287983D48CDBEEC6C8 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// m_StartPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___m_StartPos_8 = L_1;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var delta = m_StartPos - value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_StartPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// delta.y = -delta.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		(&V_0)->___y_3 = ((-L_4));
		// delta /= MovementRange;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		int32_t L_6 = __this->___MovementRange_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_5, ((float)L_6), NULL);
		V_0 = L_7;
		// if (m_UseX)
		bool L_8 = __this->___m_UseX_9;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(-delta.x);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_9 = __this->___m_HorizontalVirtualAxis_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___x_2;
		NullCheck(L_9);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_9, ((-L_11)), NULL);
	}

IL_0043:
	{
		// if (m_UseY)
		bool L_12 = __this->___m_UseY_10;
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(delta.y);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_13 = __this->___m_VerticalVirtualAxis_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___y_3;
		NullCheck(L_13);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_13, L_15, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_CreateVirtualAxes_mB47F60447928BEE192EB932EC2CE56EA25B8BF24 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B2_0 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B3_1 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B5_0 = NULL;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->___axesToUse_5;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___axesToUse_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseX_9 = (bool)G_B3_0;
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->___axesToUse_5;
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___axesToUse_5;
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_UseY_10 = (bool)G_B6_0;
		// if (m_UseX)
		bool L_4 = __this->___m_UseX_9;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->___horizontalAxisName_6;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_6, L_5, NULL);
		__this->___m_HorizontalVirtualAxis_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalVirtualAxis_11), (void*)L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_7 = __this->___m_HorizontalVirtualAxis_11;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_7, NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->___m_UseY_10;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->___verticalAxisName_7;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_10, L_9, NULL);
		__this->___m_VerticalVirtualAxis_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalVirtualAxis_12), (void*)L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = __this->___m_VerticalVirtualAxis_12;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_11, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m57BB8D9C2A3A95FF403A37053B2C7A49453A8D0A (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Vector3 newPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->___m_UseX_9;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// int delta = (int)(data.position.x - m_StartPos.x);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___data0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		float L_4 = L_3.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___m_StartPos_8);
		float L_6 = L_5->___x_2;
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_4, L_6)));
		// delta = Mathf.Clamp(delta, - MovementRange, MovementRange);
		int32_t L_7 = V_1;
		int32_t L_8 = __this->___MovementRange_4;
		int32_t L_9 = __this->___MovementRange_4;
		int32_t L_10;
		L_10 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_7, ((-L_8)), L_9, NULL);
		V_1 = L_10;
		// newPos.x = delta;
		int32_t L_11 = V_1;
		(&V_0)->___x_2 = ((float)L_11);
	}

IL_0044:
	{
		// if (m_UseY)
		bool L_12 = __this->___m_UseY_10;
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// int delta = (int)(data.position.y - m_StartPos.y);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___data0;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_13, NULL);
		float L_15 = L_14.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___m_StartPos_8);
		float L_17 = L_16->___y_3;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(L_15, L_17)));
		// delta = Mathf.Clamp(delta, -MovementRange, MovementRange);
		int32_t L_18 = V_2;
		int32_t L_19 = __this->___MovementRange_4;
		int32_t L_20 = __this->___MovementRange_4;
		int32_t L_21;
		L_21 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_18, ((-L_19)), L_20, NULL);
		V_2 = L_21;
		// newPos.y = delta;
		int32_t L_22 = V_2;
		(&V_0)->___y_3 = ((float)L_22);
	}

IL_0082:
	{
		// transform.position = new Vector3(m_StartPos.x + newPos.x, m_StartPos.y + newPos.y, m_StartPos.z + newPos.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (&__this->___m_StartPos_8);
		float L_25 = L_24->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = L_26.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___m_StartPos_8);
		float L_29 = L_28->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = (&__this->___m_StartPos_8);
		float L_33 = L_32->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		float L_35 = L_34.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((float)il2cpp_codegen_add(L_25, L_27)), ((float)il2cpp_codegen_add(L_29, L_31)), ((float)il2cpp_codegen_add(L_33, L_35)), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_36, NULL);
		// UpdateVirtualAxes(transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16(__this, L_38, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mF173240831B95C9D6383EC1DDD9ADB5BEE449CC3 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// transform.position = m_StartPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_StartPos_8;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// UpdateVirtualAxes(m_StartPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_StartPos_8;
		Joystick_UpdateVirtualAxes_m05A6D75FD6BF572D836387EF3294C1B863D10F16(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF45E97F4E4424DB3A00653B04F1D3276A7BDAC72 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// public void OnPointerDown(PointerEventData data) { }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDisable_m40ED45E6DE2625D6B0581C0D2873946DC44062CB (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	{
		// if (m_UseX)
		bool L_0 = __this->___m_UseX_9;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_HorizontalVirtualAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = __this->___m_HorizontalVirtualAxis_11;
		NullCheck(L_1);
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_1, NULL);
	}

IL_0013:
	{
		// if (m_UseY)
		bool L_2 = __this->___m_UseY_10;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// m_VerticalVirtualAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_3 = __this->___m_VerticalVirtualAxis_12;
		NullCheck(L_3);
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m39C3347FCD4D7CC89994A5D9F9974AF2D05E8C60 (Joystick_t70D851329A6683C3487B93C73020452EDC3AFEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MovementRange = 100;
		__this->___MovementRange_4 = ((int32_t)100);
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->___horizontalAxisName_6 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxisName_6), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->___verticalAxisName_7 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxisName_7), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
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
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_OnEnable_mE74181228AA1673A5CBD68A8516F9A25473630B1 (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		// CheckEnableControlRig();
		MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_Start_m83F603D565C73AA5C5E04697611EF764799EFBC9 (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.EventSystems.EventSystem system = GameObject.FindObjectOfType<UnityEngine.EventSystems.EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		// if (system == null)
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// GameObject o = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		// o.AddComponent<UnityEngine.EventSystems.EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_4;
		L_4 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_3, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// o.AddComponent<UnityEngine.EventSystems.StandaloneInputModule>();
		NullCheck(L_3);
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_5;
		L_5 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_3, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::CheckEnableControlRig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_CheckEnableControlRig_mB5E0CC07EA9C1C4F79643C157EF40098B0C3C3CD (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
	{
		// EnableControlRig(true);
		MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::EnableControlRig(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig_EnableControlRig_m8F580E507450B7D0B3DA1CAD74A7672C0B63CF9E (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// foreach (Transform t in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_1;
					if (!L_3)
					{
						goto IL_003e;
					}
				}
				{
					RuntimeObject* L_4 = V_1;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000e_1:
			{
				// foreach (Transform t in transform)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// t.gameObject.SetActive(enabled);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				bool L_8 = ___enabled0;
				NullCheck(L_7);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, L_8, NULL);
			}

IL_0024_1:
			{
				// foreach (Transform t in transform)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.MobileControlRig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileControlRig__ctor_m516AE4C523FCAA62F202B54607B88C2F39CF949D (MobileControlRig_tDB141330B6DF28A2DDA4A1704712841B7F8315DC* __this, const RuntimeMethod* method) 
{
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnEnable_mCD2D3134FC211D2D6F9D815273EC358AD49693A4 (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mapping.type == AxisMapping.MappingType.NamedAxis)
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_0 = __this->___mapping_4;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_0;
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		// m_SteerAxis = new CrossPlatformInputManager.VirtualAxis(mapping.axisName);
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_2 = __this->___mapping_4;
		NullCheck(L_2);
		String_t* L_3 = L_2->___axisName_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_4, L_3, NULL);
		__this->___m_SteerAxis_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SteerAxis_8), (void*)L_4);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_SteerAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_5 = __this->___m_SteerAxis_8;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_5, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_Update_m4E1268EABA144462DFBE1788E127E508A1B15A06 (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// float angle = 0;
		V_0 = (0.0f);
		// if (Input.acceleration != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0079;
		}
	}
	{
		// switch (tiltAroundAxis)
		int32_t L_3 = __this->___tiltAroundAxis_5;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		// angle = Mathf.Atan2(Input.acceleration.x, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_7 = L_6.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_9 = L_8.___y_3;
		float L_10;
		L_10 = atan2f(L_7, ((-L_9)));
		float L_11 = __this->___centreAngleOffset_7;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_10, (57.2957802f))), L_11));
		// break;
		goto IL_0079;
	}

IL_0051:
	{
		// angle = Mathf.Atan2(Input.acceleration.z, -Input.acceleration.y)*Mathf.Rad2Deg +
		//         centreAngleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_acceleration_m73A4104C360F0F5E590B94745137BDD78AEFC56A(NULL);
		float L_15 = L_14.___y_3;
		float L_16;
		L_16 = atan2f(L_13, ((-L_15)));
		float L_17 = __this->___centreAngleOffset_7;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, (57.2957802f))), L_17));
	}

IL_0079:
	{
		// float axisValue = Mathf.InverseLerp(-fullTiltAngle, fullTiltAngle, angle)*2 - 1;
		float L_18 = __this->___fullTiltAngle_6;
		float L_19 = __this->___fullTiltAngle_6;
		float L_20 = V_0;
		float L_21;
		L_21 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(((-L_18)), L_19, L_20, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, (2.0f))), (1.0f)));
		// switch (mapping.type)
		AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* L_22 = __this->___mapping_4;
		NullCheck(L_22);
		int32_t L_23 = L_22->___type_0;
		V_3 = L_23;
		int32_t L_24 = V_3;
		switch (L_24)
		{
			case 0:
			{
				goto IL_00bc;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_00d7;
			}
			case 3:
			{
				goto IL_00e5;
			}
		}
	}
	{
		return;
	}

IL_00bc:
	{
		// m_SteerAxis.Update(axisValue);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_25 = __this->___m_SteerAxis_8;
		float L_26 = V_1;
		NullCheck(L_25);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_25, L_26, NULL);
		// break;
		return;
	}

IL_00c9:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionX(axisValue*Screen.width);
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionX_m11435FDBBFEE69E13CC719C9252BEBECA720A4C9(((float)il2cpp_codegen_multiply(L_27, ((float)L_28))), NULL);
		// break;
		return;
	}

IL_00d7:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionY(axisValue*Screen.width);
		float L_29 = V_1;
		int32_t L_30;
		L_30 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionY_m5855813A6C9C8682AD14D4A310B6955776ABFE7E(((float)il2cpp_codegen_multiply(L_29, ((float)L_30))), NULL);
		// break;
		return;
	}

IL_00e5:
	{
		// CrossPlatformInputManager.SetVirtualMousePositionZ(axisValue*Screen.width);
		float L_31 = V_1;
		int32_t L_32;
		L_32 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_SetVirtualMousePositionZ_mA2E9797A6C5E37A63363F8C0322D91BB062EDA70(((float)il2cpp_codegen_multiply(L_31, ((float)L_32))), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput_OnDisable_mB91574F611389145239CA77BB7C9742DD2F32D4E (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	{
		// m_SteerAxis.Remove();
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_0 = __this->___m_SteerAxis_8;
		NullCheck(L_0);
		VirtualAxis_Remove_m19BE8B0CF645DED74B788179E59ED841AD7B702F(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TiltInput__ctor_mC0FEEAAA6072137009894B79BB86BB7763246B5B (TiltInput_t6BF99FCA7EFECB01419E5FE561B5613E9E5C33C3* __this, const RuntimeMethod* method) 
{
	{
		// public float fullTiltAngle = 25;
		__this->___fullTiltAngle_6 = (25.0f);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisMapping__ctor_m49E917651DFC426AB917F75ABAB55169B121AA0A (AxisMapping_tD77EC217D62E9B71DB712C9D31F2067FA8778E75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnEnable_m8EA8CC115883619758EF3093E98C6FD85C6AC9EC (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	{
		// CreateVirtualAxes();
		TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Start_mB8FEBAF0B2A06B12312707D6669B1A67AA8D581D (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___m_Image_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_21), (void*)L_0);
		// m_Center = m_Image.transform.position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___m_Image_21;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___m_Center_20 = L_3;
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::CreateVirtualAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_CreateVirtualAxes_mD0033097BA1162C2F427B69E1C90283B2B50FB48 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B2_0 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B3_1 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B5_0 = NULL;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* G_B6_1 = NULL;
	{
		// m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
		int32_t L_0 = __this->___axesToUse_4;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->___axesToUse_4;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_UseX_13 = (bool)G_B3_0;
		// m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);
		int32_t L_2 = __this->___axesToUse_4;
		G_B4_0 = __this;
		if (!L_2)
		{
			G_B5_0 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->___axesToUse_4;
		G_B6_0 = ((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002f:
	{
		NullCheck(G_B6_1);
		G_B6_1->___m_UseY_14 = (bool)G_B6_0;
		// if (m_UseX)
		bool L_4 = __this->___m_UseX_13;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
		String_t* L_5 = __this->___horizontalAxisName_6;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_6, L_5, NULL);
		__this->___m_HorizontalVirtualAxis_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HorizontalVirtualAxis_15), (void*)L_6);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_7 = __this->___m_HorizontalVirtualAxis_15;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_7, NULL);
	}

IL_0058:
	{
		// if (m_UseY)
		bool L_8 = __this->___m_UseY_14;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
		String_t* L_9 = __this->___verticalAxisName_7;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_10, L_9, NULL);
		__this->___m_VerticalVirtualAxis_16 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VerticalVirtualAxis_16), (void*)L_10);
		// CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = __this->___m_VerticalVirtualAxis_16;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_11, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::UpdateVirtualAxes(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// value = value.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___value0), NULL);
		___value0 = L_0;
		// if (m_UseX)
		bool L_1 = __this->___m_UseX_13;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_HorizontalVirtualAxis.Update(value.x);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_2 = __this->___m_HorizontalVirtualAxis_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value0;
		float L_4 = L_3.___x_2;
		NullCheck(L_2);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_2, L_4, NULL);
	}

IL_0022:
	{
		// if (m_UseY)
		bool L_5 = __this->___m_UseY_14;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// m_VerticalVirtualAxis.Update(value.y);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6 = __this->___m_VerticalVirtualAxis_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___value0;
		float L_8 = L_7.___y_3;
		NullCheck(L_6);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, L_8, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerDown_m5F30C88782254C4577BB65883B6518F5D081E7F8 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// m_Dragging = true;
		__this->___m_Dragging_17 = (bool)1;
		// m_Id = data.pointerId;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline(L_0, NULL);
		__this->___m_Id_18 = L_1;
		// if (controlStyle != ControlStyle.Absolute )
		int32_t L_2 = __this->___controlStyle_5;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// m_Center = data.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		__this->___m_Center_20 = L_5;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_Update_m4BFDEA6F27C9C7BB91B0E160DEA45C64D6D4294F (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_Dragging)
		bool L_0 = __this->___m_Dragging_17;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Input.touchCount >= m_Id + 1 && m_Id != -1)
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		int32_t L_2 = __this->___m_Id_18;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)il2cpp_codegen_add(L_2, 1)))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_3 = __this->___m_Id_18;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_00f4;
		}
	}
	{
		// if (controlStyle == ControlStyle.Swipe)
		int32_t L_4 = __this->___controlStyle_5;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_005c;
		}
	}
	{
		// m_Center = m_PreviousTouchPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___m_PreviousTouchPos_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		__this->___m_Center_20 = L_6;
		// m_PreviousTouchPos = Input.touches[m_Id].position;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7;
		L_7 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_8 = __this->___m_Id_18;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		__this->___m_PreviousTouchPos_19 = L_9;
	}

IL_005c:
	{
		// Vector2 pointerDelta = new Vector2(Input.touches[m_Id].position.x - m_Center.x , Input.touches[m_Id].position.y - m_Center.y).normalized;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_10;
		L_10 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_11 = __this->___m_Id_18;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), NULL);
		float L_13 = L_12.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___m_Center_20);
		float L_15 = L_14->___x_2;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_16;
		L_16 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		int32_t L_17 = __this->___m_Id_18;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), NULL);
		float L_19 = L_18.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___m_Center_20);
		float L_21 = L_20->___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_subtract(L_19, L_21)), /*hidden argument*/NULL);
		V_1 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		V_0 = L_23;
		// pointerDelta.x *= Xsensitivity;
		float* L_24 = (&(&V_0)->___x_0);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = __this->___Xsensitivity_8;
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply(L_26, L_27));
		// pointerDelta.y *= Ysensitivity;
		float* L_28 = (&(&V_0)->___y_1);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->___Ysensitivity_9;
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply(L_30, L_31));
		// UpdateVirtualAxes(new Vector3(pointerDelta.x, pointerDelta.y, 0));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_0;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_0;
		float L_35 = L_34.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_33, L_35, (0.0f), /*hidden argument*/NULL);
		TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B(__this, L_36, NULL);
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnPointerUp_m6F1AF8EE5932677BDC2B85144579FD5595329824 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	{
		// m_Dragging = false;
		__this->___m_Dragging_17 = (bool)0;
		// m_Id = -1;
		__this->___m_Id_18 = (-1);
		// UpdateVirtualAxes(Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		TouchPad_UpdateVirtualAxes_m69FB974FF35D943BB88A012F130A88330E39699B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad_OnDisable_m3D10A5340AC1035A16D811E93938D58066772A30 (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CrossPlatformInputManager.AxisExists(horizontalAxisName))
		String_t* L_0 = __this->___horizontalAxisName_6;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(horizontalAxisName);
		String_t* L_2 = __this->___horizontalAxisName_6;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_2, NULL);
	}

IL_0018:
	{
		// if (CrossPlatformInputManager.AxisExists(verticalAxisName))
		String_t* L_3 = __this->___verticalAxisName_7;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = CrossPlatformInputManager_AxisExists_mCD55514596D222B8881AF89BAB8BEE946013880E(L_3, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// CrossPlatformInputManager.UnRegisterVirtualAxis(verticalAxisName);
		String_t* L_5 = __this->___verticalAxisName_7;
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_UnRegisterVirtualAxis_m4CA77450E2CFD5EC58783410685E4EFDD5955C99(L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.TouchPad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchPad__ctor_mF557EEA00F689FCEEA4EB975E1AFDEA44D85D12D (TouchPad_t5916A2F4A7BFAC1ACF57390DCD2B0DA6540280BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		__this->___horizontalAxisName_6 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxisName_6), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		__this->___verticalAxisName_7 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxisName_7), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public float Xsensitivity = 1f;
		__this->___Xsensitivity_8 = (1.0f);
		// public float Ysensitivity = 1f;
		__this->___Ysensitivity_9 = (1.0f);
		// int m_Id = -1;
		__this->___m_Id_18 = (-1);
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
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::get_virtualMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::set_virtualMousePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::AxisExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_AxisExists_mA1027423CCBE2BA83B7C4AF45AC01D099F1E6C69 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.VirtualInput::ButtonExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualInput_ButtonExists_mFA1287BD13673C81B5DCA6EF66AD4B0D56C4792A (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualButtons.ContainsKey(name);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualAxis(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualAxis_m6D3A4726D0DE1BA3B25AEDA9477493997A4D7CA2 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1921D3070489B1532E810684C2992B44215A052);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(axis.name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = ___axis0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_2, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual axis named " + axis.name + " registered.");
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_4 = ___axis0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralE1921D3070489B1532E810684C2992B44215A052, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualAxes.Add(axis.name, axis);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_7 = __this->___m_VirtualAxes_1;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_8 = ___axis0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_8, NULL);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_10 = ___axis0;
		NullCheck(L_7);
		Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3(L_7, L_9, L_10, Dictionary_2_Add_m7D80F5E2747A1D8480D32F6A7DADF9FF612497D3_RuntimeMethod_var);
		// if (!axis.matchWithInputManager)
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_11 = ___axis0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(axis.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_14 = ___axis0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline(L_14, NULL);
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::RegisterVirtualButton(UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_RegisterVirtualButton_m682A28CC3E2D3D5819BA34B94C4AA51E4CFCF14B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(button.name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = ___button0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_2, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Debug.LogError("There is already a virtual button named " + button.name + " registered.");
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_4 = ___button0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral295BA5F509BB12F0F66F01791FDC2E6507A933A9, L_5, _stringLiteral60A30A3E759BCB1861B94B382713AD2FA836C8F2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_002e:
	{
		// m_VirtualButtons.Add(button.name, button);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_7 = __this->___m_VirtualButtons_2;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_8 = ___button0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_8, NULL);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10 = ___button0;
		NullCheck(L_7);
		Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A(L_7, L_9, L_10, Dictionary_2_Add_mA61F8CE1734A37C2059099185058B68DA3D3890A_RuntimeMethod_var);
		// if (!button.matchWithInputManager)
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_11 = ___button0;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// m_AlwaysUseVirtual.Add(button.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = __this->___m_AlwaysUseVirtual_3;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_14 = ___button0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline(L_14, NULL);
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualAxis_m602AAC884C40E0B3C17F31A4085A1AFBA83D33A0 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualAxes.Remove(name);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005(L_3, L_4, Dictionary_2_Remove_m2BFFA59327E0CEC0AF2E64E1CC7242404F170005_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::UnRegisterVirtualButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_UnRegisterVirtualButton_mD092FEE055651BE99D54ED63A5C506780F743B85 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = __this->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// m_VirtualButtons.Remove(name);
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = __this->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276(L_3, L_4, Dictionary_2_Remove_m22C8CE308A22BF5C640788A660B9B5D510C75276_RuntimeMethod_var);
	}

IL_001b:
	{
		// }
		return;
	}
}
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.VirtualInput::VirtualAxisReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* VirtualInput_VirtualAxisReference_m2B99B51B36EF570C2F7EBF04FD5CF30FE4AAAFFE (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_VirtualAxes.ContainsKey(name) ? m_VirtualAxes[name] : null;
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = __this->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)NULL;
	}

IL_0010:
	{
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_3 = __this->___m_VirtualAxes_1;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_5;
		L_5 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_3, L_4, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionX_m5F76D777C4EC90E8834C0793B5E366CDF9E5D9AB (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(f, virtualMousePosition.y, virtualMousePosition.z);
		float L_0 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_2 = L_1.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_0, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionY_m2C2B5FFA05DF8E0EC5E4E4586CD28FEA06618A76 (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, f, virtualMousePosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		float L_2 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_4 = L_3.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_2, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::SetVirtualMousePositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput_SetVirtualMousePositionZ_m68EF86F3AB06DCE129448E11371AAD617D55751C (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// virtualMousePosition = new Vector3(virtualMousePosition.x, virtualMousePosition.y, f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		float L_3 = L_2.___y_3;
		float L_4 = ___f0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_1, L_3, L_4, /*hidden argument*/NULL);
		VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.VirtualInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected Dictionary<string, CrossPlatformInputManager.VirtualAxis> m_VirtualAxes =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualAxis>();
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = (Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07*)il2cpp_codegen_object_new(Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD(L_0, Dictionary_2__ctor_m6E4E3A55B7CBE6817B2FC293EDBC1EFE90120BDD_RuntimeMethod_var);
		__this->___m_VirtualAxes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualAxes_1), (void*)L_0);
		// protected Dictionary<string, CrossPlatformInputManager.VirtualButton> m_VirtualButtons =
		//     new Dictionary<string, CrossPlatformInputManager.VirtualButton>();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_1 = (Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7*)il2cpp_codegen_object_new(Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F(L_1, Dictionary_2__ctor_mD3D57777C943F7E088E9DE8405EBA492A7A5BB2F_RuntimeMethod_var);
		__this->___m_VirtualButtons_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VirtualButtons_2), (void*)L_1);
		// protected List<string> m_AlwaysUseVirtual = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_AlwaysUseVirtual_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AlwaysUseVirtual_3), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualButton(new CrossPlatformInputManager.VirtualButton(name));
		String_t* L_0 = ___name0;
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_1 = (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460*)il2cpp_codegen_object_new(VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VirtualButton__ctor_mD7918096435EE674CA7FF71AECFCA1A8B6280322(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualButton_m7C5C3BBD160D50D062C1A8395B795B015C983F1D(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::AddAxes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrossPlatformInputManager.RegisterVirtualAxis(new CrossPlatformInputManager.VirtualAxis(name));
		String_t* L_0 = ___name0;
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_1 = (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221*)il2cpp_codegen_object_new(VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VirtualAxis__ctor_m7F633685A7CD299172C86B695164221EAFB59E3B(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CrossPlatformInputManager_t741928E3D4274F2D6BD1576DBE95A8FD09FE5BE8_il2cpp_TypeInfo_var);
		CrossPlatformInputManager_RegisterVirtualAxis_mEB7A21E1856D71B61280D20A79E69356B2808AB2(L_1, NULL);
		// }
		return;
	}
}
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MobileInput_GetAxis_m6D73746928887AFAFC3F788C16B705D72EC562A4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// return m_VirtualAxes[name].GetValue;
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7;
		L_7 = VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline(L_6, NULL);
		return L_7;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonDown_m7A4BA4292DB7CC7360CE3AE6FF72FCFA4A4E34AC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Pressed();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_6;
		L_6 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_4, L_5, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Pressed_mB3842B229270709B86AB688CC0BBF808F2A43CFB(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetButtonUp_m40E01EEA1B15E563D12372B1C14BDFE4DA8307FC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddButton(name);
		String_t* L_3 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualButtons[name].Released();
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_6;
		L_6 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_4, L_5, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualButton_Released_m995C21EF89CBC80C7DF4419CA04A645A1CBE4E02(L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisPositive_mAAE978384C1CCD201A2BE881FEC0B1C8465C729A (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(1f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisNegative_m5B8280854DB9F6045D32C86B4345FD62878DA2AC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(-1f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxisZero_m7D83495E99BD17EE9D4A37C75BDA63BA2BD60240 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(0f);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		NullCheck(L_6);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput_SetAxis_m88422C12DA1C2A1024F45C85EC0CE380939C9D2F (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VirtualAxes.ContainsKey(name))
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB(L_0, L_1, Dictionary_2_ContainsKey_mD7B70C3C6B55638C073F4522E866AAC4276A04AB_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// AddAxes(name);
		String_t* L_3 = ___name0;
		MobileInput_AddAxes_m91CB63869EB8F1F7D79F360D8BF96B20831BDE31(__this, L_3, NULL);
	}

IL_0015:
	{
		// m_VirtualAxes[name].Update(value);
		Dictionary_2_t6EE8ED1A9A0E85DC5D1F8DE2362B67A5E4850B07* L_4 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualAxes_1;
		String_t* L_5 = ___name0;
		NullCheck(L_4);
		VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* L_6;
		L_6 = Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716(L_4, L_5, Dictionary_2_get_Item_m521678A8D96025DA0CB56B088D97A3C6D9B0C716_RuntimeMethod_var);
		float L_7 = ___value1;
		NullCheck(L_6);
		VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonDown_mB305873D769F101DEFDE7A8C92049374857525B2 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonDown;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonDown_m01E1A95C31ED59392D3500F120286EE344DCDAAE(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButtonUp_m75ED55DE2FAA5ECE32EF1ABA1FF2571D9E0153A8 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButtonUp;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButtonUp_m64EC91C14AA944E545C93CF6EF9824848BBDA7C6(L_10, NULL);
		return L_11;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileInput_GetButton_m1B3C5915BEF15B1169CD9872B9C04E19167980EC (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VirtualButtons.ContainsKey(name))
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_0 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2(L_0, L_1, Dictionary_2_ContainsKey_m4A37E3256BB066390D253BF08B0865BA276BD7F2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_3 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_4 = ___name0;
		NullCheck(L_3);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_5;
		L_5 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_3, L_4, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		// AddButton(name);
		String_t* L_7 = ___name0;
		MobileInput_AddButton_mC16F1F22FB2824F8CEA11107517EB3D53CAA0DD6(__this, L_7, NULL);
		// return m_VirtualButtons[name].GetButton;
		Dictionary_2_tD89953622C40CB8A7A54C9BA83EDA0D33CBE67D7* L_8 = ((VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1*)__this)->___m_VirtualButtons_2;
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* L_10;
		L_10 = Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6(L_8, L_9, Dictionary_2_get_Item_mE66A524111621CA76C813E37FDBD03507921DCA6_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline(L_10, NULL);
		return L_11;
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MobileInput_MousePosition_mD554E5C1A85B0033F5DAFA823F5BB39A5ED35797 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) 
{
	{
		// return virtualMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline(__this, NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileInput__ctor_m939ADD1B67B274076F05A2C1F563A6242C5AF2F4 (MobileInput_t75AC3F3CEF802748D128334492479DD4CE37044C* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B(__this, NULL);
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
// System.Single UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetAxis(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StandaloneInput_GetAxis_m02DC4AC6E56EA7AF95E2A73AF4BC6962C95ADFCB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, bool ___raw1, const RuntimeMethod* method) 
{
	{
		// return raw ? Input.GetAxisRaw(name) : Input.GetAxis(name);
		bool L_0 = ___raw1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name0;
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		String_t* L_3 = ___name0;
		float L_4;
		L_4 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(L_3, NULL);
		return L_4;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButton_m3BA6C26D8DB2B4BC6CD060CE26FAEE693D7BED57 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButton(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButton_m2F217DAE69DB3D1324FB848B3C9C84F19A80989E(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonDown_mFE8024BBC93D07B8287A821DEA048ADC70EFD506 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonDown(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandaloneInput_GetButtonUp_m481FD69EC3F9A475406EFB49E3BCA55505E1444D (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// return Input.GetButtonUp(name);
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = Input_GetButtonUp_mEE713E86F1A024762EFED092BC59F3478E786601(L_0, NULL);
		return L_1;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonDown_m9E543F46E3DC44B51F40600AE83BAE2D681888CC_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetButtonUp_m972DDCD2ED6C2531A9CC6E4098EAD5C4545FAA08_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisPositive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisPositive_mBF613552270FC457DDD76AF9A61936B19C0480F5_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisNegative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisNegative_mBC96B9BA1AB5B6930274F468BD67379200E38444_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxisZero(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxisZero_m84AD625B039B82E3D5F8317E21FE0CC129C11FCB_RuntimeMethod_var)));
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::SetAxis(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) 
{
	{
		// throw new Exception(
		//     " This is not possible to be called for standalone input. Please check your platform and code where this is called");
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C1B2912FBE5F5395B0587A3367300AE9207CDDD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandaloneInput_SetAxis_mB8C42BB400B7C8DAEE07BE035620E3CE1A15D7F6_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StandaloneInput_MousePosition_m753E2104FF5C3408E697A1776CF2CECAEFDC3205 (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) 
{
	{
		// return Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		return L_0;
	}
}
// System.Void UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandaloneInput__ctor_m31147DB7461D1CF9B054E61D7C17B77C715E7FDB (StandaloneInput_t1A5734052F6D49BC5146A9C542F5E493F4F09100* __this, const RuntimeMethod* method) 
{
	{
		VirtualInput__ctor_m7784BB0760D71F401B9D81E4F645A30049AB941B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float VirtualAxis_get_GetValue_mA7179BD249106FA496BDE84270A0CF565A67F2F2_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Value; }
		float L_0 = __this->___m_Value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_Update_m0E3E6D3D6A368211D60DCC44E506EDA78DEBA7C4_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// m_Value = value;
		float L_0 = ___value0;
		__this->___m_Value_1 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_name_mD0B17B4912E37E9373A3D13E76288D125A0E70C9_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualAxis_set_matchWithInputManager_m6C9B89E72D52C016F93380B565C73F6F14749B96_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualAxis_get_name_m135C4952A288587DFA8A617777DEBF5486DA457A_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_name_m672BCFC7FD75869D777DC65A762C4993086232DD_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CnameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualButton_set_matchWithInputManager_m2AD35C6B0B3DCC41272C113E4FAC7A0ED0D398D7_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CmatchWithInputManagerU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualButton_get_name_m596C5C776DE3B5AA5B72E609BFA3F8191366E917_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public string name { get; private set; }
		String_t* L_0 = __this->___U3CnameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___value2;
		float L_4 = ___a0;
		float L_5 = ___b1;
		float L_6 = ___a0;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_pointerId_m81DDB468147FE75C1474C9C6C35753BB53A21275_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int pointerId { get; set; }
		int32_t L_0 = __this->___U3CpointerIdU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualAxis_get_matchWithInputManager_mF9AF15616F8F2FA90B757F63121F4D6455A9864C_inline (VirtualAxis_tF35DC6B626596C273333FF9358B7BA605EA7E221* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_matchWithInputManager_m6E62059EDF0830800C3D6FD345919FFD30B1632F_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// public bool matchWithInputManager { get; private set; }
		bool L_0 = __this->___U3CmatchWithInputManagerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VirtualInput_get_virtualMousePosition_mF0009CB5C250CD0D34F1294EAB3FEE5C73569454_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CvirtualMousePositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VirtualInput_set_virtualMousePosition_m9A01224A50C3493CF5445F111A532BC292F94A2E_inline (VirtualInput_tC56832BB86C66AFA074BA646FBA7174EEEA4D1F1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 virtualMousePosition { get; private set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CvirtualMousePositionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualButton_get_GetButton_mF940484D441F184D1DB91B58CE9A17A48D8B3F02_inline (VirtualButton_t5FD28E43491753BBBCAA0DE504CF580C4FE8F460* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Pressed; }
		bool L_0 = __this->___m_Pressed_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
