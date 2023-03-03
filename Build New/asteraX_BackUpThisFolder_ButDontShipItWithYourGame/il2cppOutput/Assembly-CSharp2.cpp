#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E;
// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49;
// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>
struct Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6;
// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E;
// System.Func`2<System.Boolean,System.Object>
struct Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B;
// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct KeyCollection_tA378CC5359EAE5A52276413B644AB21701CF32A6;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct ValueCollection_t1ACC8B8AB7C4F36DA5DA534EF772981729D14C24;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,GooglePlayGames.BasicApi.SignInStatus>[]
struct EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_t768B073D6DC6441E657126959F7E26272CE5A998;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_tCD3678AA32D08217260B609FD2EE7F3E7270D94B;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E;
// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// GooglePlayGames.BasicApi.Events.Event
struct Event_t35DF2427C1F49CB119E897612BB4FABF4D731538;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_tEA3794D00B8FA3D00EA267F2174A0E86BB1E0DF5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_tA303E9DD8E277B5C4706952A74CC2EDE1CD20F9E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t4FF3E7ABAE11AD7C1B7465E061F42B9334FAE061;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t2CB29BC933802DD7667C202D450D171D11F4A2DB;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_t91324CF06A2AC6F7B174C66117F51893B3659DBB;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t131F8FE87633785662CE1446FCC319E9E81D49AA;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3;
// GooglePlayGames.BasicApi.Video.IVideoClient
struct IVideoClient_t3D06A3F47409B59D4104A28D615C5015C16C6E67;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993;
// GooglePlayGames.BasicApi.Player
struct Player_tC6EBE8DB490DB6E864912AB1EA4C847C840AD785;
// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_tC19A28127264E07C834F4E422139AAA21B631BF1;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C;
// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE;
// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D;
// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6;

IL2CPP_EXTERN_C RuntimeClass* Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507;
IL2CPP_EXTERN_C String_t* _stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB;
IL2CPP_EXTERN_C String_t* _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
IL2CPP_EXTERN_C String_t* _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31;
IL2CPP_EXTERN_C String_t* _stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
IL2CPP_EXTERN_C String_t* _stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA;
IL2CPP_EXTERN_C String_t* _stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645;
IL2CPP_EXTERN_C String_t* _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68;
IL2CPP_EXTERN_C String_t* _stringLiteralCE38144E371DD18AF923733A68E7D8175974B938;
IL2CPP_EXTERN_C String_t* _stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37;
IL2CPP_EXTERN_C String_t* _stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28;
IL2CPP_EXTERN_C String_t* _stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com;;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>
struct Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t636D22DEC08114A9642837BF7342E92CC2E490F8* ____entries_1;
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
	KeyCollection_tA378CC5359EAE5A52276413B644AB21701CF32A6* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1ACC8B8AB7C4F36DA5DA534EF772981729D14C24* ____values_8;
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

// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_tCD3678AA32D08217260B609FD2EE7F3E7270D94B  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Events.Event
struct Event_t35DF2427C1F49CB119E897612BB4FABF4D731538  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Events.Event::mId
	String_t* ___mId_0;
	// System.String GooglePlayGames.BasicApi.Events.Event::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Events.Event::mDescription
	String_t* ___mDescription_2;
	// System.String GooglePlayGames.BasicApi.Events.Event::mImageUrl
	String_t* ___mImageUrl_3;
	// System.UInt64 GooglePlayGames.BasicApi.Events.Event::mCurrentCount
	uint64_t ___mCurrentCount_4;
	// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::mVisibility
	int32_t ___mVisibility_5;
};

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* ___mScores_7;
};

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mImage_5;
};

// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;
};

struct PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields
{
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;
};

// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	RuntimeObject* ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;
	// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::mDirection
	int32_t ___mDirection_4;
};

// GooglePlayGames.BasicApi.SignInHelper
struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564  : public RuntimeObject
{
};

struct SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields
{
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::True
	int32_t ___True_0;
	// System.Int32 GooglePlayGames.BasicApi.SignInHelper::False
	int32_t ___False_1;
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

// GooglePlayGames.BasicApi.Video.VideoCapabilities
struct VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsCameraSupported
	bool ___mIsCameraSupported_0;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsMicSupported
	bool ___mIsMicSupported_1;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::mIsWriteStorageSupported
	bool ___mIsWriteStorageSupported_2;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mCaptureModesSupported
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___mCaptureModesSupported_3;
	// System.Boolean[] GooglePlayGames.BasicApi.Video.VideoCapabilities::mQualityLevelsSupported
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___mQualityLevelsSupported_4;
};

// GooglePlayGames.BasicApi.Video.VideoCaptureState
struct VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsCapturing
	bool ___mIsCapturing_0;
	// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::mCaptureMode
	int32_t ___mCaptureMode_1;
	// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::mQualityLevel
	int32_t ___mQualityLevel_2;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsOverlayVisible
	bool ___mIsOverlayVisible_3;
	// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::mIsPaused
	bool ___mIsPaused_4;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder
struct Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mEnableSaveGames
	bool ___mEnableSaveGames_0;
	// System.Collections.Generic.List`1<System.String> GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mScopes
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___mScopes_1;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mHidePopups
	bool ___mHidePopups_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestEmail
	bool ___mRequestEmail_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mRequestIdToken
	bool ___mRequestIdToken_6;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::mAccountName
	String_t* ___mAccountName_7;
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D  : public RuntimeObject
{
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;
};

// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c
struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6  : public RuntimeObject
{
};

struct U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields
{
	// GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9
	U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* ___U3CU3E9_0;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_0
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___U3CU3E9__14_0_1;
	// System.Func`2<System.Boolean,System.String> GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<>9__14_1
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___U3CU3E9__14_1_2;
};

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC 
{
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA 
{
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_4;
};

struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields
{
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyPayload_0;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 
{
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA 
{
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};

// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 
{
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;
};

struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields
{
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___DefaultConfiguration_0;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
};

// GooglePlayGames.BasicApi.Player
struct Player_tC6EBE8DB490DB6E864912AB1EA4C847C840AD785  : public PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993
{
};

// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_tC19A28127264E07C834F4E422139AAA21B631BF1  : public PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// GooglePlayGames.BasicApi.Achievement
struct Achievement_t768B073D6DC6441E657126959F7E26272CE5A998  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;
};

struct Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields
{
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_0;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391 
{
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesScore::mLbId
	String_t* ___mLbId_0;
	// System.Int64 GooglePlayGames.PlayGamesScore::mValue
	int64_t ___mValue_1;
	// System.UInt64 GooglePlayGames.PlayGamesScore::mRank
	uint64_t ___mRank_2;
	// System.String GooglePlayGames.PlayGamesScore::mPlayerId
	String_t* ___mPlayerId_3;
	// System.String GooglePlayGames.PlayGamesScore::mMetadata
	String_t* ___mMetadata_4;
	// System.DateTime GooglePlayGames.PlayGamesScore::mDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___mDate_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746  : public MulticastDelegate_t
{
};

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F  : public MulticastDelegate_t
{
};

// System.Func`2<System.Boolean,System.String>
struct Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___localQueue_7;
};

struct PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields
{
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___sFocusCallbackList_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43  : public RuntimeArray
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
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91  : public RuntimeArray
{
	ALIGN_FIELD (8) Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* m_Items[1];

	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t768B073D6DC6441E657126959F7E26272CE5A998** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042  : public RuntimeArray
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
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* m_Items[1];

	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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

IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled);

// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, int32_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m794A187157001F642B5FE7C534F0E8E86D07B46B_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32Enum>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_m9FA30F53765A643B7740AE4F2D0884EB983E7CA1_gshared (Dictionary_2_t8692D65464844EB649ABD241057B7447F5B945B6* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mFBEAB690C0784153A594218C5017CA665413FCF6_gshared (Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Boolean,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mF95F6B990DE60C893BA70F9FEA36473B95AE3265_gshared (RuntimeObject* ___source0, Func_2_t058E85C490577FC5BDB6A16EAE2C7C9728A3798B* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB (const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::Invoke(T)
inline void Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline (Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mAB0533128A0477EC8C4509F5C037178C7B697717 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::Invoke(T1,T2)
inline void Action_2_Invoke_mEBC67B5525DC5F926D0B31CA1F59A1633F0573A9_inline (Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4* __this, int32_t ___arg10, PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4*, int32_t, PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0*, const RuntimeMethod*))Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
inline void Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.Achievement[]>::Invoke(T)
inline void Action_1_Invoke_mF63F12CE9B293B09B751A8915C843D76C5C08921_inline (Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* __this, AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331*, AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::Invoke(T)
inline void Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline (Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>::Invoke(T)
inline void Action_1_Invoke_m49F6F1412AB4F9E2431DB474E0491EDD938FE8C6_inline (Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>::Invoke(T)
inline void Action_1_Invoke_m571200EC8CC7971DC1D323B321014DD1A3FA7C6A_inline (Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___leaderboardId0, int32_t ___status1, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>::Invoke(T)
inline void Action_1_Invoke_mA5EC4282C4EA23662326D008075C6CC25A4D6EE9_inline (Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* __this, LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49*, LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::.ctor()
inline void List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::ToArray()
inline PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	return ((  PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::Add(T)
inline void List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_inline (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::get_Count()
inline int32_t List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_inline (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_mBBC149EB64BAFE2838EF119A948F121DA44F9D84 (PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m772E7C64FDB7474FD8C1940825C3486B1A8ADD66 (PlayGamesUserProfile_t3635472F2986C7044A583979E973C390039EF993* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___builder0, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_AccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisRuntimeObject_mD7CCFE3DE49A5BD874E39FCE744B398E700192DB_gshared)(___first0, ___second1, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::op_Equality(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___c10, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___c21, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayGamesClientConfiguration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::.ctor()
inline void Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, const RuntimeMethod*))Dictionary_2__ctor_mC9C175D184F142682355D54F32FC231BBDCE6FD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683 (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m95641EE4325D83C122BF87ECF2A0F729A1CF14D3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m794A187157001F642B5FE7C534F0E8E86D07B46B_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,GooglePlayGames.BasicApi.SignInStatus>::get_Item(TKey)
inline int32_t Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88 (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9FA30F53765A643B7740AE4F2D0884EB983E7CA1_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mFBEAB690C0784153A594218C5017CA665413FCF6_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Boolean,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3 (RuntimeObject* ___source0, Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*, const RuntimeMethod*))Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_mF95F6B990DE60C893BA70F9FEA36473B95AE3265_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___builder0, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___description0, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Byte[]>(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
inline void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE*, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC, const RuntimeMethod*))Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline)(__this, ___obj0, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
inline void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E*, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA, const RuntimeMethod*))Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___value0, const RuntimeMethod* method)
{
	return ((  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* (*) (Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_m751A2F442872A81B8644DE193C8074ABCB89554C_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m1CF8F97E7E3F842DC6BF7625557315C4135F3623 (U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA5758E56CB1B23A744CEEAC3EB46E9303FDD0077 (U3CU3Ec__DisplayClass10_0_t308DAC1E9FFE94C54B5BA2D8DAA147AB109CA94D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3* L_0 = ((PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_tD3425E157EAFB597D4C681BA7CF24DFF34FBF1D3_il2cpp_TypeInfo_var))->___instance_4;
		RuntimeObject* L_1 = __this->___action_0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
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
// System.String GooglePlayGames.BasicApi.Achievement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_mBA4EEDB90DB9657D7191B8ADEFCE34D309AEEC8E (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// return string.Format(
		//     "[Achievement] id={0}, name={1}, desc={2}, type={3}, revealed={4}, unlocked={5}, steps={6}/{7}",
		//     mId, mName, mDescription, mIsIncremental ? "INCREMENTAL" : "STANDARD",
		//     mIsRevealed, mIsUnlocked, mCurrentSteps, mTotalSteps);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___mId_1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = __this->___mName_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = __this->___mDescription_7;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = __this->___mIsIncremental_2;
		G_B1_0 = 3;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
		if (L_8)
		{
			G_B2_0 = 3;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
			goto IL_0038;
		}
	}
	{
		G_B3_0 = _stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_003d;
	}

IL_0038:
	{
		G_B3_0 = _stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_003d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = G_B3_3;
		bool L_10 = __this->___mIsRevealed_3;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14 = __this->___mIsUnlocked_4;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___mCurrentSteps_5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___mTotalSteps_6;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B3_4, L_21, NULL);
		V_0 = L_25;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		String_t* L_26 = V_0;
		return L_26;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m81B23637AFD073F39FAB60141A10FFAE465D6200 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_1), (void*)L_0);
		// private bool mIsIncremental = false;
		__this->___mIsIncremental_2 = (bool)0;
		// private bool mIsRevealed = false;
		__this->___mIsRevealed_3 = (bool)0;
		// private bool mIsUnlocked = false;
		__this->___mIsUnlocked_4 = (bool)0;
		// private int mCurrentSteps = 0;
		__this->___mCurrentSteps_5 = 0;
		// private int mTotalSteps = 0;
		__this->___mTotalSteps_6 = 0;
		// private string mDescription = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mDescription_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_7), (void*)L_1);
		// private string mName = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mName_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_8), (void*)L_2);
		// private long mLastModifiedTime = 0;
		__this->___mLastModifiedTime_9 = ((int64_t)0);
		// public Achievement()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m3E31E38C3F1F94636B626B9EC99A6EBEF88643D7 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->___mIsIncremental_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsIncremental; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsIncremental(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsIncremental_mE0B2F14455AC911653C4F10427E725A8D6F67FA3 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mIsIncremental = value; }
		bool L_0 = ___value0;
		__this->___mIsIncremental_2 = L_0;
		// set { mIsIncremental = value; }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_CurrentSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Achievement_get_CurrentSteps_mC4841B348137649A2769B152EAAA9FEEF154172A (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mCurrentSteps; }
		int32_t L_0 = __this->___mCurrentSteps_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCurrentSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_CurrentSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_CurrentSteps_mBD209FCB6B0F266A4F4E41B651CDD747339AD640 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { mCurrentSteps = value; }
		int32_t L_0 = ___value0;
		__this->___mCurrentSteps_5 = L_0;
		// set { mCurrentSteps = value; }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_mF07FF15D5FC2CC49B21D3A2772A45F421A02DE97 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->___mTotalSteps_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTotalSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_TotalSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_TotalSteps_mC13E10BBA2DE40D840F312FD8C315BCBDF5F3491 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { mTotalSteps = value; }
		int32_t L_0 = ___value0;
		__this->___mTotalSteps_6 = L_0;
		// set { mTotalSteps = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsUnlocked_m26D60A8FCFE4DF4B06079E6FA6ACD914503A500F (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsUnlocked; }
		bool L_0 = __this->___mIsUnlocked_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsUnlocked; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsUnlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsUnlocked_mEB08852D181A1C3FFB8440A8C3ECECA01837CF79 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mIsUnlocked = value; }
		bool L_0 = ___value0;
		__this->___mIsUnlocked_4 = L_0;
		// set { mIsUnlocked = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsRevealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsRevealed_m34A5C4AFEBF9B9AA60507A350AA69DF27E06FCDC (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsRevealed; }
		bool L_0 = __this->___mIsRevealed_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsRevealed; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsRevealed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsRevealed_m1AB9537756AAFDBB7F544823FB2547E035803B7D (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mIsRevealed = value; }
		bool L_0 = ___value0;
		__this->___mIsRevealed_3 = L_0;
		// set { mIsRevealed = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m2DAB2B4ADC863F17330852B55FFECDF528BEB090 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Id_m7541D7AB71ED4CA0FE7B716894D8009FBC52DEAB (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mId = value; }
		String_t* L_0 = ___value0;
		__this->___mId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_1), (void*)L_0);
		// set { mId = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Description_mA187FE8F00784BA5AB44346D766C5AC2646B60C2 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.mDescription; }
		String_t* L_0 = __this->___mDescription_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.mDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Description_m8D619A0B747EBF4DD2ED3C0E48F2C61C9A026C2B (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mDescription = value; }
		String_t* L_0 = ___value0;
		__this->___mDescription_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_7), (void*)L_0);
		// set { mDescription = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Name_mE1FB7517DCD805C017A1ABC8FB135CBF7DD8010B (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.mName; }
		String_t* L_0 = __this->___mName_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Name_mD4C370733EC63C9FD8006092F3D60F8EC8788DC9 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mName = value; }
		String_t* L_0 = ___value0;
		__this->___mName_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_8), (void*)L_0);
		// set { mName = value; }
		return;
	}
}
// System.DateTime GooglePlayGames.BasicApi.Achievement::get_LastModifiedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_LastModifiedTime_m557390DD2499668AE50FDDBDDB323FACE20FD116 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return UnixEpoch.AddMilliseconds(mLastModifiedTime); }
		il2cpp_codegen_runtime_class_init_inline(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		int64_t L_0 = __this->___mLastModifiedTime_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&((Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var))->___UnixEpoch_0), ((double)L_0), NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// get { return UnixEpoch.AddMilliseconds(mLastModifiedTime); }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_0;
		return L_2;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_LastModifiedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_LastModifiedTime_m92B802B780D27BF528017337845DCB333D66F66A (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan ts = value - UnixEpoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var))->___UnixEpoch_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_0, L_1, NULL);
		V_0 = L_2;
		// mLastModifiedTime = (long) ts.TotalMilliseconds;
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		__this->___mLastModifiedTime_9 = il2cpp_codegen_cast_double_to_int<int64_t>(L_3);
		// }
		return;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Achievement::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Achievement_get_Points_m75BC401BFA25056C7DF6CDD3B7F2B43365127C92 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mPoints; }
		uint64_t L_0 = __this->___mPoints_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPoints; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Points(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Points_mBCC2F53C06A6A7661B10A3EDA768E917F2824431 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { mPoints = value; }
		uint64_t L_0 = ___value0;
		__this->___mPoints_10 = L_0;
		// set { mPoints = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_RevealedImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_RevealedImageUrl_mA487A6EB9D2DE579E68EFAA7F95B156E3A822C3D (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mRevealedImageUrl; }
		String_t* L_0 = __this->___mRevealedImageUrl_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRevealedImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_RevealedImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_RevealedImageUrl_m1856B163BFE62F501758D4F7AF9951EBFB375DDA (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mRevealedImageUrl = value; }
		String_t* L_0 = ___value0;
		__this->___mRevealedImageUrl_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRevealedImageUrl_11), (void*)L_0);
		// set { mRevealedImageUrl = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_UnlockedImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_UnlockedImageUrl_m6D4B95EE65D670898A20E22C40A8AD70FCDF4B40 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mUnlockedImageUrl; }
		String_t* L_0 = __this->___mUnlockedImageUrl_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mUnlockedImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_UnlockedImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_UnlockedImageUrl_m8E9F48076932E45D54A5F2A9B40D2B62BEDB6C27 (Achievement_t768B073D6DC6441E657126959F7E26272CE5A998* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mUnlockedImageUrl = value; }
		String_t* L_0 = ___value0;
		__this->___mUnlockedImageUrl_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUnlockedImageUrl_12), (void*)L_0);
		// set { mUnlockedImageUrl = value; }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__cctor_mD391B167C2717391B28AC255B1C0CAF60E698FCB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime UnixEpoch =
		//     new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_t768B073D6DC6441E657126959F7E26272CE5A998_il2cpp_TypeInfo_var))->___UnixEpoch_0 = L_0;
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
// System.Boolean GooglePlayGames.BasicApi.CommonTypesUtil::StatusIsSuccess(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTypesUtil_StatusIsSuccess_m8FD3A3E9B50AC822E3BD8B62D55B31D3F4A7F8DB (int32_t ___status0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return ((int) status) > 0;
		int32_t L_0 = ___status0;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.CommonTypesUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTypesUtil__ctor_m5556F17EE788A9F22FB69AC612E9595087E4479A (CommonTypesUtil_tCD3678AA32D08217260B609FD2EE7F3E7270D94B* __this, const RuntimeMethod* method) 
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
// System.Void GooglePlayGames.BasicApi.DummyClient::Authenticate(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_Authenticate_m1F4FF8F183042E70FCD345EDCBC38AA5E07E322E (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, bool ___silent0, Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback(SignInStatus.Failed);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_2, 7, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.DummyClient::IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DummyClient_IsAuthenticated_m404077DC8D6B78E1A56DC30F39C618B890E9F858 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return false;
		V_0 = (bool)0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SignOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SignOut_m94E8343C7C5725F0991902D5630100585782B02D (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetIdToken_m6820CB506BD5DF442809461CDC39A9D59595C0F0 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		V_0 = (String_t*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserId_mF613B6B07626F97DFD783CCD9C4C3511F7A1EBD2 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE38144E371DD18AF923733A68E7D8175974B938);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return "DummyID";
		V_0 = _stringLiteralCE38144E371DD18AF923733A68E7D8175974B938;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetServerAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetServerAuthCode_m7459DBFA330F14C898A08F3D85802053EF7C8457 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		V_0 = (String_t*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetAnotherServerAuthCode(System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetAnotherServerAuthCode_m963F51A3B3ECDB178755588718B40B5DDB1E9BA7 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, bool ___reAuthenticateIfNeeded0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback1, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// callback(null);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___callback1;
		NullCheck(L_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_0, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserEmail_mEFB3DF9D77783D0B99E9320D4A5DC6B9353F3496 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetPlayerStats_mF62B3A74A122093822CC7FE4193DFD4D0B05DC28 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// callback(CommonStatusCodes.ApiNotConnected, new PlayerStats());
		Action_2_tFFF37CE324EDD180FC03E9E73A1F2112A7B0E8A4* L_0 = ___callback0;
		PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* L_1 = (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0*)il2cpp_codegen_object_new(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlayerStats__ctor_mAB0533128A0477EC8C4509F5C037178C7B697717(L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_mEBC67B5525DC5F926D0B31CA1F59A1633F0573A9_inline(L_0, ((int32_t)17), L_1, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserDisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserDisplayName_mECA817DC3C06372C5E5F13FC0FE322846678E9F8 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return "Player";
		V_0 = _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserImageUrl_m1E322CD2ACAF1CCD73E22888E2F3E5E783F3B07B (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		V_0 = (String_t*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadUsers_m02BEFC5451C96C1E6E8646144C35A7102248C463 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIds0, Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(null);
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline(L_2, (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadAchievements_mF4A8A78ACB9CA577475BEB0762881A70467ABD91 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(null);
		Action_1_t57F5C0A42155108CC7A725DFB9E146C13D1F0331* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_mF63F12CE9B293B09B751A8915C843D76C5C08921_inline(L_2, (AchievementU5BU5D_tA5A9ED33C355C368A35B436AE400DD8D26368F91*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_UnlockAchievement_mC170300CA443CBFE1E878BBF7DF0F56397A6E1F0 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___achId0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_RevealAchievement_mE52BA8A6208DEE00BAC5DA037B91F6230D9421B9 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___achId0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_IncrementAchievement_m2374559DD79A436F0D239412BE35686AADA96233 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___achId0, int32_t ___steps1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SetStepsAtLeast_m2C33A467E6694C177839AE365952911510810B6D (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___achId0, int32_t ___steps1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowAchievementsUI_m27409F4973EDE41516DF8FAAA452680A65E1FC0E (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::AskForLoadFriendsResolution(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_AskForLoadFriendsResolution_mB7CBB2A11400C0FA9CE1452E481315AE9CFAE1D9 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LoadFriendsStatus GooglePlayGames.BasicApi.DummyClient::GetLastLoadFriendsStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyClient_GetLastLoadFriendsStatus_m9007D4B3C4D988A9BB992ACF77C605C480CBC3C7 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return LoadFriendsStatus.Unknown;
		V_0 = 0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Int32,System.Boolean,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadFriends_m1F515D11CFBFB0E87BAB90B8EC67F221E9CAF296 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, int32_t ___pageSize0, bool ___forceReload1, Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(LoadFriendsStatus.Unknown);
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m49F6F1412AB4F9E2431DB474E0491EDD938FE8C6_inline(L_2, 0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreFriends(System.Int32,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadMoreFriends_m34A350FF0D2C2E701BBAB57DE76914D68E3C8A85 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, int32_t ___pageSize0, Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(LoadFriendsStatus.Unknown);
		Action_1_t49ED8E06F9568BFD20DAA2EF713F2358001D0D0F* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m49F6F1412AB4F9E2431DB474E0491EDD938FE8C6_inline(L_2, 0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowCompareProfileWithAlternativeNameHintsUI(System.String,System.String,System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowCompareProfileWithAlternativeNameHintsUI_mBF604084F6CB7548DF20851DF77009FA8748F581 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___userId0, String_t* ___otherPlayerInGameName1, String_t* ___currentPlayerInGameName2, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___callback3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___callback3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_2 = ___callback3;
		NullCheck(L_2);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetFriendsListVisibility(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetFriendsListVisibility_m06B19CDE0C7A04E8FFDBD49D7F0CFDF1483FED7D (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, bool ___forceReload0, Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null) {
		Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(FriendsListVisibilityStatus.Unknown);
		Action_1_tB1476A60C093983F1E3EE19C79C4BAE674D9D50C* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m571200EC8CC7971DC1D323B321014DD1A3FA7C6A_inline(L_2, 0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowLeaderboardUI_mA309BBD6060334F16AEB9A282119FB73052BCD4C (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t61781AF9B693CC68C2FE9E74A6A316E65A8C2746* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m8A1932E855F001BC8396CEEFB5730A61D5564BF9_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.DummyClient::LeaderboardMaxResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyClient_LeaderboardMaxResults_m52DD7B235C752D5CE9CA1CEF206D86BA4D1AF90A (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return 25;
		V_0 = ((int32_t)25);
		goto IL_0006;
	}

IL_0006:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadScores_m33F4A75D4480A300B2BF7605655BA27FE93A150F (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* ___callback5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_0 = ___callback5;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// callback(new LeaderboardScoreData(
		//     leaderboardId,
		//     ResponseStatus.LicenseCheckFailed));
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_2 = ___callback5;
		String_t* L_3 = ___leaderboardId0;
		LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* L_4 = (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1*)il2cpp_codegen_object_new(LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2(L_4, L_3, (-1), NULL);
		NullCheck(L_2);
		Action_1_Invoke_mA5EC4282C4EA23662326D008075C6CC25A4D6EE9_inline(L_2, L_4, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadMoreScores_m7CB299C28AED02AEA63EF3139AA71BA90E997653 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___token0, int32_t ___rowCount1, Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// callback(new LeaderboardScoreData(
		//     token.LeaderboardId,
		//     ResponseStatus.LicenseCheckFailed));
		Action_1_tF2D00CF66C047471CC46CE67E783325DB8431E49* L_2 = ___callback2;
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_3 = ___token0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE(L_3, NULL);
		LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* L_5 = (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1*)il2cpp_codegen_object_new(LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2(L_5, L_4, (-1), NULL);
		NullCheck(L_2);
		Action_1_Invoke_mA5EC4282C4EA23662326D008075C6CC25A4D6EE9_inline(L_2, L_5, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SubmitScore_m6673F78E84A98523E9AD83252F0689BC669490AC (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___leaderboardId0, int64_t ___score1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SubmitScore_m3FEAE2EC8761232E1D5122D3AB080D6842349E08 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, String_t* ___leaderboardId0, int64_t ___score1, String_t* ___metadata2, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback3;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::RequestPermissions(System.String[],System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_RequestPermissions_mF96C919D2AE870D536A15DF98877DB10D5609387 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___scopes0, Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// if (callback != null)
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(SignInStatus.Failed);
		Action_1_tB5B8487B6AD2C561AF4D9F4F12F1B297B02C5104* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_mD568C7ACA3FFC147CFCDFEB6D852702CE1E846A7_inline(L_2, 7, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.DummyClient::HasPermissions(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DummyClient_HasPermissions_mFC28C83A220A21AAAA4A9C904DF4FC833DC0617C (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___scopes0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return false;
		V_0 = (bool)0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.BasicApi.DummyClient::GetSavedGameClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetSavedGameClient_mA97C4B1583994BAE53212859B2D8E3760CD68862 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		V_0 = (RuntimeObject*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.BasicApi.DummyClient::GetEventsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetEventsClient_mC6A16C372F31F33F27A6DD03EEBFD5A601407550 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		V_0 = (RuntimeObject*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.Video.IVideoClient GooglePlayGames.BasicApi.DummyClient::GetVideoClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetVideoClient_m2762462F20D9579E180955F3D9850F1A828ACFC0 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return null;
		V_0 = (RuntimeObject*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadFriends_m36D9C43DA4F4F7FF120E21F603EEE5EE5B3AC5AF (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// callback(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback0;
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.BasicApi.DummyClient::GetFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* DummyClient_GetFriends_m3796A4A6E4E924FC631B60E701428703B0198A8E (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// return new IUserProfile[0];
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)(IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)SZArrayNew(IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SetGravityForPopups(GooglePlayGames.BasicApi.Gravity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SetGravityForPopups_mE53CCBD3274BD4465C648E50D714C7722EE11F28 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, int32_t ___gravity0, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB(NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LogUsage_mC95A2212EDC16B0982E4024B8A0143F1E75AEBDB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Received method call on DummyClient - using stub implementation.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient__ctor_m4BA43F081AE5F10436AB3A716F60C8E8271BE2D1 (DummyClient_tE11441D9F7B580BC2586F617725141AEA762621E* __this, const RuntimeMethod* method) 
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
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mD05AFBA83BB41B1BBBE60C47F4FE93F0A61DA504 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___leaderboardId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScores = new List<PlayGamesScore>();
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*)il2cpp_codegen_object_new(List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D(L_0, List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		__this->___mScores_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScores_7), (void*)L_0);
		// internal LeaderboardScoreData(string leaderboardId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = leaderboardId;
		String_t* L_1 = ___leaderboardId0;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_mBB42EC9839533ED8A9B5F4BA8258A3E59A87D9C2 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___leaderboardId0, int32_t ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScores = new List<PlayGamesScore>();
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = (List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7*)il2cpp_codegen_object_new(List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D(L_0, List_1__ctor_mCB3470226A85E8B77AB0C75918EBD7015C6C094D_RuntimeMethod_var);
		__this->___mScores_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScores_7), (void*)L_0);
		// internal LeaderboardScoreData(string leaderboardId, ResponseStatus status)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = leaderboardId;
		String_t* L_1 = ___leaderboardId0;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mStatus = status;
		int32_t L_2 = ___status1;
		__this->___mStatus_1 = L_2;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.LeaderboardScoreData::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeaderboardScoreData_get_Valid_m1465ED0DC3111B9D91A5FDEE99B1AE2C92496846 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return mStatus == ResponseStatus.Success ||
		//        mStatus == ResponseStatus.SuccessWithStale;
		int32_t L_0 = __this->___mStatus_1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___mStatus_1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_get_Status_m1BBD2C071F178ED54E12983867B1CA85BCFEC9EF (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Status(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Status_m9E9BF09504EF2F4AB69D0FD27651B4ED07B16559 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mStatus = value; }
		int32_t L_0 = ___value0;
		__this->___mStatus_1 = L_0;
		// internal set { mStatus = value; }
		return;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::get_ApproximateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LeaderboardScoreData_get_ApproximateCount_m9B623727B19DCDAD437A446C816EB7BBED07F83A (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mApproxCount; }
		uint64_t L_0 = __this->___mApproxCount_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mApproxCount; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_ApproximateCount(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_ApproximateCount_m101D4006195679402B771F5A4EC51C44D0352F52 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mApproxCount = value; }
		uint64_t L_0 = ___value0;
		__this->___mApproxCount_2 = L_0;
		// internal set { mApproxCount = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Title_m367409AD344BA6352D83E348DD71DD575F05F943 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mTitle; }
		String_t* L_0 = __this->___mTitle_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTitle; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Title_m7B6CF08A660B53CA61D21088EB33061DED35078B (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mTitle = value; }
		String_t* L_0 = ___value0;
		__this->___mTitle_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTitle_3), (void*)L_0);
		// internal set { mTitle = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Id_mB56B7158F68410BE0C0C8DE83EC8F7EA161D580D (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Id_mE882D7408522E45EE5FAB0D93E3E9A62819FDD43 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mId = value; }
		String_t* L_0 = ___value0;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// internal set { mId = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::get_PlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaderboardScoreData_get_PlayerScore_mAAD8C397BC13D133101B8372E5F8D54E36A44D12 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_0 = __this->___mPlayerScore_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PlayerScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_PlayerScore_m120B2EF8BC2F619DBB0008B7AEF2619E40DC9B13 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mPlayerScore = value; }
		RuntimeObject* L_0 = ___value0;
		__this->___mPlayerScore_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPlayerScore_4), (void*)L_0);
		// internal set { mPlayerScore = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* LeaderboardScoreData_get_Scores_m3D99B12820227A8814806A8F49D0828F23BBC7A8 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_0 = NULL;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_1 = NULL;
	{
		// get { return mScores.ToArray(); }
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = __this->___mScores_7;
		NullCheck(L_0);
		PlayGamesScoreU5BU5D_tA464F6E9BA985803BA144F6A1D9A218F7D113644* L_1;
		L_1 = List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF(L_0, List_1_ToArray_mD540DAEB2CF465E65A8DA1EF80BE951B85245FDF_RuntimeMethod_var);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_1;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// get { return mScores.ToArray(); }
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_3 = V_1;
		return L_3;
	}
}
// System.Int32 GooglePlayGames.BasicApi.LeaderboardScoreData::AddScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_AddScore_m68C7EF3D5D04BE529C543CCEF9AB5FF28F6C5501 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// mScores.Add(score);
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_0 = __this->___mScores_7;
		PlayGamesScore_t4C69766866E104FEFC16BF3B5395AEB077B7BFEB* L_1 = ___score0;
		NullCheck(L_0);
		List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_inline(L_0, L_1, List_1_Add_m4DE47BE4F44E6F08320036E35C59B499C0770DCA_RuntimeMethod_var);
		// return mScores.Count;
		List_1_t335027662CD4724D24DE463991BB18F1FAF7E3E7* L_2 = __this->___mScores_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_inline(L_2, List_1_get_Count_m8C77862B10C380CC49C765B455E8280EB944FB4B_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_PrevPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* LeaderboardScoreData_get_PrevPageToken_mBE87B3D4972B143FE151B1C3D8F74ADD60BC9647 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* V_0 = NULL;
	{
		// get { return mPrevPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = __this->___mPrevPage_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPrevPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PrevPageToken(GooglePlayGames.BasicApi.ScorePageToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_PrevPageToken_m4CD348FF9B4BAF59A45D7CEDFB1278589E14F0C5 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mPrevPage = value; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = ___value0;
		__this->___mPrevPage_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPrevPage_5), (void*)L_0);
		// internal set { mPrevPage = value; }
		return;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_NextPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* LeaderboardScoreData_get_NextPageToken_mB1461DDE84A1FD1FD9FA2B20E36F02A38278FDFD (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* V_0 = NULL;
	{
		// get { return mNextPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = __this->___mNextPage_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNextPage; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_NextPageToken(GooglePlayGames.BasicApi.ScorePageToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_NextPageToken_mB8391BDA87DADB759D169DDA9E2E457BAA36FE1D (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mNextPage = value; }
		ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* L_0 = ___value0;
		__this->___mNextPage_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNextPage_6), (void*)L_0);
		// internal set { mNextPage = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_ToString_mCA57A14C368BFEDFD26419D1C6CD0CA26EA380A5 (LeaderboardScoreData_t5420958354A3EC0D0569E862CE9EF4B5FEC5A9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("[LeaderboardScoreData: mId={0}, " +
		//                      " mStatus={1}, mApproxCount={2}, mTitle={3}]",
		//     mId, mStatus, mApproxCount, mTitle);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___mId_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		int32_t L_4 = __this->___mStatus_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(ResponseStatus_tEF124423F3DC8E07DA6066B028DF979F16A335CD_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint64_t L_8 = __this->___mApproxCount_2;
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = __this->___mTitle_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37, L_11, NULL);
		V_0 = L_13;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
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
// System.Void GooglePlayGames.BasicApi.Player::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m3B016F0520DFB13A09C07E34756204852CB9658C (Player_tC6EBE8DB490DB6E864912AB1EA4C847C840AD785* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method) 
{
	{
		// : base(displayName, playerId, avatarUrl)
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___playerId1;
		String_t* L_2 = ___avatarUrl2;
		PlayGamesUserProfile__ctor_mBBC149EB64BAFE2838EF119A948F121DA44F9D84(__this, L_0, L_1, L_2, NULL);
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
// System.Void GooglePlayGames.BasicApi.PlayerProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProfile__ctor_m5C73E81FD17D0FC4A909EA706DC0E23E9C899031 (PlayerProfile_tC19A28127264E07C834F4E422139AAA21B631BF1* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method) 
{
	{
		// internal PlayerProfile(string displayName, string playerId, string avatarUrl, bool isFriend) : base(displayName,
		//     playerId, avatarUrl, isFriend)
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___playerId1;
		String_t* L_2 = ___avatarUrl2;
		bool L_3 = ___isFriend3;
		PlayGamesUserProfile__ctor_m772E7C64FDB7474FD8C1940825C3486B1A8ADD66(__this, L_0, L_1, L_2, L_3, NULL);
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
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m296F667E450996BAD42A626ACE0F3A63740F132F (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, int32_t ___numberOfPurchases0, float ___avgSessionLength1, int32_t ___daysSinceLastPlayed2, int32_t ___numberOfSessions3, float ___sessPercentile4, float ___spendPercentile5, float ___spendProbability6, float ___churnProbability7, float ___highSpenderProbability8, float ___totalSpendNext28Days9, const RuntimeMethod* method) 
{
	{
		// public PlayerStats(
		//     int numberOfPurchases,
		//     float avgSessionLength,
		//     int daysSinceLastPlayed,
		//     int numberOfSessions,
		//     float sessPercentile,
		//     float spendPercentile,
		//     float spendProbability,
		//     float churnProbability,
		//     float highSpenderProbability,
		//     float totalSpendNext28Days)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mValid = true;
		__this->___mValid_1 = (bool)1;
		// mNumberOfPurchases = numberOfPurchases;
		int32_t L_0 = ___numberOfPurchases0;
		__this->___mNumberOfPurchases_2 = L_0;
		// mAvgSessionLength = avgSessionLength;
		float L_1 = ___avgSessionLength1;
		__this->___mAvgSessionLength_3 = L_1;
		// mDaysSinceLastPlayed = daysSinceLastPlayed;
		int32_t L_2 = ___daysSinceLastPlayed2;
		__this->___mDaysSinceLastPlayed_4 = L_2;
		// mNumberOfSessions = numberOfSessions;
		int32_t L_3 = ___numberOfSessions3;
		__this->___mNumberOfSessions_5 = L_3;
		// mSessPercentile = sessPercentile;
		float L_4 = ___sessPercentile4;
		__this->___mSessPercentile_6 = L_4;
		// mSpendPercentile = spendPercentile;
		float L_5 = ___spendPercentile5;
		__this->___mSpendPercentile_7 = L_5;
		// mSpendProbability = spendProbability;
		float L_6 = ___spendProbability6;
		__this->___mSpendProbability_8 = L_6;
		// mChurnProbability = churnProbability;
		float L_7 = ___churnProbability7;
		__this->___mChurnProbability_9 = L_7;
		// mHighSpenderProbability = highSpenderProbability;
		float L_8 = ___highSpenderProbability8;
		__this->___mHighSpenderProbability_10 = L_8;
		// mTotalSpendNext28Days = totalSpendNext28Days;
		float L_9 = ___totalSpendNext28Days9;
		__this->___mTotalSpendNext28Days_11 = L_9;
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mAB0533128A0477EC8C4509F5C037178C7B697717 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerStats()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mValid = false;
		__this->___mValid_1 = (bool)0;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_get_Valid_m069D6268F8132B50F038BA2F4DCF3721D0DD240D (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mValid; }
		bool L_0 = __this->___mValid_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mValid; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->___mNumberOfPurchases_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNumberOfPurchases; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->___mAvgSessionLength_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mAvgSessionLength; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->___mDaysSinceLastPlayed_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->___mNumberOfSessions_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNumberOfSessions; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSessPercentile; }
		float L_0 = __this->___mSessPercentile_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSessPercentile; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->___mSpendPercentile_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSpendPercentile; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendProbability_mE441AF4945A4570035A7186270672FC1589275D1 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSpendProbability; }
		float L_0 = __this->___mSpendProbability_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSpendProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mChurnProbability; }
		float L_0 = __this->___mChurnProbability_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mChurnProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->___mHighSpenderProbability_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mHighSpenderProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->___mTotalSpendNext28Days_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTotalSpendNext28Days; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfPurchases_m6104D3FC846892C7C5903826325EA74A64E3C780 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return NumberOfPurchases != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfPurchases_m63376EAF42E81A9E6770766C616F439744F2BCD7(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasAvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasAvgSessionLength_m06A8934E940FD350F369D2E369EAE3D2AD7319BB (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return AvgSessionLength != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_AvgSessionLength_mDD18FF98D57A65C60B36643DE6E6A08842607F57(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasDaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasDaysSinceLastPlayed_m158E9E50CDAA3B6E60ECF3517ABA52F1854D6E1C (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return DaysSinceLastPlayed != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_DaysSinceLastPlayed_mAEEE54823EF78F7509BBAB679E2CA0F7D0AFB9D6(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfSessions_mEED0EDC5C752AC3C3631D31AF44808DAEC96A831 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return NumberOfSessions != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfSessions_m59395801E7650A2269E650024FAD49CA6457257C(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSessPercentile_mB32886A243A07D014FC214296ED5E74B000CF887 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return SessPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SessPercentile_mEB8241DCB1E9AC45348EFFB82029175C07222CF9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSpendPercentile_mFC4CD82E94D2EC5D8659F82457070D6FBC08A6A9 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return SpendPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SpendPercentile_m5B64C28EE6CFD0ECB26A61EA37224D143DB20ECF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasChurnProbability_m44F42BA7E3E9314B9B639CA4FE876B8BB59A9F77 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return ChurnProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_ChurnProbability_m9FF435104876276688EBDFE66EA845FF8F27613E(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasHighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasHighSpenderProbability_mF9F35CBFE8E687D607F8779262EEB5D4EA710F21 (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return HighSpenderProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_HighSpenderProbability_m43286A65BE883B43C5F640FFCFED1EFF224F8413(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasTotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasTotalSpendNext28Days_mAC8698E296AD681149BF73B8690D7D25614222ED (PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return TotalSpendNext28Days != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_TotalSpendNext28Days_m49EB7D2BB2924B2572004A0C677168ECC32F4604(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__cctor_m893CF5F4D151A77E4E2A13037193E5D8A6BEBAC9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float UNSET_VALUE = -1.0f;
		((PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t072CF427F80E813FB4BDA0C434DAB23618171EB0_il2cpp_TypeInfo_var))->___UNSET_VALUE_0 = (-1.0f);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_pinvoke(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_pinvoke_back(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke& marshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_pinvoke_cleanup(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_com(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com& marshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_com_back(const PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com& marshaled, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1& unmarshaled)
{
	Exception_t* ___mScopes_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mScopes' of type 'PlayGamesClientConfiguration'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mScopes_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.PlayGamesClientConfiguration
IL2CPP_EXTERN_C void PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshal_com_cleanup(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.ctor(GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___builder0, const RuntimeMethod* method) 
{
	{
		// this.mEnableSavedGames = builder.HasEnableSaveGames();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = ___builder0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8(L_0, NULL);
		__this->___mEnableSavedGames_1 = L_1;
		// this.mScopes = builder.getScopes();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_2 = ___builder0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6(L_2, NULL);
		__this->___mScopes_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_2), (void*)L_3);
		// this.mHidePopups = builder.IsHidingPopups();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_4 = ___builder0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527(L_4, NULL);
		__this->___mHidePopups_5 = L_5;
		// this.mRequestAuthCode = builder.IsRequestingAuthCode();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_6 = ___builder0;
		NullCheck(L_6);
		bool L_7;
		L_7 = Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43(L_6, NULL);
		__this->___mRequestAuthCode_3 = L_7;
		// this.mForceRefresh = builder.IsForcingRefresh();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_8 = ___builder0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691(L_8, NULL);
		__this->___mForceRefresh_4 = L_9;
		// this.mRequestEmail = builder.IsRequestingEmail();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_10 = ___builder0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C(L_10, NULL);
		__this->___mRequestEmail_6 = L_11;
		// this.mRequestIdToken = builder.IsRequestingIdToken();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_12 = ___builder0;
		NullCheck(L_12);
		bool L_13;
		L_13 = Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB(L_12, NULL);
		__this->___mRequestIdToken_7 = L_13;
		// this.mAccountName = builder.GetAccountName();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_14 = ___builder0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9(L_14, NULL);
		__this->___mAccountName_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_8), (void*)L_15);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E_AdjustorThunk (RuntimeObject* __this, Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* ___builder0, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mEnableSavedGames; }
		bool L_0 = __this->___mEnableSavedGames_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mEnableSavedGames; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mHidePopups; }
		bool L_0 = __this->___mHidePopups_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mHidePopups; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRequestAuthCode; }
		bool L_0 = __this->___mRequestAuthCode_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRequestAuthCode; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mForceRefresh; }
		bool L_0 = __this->___mForceRefresh_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mForceRefresh; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRequestEmail; }
		bool L_0 = __this->___mRequestEmail_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRequestEmail; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mRequestIdToken; }
		bool L_0 = __this->___mRequestIdToken_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRequestIdToken; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_IsRequestingIdToken_mE305765C0F590975EF7F766BD014B65F0CAC8592(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_AccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mAccountName; }
		String_t* L_0 = __this->___mAccountName_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mAccountName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F(_thisAdjusted, method);
	return _returnValue;
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		// get { return mScopes; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___mScopes_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mScopes; }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* _returnValue;
	_returnValue = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::op_Equality(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___c10, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___c21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B8_0 = 0;
	{
		// if (c1.EnableSavedGames != c2.EnableSavedGames ||
		//     c1.IsForcingRefresh != c2.IsForcingRefresh ||
		//     c1.IsHidingPopups != c2.IsHidingPopups ||
		//     c1.IsRequestingEmail != c2.IsRequestingEmail ||
		//     c1.IsRequestingAuthCode != c2.IsRequestingAuthCode ||
		//     !c1.Scopes.SequenceEqual(c2.Scopes) ||
		//     c1.AccountName != c2.AccountName)
		bool L_0;
		L_0 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7((&___c10), NULL);
		bool L_1;
		L_1 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7((&___c21), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_2;
		L_2 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF((&___c10), NULL);
		bool L_3;
		L_3 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF((&___c21), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_4;
		L_4 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF((&___c10), NULL);
		bool L_5;
		L_5 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF((&___c21), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_6;
		L_6 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E((&___c10), NULL);
		bool L_7;
		L_7 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E((&___c21), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_007b;
		}
	}
	{
		bool L_8;
		L_8 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B((&___c10), NULL);
		bool L_9;
		L_9 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B((&___c21), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35((&___c10), NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35((&___c21), NULL);
		bool L_12;
		L_12 = Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1((RuntimeObject*)L_10, (RuntimeObject*)L_11, Enumerable_SequenceEqual_TisString_t_mC666A2A6E1CE42208D3FE73C39D65385BB6CD5F1_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_13;
		L_13 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F((&___c10), NULL);
		String_t* L_14;
		L_14 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F((&___c21), NULL);
		bool L_15;
		L_15 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_13, L_14, NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_007c;
	}

IL_007b:
	{
		G_B8_0 = 1;
	}

IL_007c:
	{
		V_0 = (bool)G_B8_0;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0085;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0089;
	}

IL_0085:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0089;
	}

IL_0089:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::op_Inequality(GooglePlayGames.BasicApi.PlayGamesClientConfiguration,GooglePlayGames.BasicApi.PlayGamesClientConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_op_Inequality_mF5D78470A1317A51373FBE32ABAD6A3F3B008BE0 (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___c10, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 ___c21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return !(c1 == c2);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0 = ___c10;
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1 = ___c21;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayGamesClientConfiguration::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// hash = hash * 31 + EnableSavedGames.GetHashCode();
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = PlayGamesClientConfiguration_get_EnableSavedGames_mFB9A6B2BE88AF1D4C07A802E0480404B5367E6F7(__this, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)31))), L_2));
		// hash = hash * 31 + IsForcingRefresh.GetHashCode();
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = PlayGamesClientConfiguration_get_IsForcingRefresh_m798F4BC158992FAE6F63510F46DD7CB7D8BDB0AF(__this, NULL);
		V_1 = L_4;
		int32_t L_5;
		L_5 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)31))), L_5));
		// hash = hash * 31 + IsHidingPopups.GetHashCode();
		int32_t L_6 = V_0;
		bool L_7;
		L_7 = PlayGamesClientConfiguration_get_IsHidingPopups_m67FA111F6A22BE864408FA00D21CDC0CC6B2AFAF(__this, NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)31))), L_8));
		// hash = hash * 31 + IsRequestingEmail.GetHashCode();
		int32_t L_9 = V_0;
		bool L_10;
		L_10 = PlayGamesClientConfiguration_get_IsRequestingEmail_m9D7B549E29B0B87E916BA54CE821051FF9B3BA8E(__this, NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_9, ((int32_t)31))), L_11));
		// hash = hash * 31 + IsRequestingAuthCode.GetHashCode();
		int32_t L_12 = V_0;
		bool L_13;
		L_13 = PlayGamesClientConfiguration_get_IsRequestingAuthCode_m4A9468E95D796411D56560F7438078C50898BD4B(__this, NULL);
		V_1 = L_13;
		int32_t L_14;
		L_14 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)31))), L_14));
		// hash = hash * 31 + Scopes.GetHashCode();
		int32_t L_15 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = PlayGamesClientConfiguration_get_Scopes_m3E31678A5A4574768CA524866E7C6ABE9DD69C35(__this, NULL);
		NullCheck((RuntimeObject*)L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject*)L_16);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_15, ((int32_t)31))), L_17));
		// hash = hash * 31 + AccountName.GetHashCode();
		int32_t L_18 = V_0;
		String_t* L_19;
		L_19 = PlayGamesClientConfiguration_get_AccountName_mD35C01C2AEF484A7033CAFBAA700ACAE06EB8B6F(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_19);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_18, ((int32_t)31))), L_20));
		// return hash;
		int32_t L_21 = V_0;
		V_2 = L_21;
		goto IL_008f;
	}

IL_008f:
	{
		// }
		int32_t L_22 = V_2;
		return L_22;
	}
}
IL2CPP_EXTERN_C  int32_t PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = PlayGamesClientConfiguration_GetHashCode_mD580942F4C1A2B4C483405FF8567EB2E6CB57D9E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B (PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return this == (PlayGamesClientConfiguration) obj;
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0 = (*(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)__this);
		RuntimeObject* L_1 = ___obj0;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayGamesClientConfiguration_op_Equality_mE3549CD204B82DCA9D562D29FD699F1CF0A534FE(L_0, ((*(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*)UnBox(L_1, PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var)))), NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayGamesClientConfiguration_Equals_m66F8920BD37033DBA9757EBA43A919FD1B3E1C1B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesClientConfiguration__cctor_mF606C40BBCFA8A5BFF84CD11B68CBAB52CAE7BD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly PlayGamesClientConfiguration DefaultConfiguration =
		//     new Builder()
		//         .Build();
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8*)il2cpp_codegen_object_new(Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894(L_0, NULL);
		NullCheck(L_0);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1;
		L_1 = Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6(L_0, NULL);
		((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var))->___DefaultConfiguration_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var))->___DefaultConfiguration_0))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1_il2cpp_TypeInfo_var))->___DefaultConfiguration_0))->___mAccountName_8), (void*)NULL);
		#endif
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
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableSavedGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableSavedGames_mB3BFCFC0D31D53C06EF9C78D767C94C7C55A7D72 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mEnableSaveGames = true;
		__this->___mEnableSaveGames_0 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::EnableHidePopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_EnableHidePopups_m8AF1EFEE2F021B5F02598B642BDF61E97BC640DD (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mHidePopups = true;
		__this->___mHidePopups_2 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestServerAuthCode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestServerAuthCode_m35297CBA0854EFF0879A608DD134A6701C09E345 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, bool ___forceRefresh0, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mRequestAuthCode = true;
		__this->___mRequestAuthCode_3 = (bool)1;
		// mForceRefresh = forceRefresh;
		bool L_0 = ___forceRefresh0;
		__this->___mForceRefresh_4 = L_0;
		// return this;
		V_0 = __this;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestEmail_m4CFF58538C86C36043D89E3B7351BFA17BF29C19 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mRequestEmail = true;
		__this->___mRequestEmail_5 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::RequestIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_RequestIdToken_mE8372548261C229559A68F0D86AAACEC1308262C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mRequestIdToken = true;
		__this->___mRequestIdToken_6 = (bool)1;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::SetAccountName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_SetAccountName_m399973F9978DAF5EACCF08A2645298476C051B16 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___accountName0, const RuntimeMethod* method) 
{
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_0 = NULL;
	{
		// mAccountName = accountName;
		String_t* L_0 = ___accountName0;
		__this->___mAccountName_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_7), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::AddOauthScope(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* Builder_AddOauthScope_mBF88B5A77857E19F5AEB9971833A03BD797FDD4A (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, String_t* ___scope0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* V_1 = NULL;
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		V_0 = (bool)((((RuntimeObject*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (mScopes == null) mScopes = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___mScopes_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_1), (void*)L_2);
	}

IL_0019:
	{
		// mScopes.Add(scope);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___mScopes_1;
		String_t* L_4 = ___scope0;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// return this;
		V_1 = __this;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* L_5 = V_1;
		return L_5;
	}
}
// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 Builder_Build_m4625B07468AEBAB946A4350DAD11D6429A11B8C6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new PlayGamesClientConfiguration(this);
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayGamesClientConfiguration__ctor_mC50094F5BA2E14F1DEAEF4F3755BBC5DA331D86E((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		PlayGamesClientConfiguration_tFC50AECD7C9254DCD4E5CD2771B362212F4E62A1 L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::HasEnableSaveGames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_HasEnableSaveGames_mD1197FC3DA3E55B6635C3E9223CC5C400968D6F8 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mEnableSaveGames;
		bool L_0 = __this->___mEnableSaveGames_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingAuthCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingAuthCode_m4A7D305984B441CF766B6A698D92FADA754B5D43 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mRequestAuthCode;
		bool L_0 = __this->___mRequestAuthCode_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsHidingPopups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsHidingPopups_m6488808552AEFC36556CDB598B0D58F341A55527 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mHidePopups;
		bool L_0 = __this->___mHidePopups_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsForcingRefresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsForcingRefresh_mDF3A4C15C0F0B14D8614ACA917D7541FB8584691 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mForceRefresh;
		bool L_0 = __this->___mForceRefresh_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingEmail_mC6DE14D26138B979CBDEE95FC7BB00EC31AEBF2C (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mRequestEmail;
		bool L_0 = __this->___mRequestEmail_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::IsRequestingIdToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Builder_IsRequestingIdToken_mCF630EB0A961CE934B49B637680D1F837FBE56EB (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return mRequestIdToken;
		bool L_0 = __this->___mRequestIdToken_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::GetAccountName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_GetAccountName_mDFC41413C515D30CCDEE26BBA1E5C47AB8EA75A9 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return mAccountName;
		String_t* L_0 = __this->___mAccountName_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::getScopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Builder_getScopes_m8F0821940E0448250116EFA19AF61BDA1893D0E6 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	{
		// return mScopes == null ? new string[0] : mScopes.ToArray();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___mScopes_1;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = __this->___mScopes_1;
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_1, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		return L_4;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayGamesClientConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m388AB45315E2F3197C804CCF2097E650BC940894 (Builder_t2F2F11DE8F7F4A5E55B378129088F5BD75CDCCA8* __this, const RuntimeMethod* method) 
{
	{
		// private bool mEnableSaveGames = false;
		__this->___mEnableSaveGames_0 = (bool)0;
		// private List<string> mScopes = null;
		__this->___mScopes_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScopes_1), (void*)(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)NULL);
		// private bool mHidePopups = false;
		__this->___mHidePopups_2 = (bool)0;
		// private bool mRequestAuthCode = false;
		__this->___mRequestAuthCode_3 = (bool)0;
		// private bool mForceRefresh = false;
		__this->___mForceRefresh_4 = (bool)0;
		// private bool mRequestEmail = false;
		__this->___mRequestEmail_5 = (bool)0;
		// private bool mRequestIdToken = false;
		__this->___mRequestIdToken_6 = (bool)0;
		// private string mAccountName = null;
		__this->___mAccountName_7 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mAccountName_7), (void*)(String_t*)NULL);
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
// System.Void GooglePlayGames.BasicApi.ScorePageToken::.ctor(System.Object,System.String,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,GooglePlayGames.BasicApi.ScorePageDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorePageToken__ctor_m431FAF86C22A8B545F71B1AF2F1224D9FB8B708B (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, RuntimeObject* ___internalObject0, String_t* ___id1, int32_t ___collection2, int32_t ___timespan3, int32_t ___direction4, const RuntimeMethod* method) 
{
	{
		// internal ScorePageToken(object internalObject, string id,
		//     LeaderboardCollection collection, LeaderboardTimeSpan timespan,
		//     ScorePageDirection direction)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mInternalObject = internalObject;
		RuntimeObject* L_0 = ___internalObject0;
		__this->___mInternalObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInternalObject_1), (void*)L_0);
		// mId = id;
		String_t* L_1 = ___id1;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mCollection = collection;
		int32_t L_2 = ___collection2;
		__this->___mCollection_2 = L_2;
		// mTimespan = timespan;
		int32_t L_3 = ___timespan3;
		__this->___mTimespan_3 = L_3;
		// mDirection = direction;
		int32_t L_4 = ___direction4;
		__this->___mDirection_4 = L_4;
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Collection_m81A6D22719966B08DF294DFACE425D527D2EEAA0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mCollection; }
		int32_t L_0 = __this->___mCollection_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCollection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::get_TimeSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_mFC519002264A338C9C9FD20D0E4ABBAF185C19D2 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mTimespan; }
		int32_t L_0 = __this->___mTimespan_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTimespan; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m1666DE97676B246F0E7FDA31232401FB1B7973A0 (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mDirection; }
		int32_t L_0 = __this->___mDirection_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDirection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_m12697020F7B2EFC1D646C38D4AB9E2637FDF74BE (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Object GooglePlayGames.BasicApi.ScorePageToken::get_InternalObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorePageToken_get_InternalObject_m37A928592D5497D4D646E6868EDA834D2063C6DB (ScorePageToken_tDE06B47E078CD95594C5D56804A3308B034B273C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return mInternalObject; }
		RuntimeObject* L_0 = __this->___mInternalObject_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mInternalObject; }
		RuntimeObject* L_1 = V_0;
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
// GooglePlayGames.BasicApi.SignInStatus GooglePlayGames.BasicApi.SignInHelper::ToSignInStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SignInHelper_ToSignInStatus_m0E8C3979445D4601F00D449CBA5B581E7A3C1696 (int32_t ___code0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// Dictionary<int, SignInStatus> dictionary = new Dictionary<int, SignInStatus>()
		// {
		//     {
		//         /* CommonUIStatus.UI_BUSY */ -12, SignInStatus.AlreadyInProgress
		//     },
		//     {
		//         /* CommonStatusCodes.SUCCESS */ 0, SignInStatus.Success
		//     },
		//     {
		//         /* CommonStatusCodes.SIGN_IN_REQUIRED */ 4, SignInStatus.UiSignInRequired
		//     },
		//     {
		//         /* CommonStatusCodes.NETWORK_ERROR */ 7, SignInStatus.NetworkError
		//     },
		//     {
		//         /* CommonStatusCodes.INTERNAL_ERROR */ 8, SignInStatus.InternalError
		//     },
		//     {
		//         /* CommonStatusCodes.DEVELOPER_ERROR */ 10, SignInStatus.DeveloperError
		//     },
		//     {
		//         /* CommonStatusCodes.CANCELED */ 16, SignInStatus.Canceled
		//     },
		//     {
		//         /* CommonStatusCodes.API_NOT_CONNECTED */ 17, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_FAILED */ 12500, SignInStatus.Failed
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CANCELLED */ 12501, SignInStatus.Canceled
		//     },
		//     {
		//         /* GoogleSignInStatusCodes.SIGN_IN_CURRENTLY_IN_PROGRESS */ 12502, SignInStatus.AlreadyInProgress
		//     },
		// };
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_0 = (Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E*)il2cpp_codegen_object_new(Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC(L_0, Dictionary_2__ctor_m6B5DDA601F08D481BA2AECCE056B753F1232E3DC_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_1, ((int32_t)-12), 6, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_2, 0, 0, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_3, 4, 1, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_4, 7, 3, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_5, 8, 4, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_6, ((int32_t)10), 2, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_7, ((int32_t)16), 5, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_8 = L_7;
		NullCheck(L_8);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_8, ((int32_t)17), 7, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_9 = L_8;
		NullCheck(L_9);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_9, ((int32_t)12500), 7, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_10 = L_9;
		NullCheck(L_10);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_10, ((int32_t)12501), 5, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_11 = L_10;
		NullCheck(L_11);
		Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683(L_11, ((int32_t)12502), 6, Dictionary_2_Add_m4DBE655BB5842C3448275EAE9A073C44E98F5683_RuntimeMethod_var);
		V_0 = L_11;
		// return dictionary.ContainsKey(code) ? dictionary[code] : SignInStatus.Failed;
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_12 = V_0;
		int32_t L_13 = ___code0;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E(L_12, L_13, Dictionary_2_ContainsKey_m34AAF8D27A5A86A09EF55F9E65E28AFA43CCAA7E_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0086;
		}
	}
	{
		G_B3_0 = 7;
		goto IL_008d;
	}

IL_0086:
	{
		Dictionary_2_t8E1BF1BDB07066E54FC58C1ACFFC6E64F3F6AD7E* L_15 = V_0;
		int32_t L_16 = ___code0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88(L_15, L_16, Dictionary_2_get_Item_m9B7B4A448E9E75A5829241A79A95B3C12E448C88_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_17));
	}

IL_008d:
	{
		V_1 = G_B3_0;
		goto IL_0090;
	}

IL_0090:
	{
		// }
		int32_t L_18 = V_1;
		return L_18;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::SetPromptUiSignIn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper_SetPromptUiSignIn_m9C41BACBD0895171DFB9C4E1C99F70A14FD228C8 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		// PlayerPrefs.SetInt(PromptSignInKey, value ? True : False);
		bool L_0 = ___value0;
		G_B1_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
		if (L_0)
		{
			G_B2_0 = _stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581;
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_1 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0015;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0015:
	{
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.SignInHelper::ShouldPromptUiSignIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SignInHelper_ShouldPromptUiSignIn_mE924C75DA1F9C5AA1F505F35B1FE055D600DDA5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return PlayerPrefs.GetInt(PromptSignInKey, True) != False;
		il2cpp_codegen_runtime_class_init_inline(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral61B410956C2A69C9CB862ADD1D1C3BC2853CC581, L_0, NULL);
		int32_t L_2 = ((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__ctor_mAACD363A620B49A48D7E65E08562B6B5442799D8 (SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.SignInHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignInHelper__cctor_mDB05C6D3531683EFF3A41E3F233024D2FA7214B8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int True = 0;
		((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___True_0 = 0;
		// private static int False = 1;
		((SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_StaticFields*)il2cpp_codegen_static_fields_for(SignInHelper_t6BF2A6EF93FAAF335D25379E2EF9120105A2B564_il2cpp_TypeInfo_var))->___False_1 = 1;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities::.ctor(System.Boolean,System.Boolean,System.Boolean,System.Boolean[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCapabilities__ctor_mE8546E8B5CB6AF1F8919493CDD0177059A3290BA (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, bool ___isCameraSupported0, bool ___isMicSupported1, bool ___isWriteStorageSupported2, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___captureModesSupported3, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___qualityLevelsSupported4, const RuntimeMethod* method) 
{
	{
		// internal VideoCapabilities(bool isCameraSupported, bool isMicSupported, bool isWriteStorageSupported,
		//     bool[] captureModesSupported, bool[] qualityLevelsSupported)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCameraSupported = isCameraSupported;
		bool L_0 = ___isCameraSupported0;
		__this->___mIsCameraSupported_0 = L_0;
		// mIsMicSupported = isMicSupported;
		bool L_1 = ___isMicSupported1;
		__this->___mIsMicSupported_1 = L_1;
		// mIsWriteStorageSupported = isWriteStorageSupported;
		bool L_2 = ___isWriteStorageSupported2;
		__this->___mIsWriteStorageSupported_2 = L_2;
		// mCaptureModesSupported = captureModesSupported;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___captureModesSupported3;
		__this->___mCaptureModesSupported_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCaptureModesSupported_3), (void*)L_3);
		// mQualityLevelsSupported = qualityLevelsSupported;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___qualityLevelsSupported4;
		__this->___mQualityLevelsSupported_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mQualityLevelsSupported_4), (void*)L_4);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsCameraSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsCameraSupported_m2A5ABD6B6C1BFDFF57437EB5AB898C17A4BF2D36 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsCameraSupported; }
		bool L_0 = __this->___mIsCameraSupported_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsCameraSupported; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsMicSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsMicSupported_m9D602DDC5C684AB39A3806A9682C07F917E07655 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsMicSupported; }
		bool L_0 = __this->___mIsMicSupported_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsMicSupported; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::get_IsWriteStorageSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_get_IsWriteStorageSupported_mBDD45763B0DA5D6925C0FE68A392E1BD9AB34FF8 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsWriteStorageSupported; }
		bool L_0 = __this->___mIsWriteStorageSupported_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsWriteStorageSupported; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsCaptureMode(GooglePlayGames.BasicApi.VideoCaptureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsCaptureMode_m7DBCAA7C978825AF114B2F4D5EFD027B4682E675 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, int32_t ___captureMode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (captureMode != VideoCaptureMode.Unknown)
		int32_t L_0 = ___captureMode0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return mCaptureModesSupported[(int) captureMode];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->___mCaptureModesSupported_3;
		int32_t L_3 = ___captureMode0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (bool)L_5;
		goto IL_0028;
	}

IL_0018:
	{
		// Logger.w("SupportsCaptureMode called with an unknown captureMode.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF(_stringLiteral4D0692693CE6029C889B45F76713A0C14DF827FC, NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCapabilities::SupportsQualityLevel(GooglePlayGames.BasicApi.VideoQualityLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCapabilities_SupportsQualityLevel_mEBB3875FA0DAA0E234BD29D0BDBCDC7D15509A08 (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, int32_t ___qualityLevel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (qualityLevel != VideoQualityLevel.Unknown)
		int32_t L_0 = ___qualityLevel0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return mQualityLevelsSupported[(int) qualityLevel];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->___mQualityLevelsSupported_4;
		int32_t L_3 = ___qualityLevel0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = (bool)L_5;
		goto IL_0028;
	}

IL_0018:
	{
		// Logger.w("SupportsCaptureMode called with an unknown qualityLevel.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_w_m7051D93B39E4709DC84362FCD797729AF114A5BF(_stringLiteralE302924B4AB5FEE3165B0FD1C0D5683FB894BE5D, NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCapabilities_ToString_m85E5D94390B8638DE15BA9A9FC15DC70FF9CC7CD (VideoCapabilities_t29AE1B20B7AF06D0AC1F54DA583ACDE6DB5751BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B2_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	int32_t G_B2_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_5 = NULL;
	String_t* G_B2_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B1_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B1_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_5 = NULL;
	String_t* G_B1_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B4_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	int32_t G_B4_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_5 = NULL;
	String_t* G_B4_6 = NULL;
	Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* G_B3_0 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	int32_t G_B3_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_4 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_5 = NULL;
	String_t* G_B3_6 = NULL;
	{
		// return string.Format(
		//     "[VideoCapabilities: mIsCameraSupported={0}, mIsMicSupported={1}, mIsWriteStorageSupported={2}, " +
		//     "mCaptureModesSupported={3}, mQualityLevelsSupported={4}]",
		//     mIsCameraSupported,
		//     mIsMicSupported,
		//     mIsWriteStorageSupported,
		//     string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		//     string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___mIsCameraSupported_0;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		bool L_6 = __this->___mIsMicSupported_1;
		bool L_7 = L_6;
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		bool L_10 = __this->___mIsWriteStorageSupported_2;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->___mCaptureModesSupported_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_15 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = L_14;
		G_B1_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B1_3 = 3;
		G_B1_4 = L_13;
		G_B1_5 = L_13;
		G_B1_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = L_14;
			G_B2_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B2_3 = 3;
			G_B2_4 = L_13;
			G_B2_5 = L_13;
			G_B2_6 = _stringLiteral328B39ACA17B06ABB7B010FA8A2D12D44472BF2E;
			goto IL_0062;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_17 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_18 = (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*)il2cpp_codegen_object_new(Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9_RuntimeMethod_var), NULL);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_19 = L_18;
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_19);
		G_B2_0 = L_19;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
	}

IL_0062:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21;
		L_21 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_20, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_22;
		L_22 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B2_2, L_21, NULL);
		NullCheck(G_B2_4);
		ArrayElementTypeCheck (G_B2_4, L_22);
		(G_B2_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B2_3), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = G_B2_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = __this->___mQualityLevelsSupported_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_25 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_26 = L_25;
		G_B3_0 = L_26;
		G_B3_1 = L_24;
		G_B3_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		G_B3_3 = 4;
		G_B3_4 = L_23;
		G_B3_5 = L_23;
		G_B3_6 = G_B2_6;
		if (L_26)
		{
			G_B4_0 = L_26;
			G_B4_1 = L_24;
			G_B4_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			G_B4_3 = 4;
			G_B4_4 = L_23;
			G_B4_5 = L_23;
			G_B4_6 = G_B2_6;
			goto IL_009e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_27 = ((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_28 = (Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334*)il2cpp_codegen_object_new(Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Func_2__ctor_m81FB45901BD6276DF3DB9976DB97D2F6A906B02F(L_28, L_27, (intptr_t)((void*)U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC_RuntimeMethod_var), NULL);
		Func_2_t5EB7444876746C74DB6B67D57F5AF10385C18334* L_29 = L_28;
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9__14_1_2), (void*)L_29);
		G_B4_0 = L_29;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
		G_B4_6 = G_B3_6;
	}

IL_009e:
	{
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3((RuntimeObject*)G_B4_1, G_B4_0, Enumerable_Select_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisString_t_m4F690CF4B20F9C3838A9B38D17772395EE93DAD3_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_30, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_32;
		L_32 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(G_B4_2, L_31, NULL);
		NullCheck(G_B4_4);
		ArrayElementTypeCheck (G_B4_4, L_32);
		(G_B4_4)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_3), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(G_B4_6, G_B4_5, NULL);
		V_0 = L_33;
		goto IL_00b6;
	}

IL_00b6:
	{
		// }
		String_t* L_34 = V_0;
		return L_34;
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEDE45F6C0CE4318CBF9C1EC26B3884578BA9A94D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* L_0 = (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6*)il2cpp_codegen_object_new(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A(L_0, NULL);
		((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF6C01D79CC0C34263FA6C73CD02CD8E3A36EC4A (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_0_mDBB5AD5A216DC24AFAA8007C98D912D481A0F1E9 (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, bool ___p0, const RuntimeMethod* method) 
{
	{
		// string.Join(",", mCaptureModesSupported.Select(p => p.ToString()).ToArray()),
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___p0), NULL);
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCapabilities/<>c::<ToString>b__14_1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToStringU3Eb__14_1_m87F1D3B60FB2DE15655C1CA0DB581310AF9AB8FC (U3CU3Ec_t9B5F17D8A78CD2D23EF02BFC122F101A7C124AB6* __this, bool ___p0, const RuntimeMethod* method) 
{
	{
		// string.Join(",", mQualityLevelsSupported.Select(p => p.ToString()).ToArray()));
		String_t* L_0;
		L_0 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___p0), NULL);
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
// System.Void GooglePlayGames.BasicApi.Video.VideoCaptureState::.ctor(System.Boolean,GooglePlayGames.BasicApi.VideoCaptureMode,GooglePlayGames.BasicApi.VideoQualityLevel,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCaptureState__ctor_m2B2B27B6716AEE8A5DFA5CFA91402AD73F76E3A6 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, bool ___isCapturing0, int32_t ___captureMode1, int32_t ___qualityLevel2, bool ___isOverlayVisible3, bool ___isPaused4, const RuntimeMethod* method) 
{
	{
		// internal VideoCaptureState(bool isCapturing, VideoCaptureMode captureMode,
		//     VideoQualityLevel qualityLevel, bool isOverlayVisible, bool isPaused)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mIsCapturing = isCapturing;
		bool L_0 = ___isCapturing0;
		__this->___mIsCapturing_0 = L_0;
		// mCaptureMode = captureMode;
		int32_t L_1 = ___captureMode1;
		__this->___mCaptureMode_1 = L_1;
		// mQualityLevel = qualityLevel;
		int32_t L_2 = ___qualityLevel2;
		__this->___mQualityLevel_2 = L_2;
		// mIsOverlayVisible = isOverlayVisible;
		bool L_3 = ___isOverlayVisible3;
		__this->___mIsOverlayVisible_3 = L_3;
		// mIsPaused = isPaused;
		bool L_4 = ___isPaused4;
		__this->___mIsPaused_4 = L_4;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsCapturing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsCapturing_m79259E68EFB6988C652F65191D76EA168AAD2D48 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsCapturing; }
		bool L_0 = __this->___mIsCapturing_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsCapturing; }
		bool L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.VideoCaptureMode GooglePlayGames.BasicApi.Video.VideoCaptureState::get_CaptureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_CaptureMode_m4FA4B9D18DB6653CA6C7893ADE4B0FDDF80A39E1 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mCaptureMode; }
		int32_t L_0 = __this->___mCaptureMode_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCaptureMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.VideoQualityLevel GooglePlayGames.BasicApi.Video.VideoCaptureState::get_QualityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoCaptureState_get_QualityLevel_mEF7D5F70B0DBD8EE8D56878C16D639FE080BECE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mQualityLevel; }
		int32_t L_0 = __this->___mQualityLevel_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mQualityLevel; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsOverlayVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsOverlayVisible_m091B7546AE3EBC1E750A0CB513D3CD9D72866CE5 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsOverlayVisible; }
		bool L_0 = __this->___mIsOverlayVisible_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsOverlayVisible; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Video.VideoCaptureState::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoCaptureState_get_IsPaused_mD2C050CBD84B1744B97B31C3B6836AEFBB4C6D2E (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsPaused; }
		bool L_0 = __this->___mIsPaused_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsPaused; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Video.VideoCaptureState::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoCaptureState_ToString_m293496CA599DCA9B670B407F2C01FF253AA189D9 (VideoCaptureState_tEDC395D8E54040DA74FF8CBF9F83BD7B5C411625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("[VideoCaptureState: mIsCapturing={0}, mCaptureMode={1}, mQualityLevel={2}, " +
		//                      "mIsOverlayVisible={3}, mIsPaused={4}]",
		//     mIsCapturing,
		//     mCaptureMode.ToString(),
		//     mQualityLevel.ToString(),
		//     mIsOverlayVisible,
		//     mIsPaused);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___mIsCapturing_0;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		int32_t* L_6 = (&__this->___mCaptureMode_1);
		Il2CppFakeBox<int32_t> L_7(VideoCaptureMode_t9BD16FB6552C017E9707BBF6FF69B1DDC02E0D84_il2cpp_TypeInfo_var, L_6);
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t* L_10 = (&__this->___mQualityLevel_2);
		Il2CppFakeBox<int32_t> L_11(VideoQualityLevel_t290A450CFBB37E4E28DEDFED35CBD6308C1AE2CC_il2cpp_TypeInfo_var, L_10);
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14 = __this->___mIsOverlayVisible_3;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		bool L_18 = __this->___mIsPaused_4;
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_20);
		String_t* L_21;
		L_21 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral2B502C579557CB001780E7AC2D10A48E08EE06EB, L_17, NULL);
		V_0 = L_21;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		String_t* L_22 = V_0;
		return L_22;
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
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_Multicast(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* currentDelegate = reinterpret_cast<ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInst(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStatic(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStaticInvoker(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_ClosedStaticInvoker(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenVirtual(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	VirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInterface(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericVirtual(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	GenericVirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericInterface(ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_mA4005D04BD1E3B8BAE1B2C7587F5F6CD9F01AE7F (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20_Multicast;
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_mC1B39D203831310F04F039A5DFFFF05F8B609F20 (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_mD49E7DD5D0F3465015DC9954C5D168E0CB7004F9 (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___resolver0;
	__d_args[1] = ___original1;
	__d_args[2] = ___originalData2;
	__d_args[3] = ___unmerged3;
	__d_args[4] = ___unmergedData4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_m1850006035C4BA5A2414B6E9A4F5F979B2E0B1AA (ConflictCallback_t95224E47025B20D746EFC8DDDAA418D12FB51787* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke_back(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com_back(const SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled, SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshal_com_cleanup(SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___builder0, const RuntimeMethod* method) 
{
	{
		// mDescriptionUpdated = builder.mDescriptionUpdated;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = ___builder0;
		bool L_1 = L_0.___mDescriptionUpdated_0;
		__this->___mDescriptionUpdated_0 = L_1;
		// mNewDescription = builder.mNewDescription;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = ___builder0;
		String_t* L_3 = L_2.___mNewDescription_1;
		__this->___mNewDescription_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_3);
		// mCoverImageUpdated = builder.mCoverImageUpdated;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_4 = ___builder0;
		bool L_5 = L_4.___mCoverImageUpdated_2;
		__this->___mCoverImageUpdated_2 = L_5;
		// mNewPngCoverImage = builder.mNewPngCoverImage;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_6 = ___builder0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___mNewPngCoverImage_3;
		__this->___mNewPngCoverImage_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_7);
		// mNewPlayedTime = builder.mNewPlayedTime;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_8 = ___builder0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_9 = L_8.___mNewPlayedTime_4;
		__this->___mNewPlayedTime_4 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF_AdjustorThunk (RuntimeObject* __this, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F ___builder0, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDescriptionUpdated; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mE0D451A2E1606287612F4F3954A4BB0BD8A6F82B(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m874139C0C098A2D67FE450AD88AE5181E3674260(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCoverImageUpdated; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_m065C6C12FC45DFE8B865125D58D74E77052B7639(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mB46DBAB5093874B011DAD2111CCD89469D7F2651(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_0 = (&__this->___mNewPlayedTime_4);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline(L_0, Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return mNewPlayedTime.HasValue; }
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m5B3FAE6ED8C7F7D05094B784943CAA283487E8D6(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1 (SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* __this, const RuntimeMethod* method) 
{
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m855B3A8E6435A7DA09FBA6B8E3C04A55E4E22FD1(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke_back(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_pinvoke_cleanup(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com_back(const Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled, Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshal_com_cleanup(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_0, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mNewDescription_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_1);
		// mDescriptionUpdated = true;
		__this->___mDescriptionUpdated_0 = (bool)1;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		V_0 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9_AdjustorThunk (RuntimeObject* __this, String_t* ___description0, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedDescription_m8BF617EF89962E1DDDBA45915B9F7EF3204BFDB9(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7 (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method) 
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mCoverImageUpdated = true;
		__this->___mCoverImageUpdated_2 = (bool)1;
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___newPngCoverImage0;
		__this->___mNewPngCoverImage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_0);
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_1 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m8672F53A55BDEB07D64B549093021DB7A8C112C7(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___newPlayedTime0), NULL);
		V_0 = (bool)((((double)L_0) > ((double)(1.8446744073709552E+19)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_RuntimeMethod_var)));
	}

IL_0023:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___newPlayedTime0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		__this->___mNewPlayedTime_4 = L_4;
		// return this;
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_5 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		V_1 = L_5;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mA8082F30F79AB83869502503B1C447F3CD04EEBE(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF (Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* __this, const RuntimeMethod* method) 
{
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F L_0 = (*(Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*)__this);
		SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_m97EADB8274E2683D3E3119E6ECB367818BAB3DDF((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_tA8301052C21151AC6D5B8252F42C85C26DE25B3F*>(__this + _offset);
	SavedGameMetadataUpdate_tC9E6CAB51B9AF869DB28DFAC4563F8EBC73E0F1B _returnValue;
	_returnValue = Builder_Build_m4819B21974F505660BBC307FBF027A19F6D239BF(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke_back(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_pinvoke_cleanup(AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com_back(const AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshal_com_cleanup(AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mStatus = status;
		int32_t L_0 = ___status0;
		__this->___mStatus_0 = L_0;
		// this.mLocalEndpointName = Misc.CheckNotNull(localEndpointName);
		String_t* L_1 = ___localEndpointName1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_1, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mLocalEndpointName_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mLocalEndpointName_1), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881_AdjustorThunk (RuntimeObject* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881(_thisAdjusted, ___status0, ___localEndpointName1, method);
}
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mStatus == ResponseStatus.Success; }
		int32_t L_0 = __this->___mStatus_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return mStatus == ResponseStatus.Success; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	bool _returnValue;
	_returnValue = AdvertisingResult_get_Succeeded_m06A577036347370D329A58C580EA5D0570C87BDA(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_mF02B64519A1AA2BB65F6D55CB0FCC30151249CC6(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4 (AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalEndpointName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_mC21FB717EFC752C84832472A07DB0D0AF5093DE4(_thisAdjusted, method);
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


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke_back(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_pinvoke_cleanup(ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_pinvoke& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com_back(const ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled, ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshal_com_cleanup(ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391_marshaled_com& marshaled)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Constructing ConnectionRequest");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5, NULL);
		// mRemoteEndpoint = new EndpointDetails(remoteEndpointId, remoteEndpointName, serviceId);
		String_t* L_0 = ___remoteEndpointId0;
		String_t* L_1 = ___remoteEndpointName1;
		String_t* L_2 = ___serviceId2;
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_3;
		memset((&L_3), 0, sizeof(L_3));
		EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___mRemoteEndpoint_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___payload3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		__this->___mPayload_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_1), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A_AdjustorThunk (RuntimeObject* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ConnectionRequest__ctor_m548B9D55FD9F976704AA2DBED2D9FFB1CC7A5C7A(_thisAdjusted, ___remoteEndpointId0, ___remoteEndpointName1, ___serviceId2, ___payload3, method);
}
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_0 = __this->___mRemoteEndpoint_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0 _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_m67DC3AE030384ACBA3C284BF0530E220517C4E84(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2 (ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t4EA9B003366D32C2178CD48CD3954D22E5E56391*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_m63789A730F8A1596293FA094ECD1E9DF2C110FB2(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke_back(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_pinvoke_cleanup(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com_back(const ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshal_com_cleanup(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mLocalClientId = localClientId;
		int64_t L_0 = ___localClientId0;
		__this->___mLocalClientId_1 = L_0;
		// this.mRemoteEndpointId = Misc.CheckNotNull(remoteEndpointId);
		String_t* L_1 = ___remoteEndpointId1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_1, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mRemoteEndpointId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRemoteEndpointId_2), (void*)L_2);
		// this.mResponseStatus = code;
		int32_t L_3 = ___code2;
		__this->___mResponseStatus_3 = L_3;
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___payload3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m783716EAF3ECD81582A38F2E763C7B81EE092664_RuntimeMethod_var);
		__this->___mPayload_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_4), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1_AdjustorThunk (RuntimeObject* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1(_thisAdjusted, ___localClientId0, ___remoteEndpointId1, ___code2, ___payload3, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalClientId; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_mA82464DFB6321B43CBE0A15814F1D2CCB4ED7CA6(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRemoteEndpointId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mA7C270D13F23F4EAF2D6E3E32072D218DB7D5238(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6 (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mResponseStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_mC844EF140556CD8B6054B019D756B7B290CF2AC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C (ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m052576EF83304C340C862D125059A393B8C6271C(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Rejected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_NetworkNotConnected_mF40EA16E81EABA8C4D53EB9A6D899F68E8E94341 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorNetworkNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_InternalError_mCE01D5F11A63E4B42394ACD007EDAC80286BDC8B (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorInternal,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_EndpointNotConnected_m18C28B0A1B203D40E32F7E95C7A00F43C40027DE (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorEndpointNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 4, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_Accepted_mF8315F45E0211671036F79594A8EEFA015E02321 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, const RuntimeMethod* method) 
{
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Accepted,
		//     payload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___payload2;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ConnectionResponse_AlreadyConnected_m39C385EFBE93799BFFBAA5B78381DA790EC26A87 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId,
		//     Status.ErrorAlreadyConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_mAB086BE31C16A738AEB26628650CF1D4FC342DA1((&L_3), L_0, L_1, 5, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_4 = V_0;
		return L_4;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__cctor_m27725B616700455D21B165764868F0065373C86D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] EmptyPayload = new byte[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var))->___EmptyPayload_0), (void*)L_0);
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
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_m4963EFFBC7006B70F130C54A4394D218353EF6C3 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return NearbyConnectionConfiguration.MaxUnreliableMessagePayloadLength;
		V_0 = ((int32_t)1168);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_mC4250D2FB414B3FF275C9E594493DC4985A53E94 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return NearbyConnectionConfiguration.MaxReliableMessagePayloadLength;
		V_0 = ((int32_t)4096);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendReliable_mBF4DCC52828944F5A08108434D729117C3CDA1AC (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___recipientEndpointIds0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendReliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendUnreliable_mBFC6E22A366146AB057A323DC9F5A0F7F4CE3A2E (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___recipientEndpointIds0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendUnreliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartAdvertising_m769BCD23744FF396C09EB9A58F2964444A2C427F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___name0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___appIdentifiers1, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___advertisingDuration2, Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* ___resultCallback3, Action_1_tC40E26186DDE2EA6C05B44317E07B118EA5107E3* ___connectionRequestCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AdvertisingResult obj = new AdvertisingResult(ResponseStatus.LicenseCheckFailed, string.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AdvertisingResult__ctor_mE7980D839DFBF003ADDBF2AF4FC3CB79EBED6881((&V_0), (-1), L_0, NULL);
		// resultCallback.Invoke(obj);
		Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* L_1 = ___resultCallback3;
		AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAdvertising_m48C0689BF58F495F39726F9CA5C0D8DF140A868F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAvertising in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendConnectionRequest_mFD6373183CB3AE67142645979CE6C3D7B6852D4F (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___name0, String_t* ___remoteEndpointId1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* ___responseCallback3, RuntimeObject* ___listener4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OurUtils.Logger.d("SendConnectionRequest called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645, NULL);
		// if (responseCallback != null)
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_0 = ___responseCallback3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// ConnectionResponse obj = ConnectionResponse.Rejected(0, string.Empty);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA_il2cpp_TypeInfo_var);
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_3;
		L_3 = ConnectionResponse_Rejected_m47E3012BD041A67DAD2622C0CF3ED5040FD5E270(((int64_t)0), L_2, NULL);
		V_1 = L_3;
		// responseCallback.Invoke(obj);
		Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* L_4 = ___responseCallback3;
		ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA L_5 = V_1;
		NullCheck(L_4);
		Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_AcceptConnectionRequest_m18A6FE9E4E5F556ED545AFF93045072D313C97C4 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___remoteEndpointId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("AcceptConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartDiscovery_m22042E623E2034C7711625F0F22F1EBA1FC968DD (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___serviceId0, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___advertisingTimeout1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StartDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopDiscovery_mE3F67C9136B16C24CD10E6A46DB40CECA326F0AD (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___serviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_RejectConnectionRequest_mCD0163B5E142048717319C76576C7F18F6D6AC3E (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___requestingEndpointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("RejectConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_DisconnectFromEndpoint_m41F5477E14AAD9F59A8388E68D9FAFEF82BAF691 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, String_t* ___remoteEndpointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("DisconnectFromEndpoint in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAllConnections_mA2CD05D911E89C18EFEA15E32024810307F34BFF (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAllConnections in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t479AF19590C39073196CBF456A8EC0529B73C3CB_il2cpp_TypeInfo_var);
		Logger_d_mD0DE9D4732DDB9524C2485CFB3D4090A9ACE1ABB(_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalEndpointId_m693DF94B2A56BDB05F5E031D6D59E25994C152DB (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalDeviceId_mBD1F45BD9F0286C9C4ACABCF1E0C1A74CDD94BB6 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "DummyDevice";
		V_0 = _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetAppBundleId_mCA3AEF93D1241577A74AACBE26C9081E17686E6A (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "dummy.bundle.id";
		V_0 = _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetServiceId_m565A5A8817CD3F45312BAB02CF2D9B87776E1503 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "dummy.service.id";
		V_0 = _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_m4D2EC0602685E7FC545780BFCB337CB10F5A4174 (DummyNearbyConnectionClient_tD1B2EE438B287E83E9902B51A4D67D519B3D7300* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_pinvoke_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_back(const EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled, EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshal_com_cleanup(EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mEndpointId = Misc.CheckNotNull(endpointId);
		String_t* L_0 = ___endpointId0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_0, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mEndpointId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEndpointId_0), (void*)L_1);
		// this.mName = Misc.CheckNotNull(name);
		String_t* L_2 = ___name1;
		String_t* L_3;
		L_3 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_2, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mName_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_3);
		// this.mServiceId = Misc.CheckNotNull(serviceId);
		String_t* L_4 = ___serviceId2;
		String_t* L_5;
		L_5 = Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE(L_4, Misc_CheckNotNull_TisString_t_m2EC977A0813E3D9685952D27702AF583A6A75BBE_RuntimeMethod_var);
		__this->___mServiceId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServiceId_2), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC_AdjustorThunk (RuntimeObject* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	EndpointDetails__ctor_m5F2CCC452B1660524004CBFBE9ADE8889D639EDC(_thisAdjusted, ___endpointId0, ___name1, ___serviceId2, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mEndpointId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_mF6313245484406ABFD4A81332B468F99598F89C4(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_m934EABF423EEBE1E423B00CB198C12415C5D162D(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791 (EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mServiceId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_tA093040A72AD2063F89847C6CC686E7EA67F12E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_mD1A4284E38D3D9BE501C221B2341D355D3CD5791(_thisAdjusted, method);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke_back(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com_back(const NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled, NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61>(marshaled.___mInitializationCallback_2, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshal_com_cleanup(NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mInitializationCallback = Misc.CheckNotNull(callback);
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = ___callback0;
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_1;
		L_1 = Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF(L_0, Misc_CheckNotNull_TisAction_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61_m338A7BEFC56E9A4662D9C9D11D60D64307E4B2FF_RuntimeMethod_var);
		__this->___mInitializationCallback_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitializationCallback_2), (void*)L_1);
		// this.mLocalClientId = localClientId;
		int64_t L_2 = ___localClientId1;
		__this->___mLocalClientId_3 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94_AdjustorThunk (RuntimeObject* __this, Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	NearbyConnectionConfiguration__ctor_m8B04348FCD417026CB37A5C9F56519099CE63F94(_thisAdjusted, ___callback0, ___localClientId1, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683 (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalClientId; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_mE2E597B0B91B43D536812AE62E5BB43E8D0F1683(_thisAdjusted, method);
	return _returnValue;
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A (NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* __this, const RuntimeMethod* method) 
{
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* V_0 = NULL;
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_0 = __this->___mInitializationCallback_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mInitializationCallback; }
		Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_t70F3A75FFA526DD5024D675C4DEABCB367D24CBA*>(__this + _offset);
	Action_1_t8261F37ABAA8A876CB2401CFF14294EE17AB4E61* _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_m3964C5B566CFB99FD9F2D05180455677932EF53A(_thisAdjusted, method);
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
// System.Void GooglePlayGames.BasicApi.Events.Event::.ctor(System.String,System.String,System.String,System.String,System.UInt64,GooglePlayGames.BasicApi.Events.EventVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m94C05B7DEB8D7577CEEEC4B2336037A8252819D8 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, String_t* ___imageUrl3, uint64_t ___currentCount4, int32_t ___visibility5, const RuntimeMethod* method) 
{
	{
		// internal Event(string id, string name, string description, string imageUrl,
		//     ulong currentCount, EventVisibility visibility)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = id;
		String_t* L_0 = ___id0;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// mName = name;
		String_t* L_1 = ___name1;
		__this->___mName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_1);
		// mDescription = description;
		String_t* L_2 = ___description2;
		__this->___mDescription_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_2), (void*)L_2);
		// mImageUrl = imageUrl;
		String_t* L_3 = ___imageUrl3;
		__this->___mImageUrl_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mImageUrl_3), (void*)L_3);
		// mCurrentCount = currentCount;
		uint64_t L_4 = ___currentCount4;
		__this->___mCurrentCount_4 = L_4;
		// mVisibility = visibility;
		int32_t L_5 = ___visibility5;
		__this->___mVisibility_5 = L_5;
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Id_m068D5C8E601A6631DF512C72B5FBBFE0786B1ABF (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_m5DD8C06F8EA7F61A9E82130C25C4B3F633C54166 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_mC13A4161720C1803517724129D29F33069995257 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mDescription; }
		String_t* L_0 = __this->___mDescription_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_mAC25F0E5F2C891BD491878F1B03562F0F803D311 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mImageUrl; }
		String_t* L_0 = __this->___mImageUrl_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Events.Event::get_CurrentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_mA0617C2248CF14849331F0E5B46005BB2EA873EC (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mCurrentCount; }
		uint64_t L_0 = __this->___mCurrentCount_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCurrentCount; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_mDF19D9454B0B8A6A7B302844BDBEFF6C271083E6 (Event_t35DF2427C1F49CB119E897612BB4FABF4D731538* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mVisibility; }
		int32_t L_0 = __this->___mVisibility_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mVisibility; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, int32_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m1C065BEA7A50301C9EE90A20FCFEE592E3B80954_gshared_inline (Action_1_t6D874687563E16B654D295ECDA220ED3E0DF68FE* __this, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AdvertisingResult_t2F2AC397C9B13D4CB235212DDED875C8BE5E7CFC, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA51746F90A4A072789A8DD176505C41F6C980F0B_gshared_inline (Action_1_tE956D874E65BDE0EA4C8F16532B20C05D47E9A2E* __this, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ConnectionResponse_tD71C6B7BCC0F006C141722E2EE7FD7ACEBC252BA, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
