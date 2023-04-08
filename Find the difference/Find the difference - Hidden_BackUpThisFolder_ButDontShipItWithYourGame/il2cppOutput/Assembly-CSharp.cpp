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

// System.Action`1<GoogleMobileAds.Api.AdError>
struct Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6;
// System.Action`1<GoogleMobileAds.Api.AdValue>
struct Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<GoogleMobileAds.Api.LoadAdError>
struct Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC;
// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t6D103D50D92EED8806671DABC525008F7D560A68;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo>
struct Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BannerAd
struct BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF;
// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FindDifference
struct FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// GoogleMobileAds.Common.IBannerClient
struct IBannerClient_t09294BA982EA240BD81470F2CFB8DA17E6D7A42D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// Interstitial
struct Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// Rewarded
struct Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Extensions.ScrollConflictManager
struct ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
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
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// activateNextBtnOnWin
struct activateNextBtnOnWin_tEDC59CDC2E13335BF502B9F77076BE0C9673B58F;
// btnControl
struct btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5;
// desChild
struct desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079;
// disableObj
struct disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF;
// levelBtnSelect
struct levelBtnSelect_tA63D3A6ED6D78971AEB44D674D697CB4176CF601;
// levelRecorder
struct levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01;
// objDrag
struct objDrag_tE063A4928A96A548D6718E10848012873D343187;
// openLvlChecker
struct openLvlChecker_tED6F24B2E0F54CB725F8368FCAEEFA023AF21AE2;
// sceneLoader
struct sceneLoader_tAFF7C98C48BC6FE9C7EE755282D8CB14078146F1;
// setPotsNum
struct setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6;
// sparkleRandScript
struct sparkleRandScript_tE2663590032723AFFFCDABB0A456A38843C750D5;
// tabRescaler
struct tabRescaler_t2D5392D3DC58EABF0E3F7AFC52B2DCB5999CA47C;
// zoomControl
struct zoomControl_t15E7FF937C87AED05D2C6FF00B26F732720CB790;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348;
// BannerAd/<>c
struct U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// FindDifference/<spawnX>d__10
struct U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B;
// Interstitial/<>c
struct U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Rewarded/<>c
struct U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493;
// Rewarded/<showError>d__7
struct U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// btnControl/<spawnX>d__40
struct U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9;
// desChild/<actiVate>d__3
struct U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845;
// disableObj/<showCorrect>d__5
struct U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697;
// setPotsNum/<showHint>d__7
struct U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t6D103D50D92EED8806671DABC525008F7D560A68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0DE371C7E545CEE66F006918EB0C36E4CE3513ED;
IL2CPP_EXTERN_C String_t* _stringLiteral11F25EE638C3C6935EC7AF12C9079C35DE568247;
IL2CPP_EXTERN_C String_t* _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral208C9E4A03D050755BE6D2C6874A5DE3058D9908;
IL2CPP_EXTERN_C String_t* _stringLiteral25AF90F5340E34D097781A2E95D3308B19C42DC7;
IL2CPP_EXTERN_C String_t* _stringLiteral2BC386179734618D3F3E44E30BBBA28F9091147E;
IL2CPP_EXTERN_C String_t* _stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E;
IL2CPP_EXTERN_C String_t* _stringLiteral324053B5032C4DCDEC3E1340A46FBDEE0F91F2B0;
IL2CPP_EXTERN_C String_t* _stringLiteral32832936F3B37719E3BF3112AA06DA5A62F8F5F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral56BDB588530347401E7E69440F76A4874882A647;
IL2CPP_EXTERN_C String_t* _stringLiteral5DACDA3FBFF1F616FEA43BF199AFA4B279422BF6;
IL2CPP_EXTERN_C String_t* _stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2;
IL2CPP_EXTERN_C String_t* _stringLiteral86141D1C48A71B5AF386DF6E2977D00A805D05EF;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA5849BA5C8B1657C0EDAB1A899C37EFC19B6B7;
IL2CPP_EXTERN_C String_t* _stringLiteral9235035D4B0259C748D7AFCEB584D3863705546F;
IL2CPP_EXTERN_C String_t* _stringLiteral9435BAF4864811890A7FF2DF55ED2F8054AF98FC;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B74D19DAF781910611EEBFCC623752790C945A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806;
IL2CPP_EXTERN_C String_t* _stringLiteralBA52DE1A7340D9A868F2F8E6D1E91F7E45A3BE78;
IL2CPP_EXTERN_C String_t* _stringLiteralBA839AA9B952F20BBBB5E83609055E3B6BB000F8;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDF0CEB47D2F703F6242D6D3B5872543E40D214;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3FF9F7CCA62EB6AE70F1174277FDF982D306D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E1FC9407C6B9FA06767A49441CE06C92059F01;
IL2CPP_EXTERN_C String_t* _stringLiteralC49AFEA3AA4DC321D7CDB2330C6D82AB979510AF;
IL2CPP_EXTERN_C String_t* _stringLiteralC67FF9AC41580D8A3C46F1CEC91A8B958D4BA384;
IL2CPP_EXTERN_C String_t* _stringLiteralCF536C1ED36A519C9AE147A7D7F9DDD185DFA4A0;
IL2CPP_EXTERN_C String_t* _stringLiteralD2CAA97CC26AFB8C684CC32D5B19E373D69332B0;
IL2CPP_EXTERN_C String_t* _stringLiteralD87DF8E0DA781D8F8EDC950785C2FC3A722D10E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF33DE73A08042C53EFFC08494EA3D97BB348899;
IL2CPP_EXTERN_C String_t* _stringLiteralE92B0ACB76744F9274A0F7B1D50997CB14BA2C0C;
IL2CPP_EXTERN_C String_t* _stringLiteralF11D4D7F89FEFB574541EC5DEA8802658159BA9B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFE38257974BF0F70BDFA8A13D0A3625109F80CDC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interstitial_U3CLoadInterstitialAdU3Eb__4_0_m32557AE50975A6D6113BA075EC14AD42FF0DDB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rewarded_U3CLoadRewardedAdU3Eb__5_0_m774E55E4F8DA7989B5292A0A83FA9D412039B25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CShowRewardedAdU3Eb__6_0_m4A8D14F96BC452EDDEB79290EACD201A4254F202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_m0037C4E875A93DAB99BC79A5C0E7FCDF2039E27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__1_0_mE2FE11F971489E531F1C8AE3F4AFD7E335ECF684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__3_0_mAD2D91F846B5E58980438048E069B8822EDE86C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CactiVateU3Ed__3_System_Collections_IEnumerator_Reset_mB6DE8024D2AE2E31D812D27C3C1F8347DFE82F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshowCorrectU3Ed__5_System_Collections_IEnumerator_Reset_mF8305D929DF2023B155D45E7DD3B5E36A3406DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshowErrorU3Ed__7_System_Collections_IEnumerator_Reset_mBBB31381ACF568BF8EB6945638CAF606017E4EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CshowHintU3Ed__7_System_Collections_IEnumerator_Reset_m47C1F302CC983641AD3AD739A0FAAAC6496B8B74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnXU3Ed__10_System_Collections_IEnumerator_Reset_m01ED82CB1AE9CFF3300C9FB3E3A2CAF40F154324_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CspawnXU3Ed__40_System_Collections_IEnumerator_Reset_m11A53D9144D4A9689DE5635372E5B0307F6BBCF7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::_client
	RuntimeObject* ____client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_4;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};

// GoogleMobileAds.Api.AdSize
struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158  : public RuntimeObject
{
	// GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::_type
	int32_t ____type_0;
	// GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::_orientation
	int32_t ____orientation_1;
	// System.Int32 GoogleMobileAds.Api.AdSize::_width
	int32_t ____width_2;
	// System.Int32 GoogleMobileAds.Api.AdSize::_height
	int32_t ____height_3;
};

struct AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields
{
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Banner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Banner_4;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::MediumRectangle
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___MediumRectangle_5;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::IABBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___IABBanner_6;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::Leaderboard
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___Leaderboard_7;
	// GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::SmartBanner
	AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___SmartBanner_8;
	// System.Int32 GoogleMobileAds.Api.AdSize::FullWidth
	int32_t ___FullWidth_9;
};
struct Il2CppArrayBounds;

// GoogleMobileAds.Api.BannerView
struct BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB  : public RuntimeObject
{
	// System.Action GoogleMobileAds.Api.BannerView::OnBannerAdLoaded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnBannerAdLoaded_0;
	// System.Action`1<GoogleMobileAds.Api.LoadAdError> GoogleMobileAds.Api.BannerView::OnBannerAdLoadFailed
	Action_1_t841B459F75B339DA7C5B42D7EA2E177BAE679C4C* ___OnBannerAdLoadFailed_1;
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.BannerView::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_2;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_3;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_4;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_5;
	// System.Action GoogleMobileAds.Api.BannerView::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_7;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.BannerView::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_9;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.BannerView::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_10;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.BannerView::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_11;
	// GoogleMobileAds.Common.IBannerClient GoogleMobileAds.Api.BannerView::_client
	RuntimeObject* ____client_12;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.InterstitialAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.InterstitialAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_11;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_12;
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::_client
	RuntimeObject* ____client_13;
	// System.String GoogleMobileAds.Api.InterstitialAd::_adUnitId
	String_t* ____adUnitId_14;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::_canShowAd
	bool ____canShowAd_15;
};

// GoogleMobileAds.Api.ResponseInfo
struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0  : public RuntimeObject
{
	// GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Api.ResponseInfo::_client
	RuntimeObject* ____client_0;
};

struct ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0_StaticFields
{
	// System.Func`2<GoogleMobileAds.Common.IAdapterResponseInfoClient,GoogleMobileAds.Api.AdapterResponseInfo> GoogleMobileAds.Api.ResponseInfo::<>f__am$cache0
	Func_2_tB44A1A6C91A822FF627FE5D42B38A411166F328A* ___U3CU3Ef__amU24cache0_1;
};

// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.AdValue> GoogleMobileAds.Api.RewardedAd::OnAdPaid
	Action_1_t96EA761F7BE52B89F4904338B4DF546EB9F1FAFF* ___OnAdPaid_0;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdClicked
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdClicked_1;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdImpressionRecorded
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdImpressionRecorded_2;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentOpened_3;
	// System.Action GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAdFullScreenContentClosed_4;
	// System.Action`1<GoogleMobileAds.Api.AdError> GoogleMobileAds.Api.RewardedAd::OnAdFullScreenContentFailed
	Action_1_t069366F3AD155AB4638C995045E0A7F46361C0C6* ___OnAdFullScreenContentFailed_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_8;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_10;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_11;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_12;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_13;
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::_client
	RuntimeObject* ____client_14;
	// System.String GoogleMobileAds.Api.RewardedAd::_adUnitId
	String_t* ____adUnitId_15;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::_canShowAd
	bool ____canShowAd_16;
	// System.Action`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::_userRewardEarnedCallback
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ____userRewardEarnedCallback_17;
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

// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t53925D96536F97B418172C0EF27AD9E6858FF348  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_2;
};

// BannerAd/<>c
struct U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A  : public RuntimeObject
{
};

struct U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields
{
	// BannerAd/<>c BannerAd/<>c::<>9
	U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A* ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> BannerAd/<>c::<>9__1_0
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___U3CU3E9__1_0_1;
};

// FindDifference/<spawnX>d__10
struct U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B  : public RuntimeObject
{
	// System.Int32 FindDifference/<spawnX>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FindDifference/<spawnX>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FindDifference FindDifference/<spawnX>d__10::<>4__this
	FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* ___U3CU3E4__this_2;
};

// Interstitial/<>c
struct U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD  : public RuntimeObject
{
};

struct U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields
{
	// Interstitial/<>c Interstitial/<>c::<>9
	U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD* ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> Interstitial/<>c::<>9__1_0
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___U3CU3E9__1_0_1;
};

// Rewarded/<>c
struct U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493  : public RuntimeObject
{
};

struct U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields
{
	// Rewarded/<>c Rewarded/<>c::<>9
	U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* ___U3CU3E9_0;
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> Rewarded/<>c::<>9__3_0
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___U3CU3E9__3_0_1;
	// System.Action`1<GoogleMobileAds.Api.Reward> Rewarded/<>c::<>9__6_0
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ___U3CU3E9__6_0_2;
};

// Rewarded/<showError>d__7
struct U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8  : public RuntimeObject
{
	// System.Int32 Rewarded/<showError>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Rewarded/<showError>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Rewarded Rewarded/<showError>d__7::<>4__this
	Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* ___U3CU3E4__this_2;
};

// btnControl/<spawnX>d__40
struct U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9  : public RuntimeObject
{
	// System.Int32 btnControl/<spawnX>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object btnControl/<spawnX>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// btnControl btnControl/<spawnX>d__40::<>4__this
	btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* ___U3CU3E4__this_2;
};

// desChild/<actiVate>d__3
struct U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845  : public RuntimeObject
{
	// System.Int32 desChild/<actiVate>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object desChild/<actiVate>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// desChild desChild/<actiVate>d__3::<>4__this
	desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* ___U3CU3E4__this_2;
};

// disableObj/<showCorrect>d__5
struct U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697  : public RuntimeObject
{
	// System.Int32 disableObj/<showCorrect>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object disableObj/<showCorrect>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// disableObj disableObj/<showCorrect>d__5::<>4__this
	disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* ___U3CU3E4__this_2;
};

// setPotsNum/<showHint>d__7
struct U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25  : public RuntimeObject
{
	// System.Int32 setPotsNum/<showHint>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object setPotsNum/<showHint>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// setPotsNum setPotsNum/<showHint>d__7::<>4__this
	setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* ___U3CU3E4__this_2;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::_client
	RuntimeObject* ____client_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_t6D103D50D92EED8806671DABC525008F7D560A68  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>
struct Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BannerAd
struct BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GoogleMobileAds.Api.BannerView BannerAd::bannerView
	BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* ___bannerView_4;
};

// FindDifference
struct FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FindDifference::xIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___xIcon_4;
	// UnityEngine.Vector3 FindDifference::screenPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___screenPoint_5;
	// UnityEngine.GameObject[] FindDifference::xnun
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___xnun_6;
	// UnityEngine.GameObject FindDifference::loosePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loosePanel_7;
	// UnityEngine.GameObject FindDifference::winPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPanel_8;
	// UnityEngine.UI.Text FindDifference::chancesTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___chancesTxt_10;
};

struct FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields
{
	// System.Int32 FindDifference::chances
	int32_t ___chances_9;
	// System.Boolean FindDifference::isVibrate
	bool ___isVibrate_11;
};

// Interstitial
struct Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GoogleMobileAds.Api.InterstitialAd Interstitial::interstitial
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___interstitial_4;
	// System.String Interstitial::_adUnitId
	String_t* ____adUnitId_5;
	// GoogleMobileAds.Api.InterstitialAd Interstitial::interstitialAd
	InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___interstitialAd_6;
};

// Rewarded
struct Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GoogleMobileAds.Api.RewardedAd Rewarded::rewardedAd
	RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* ___rewardedAd_4;
	// UnityEngine.GameObject Rewarded::rewBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rewBtn_5;
	// UnityEngine.GameObject Rewarded::errorTextObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___errorTextObj_6;
	// System.String Rewarded::_adUnitId
	String_t* ____adUnitId_7;
};

// UnityEngine.UI.Extensions.ScrollConflictManager
struct ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.ScrollConflictManager::ParentScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___ParentScrollRect_4;
	// UnityEngine.UI.ScrollRect UnityEngine.UI.Extensions.ScrollConflictManager::_myScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ____myScrollRect_5;
	// System.Boolean UnityEngine.UI.Extensions.ScrollConflictManager::scrollOther
	bool ___scrollOther_6;
	// System.Boolean UnityEngine.UI.Extensions.ScrollConflictManager::scrollOtherHorizontally
	bool ___scrollOtherHorizontally_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// activateNextBtnOnWin
struct activateNextBtnOnWin_tEDC59CDC2E13335BF502B9F77076BE0C9673B58F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// btnControl
struct btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject btnControl::xIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___xIcon_4;
	// UnityEngine.GameObject btnControl::circleIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___circleIcon_5;
	// UnityEngine.Vector3 btnControl::screenPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___screenPoint_6;
	// UnityEngine.GameObject btnControl::loosePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loosePanel_7;
	// UnityEngine.GameObject btnControl::winPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPanel_8;
	// UnityEngine.GameObject[] btnControl::xnun
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___xnun_9;
	// UnityEngine.GameObject[] btnControl::circleCol
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___circleCol_10;
	// System.Int32 btnControl::chances
	int32_t ___chances_11;
	// System.Int32 btnControl::hint
	int32_t ___hint_12;
	// UnityEngine.UI.Text btnControl::hintsTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___hintsTxt_13;
	// System.Boolean btnControl::isVibrate
	bool ___isVibrate_14;
	// System.Int32 btnControl::spotFound
	int32_t ___spotFound_15;
	// System.Int32 btnControl::spotsNum
	int32_t ___spotsNum_16;
	// UnityEngine.GameObject btnControl::gameCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameCanvas_17;
	// UnityEngine.GameObject btnControl::menuCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menuCanvas_18;
	// UnityEngine.GameObject btnControl::lvlPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lvlPanel_19;
	// UnityEngine.GameObject[] btnControl::hearts
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hearts_20;
	// System.Int32 btnControl::heartNum
	int32_t ___heartNum_21;
	// System.Boolean btnControl::hintHit
	bool ___hintHit_22;
	// UnityEngine.GameObject btnControl::settingsPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___settingsPanel_23;
	// System.Boolean btnControl::settingsOn
	bool ___settingsOn_24;
	// UnityEngine.AudioSource btnControl::bgMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgMusic_25;
	// System.Boolean btnControl::musicOn
	bool ___musicOn_26;
	// UnityEngine.GameObject[] btnControl::content
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___content_27;
	// UnityEngine.UI.Text btnControl::foundSpots
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___foundSpots_28;
	// System.Int32 btnControl::boolNum
	int32_t ___boolNum_29;
	// UnityEngine.GameObject[] btnControl::lvlsSet
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___lvlsSet_30;
	// System.Int32[] btnControl::adsLevelNum
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___adsLevelNum_31;
	// UnityEngine.GameObject btnControl::lisPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lisPanel_32;
	// System.Boolean btnControl::listOn
	bool ___listOn_33;
	// System.Boolean btnControl::openLvlNum
	bool ___openLvlNum_34;
};

// desChild
struct desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject desChild::twin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___twin_4;
};

// disableObj
struct disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject disableObj::twinRightSel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___twinRightSel_4;
	// System.Boolean disableObj::hasClick
	bool ___hasClick_5;
};

// levelBtnSelect
struct levelBtnSelect_tA63D3A6ED6D78971AEB44D674D697CB4176CF601  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] levelBtnSelect::img
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___img_4;
	// System.Int32 levelBtnSelect::lvlPicNum
	int32_t ___lvlPicNum_5;
	// System.Int32 levelBtnSelect::ScrollPicNum
	int32_t ___ScrollPicNum_6;
	// UnityEngine.GameObject levelBtnSelect::lvlPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lvlPanel_7;
};

// levelRecorder
struct levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 levelRecorder::btnOnTurn
	int32_t ___btnOnTurn_4;
	// System.Int32 levelRecorder::openLvlNum
	int32_t ___openLvlNum_5;
};

// objDrag
struct objDrag_tE063A4928A96A548D6718E10848012873D343187  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 objDrag::initialPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialPos_4;
	// UnityEngine.Vector2 objDrag::mousePos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mousePos_5;
	// UnityEngine.Vector3 objDrag::mOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mOffset_6;
	// System.Single objDrag::deltaX
	float ___deltaX_7;
	// System.Single objDrag::deltaY
	float ___deltaY_8;
	// UnityEngine.GameObject objDrag::gameCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameCanvas_9;
};

// openLvlChecker
struct openLvlChecker_tED6F24B2E0F54CB725F8368FCAEEFA023AF21AE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// sceneLoader
struct sceneLoader_tAFF7C98C48BC6FE9C7EE755282D8CB14078146F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 sceneLoader::sceneToLoadNum
	int32_t ___sceneToLoadNum_4;
};

// setPotsNum
struct setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 setPotsNum::newSpotNum
	int32_t ___newSpotNum_4;
	// UnityEngine.GameObject[] setPotsNum::spotsObj
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___spotsObj_5;
	// System.Int32 setPotsNum::curLvl
	int32_t ___curLvl_6;
	// UnityEngine.GameObject[] setPotsNum::sparkle
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___sparkle_7;
	// System.Int32 setPotsNum::sparkleNum
	int32_t ___sparkleNum_8;
};

// sparkleRandScript
struct sparkleRandScript_tE2663590032723AFFFCDABB0A456A38843C750D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// tabRescaler
struct tabRescaler_t2D5392D3DC58EABF0E3F7AFC52B2DCB5999CA47C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] tabRescaler::gameCanvas
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___gameCanvas_4;
	// UnityEngine.GameObject[] tabRescaler::gameCanvas2
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___gameCanvas2_5;
};

// zoomControl
struct zoomControl_t15E7FF937C87AED05D2C6FF00B26F732720CB790  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera zoomControl::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
	// System.Single zoomControl::touchesPrevPosDifference
	float ___touchesPrevPosDifference_5;
	// System.Single zoomControl::touchesCurPosDifference
	float ___touchesCurPosDifference_6;
	// System.Single zoomControl::zoomModifier
	float ___zoomModifier_7;
	// UnityEngine.Vector2 zoomControl::firstTouchPrevPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___firstTouchPrevPos_8;
	// UnityEngine.Vector2 zoomControl::secondTouchPrevPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___secondTouchPrevPos_9;
	// System.Single zoomControl::zoomModifierSpeed
	float ___zoomModifierSpeed_10;
	// UnityEngine.UI.Text zoomControl::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_11;
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) ;
// System.Void BannerAd::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_RequestBanner_mEBBCBE924DCA9F98FC3468CA9D42CE1807AFC3EF (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::.ctor(System.String,GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, String_t* ___adUnitId0, AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* ___adSize1, int32_t ___position2, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85 (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.BannerView::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* __this, const RuntimeMethod* method) ;
// System.Void BannerAd/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFCFE4A515E9631D11FAE8E0EE4452ABBF58F9136 (U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.CanvasScaler>()
inline CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.UI.CanvasScaler::get_matchWidthOrHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_matchWidthOrHeight_m9C40FBA943172874FD27F3F7B880E2D5D5862C9B_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::set_matchWidthOrHeight(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_matchWidthOrHeight_m44635DC3E4424255C312814C325A48E37E6B6E30_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<levelRecorder>()
inline levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498 (const RuntimeMethod* method)
{
	return ((  levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator btnControl::spawnX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* btnControl_spawnX_mE05FDCFC809D0D446740B403B75AE69B50481DCB (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<setPotsNum>()
inline setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06 (const RuntimeMethod* method)
{
	return ((  setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void btnControl/<spawnX>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__40__ctor_m100A190CD288AA6B38129124F44BE7F1E860C578 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<disableObj>()
inline disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Interstitial>()
inline Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1 (const RuntimeMethod* method)
{
	return ((  Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Interstitial::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_ShowAd_mF95DF8972503E4DED8511EE0E6E7B9B623FA7317 (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<BannerAd>()
inline BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF (const RuntimeMethod* method)
{
	return ((  BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void BannerAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_Show_mD4F3E193254C84B215CB4920603E4D7D970BCB9F (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator desChild::actiVate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* desChild_actiVate_m98C50028191A6C91AB4F62BD96CF669734B57E34 (desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* __this, const RuntimeMethod* method) ;
// System.Void desChild/<actiVate>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CactiVateU3Ed__3__ctor_m3AE95B238CA40A02D452EDEE679DDF0948AFDA33 (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void disableObj::altDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disableObj_altDisable_m266C2F5ACBC80B016977674B99D2E6307FB39305 (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator disableObj::showCorrect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* disableObj_showCorrect_m681066742D8274C8875BCE851C55854CAFF470E4 (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<btnControl>()
inline btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205 (const RuntimeMethod* method)
{
	return ((  btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void disableObj/<showCorrect>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowCorrectU3Ed__5__ctor_m7BCF5641E3A7037674CC564528A32F2C67101877 (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FindDifference::spawnX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FindDifference_spawnX_m5BB1949EB7537D3CCD4AB4F359D102A3EBE4BBCB (FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void FindDifference/<spawnX>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__10__ctor_mA7BC96A2B550406A6D061C410B6D38E59B93CDF3 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Interstitial::LoadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_LoadInterstitialAd_mB0B6F1FB14E8DC616BC53D1FE424F8B9C5BF95C3 (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* Builder_AddKeyword_mAED29632B1B8D21E57E665CB2A50E239ADA0FBCB (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mEBCBF2FC848DA79D39227A5344136BFA0FF2A65C (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Load_m7582DD601991C297C7E7E61BBE53B639466A73A1 (String_t* ___adUnitId0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* ___adLoadCallback2, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.InterstitialAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.InterstitialAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* InterstitialAd_GetResponseInfo_m6F3CB969DB9E63C2DAA0E759CC83D52D31E07171 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) ;
// System.Void Interstitial/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7354B326C3109E67A45533C0ED4844520B1339B3 (U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void BannerAd::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_hide_mA26ACC41FC11EF7D0708667E0E5FCA38C341B28C (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void Rewarded::LoadRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_LoadRewardedAd_mD6247815D6C60A6B520FBB59340CB1DCD3FE6781 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF2798EE70F4B32175E94176B602F4D7A2456BA02 (Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::Load(System.String,GoogleMobileAds.Api.AdRequest,System.Action`2<GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Load_m898A7CFD8143AE42D14C47EC3EAE3CE40B0B5741 (String_t* ___adUnitId0, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request1, Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* ___adLoadCallback2, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.RewardedAd::CanShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m387D866A24FCC32F9B78AB9776B1C15352563CA7 (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show(System.Action`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_m63D6659798C98BD34A7F0A1479C0B35E8616A71F (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ___userRewardEarnedCallback0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Rewarded::showError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Rewarded_showError_m7532705C0C59DAB82A869B4D85967D563BFAAAB9 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) ;
// System.Void Rewarded/<showError>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowErrorU3Ed__7__ctor_m8F76DCE62C35576BC2ABDC815502D204985272B8 (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.ResponseInfo GoogleMobileAds.Api.RewardedAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* RewardedAd_GetResponseInfo_mEED30DA50E26CBECBC9728C53DE4F75553BC4BB1 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) ;
// System.Void Rewarded/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8204D21A6B52CBD9E355BB1526BA7D94F2C75520 (U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* __this, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Api.Reward::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Reward_get_Type_m52A71F274CBCCF3FEF1B0E37BEBA30304C8DE5DA_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) ;
// System.Double GoogleMobileAds.Api.Reward::get_Amount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator setPotsNum::showHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* setPotsNum_showHint_m6869DC72F5D1D1B493997FECC173265B99A1F4A5 (setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* __this, const RuntimeMethod* method) ;
// System.Void setPotsNum/<showHint>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowHintU3Ed__7__ctor_m3D055658436951E199DEEABFAE1AAECB8C47814E (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void activateNextBtnOnWin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void activateNextBtnOnWin__ctor_m74E349F1BE658C4E6531EE3D73AB28B3ECEBD64C (activateNextBtnOnWin_tEDC59CDC2E13335BF502B9F77076BE0C9673B58F* __this, const RuntimeMethod* method) 
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
// System.Void BannerAd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_Start_m408AAD1F0D3F7EC107EE37E12A402FA378327A24 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_mE2FE11F971489E531F1C8AE3F4AFD7E335ECF684_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B2_0 = NULL;
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B1_0 = NULL;
	{
		// MobileAds.Initialize(initStatus => { });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = ((U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var);
		U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A* L_2 = ((U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_3 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_mE2FE11F971489E531F1C8AE3F4AFD7E335ECF684_RuntimeMethod_var), NULL);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_4 = L_3;
		((U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(G_B2_0, NULL);
		// this.RequestBanner();
		BannerAd_RequestBanner_mEBBCBE924DCA9F98FC3468CA9D42CE1807AFC3EF(__this, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::RequestBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_RequestBanner_mEBBCBE924DCA9F98FC3468CA9D42CE1807AFC3EF (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E1FC9407C6B9FA06767A49441CE06C92059F01);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_1 = NULL;
	{
		// string adUnitId = "ca-app-pub-3870393909896853/5686760111";
		V_0 = _stringLiteralC0E1FC9407C6B9FA06767A49441CE06C92059F01;
		// this.bannerView = new BannerView(adUnitId, AdSize.Banner, AdPosition.Bottom);
		String_t* L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var);
		AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158* L_1 = ((AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_StaticFields*)il2cpp_codegen_static_fields_for(AdSize_tF9FBB34C7252D73803A62C13A3AB656A06A0F158_il2cpp_TypeInfo_var))->___Banner_4;
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_2 = (BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB*)il2cpp_codegen_object_new(BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BannerView__ctor_m3C156986754CF612D73D61061B92BE3468FF6FDC(L_2, L_0, L_1, 1, NULL);
		__this->___bannerView_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bannerView_4), (void*)L_2);
		// AdRequest request = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_3 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_3, NULL);
		NullCheck(L_3);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_4;
		L_4 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_3, NULL);
		V_1 = L_4;
		// this.bannerView.LoadAd(request);
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_5 = __this->___bannerView_4;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_6 = V_1;
		NullCheck(L_5);
		BannerView_LoadAd_m56BF83CC97DE20C40457B9452D0ABEFD97933FFF(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_hide_mA26ACC41FC11EF7D0708667E0E5FCA38C341B28C (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// bannerView.Hide();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->___bannerView_4;
		NullCheck(L_0);
		BannerView_Hide_m54630CB9110A9D38DFC00BC047B775C778EA22BD(L_0, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_Show_mD4F3E193254C84B215CB4920603E4D7D970BCB9F (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// bannerView.Show();
		BannerView_t203A90A6D41B56EC7208F121D6EE7E7283A590BB* L_0 = __this->___bannerView_4;
		NullCheck(L_0);
		BannerView_Show_m90ACC1B7ED13065667AB7948722F0B2CBD3A84AE(L_0, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd__ctor_m155A92495C9C9CEA0A5B7C867F53916021EA3C09 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
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
// System.Void BannerAd/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8475EC2EAB6AF4A8ACEA1CEAF5A1E146948074FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A* L_0 = (U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A*)il2cpp_codegen_object_new(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFCFE4A515E9631D11FAE8E0EE4452ABBF58F9136(L_0, NULL);
		((U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void BannerAd/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFCFE4A515E9631D11FAE8E0EE4452ABBF58F9136 (U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BannerAd/<>c::<Start>b__1_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__1_0_mE2FE11F971489E531F1C8AE3F4AFD7E335ECF684 (U3CU3Ec_tD9DDE198886509C27BAA8F31C3AF62478556F79A* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___initStatus0, const RuntimeMethod* method) 
{
	{
		// MobileAds.Initialize(initStatus => { });
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
// System.Void btnControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_Start_m7DFAA7C1ABC214D930ED30C6BD7FBD7717F03F9C (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25AF90F5340E34D097781A2E95D3308B19C42DC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86141D1C48A71B5AF386DF6E2977D00A805D05EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// chances = 5;
		__this->___chances_11 = 5;
		// boolNum = PlayerPrefs.GetInt("boolNum");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral25AF90F5340E34D097781A2E95D3308B19C42DC7, NULL);
		__this->___boolNum_29 = L_0;
		// if (boolNum == 0)
		int32_t L_1 = __this->___boolNum_29;
		if (L_1)
		{
			goto IL_0054;
		}
	}
	{
		// hint = 3;
		__this->___hint_12 = 3;
		// PlayerPrefs.SetInt("hint", hint);
		int32_t L_2 = __this->___hint_12;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral86141D1C48A71B5AF386DF6E2977D00A805D05EF, L_2, NULL);
		// boolNum = 1;
		__this->___boolNum_29 = 1;
		// PlayerPrefs.SetInt("boolNum", boolNum);
		int32_t L_3 = __this->___boolNum_29;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral25AF90F5340E34D097781A2E95D3308B19C42DC7, L_3, NULL);
	}

IL_0054:
	{
		// hint = PlayerPrefs.GetInt("hint");
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral86141D1C48A71B5AF386DF6E2977D00A805D05EF, NULL);
		__this->___hint_12 = L_4;
		// }
		return;
	}
}
// System.Void btnControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_Update_m9C980060992E5A021EDD89F59A011D7D78CEC5A2 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86141D1C48A71B5AF386DF6E2977D00A805D05EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	String_t* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	{
		// PlayerPrefs.SetInt("hint", hint);
		int32_t L_0 = __this->___hint_12;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral86141D1C48A71B5AF386DF6E2977D00A805D05EF, L_0, NULL);
		// content = GameObject.FindGameObjectsWithTag("content");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteralAE1B3CB371C9291D34EB334456EBC01AC8284947, NULL);
		__this->___content_27 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content_27), (void*)L_1);
		// gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight = Mathf.Clamp(gameCanvas.GetComponent<CanvasScaler>().matchWidthOrHeight, 0f, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameCanvas_17;
		NullCheck(L_2);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_3;
		L_3 = GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8(L_2, GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameCanvas_17;
		NullCheck(L_4);
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_5;
		L_5 = GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8(L_4, GameObject_GetComponent_TisCanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B_m1AF8F471893D04BF1E6A139B25EA4CE07B23F8F8_RuntimeMethod_var);
		NullCheck(L_5);
		float L_6;
		L_6 = CanvasScaler_get_matchWidthOrHeight_m9C40FBA943172874FD27F3F7B880E2D5D5862C9B_inline(L_5, NULL);
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (1.0f), NULL);
		NullCheck(L_3);
		CanvasScaler_set_matchWidthOrHeight_m44635DC3E4424255C312814C325A48E37E6B6E30_inline(L_3, L_7, NULL);
		// xnun = GameObject.FindGameObjectsWithTag("x");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8;
		L_8 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		__this->___xnun_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xnun_9), (void*)L_8);
		// circleCol = GameObject.FindGameObjectsWithTag("circle");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9;
		L_9 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7, NULL);
		__this->___circleCol_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___circleCol_10), (void*)L_9);
		// if(spotFound >= spotsNum)
		int32_t L_10 = __this->___spotFound_15;
		int32_t L_11 = __this->___spotsNum_16;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_00b4;
		}
	}
	{
		// Debug.Log("win");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E, NULL);
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___winPanel_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if(openLvlNum == false)
		bool L_13 = __this->___openLvlNum_34;
		if (L_13)
		{
			goto IL_00b4;
		}
	}
	{
		// GameObject.FindObjectOfType<levelRecorder>().openLvlNum += 1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_14;
		L_14 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->___openLvlNum_5;
		NullCheck(L_15);
		L_15->___openLvlNum_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// openLvlNum = true;
		__this->___openLvlNum_34 = (bool)1;
	}

IL_00b4:
	{
		// hintsTxt.text = hint + "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___hintsTxt_13;
		int32_t* L_18 = (&__this->___hint_12);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		String_t* L_20 = L_19;
		G_B4_0 = L_20;
		G_B4_1 = L_17;
		if (L_20)
		{
			G_B5_0 = L_20;
			G_B5_1 = L_17;
			goto IL_00ce;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B4_1;
	}

IL_00ce:
	{
		NullCheck(G_B5_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B5_1, G_B5_0);
		// }
		return;
	}
}
// System.Void btnControl::zoomIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_zoomIn_mB6E9CC9B5364C5C90504CB94C68FC8C8C8FE4F19 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// foreach(GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___content_27;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		// foreach(GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Vector3 cScale = c.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		V_3 = L_7;
		// if(cScale.x < 2f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		float L_9 = L_8.___x_2;
		if ((!(((float)L_9) < ((float)(2.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// cScale.x += 0.2f;
		float* L_10 = (&(&V_3)->___x_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, (0.200000003f)));
		// cScale.y += 0.2f;
		float* L_13 = (&(&V_3)->___y_3);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_add(L_15, (0.200000003f)));
		// cScale.z += 0.2f;
		float* L_16 = (&(&V_3)->___z_4);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, (0.200000003f)));
		// c.transform.localScale = cScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_21, NULL);
	}

IL_0064:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		// foreach(GameObject c in content)
		int32_t L_23 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void btnControl::zoomOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_zoomOut_mFE0C6A911B6C826292CEC1FF4BD467D19DE99183 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// foreach (GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___content_27;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_000b:
	{
		// foreach (GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// Vector3 cScale = c.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		V_3 = L_7;
		// if (cScale.x > 1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_3;
		float L_9 = L_8.___x_2;
		if ((!(((float)L_9) > ((float)(1.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// cScale.x -= 0.2f;
		float* L_10 = (&(&V_3)->___x_2);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		*((float*)L_11) = (float)((float)il2cpp_codegen_subtract(L_12, (0.200000003f)));
		// cScale.y -= 0.2f;
		float* L_13 = (&(&V_3)->___y_3);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract(L_15, (0.200000003f)));
		// cScale.z -= 0.2f;
		float* L_16 = (&(&V_3)->___z_4);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		*((float*)L_17) = (float)((float)il2cpp_codegen_subtract(L_18, (0.200000003f)));
		// c.transform.localScale = cScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_2;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		NullCheck(L_20);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_20, L_21, NULL);
	}

IL_0064:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0068:
	{
		// foreach (GameObject c in content)
		int32_t L_23 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void btnControl::wrongSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_wrongSelect_m3BF3811157F1E7E0534AEB40E78A8CB121338410 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B74D19DAF781910611EEBFCC623752790C945A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (chances > 0)
		int32_t L_0 = __this->___chances_11;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		// StartCoroutine(spawnX());
		RuntimeObject* L_1;
		L_1 = btnControl_spawnX_mE05FDCFC809D0D446740B403B75AE69B50481DCB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// Debug.Log("fail");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806, NULL);
		// if (isVibrate == true)
		bool L_3 = __this->___isVibrate_14;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9(NULL);
	}

IL_002d:
	{
		// hearts[heartNum].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___hearts_20;
		int32_t L_5 = __this->___heartNum_21;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// heartNum += 1;
		int32_t L_8 = __this->___heartNum_21;
		__this->___heartNum_21 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// chances -= 1;
		int32_t L_9 = __this->___chances_11;
		__this->___chances_11 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		return;
	}

IL_005d:
	{
		// Debug.Log("loose Game");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB1B74D19DAF781910611EEBFCC623752790C945A, NULL);
		// loosePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___loosePanel_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void btnControl::settingsBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_settingsBtn_m004BA524752417678AC61613062902CEB879E92A (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	{
		// if(settingsOn == false)
		bool L_0 = __this->___settingsOn_24;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// settingsPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___settingsPanel_23;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// settingsOn = true;
		__this->___settingsOn_24 = (bool)1;
		return;
	}

IL_001c:
	{
		// else if(settingsOn == true)
		bool L_2 = __this->___settingsOn_24;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// settingsPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___settingsPanel_23;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// settingsOn = false;
		__this->___settingsOn_24 = (bool)0;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void btnControl::vibrateBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_vibrateBtn_mE04CEE747059E56A1CD7A591E50061BEF2F618D8 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	{
		// if(isVibrate == true)
		bool L_0 = __this->___isVibrate_14;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// isVibrate = false;
		__this->___isVibrate_14 = (bool)0;
		return;
	}

IL_0010:
	{
		// else if(isVibrate == false)
		bool L_1 = __this->___isVibrate_14;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// isVibrate = true;
		__this->___isVibrate_14 = (bool)1;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void btnControl::musicBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_musicBtn_m539D5A699A693B5BCAAC98DAF5E8623C8758FA14 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	{
		// if(musicOn == true)
		bool L_0 = __this->___musicOn_26;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// bgMusic.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___bgMusic_25;
		NullCheck(L_1);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_1, NULL);
		// musicOn = false;
		__this->___musicOn_26 = (bool)0;
		return;
	}

IL_001b:
	{
		// else if(musicOn == false)
		bool L_2 = __this->___musicOn_26;
		if (L_2)
		{
			goto IL_0035;
		}
	}
	{
		// bgMusic.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___bgMusic_25;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// musicOn = true;
		__this->___musicOn_26 = (bool)1;
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void btnControl::hintBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_hintBtn_mE6E5C6EADF8268E55D9E20B766FE42A4DFDF33A1 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.FindObjectOfType<setPotsNum>().curLvl >= GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_0;
		L_0 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___curLvl_6;
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_2;
		L_2 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___btnOnTurn_4;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0041;
		}
	}
	{
		// if (hint > 0)
		int32_t L_4 = __this->___hint_12;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// if (GameObject.FindObjectOfType<setPotsNum>().sparkleNum > 0)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_5;
		L_5 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t L_6 = L_5->___sparkleNum_8;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		// hint -= 1;
		int32_t L_7 = __this->___hint_12;
		__this->___hint_12 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		// hintHit = true;
		__this->___hintHit_22 = (bool)1;
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator btnControl::spawnX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* btnControl_spawnX_mE05FDCFC809D0D446740B403B75AE69B50481DCB (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* L_0 = (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9*)il2cpp_codegen_object_new(U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CspawnXU3Ed__40__ctor_m100A190CD288AA6B38129124F44BE7F1E860C578(L_0, 0, NULL);
		U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void btnControl::rightSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_rightSelect_mC38E33982BF9760581D0F919E4FB7390B8F9230B (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF536C1ED36A519C9AE147A7D7F9DDD185DFA4A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("One spot found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCF536C1ED36A519C9AE147A7D7F9DDD185DFA4A0, NULL);
		// }
		return;
	}
}
// System.Void btnControl::lvlPanelBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_lvlPanelBtn_m827D5B4D6CFFD80FFE584BF963AD243D0D1D6A80 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// openLvlNum = false;
		__this->___openLvlNum_34 = (bool)0;
		// if (GameObject.FindObjectOfType<setPotsNum>().curLvl == GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_0;
		L_0 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___curLvl_6;
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_2;
		L_2 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___btnOnTurn_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_006d;
		}
	}
	{
		// foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_4;
		L_4 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_4);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = L_4->___spotsObj_5;
		V_0 = L_5;
		V_1 = 0;
		goto IL_004a;
	}

IL_002c:
	{
		// foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// s.GetComponent<Button>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9;
		NullCheck(L_10);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11;
		L_11 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_10, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// s.GetComponent<disableObj>().hasClick = false;
		NullCheck(L_10);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_12;
		L_12 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_10, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_12);
		L_12->___hasClick_5 = (bool)0;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004a:
	{
		// foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
		int32_t L_14 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		// foreach (GameObject c in circleCol)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___circleCol_10;
		V_0 = L_16;
		V_1 = 0;
		goto IL_0067;
	}

IL_005b:
	{
		// foreach (GameObject c in circleCol)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// Destroy(c);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0067:
	{
		// foreach (GameObject c in circleCol)
		int32_t L_22 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_005b;
		}
	}

IL_006d:
	{
		// foreach (Transform child in gameCanvas.transform.GetComponentInChildren<Transform>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___gameCanvas_17;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0(L_25, Component_GetComponentInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m896D425B0192FA317C81F3E08BA9FA75CF78CEE0_RuntimeMethod_var);
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_26, NULL);
		V_2 = L_27;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_28 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_28, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_29 = V_3;
					if (!L_29)
					{
						goto IL_00b5;
					}
				}
				{
					RuntimeObject* L_30 = V_3;
					NullCheck(L_30);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
				}

IL_00b5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009b_1;
			}

IL_0085_1:
			{
				// foreach (Transform child in gameCanvas.transform.GetComponentInChildren<Transform>())
				RuntimeObject* L_31 = V_2;
				NullCheck(L_31);
				RuntimeObject* L_32;
				L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				// child.gameObject.SetActive(false);
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_32, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), NULL);
				NullCheck(L_33);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
			}

IL_009b_1:
			{
				// foreach (Transform child in gameCanvas.transform.GetComponentInChildren<Transform>())
				RuntimeObject* L_34 = V_2;
				NullCheck(L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_0085_1;
				}
			}
			{
				goto IL_00b6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b6:
	{
		// foreach(int a in adsLevelNum)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___adsLevelNum_31;
		V_4 = L_36;
		V_1 = 0;
		goto IL_00e4;
	}

IL_00c2:
	{
		// foreach(int a in adsLevelNum)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_4;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_5 = L_40;
		// if (GameObject.FindObjectOfType<levelRecorder>().btnOnTurn == a)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_41;
		L_41 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_41);
		int32_t L_42 = L_41->___btnOnTurn_4;
		int32_t L_43 = V_5;
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_00e0;
		}
	}
	{
		// GameObject.FindObjectOfType<Interstitial>().ShowAd();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* L_44;
		L_44 = Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1(Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1_RuntimeMethod_var);
		NullCheck(L_44);
		Interstitial_ShowAd_mF95DF8972503E4DED8511EE0E6E7B9B623FA7317(L_44, NULL);
	}

IL_00e0:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00e4:
	{
		// foreach(int a in adsLevelNum)
		int32_t L_46 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_4;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_00c2;
		}
	}
	{
		// foreach (GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_48 = __this->___content_27;
		V_0 = L_48;
		V_1 = 0;
		goto IL_011b;
	}

IL_00f6:
	{
		// foreach (GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_49 = V_0;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		// c.transform.localScale = new Vector3(1f, 1f, 1f);
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53;
		L_53 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_53, L_54, NULL);
		int32_t L_55 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_011b:
	{
		// foreach (GameObject c in content)
		int32_t L_56 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_57 = V_0;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_00f6;
		}
	}
	{
		// spotFound = 0;
		__this->___spotFound_15 = 0;
		// lvlPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___lvlPanel_19;
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// winPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___winPanel_8;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)0, NULL);
		// loosePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___loosePanel_7;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
		// chances = 5;
		__this->___chances_11 = 5;
		// heartNum = 0;
		__this->___heartNum_21 = 0;
		// foreach(GameObject h in hearts)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_61 = __this->___hearts_20;
		V_0 = L_61;
		V_1 = 0;
		goto IL_0172;
	}

IL_0165:
	{
		// foreach(GameObject h in hearts)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_62 = V_0;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		// h.SetActive(true);
		NullCheck(L_65);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)1, NULL);
		int32_t L_66 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_0172:
	{
		// foreach(GameObject h in hearts)
		int32_t L_67 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_68 = V_0;
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))))
		{
			goto IL_0165;
		}
	}
	{
		// GameObject.FindObjectOfType<BannerAd>().Show();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* L_69;
		L_69 = Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF(Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF_RuntimeMethod_var);
		NullCheck(L_69);
		BannerAd_Show_mD4F3E193254C84B215CB4920603E4D7D970BCB9F(L_69, NULL);
		// }
		return;
	}
}
// System.Void btnControl::restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_restart_mE48798DFEC12DE3AF2FA4C3F82EC86765291F000 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// openLvlNum = false;
		__this->___openLvlNum_34 = (bool)0;
		// foreach (GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___content_27;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0037;
	}

IL_0012:
	{
		// foreach (GameObject c in content)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// c.transform.localScale = new Vector3(1f, 1f, 1f);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_6, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0037:
	{
		// foreach (GameObject c in content)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		// spotFound = 0;
		__this->___spotFound_15 = 0;
		// winPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___winPanel_8;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// loosePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___loosePanel_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// chances = 5;
		__this->___chances_11 = 5;
		// heartNum = 0;
		__this->___heartNum_21 = 0;
		// if (GameObject.FindObjectOfType<setPotsNum>().curLvl == GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_12;
		L_12 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = L_12->___curLvl_6;
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_14;
		L_14 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_15 = L_14->___btnOnTurn_4;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_00d0;
		}
	}
	{
		// foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_16;
		L_16 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_16);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = L_16->___spotsObj_5;
		V_0 = L_17;
		V_1 = 0;
		goto IL_00ad;
	}

IL_008f:
	{
		// foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		// s.GetComponent<Button>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = L_21;
		NullCheck(L_22);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23;
		L_23 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_22, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_23);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)1, NULL);
		// s.GetComponent<disableObj>().hasClick = false;
		NullCheck(L_22);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_24;
		L_24 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_22, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_24);
		L_24->___hasClick_5 = (bool)0;
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00ad:
	{
		// foreach (GameObject s in GameObject.FindObjectOfType<setPotsNum>().spotsObj)
		int32_t L_26 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_008f;
		}
	}
	{
		// foreach (GameObject c in circleCol)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_28 = __this->___circleCol_10;
		V_0 = L_28;
		V_1 = 0;
		goto IL_00ca;
	}

IL_00be:
	{
		// foreach (GameObject c in circleCol)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = V_0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		// Destroy(c);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_32, NULL);
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00ca:
	{
		// foreach (GameObject c in circleCol)
		int32_t L_34 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = V_0;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_00be;
		}
	}

IL_00d0:
	{
		// foreach (GameObject h in hearts)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_36 = __this->___hearts_20;
		V_0 = L_36;
		V_1 = 0;
		goto IL_00e8;
	}

IL_00db:
	{
		// foreach (GameObject h in hearts)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_37 = V_0;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		// h.SetActive(true);
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)1, NULL);
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00e8:
	{
		// foreach (GameObject h in hearts)
		int32_t L_42 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_00db;
		}
	}
	{
		// foreach (int a in adsLevelNum)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->___adsLevelNum_31;
		V_2 = L_44;
		V_1 = 0;
		goto IL_0118;
	}

IL_00f9:
	{
		// foreach (int a in adsLevelNum)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_3 = L_48;
		// if (GameObject.FindObjectOfType<levelRecorder>().btnOnTurn == a)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_49;
		L_49 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_49);
		int32_t L_50 = L_49->___btnOnTurn_4;
		int32_t L_51 = V_3;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_0114;
		}
	}
	{
		// GameObject.FindObjectOfType<Interstitial>().ShowAd();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* L_52;
		L_52 = Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1(Object_FindObjectOfType_TisInterstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC_m86E714C006CB1DBF3A6D80E1DE6B6179B23E92E1_RuntimeMethod_var);
		NullCheck(L_52);
		Interstitial_ShowAd_mF95DF8972503E4DED8511EE0E6E7B9B623FA7317(L_52, NULL);
	}

IL_0114:
	{
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0118:
	{
		// foreach (int a in adsLevelNum)
		int32_t L_54 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_2;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_00f9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void btnControl::listPanelShow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl_listPanelShow_mDA416EE10138118997DCB32F9716218C60C49427 (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	{
		// if(listOn == false)
		bool L_0 = __this->___listOn_33;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// lisPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___lisPanel_32;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// listOn = true;
		__this->___listOn_33 = (bool)1;
		return;
	}

IL_001c:
	{
		// lisPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___lisPanel_32;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// listOn = false;
		__this->___listOn_33 = (bool)0;
		// }
		return;
	}
}
// System.Void btnControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void btnControl__ctor_m68E6C993487B6055395B22849BD5B10E281E63AC (btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* __this, const RuntimeMethod* method) 
{
	{
		// public int hint = 3;
		__this->___hint_12 = 3;
		// public bool isVibrate = true;
		__this->___isVibrate_14 = (bool)1;
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
// System.Void btnControl/<spawnX>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__40__ctor_m100A190CD288AA6B38129124F44BE7F1E860C578 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void btnControl/<spawnX>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__40_System_IDisposable_Dispose_m37F7387BB4AF370904B8FB186FF1BA2A9954AE51 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean btnControl/<spawnX>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnXU3Ed__40_MoveNext_mDDA242E37BA87A7CEA5FEC6949086865318DE820 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2CAA97CC26AFB8C684CC32D5B19E373D69332B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Instantiate(xIcon, Input.mousePosition, Quaternion.identity);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___xIcon_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// GameObject.Find("xIcon(Clone)").transform.SetParent(GameObject.Find("Canvas").transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralD2CAA97CC26AFB8C684CC32D5B19E373D69332B0, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_10);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_10, L_12, NULL);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0070:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (GameObject g in xnun)
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_14 = V_1;
		NullCheck(L_14);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = L_14->___xnun_9;
		V_2 = L_15;
		V_3 = 0;
		goto IL_008e;
	}

IL_0082:
	{
		// foreach (GameObject g in xnun)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		// Destroy(g);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_19, NULL);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_008e:
	{
		// foreach (GameObject g in xnun)
		int32_t L_21 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = V_2;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0082;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object btnControl/<spawnX>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnXU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m99FA7A9316A930A3C9EB87DC5CCDF10EB1718084 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void btnControl/<spawnX>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__40_System_Collections_IEnumerator_Reset_m11A53D9144D4A9689DE5635372E5B0307F6BBCF7 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspawnXU3Ed__40_System_Collections_IEnumerator_Reset_m11A53D9144D4A9689DE5635372E5B0307F6BBCF7_RuntimeMethod_var)));
	}
}
// System.Object btnControl/<spawnX>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnXU3Ed__40_System_Collections_IEnumerator_get_Current_m3AFBFD56E75192CEB4A8E37BC334C8283D259CD7 (U3CspawnXU3Ed__40_t6B5EC35183DE486F6E2B24B187FB5FF2ACF526F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void desChild::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void desChild_Start_m9A1D8B16BA4AB8D35F08E2D8B7B8DE5201698783 (desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void desChild::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void desChild_Update_mF8E1611D60195CAF49146774A8A5C901AA40A0D7 (desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(actiVate());
		RuntimeObject* L_0;
		L_0 = desChild_actiVate_m98C50028191A6C91AB4F62BD96CF669734B57E34(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator desChild::actiVate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* desChild_actiVate_m98C50028191A6C91AB4F62BD96CF669734B57E34 (desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* L_0 = (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845*)il2cpp_codegen_object_new(U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CactiVateU3Ed__3__ctor_m3AE95B238CA40A02D452EDEE679DDF0948AFDA33(L_0, 0, NULL);
		U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void desChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void desChild__ctor_mF74CBC27CB37AB5993AD380E3EEF308E36BB55ED (desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* __this, const RuntimeMethod* method) 
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
// System.Void desChild/<actiVate>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CactiVateU3Ed__3__ctor_m3AE95B238CA40A02D452EDEE679DDF0948AFDA33 (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void desChild/<actiVate>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CactiVateU3Ed__3_System_IDisposable_Dispose_mD9783E02CE2CFB3135698D0FCDF47B2B1D40D2EB (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean desChild/<actiVate>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CactiVateU3Ed__3_MoveNext_m3119D243F75ACAF0E29FF8144804CEB57722F41A (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// twin.SetActive(true);
		desChild_t8107E3F037EE9C9D943ECCC58169EE2B2D1FF079* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___twin_4;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object desChild/<actiVate>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CactiVateU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m18A4777A5AA29B21BA3F66574637133E9CDB09E9 (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void desChild/<actiVate>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CactiVateU3Ed__3_System_Collections_IEnumerator_Reset_mB6DE8024D2AE2E31D812D27C3C1F8347DFE82F3A (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CactiVateU3Ed__3_System_Collections_IEnumerator_Reset_mB6DE8024D2AE2E31D812D27C3C1F8347DFE82F3A_RuntimeMethod_var)));
	}
}
// System.Object desChild/<actiVate>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CactiVateU3Ed__3_System_Collections_IEnumerator_get_Current_m5AAE42624DF12420718E84A92D09A751E57E0362 (U3CactiVateU3Ed__3_t97F3D78E92E5C3B272F98171028130B8248FE845* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void disableObj::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disableObj_Start_mE47E4DBC4625C2307E628AF68FA731EBE9C139FB (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) 
{
	{
		// altDisable();
		disableObj_altDisable_m266C2F5ACBC80B016977674B99D2E6307FB39305(__this, NULL);
		// }
		return;
	}
}
// System.Void disableObj::disAble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disableObj_disAble_m6DDD4E98F76AF432719C3121E6ED8A6089A938EF (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(showCorrect());
		RuntimeObject* L_0;
		L_0 = disableObj_showCorrect_m681066742D8274C8875BCE851C55854CAFF470E4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// hasClick = true;
		__this->___hasClick_5 = (bool)1;
		// twinRightSel.GetComponent<disableObj>().hasClick = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___twinRightSel_4;
		NullCheck(L_2);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_3;
		L_3 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_2, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___hasClick_5 = (bool)1;
		// }
		return;
	}
}
// System.Void disableObj::altDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disableObj_altDisable_m266C2F5ACBC80B016977674B99D2E6307FB39305 (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324053B5032C4DCDEC3E1340A46FBDEE0F91F2B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameObject.FindObjectOfType<setPotsNum>().curLvl < GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_0;
		L_0 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___curLvl_6;
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_2;
		L_2 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->___btnOnTurn_4;
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_0053;
		}
	}
	{
		// Instantiate(GameObject.FindObjectOfType<btnControl>().circleIcon, this.transform.position, Quaternion.identity, this.gameObject.transform);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_4;
		L_4 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___circleIcon_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_5, L_7, L_8, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// this.gameObject.GetComponent<Button>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_12, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)0, NULL);
		return;
	}

IL_0053:
	{
		// Debug.Log("nut");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral324053B5032C4DCDEC3E1340A46FBDEE0F91F2B0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator disableObj::showCorrect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* disableObj_showCorrect_m681066742D8274C8875BCE851C55854CAFF470E4 (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* L_0 = (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697*)il2cpp_codegen_object_new(U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CshowCorrectU3Ed__5__ctor_m7BCF5641E3A7037674CC564528A32F2C67101877(L_0, 0, NULL);
		U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void disableObj::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void disableObj__ctor_m8295713E2D5D7ADCE4132FD99119A3DDFFD6E386 (disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* __this, const RuntimeMethod* method) 
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
// System.Void disableObj/<showCorrect>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowCorrectU3Ed__5__ctor_m7BCF5641E3A7037674CC564528A32F2C67101877 (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void disableObj/<showCorrect>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowCorrectU3Ed__5_System_IDisposable_Dispose_m1A119F1799C3FFEF305FD3CFFACCB861D90D5B2C (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean disableObj/<showCorrect>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshowCorrectU3Ed__5_MoveNext_m4C0784E7B47937F1F82665F6C61B50DEDFA988B1 (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject.FindObjectOfType<btnControl>().spotFound++;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_5;
		L_5 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_6 = L_5;
		NullCheck(L_6);
		int32_t L_7 = L_6->___spotFound_15;
		NullCheck(L_6);
		L_6->___spotFound_15 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// Instantiate(GameObject.FindObjectOfType<btnControl>().circleIcon, this.transform.position, Quaternion.identity, this.gameObject.transform);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_8;
		L_8 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___circleIcon_5;
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_14 = V_1;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_9, L_12, L_13, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// Instantiate(GameObject.FindObjectOfType<btnControl>().circleIcon, twinRightSel.transform.position, Quaternion.identity, twinRightSel.transform);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_18;
		L_18 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18->___circleIcon_5;
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___twinRightSel_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___twinRightSel_4;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_19, L_23, L_24, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// twinRightSel.GetComponent<Button>().enabled = false;
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_29 = V_1;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = L_29->___twinRightSel_4;
		NullCheck(L_30);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_31;
		L_31 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_30, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_31);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)0, NULL);
		// this.gameObject.GetComponent<Button>().enabled = false;
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_32 = V_1;
		NullCheck(L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
		NullCheck(L_33);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34;
		L_34 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_33, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_34);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_34, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object disableObj/<showCorrect>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshowCorrectU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C123F9A4CB6EC5B073B3FFB010988B8981D84F1 (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void disableObj/<showCorrect>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowCorrectU3Ed__5_System_Collections_IEnumerator_Reset_mF8305D929DF2023B155D45E7DD3B5E36A3406DEE (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshowCorrectU3Ed__5_System_Collections_IEnumerator_Reset_mF8305D929DF2023B155D45E7DD3B5E36A3406DEE_RuntimeMethod_var)));
	}
}
// System.Object disableObj/<showCorrect>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshowCorrectU3Ed__5_System_Collections_IEnumerator_get_Current_mAC871D6D9F1EB26AC66E7880163665ABE85DA1CA (U3CshowCorrectU3Ed__5_tAE1E6E1A0FD61039D9CFE2ABE0BAF4F62717E697* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void FindDifference::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindDifference_Start_m354E08D0F17B1EAEE96D0A5269C68857A89A242A (FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// chances = 5;
		il2cpp_codegen_runtime_class_init_inline(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___chances_9 = 5;
		// }
		return;
	}
}
// System.Void FindDifference::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindDifference_Update_mEA9F8F6B00BBBB6A61F530654DED42C4F552A0EC (FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA5849BA5C8B1657C0EDAB1A899C37EFC19B6B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B74D19DAF781910611EEBFCC623752790C945A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC49AFEA3AA4DC321D7CDB2330C6D82AB979510AF);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// xnun = GameObject.FindGameObjectsWithTag("x");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
		__this->___xnun_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xnun_6), (void*)L_0);
		// chancesTxt.text = chances.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___chancesTxt_10;
		il2cpp_codegen_runtime_class_init_inline(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___chances_9), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// if (Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_3)
		{
			goto IL_014c;
		}
	}
	{
		// screenPoint = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___screenPoint_5 = L_4;
		// screenPoint.z += 8f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___screenPoint_5);
		float* L_6 = (&L_5->___z_4);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, (8.0f)));
		// transform.position = Camera.main.ScreenToWorldPoint(screenPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___screenPoint_5;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// RaycastHit2D hit = Physics2D.Raycast(Camera.main.ScreenToWorldPoint(Input.mousePosition), Vector2.zero);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_13, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_18;
		L_18 = Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947(L_16, L_17, NULL);
		V_0 = L_18;
		// if (hit.collider.CompareTag("findD"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_19;
		L_19 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_19, _stringLiteral8EA5849BA5C8B1657C0EDAB1A899C37EFC19B6B7, NULL);
		if (!L_20)
		{
			goto IL_00f7;
		}
	}
	{
		// if (chances > 0)
		il2cpp_codegen_runtime_class_init_inline(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		int32_t L_21 = ((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___chances_9;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		// StartCoroutine(spawnX());
		RuntimeObject* L_22;
		L_22 = FindDifference_spawnX_m5BB1949EB7537D3CCD4AB4F359D102A3EBE4BBCB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
		// Debug.Log("fail");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806, NULL);
		// if (isVibrate == true)
		il2cpp_codegen_runtime_class_init_inline(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		bool L_24 = ((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___isVibrate_11;
		if (!L_24)
		{
			goto IL_00c7;
		}
	}
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m820B68A9A3A1C5C0173B99A94C2054778BC3A2F9(NULL);
	}

IL_00c7:
	{
		// chances -= 1;
		il2cpp_codegen_runtime_class_init_inline(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		int32_t L_25 = ((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___chances_9;
		((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___chances_9 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		goto IL_00f7;
	}

IL_00d5:
	{
		// Debug.Log("loose Game");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB1B74D19DAF781910611EEBFCC623752790C945A, NULL);
		// loosePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___loosePanel_7;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
	}

IL_00f7:
	{
		// if (hit.collider.CompareTag("alien"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_28;
		L_28 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_28);
		bool L_29;
		L_29 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_28, _stringLiteralC49AFEA3AA4DC321D7CDB2330C6D82AB979510AF, NULL);
		if (!L_29)
		{
			goto IL_012c;
		}
	}
	{
		// Debug.Log("win");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral31CB10D3EBABE854DFE7BC0304C14922A2F5971E, NULL);
		// winPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___winPanel_8;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)1, NULL);
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)0, NULL);
	}

IL_012c:
	{
		// if (hit.collider == null)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_32;
		L_32 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_014c;
		}
	}
	{
		// Debug.Log(hit.collider.name);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_34;
		L_34 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_0), NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_35, NULL);
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator FindDifference::spawnX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FindDifference_spawnX_m5BB1949EB7537D3CCD4AB4F359D102A3EBE4BBCB (FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* L_0 = (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B*)il2cpp_codegen_object_new(U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CspawnXU3Ed__10__ctor_mA7BC96A2B550406A6D061C410B6D38E59B93CDF3(L_0, 0, NULL);
		U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void FindDifference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindDifference__ctor_mC21F05C64E0B3455582CFCA5A9A7326627AB6DA6 (FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void FindDifference::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindDifference__cctor_m8A64294EA2D4F12200428457F1817685234FB5D0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isVibrate = true;
		((FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_StaticFields*)il2cpp_codegen_static_fields_for(FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C_il2cpp_TypeInfo_var))->___isVibrate_11 = (bool)1;
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
// System.Void FindDifference/<spawnX>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__10__ctor_mA7BC96A2B550406A6D061C410B6D38E59B93CDF3 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FindDifference/<spawnX>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__10_System_IDisposable_Dispose_m7CCB396E427B1FCF3F00F0C87BB4869EF75EF4B2 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FindDifference/<spawnX>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CspawnXU3Ed__10_MoveNext_m50F8DEF852B7C635610B9417D82375EC80A5C880 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Instantiate(xIcon, transform.position, Quaternion.identity);
		FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___xIcon_4;
		FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0053:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (GameObject g in xnun)
		FindDifference_tFA2D4B5FF7BC0C2FD600183D267FDAEB5177AD9C* L_12 = V_1;
		NullCheck(L_12);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = L_12->___xnun_6;
		V_2 = L_13;
		V_3 = 0;
		goto IL_0071;
	}

IL_0065:
	{
		// foreach (GameObject g in xnun)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		// Destroy(g);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_17, NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0071:
	{
		// foreach (GameObject g in xnun)
		int32_t L_19 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object FindDifference/<spawnX>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnXU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m92F29DDCF4530ECF6C878E4A678B110F83432725 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FindDifference/<spawnX>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CspawnXU3Ed__10_System_Collections_IEnumerator_Reset_m01ED82CB1AE9CFF3300C9FB3E3A2CAF40F154324 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CspawnXU3Ed__10_System_Collections_IEnumerator_Reset_m01ED82CB1AE9CFF3300C9FB3E3A2CAF40F154324_RuntimeMethod_var)));
	}
}
// System.Object FindDifference/<spawnX>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CspawnXU3Ed__10_System_Collections_IEnumerator_get_Current_m7546AB2219C63F6AEB851EDE057069DC8CCD8CE1 (U3CspawnXU3Ed__10_t1CB7EB5D567FFF361450C2AE290C3A83D15C154B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Interstitial::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_Start_m6C17F38DBC8C620F083505776EB188B830EA728B (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__1_0_m0037C4E875A93DAB99BC79A5C0E7FCDF2039E27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B2_0 = NULL;
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B1_0 = NULL;
	{
		// MobileAds.Initialize((InitializationStatus initStatus) =>
		// {
		//     // This callback is called once the MobileAds SDK is initialized.
		// });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = ((U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var);
		U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD* L_2 = ((U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_3 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__1_0_m0037C4E875A93DAB99BC79A5C0E7FCDF2039E27B_RuntimeMethod_var), NULL);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_4 = L_3;
		((U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(G_B2_0, NULL);
		// LoadInterstitialAd();
		Interstitial_LoadInterstitialAd_mB0B6F1FB14E8DC616BC53D1FE424F8B9C5BF95C3(__this, NULL);
		// }
		return;
	}
}
// System.Void Interstitial::LoadInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_LoadInterstitialAd_mB0B6F1FB14E8DC616BC53D1FE424F8B9C5BF95C3 (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t6D103D50D92EED8806671DABC525008F7D560A68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Interstitial_U3CLoadInterstitialAdU3Eb__4_0_m32557AE50975A6D6113BA075EC14AD42FF0DDB8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE92B0ACB76744F9274A0F7B1D50997CB14BA2C0C);
		s_Il2CppMethodInitialized = true;
	}
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_0 = NULL;
	{
		// if (interstitialAd != null)
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitialAd_6;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// interstitialAd.Destroy();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = __this->___interstitialAd_6;
		NullCheck(L_1);
		InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778(L_1, NULL);
		// interstitialAd = null;
		__this->___interstitialAd_6 = (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAd_6), (void*)(InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC*)NULL);
	}

IL_001a:
	{
		// Debug.Log("Loading the interstitial ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE92B0ACB76744F9274A0F7B1D50997CB14BA2C0C, NULL);
		// var adRequest = new AdRequest.Builder()
		//         .AddKeyword("unity-admob-sample")
		//         .Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_2 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_2, NULL);
		NullCheck(L_2);
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_3;
		L_3 = Builder_AddKeyword_mAED29632B1B8D21E57E665CB2A50E239ADA0FBCB(L_2, _stringLiteral4CE930388BF0D0721CC71424D0AF03B46FB38DFE, NULL);
		NullCheck(L_3);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_4;
		L_4 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_3, NULL);
		V_0 = L_4;
		// InterstitialAd.Load(_adUnitId, adRequest,
		//     (InterstitialAd ad, LoadAdError error) =>
		//     {
		//       // if error is not null, the load request failed.
		//       if (error != null || ad == null)
		//         {
		//             Debug.LogError("interstitial ad failed to load an ad " +
		//                            "with error : " + error);
		//             return;
		//         }
		// 
		//         Debug.Log("Interstitial ad loaded with response : "
		//                   + ad.GetResponseInfo());
		// 
		//         interstitialAd = ad;
		//     });
		String_t* L_5 = __this->____adUnitId_5;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_6 = V_0;
		Action_2_t6D103D50D92EED8806671DABC525008F7D560A68* L_7 = (Action_2_t6D103D50D92EED8806671DABC525008F7D560A68*)il2cpp_codegen_object_new(Action_2_t6D103D50D92EED8806671DABC525008F7D560A68_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_mEBCBF2FC848DA79D39227A5344136BFA0FF2A65C(L_7, __this, (intptr_t)((void*)Interstitial_U3CLoadInterstitialAdU3Eb__4_0_m32557AE50975A6D6113BA075EC14AD42FF0DDB8B_RuntimeMethod_var), NULL);
		InterstitialAd_Load_m7582DD601991C297C7E7E61BBE53B639466A73A1(L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Interstitial::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_ShowAd_mF95DF8972503E4DED8511EE0E6E7B9B623FA7317 (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA839AA9B952F20BBBB5E83609055E3B6BB000F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE38257974BF0F70BDFA8A13D0A3625109F80CDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitialAd != null && interstitialAd.CanShowAd())
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_0 = __this->___interstitialAd_6;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = __this->___interstitialAd_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterstitialAd_CanShowAd_m76764B2A422FA2DE78D9E29DE630380BE6E65A0E(L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.Log("Showing interstitial ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFE38257974BF0F70BDFA8A13D0A3625109F80CDC, NULL);
		// interstitialAd.Show();
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_3 = __this->___interstitialAd_6;
		NullCheck(L_3);
		InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB(L_3, NULL);
		return;
	}

IL_002b:
	{
		// Debug.LogError("Interstitial ad is not ready yet.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBA839AA9B952F20BBBB5E83609055E3B6BB000F8, NULL);
		// }
		return;
	}
}
// System.Void Interstitial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial__ctor_mF1A97A230BAD78CEF39718661CB978E0008F4F1D (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BC386179734618D3F3E44E30BBBA28F9091147E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _adUnitId = "ca-app-pub-3870393909896853/3579471522";
		__this->____adUnitId_5 = _stringLiteral2BC386179734618D3F3E44E30BBBA28F9091147E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_5), (void*)_stringLiteral2BC386179734618D3F3E44E30BBBA28F9091147E);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Interstitial::<LoadInterstitialAd>b__4_0(GoogleMobileAds.Api.InterstitialAd,GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interstitial_U3CLoadInterstitialAdU3Eb__4_0_m32557AE50975A6D6113BA075EC14AD42FF0DDB8B (Interstitial_tDF9D8393937F3CF08A819856AC2411AB2D00B5FC* __this, InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* ___ad0, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BDB588530347401E7E69440F76A4874882A647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// if (error != null || ad == null)
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___error1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_1 = ___ad0;
		if (L_1)
		{
			goto IL_0023;
		}
	}

IL_0006:
	{
		// Debug.LogError("interstitial ad failed to load an ad " +
		//                "with error : " + error);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = ___error1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = _stringLiteral56BDB588530347401E7E69440F76A4874882A647;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = _stringLiteral56BDB588530347401E7E69440F76A4874882A647;
			goto IL_0013;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B4_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_1;
	}

IL_0018:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// Debug.Log("Interstitial ad loaded with response : "
		//           + ad.GetResponseInfo());
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_6 = ___ad0;
		NullCheck(L_6);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_7;
		L_7 = InterstitialAd_GetResponseInfo_m6F3CB969DB9E63C2DAA0E759CC83D52D31E07171(L_6, NULL);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_8 = L_7;
		G_B7_0 = L_8;
		G_B7_1 = _stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2;
		if (L_8)
		{
			G_B8_0 = L_8;
			G_B8_1 = _stringLiteral7FC8CE8324612820255B09F1869668EF9B28E8A2;
			goto IL_0035;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B8_0);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
	}

IL_003a:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// interstitialAd = ad;
		InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* L_11 = ___ad0;
		__this->___interstitialAd_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAd_6), (void*)L_11);
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
// System.Void Interstitial/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEF3AA69C5AF1FA8AB8E2BD005496AB823CB2EE40 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD* L_0 = (U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD*)il2cpp_codegen_object_new(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m7354B326C3109E67A45533C0ED4844520B1339B3(L_0, NULL);
		((U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Interstitial/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7354B326C3109E67A45533C0ED4844520B1339B3 (U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Interstitial/<>c::<Start>b__1_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__1_0_m0037C4E875A93DAB99BC79A5C0E7FCDF2039E27B (U3CU3Ec_t3F7ABECDD866968F1775ED2C908AFD64D352D8DD* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___initStatus0, const RuntimeMethod* method) 
{
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
// System.Void levelBtnSelect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelBtnSelect_Update_mAB2C2193A10C73E09921CD724F05EAC096228B00 (levelBtnSelect_tA63D3A6ED6D78971AEB44D674D697CB4176CF601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(lvlPicNum <= GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		int32_t L_0 = __this->___lvlPicNum_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_1;
		L_1 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___btnOnTurn_4;
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0038;
		}
	}
	{
		// this.gameObject.GetComponent<Button>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_3, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// this.gameObject.GetComponent<Image>().color = Color.white;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
	}

IL_0038:
	{
		// if(lvlPicNum == 1 || lvlPicNum == 2)
		int32_t L_8 = __this->___lvlPicNum_5;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = __this->___lvlPicNum_5;
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0070;
		}
	}

IL_004a:
	{
		// this.gameObject.GetComponent<Button>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_10);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11;
		L_11 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_10, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)1, NULL);
		// this.gameObject.GetComponent<Image>().color = Color.white;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void levelBtnSelect::selectLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelBtnSelect_selectLevel_mC5899C8AB8AAEDD6FD77C69299BFD590F1605992 (levelBtnSelect_tA63D3A6ED6D78971AEB44D674D697CB4176CF601* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// img[ScrollPicNum].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___img_4;
		int32_t L_1 = __this->___ScrollPicNum_6;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// lvlPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___lvlPanel_7;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// GameObject.FindObjectOfType<setPotsNum>().sparkleNum = GameObject.FindObjectOfType<setPotsNum>().newSpotNum;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_5;
		L_5 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_6;
		L_6 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = L_6->___newSpotNum_4;
		NullCheck(L_5);
		L_5->___sparkleNum_8 = L_7;
		// GameObject.FindObjectOfType<BannerAd>().hide();
		BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* L_8;
		L_8 = Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF(Object_FindObjectOfType_TisBannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF_m687A65FD2E1A4DB1EDC9CCF0DF4AD1AFFCABF5CF_RuntimeMethod_var);
		NullCheck(L_8);
		BannerAd_hide_mA26ACC41FC11EF7D0708667E0E5FCA38C341B28C(L_8, NULL);
		// }
		return;
	}
}
// System.Void levelBtnSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelBtnSelect__ctor_m9912BACF78E188470215080B5E73776E8D832969 (levelBtnSelect_tA63D3A6ED6D78971AEB44D674D697CB4176CF601* __this, const RuntimeMethod* method) 
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
// System.Void levelRecorder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelRecorder_Start_m1DE1E95C015E5D19DC469B2FD6718A478D6D285C (levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE371C7E545CEE66F006918EB0C36E4CE3513ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF33DE73A08042C53EFFC08494EA3D97BB348899);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btnOnTurn = PlayerPrefs.GetInt("btnOnTurn");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralDF33DE73A08042C53EFFC08494EA3D97BB348899, NULL);
		__this->___btnOnTurn_4 = L_0;
		// openLvlNum = PlayerPrefs.GetInt("openLvlNum");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral0DE371C7E545CEE66F006918EB0C36E4CE3513ED, NULL);
		__this->___openLvlNum_5 = L_1;
		// }
		return;
	}
}
// System.Void levelRecorder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelRecorder_Update_mD140D708EF2FED3DFA5FA1D389962366BB26FAEB (levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DE371C7E545CEE66F006918EB0C36E4CE3513ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF33DE73A08042C53EFFC08494EA3D97BB348899);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("btnOnTurn", btnOnTurn);
		int32_t L_0 = __this->___btnOnTurn_4;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralDF33DE73A08042C53EFFC08494EA3D97BB348899, L_0, NULL);
		// PlayerPrefs.SetInt("openLvlNum", openLvlNum);
		int32_t L_1 = __this->___openLvlNum_5;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral0DE371C7E545CEE66F006918EB0C36E4CE3513ED, L_1, NULL);
		// }
		return;
	}
}
// System.Void levelRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void levelRecorder__ctor_mAB7CAB04A65322ED97D85E658FD75266E0B84B4A (levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* __this, const RuntimeMethod* method) 
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
// System.Void objDrag::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objDrag_Update_m8207BDB176784AA39F7BEF1D7EF8D5E9F0C52E54 (objDrag_tE063A4928A96A548D6718E10848012873D343187* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA52DE1A7340D9A868F2F8E6D1E91F7E45A3BE78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// deltaX = Input.mousePosition.x - transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		__this->___deltaX_7 = ((float)il2cpp_codegen_subtract(L_2, L_5));
		// deltaY = Input.mousePosition.y - transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		__this->___deltaY_8 = ((float)il2cpp_codegen_subtract(L_7, L_10));
	}

IL_004a:
	{
		// if (Input.GetMouseButton(0))
		bool L_11;
		L_11 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_11)
		{
			goto IL_00bd;
		}
	}
	{
		// if (Input.mousePosition.y > 0.12708f * Screen.height)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_13 = L_12.___y_3;
		int32_t L_14;
		L_14 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		if ((!(((float)L_13) > ((float)((float)il2cpp_codegen_multiply((0.127079993f), ((float)L_14)))))))
		{
			goto IL_00bd;
		}
	}
	{
		// Debug.Log("working");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBA52DE1A7340D9A868F2F8E6D1E91F7E45A3BE78, NULL);
		// mousePos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_15, NULL);
		__this->___mousePos_5 = L_16;
		// transform.position = new Vector2(mousePos.x - deltaX, mousePos.y - deltaY);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___mousePos_5);
		float L_19 = L_18->___x_0;
		float L_20 = __this->___deltaX_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (&__this->___mousePos_5);
		float L_22 = L_21->___y_1;
		float L_23 = __this->___deltaY_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), ((float)il2cpp_codegen_subtract(L_19, L_20)), ((float)il2cpp_codegen_subtract(L_22, L_23)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_24, NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_25, NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void objDrag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void objDrag__ctor_m54FAA5C7229561DC51C11858E4E0A7245062A859 (objDrag_tE063A4928A96A548D6718E10848012873D343187* __this, const RuntimeMethod* method) 
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
// System.Void openLvlChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void openLvlChecker__ctor_m2C1A1439A86E34BCE3D417A3C253B47765C46794 (openLvlChecker_tED6F24B2E0F54CB725F8368FCAEEFA023AF21AE2* __this, const RuntimeMethod* method) 
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
// System.Void Rewarded::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_Start_mA4E1506373BF3820FDC6B39938BD69216822ABF6 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__3_0_mAD2D91F846B5E58980438048E069B8822EDE86C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B2_0 = NULL;
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* G_B1_0 = NULL;
	{
		// MobileAds.Initialize((InitializationStatus initStatus) =>
		// {
		//     // This callback is called once the MobileAds SDK is initialized.
		// });
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = ((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* L_2 = ((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_3 = (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*)il2cpp_codegen_object_new(Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mE9CC44390354758F587960FB48CF3560FCFAEAAC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__3_0_mAD2D91F846B5E58980438048E069B8822EDE86C8_RuntimeMethod_var), NULL);
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_4 = L_3;
		((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		MobileAds_Initialize_m9151E3C38E0FAD4439DA5020A217BAB90ABB76AD(G_B2_0, NULL);
		// LoadRewardedAd();
		Rewarded_LoadRewardedAd_mD6247815D6C60A6B520FBB59340CB1DCD3FE6781(__this, NULL);
		// }
		return;
	}
}
// System.Void Rewarded::LoadRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_LoadRewardedAd_mD6247815D6C60A6B520FBB59340CB1DCD3FE6781 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rewarded_U3CLoadRewardedAdU3Eb__5_0_m774E55E4F8DA7989B5292A0A83FA9D412039B25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEDF0CEB47D2F703F6242D6D3B5872543E40D214);
		s_Il2CppMethodInitialized = true;
	}
	AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* V_0 = NULL;
	{
		// if (rewardedAd != null)
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_0 = __this->___rewardedAd_4;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// rewardedAd.Destroy();
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_1 = __this->___rewardedAd_4;
		NullCheck(L_1);
		RewardedAd_Destroy_mF51E7A752A2B5C378E94553FE48482D19BDF7319(L_1, NULL);
		// rewardedAd = null;
		__this->___rewardedAd_4 = (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedAd_4), (void*)(RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09*)NULL);
	}

IL_001a:
	{
		// Debug.Log("Loading the rewarded ad.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBEDF0CEB47D2F703F6242D6D3B5872543E40D214, NULL);
		// var adRequest = new AdRequest.Builder().Build();
		Builder_t53925D96536F97B418172C0EF27AD9E6858FF348* L_2 = (Builder_t53925D96536F97B418172C0EF27AD9E6858FF348*)il2cpp_codegen_object_new(Builder_t53925D96536F97B418172C0EF27AD9E6858FF348_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Builder__ctor_m1D1863413DFAF3E7A309343EA0AFC767D1D0246F(L_2, NULL);
		NullCheck(L_2);
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_3;
		L_3 = Builder_Build_m6E8AF1E48549640FCD4F3809AC1F538DC6B7CB85(L_2, NULL);
		V_0 = L_3;
		// RewardedAd.Load(_adUnitId, adRequest,
		//     (RewardedAd ad, LoadAdError error) =>
		//     {
		//       // if error is not null, the load request failed.
		//       if (error != null || ad == null)
		//         {
		//             Debug.LogError("Rewarded ad failed to load an ad " +
		//                            "with error : " + error);
		//             return;
		//         }
		// 
		//         Debug.Log("Rewarded ad loaded with response : "
		//                   + ad.GetResponseInfo());
		// 
		//         rewardedAd = ad;
		//     });
		String_t* L_4 = __this->____adUnitId_7;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_5 = V_0;
		Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418* L_6 = (Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418*)il2cpp_codegen_object_new(Action_2_tC9845396FA1C64BD50F4252BD4DCF45834121418_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_2__ctor_mF2798EE70F4B32175E94176B602F4D7A2456BA02(L_6, __this, (intptr_t)((void*)Rewarded_U3CLoadRewardedAdU3Eb__5_0_m774E55E4F8DA7989B5292A0A83FA9D412039B25B_RuntimeMethod_var), NULL);
		RewardedAd_Load_m898A7CFD8143AE42D14C47EC3EAE3CE40B0B5741(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Rewarded::ShowRewardedAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_ShowRewardedAd_mE4E2B9DC56568E6E094E91BC3398E45AB2A8D598 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CShowRewardedAdU3Eb__6_0_m4A8D14F96BC452EDDEB79290EACD201A4254F202_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* G_B4_0 = NULL;
	RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* G_B4_1 = NULL;
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* G_B3_0 = NULL;
	RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* G_B3_1 = NULL;
	{
		// if (rewardedAd != null && rewardedAd.CanShowAd())
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_0 = __this->___rewardedAd_4;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_1 = __this->___rewardedAd_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = RewardedAd_CanShowAd_m6DFCA02D9029DADED78F05E9590366781FCFFBC6(L_1, NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// rewardedAd.Show((Reward reward) =>
		// {
		//     // TODO: Reward the user.
		//     GameObject.FindObjectOfType<btnControl>().hint += 1;
		//     Debug.Log(String.Format(rewardMsg, reward.Type, reward.Amount));
		// });
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_3 = __this->___rewardedAd_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_4 = ((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2;
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_3;
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* L_6 = ((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_7 = (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*)il2cpp_codegen_object_new(Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m387D866A24FCC32F9B78AB9776B1C15352563CA7(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CShowRewardedAdU3Eb__6_0_m4A8D14F96BC452EDDEB79290EACD201A4254F202_RuntimeMethod_var), NULL);
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_8 = L_7;
		((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_2), (void*)L_8);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_1;
	}

IL_003a:
	{
		NullCheck(G_B4_1);
		RewardedAd_Show_m63D6659798C98BD34A7F0A1479C0B35E8616A71F(G_B4_1, G_B4_0, NULL);
		return;
	}

IL_0040:
	{
		// StartCoroutine(showError());
		RuntimeObject* L_9;
		L_9 = Rewarded_showError_m7532705C0C59DAB82A869B4D85967D563BFAAAB9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Rewarded::showError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Rewarded_showError_m7532705C0C59DAB82A869B4D85967D563BFAAAB9 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* L_0 = (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8*)il2cpp_codegen_object_new(U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CshowErrorU3Ed__7__ctor_m8F76DCE62C35576BC2ABDC815502D204985272B8(L_0, 0, NULL);
		U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Rewarded::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded__ctor_mBA17E885907034D80DAB1320525F1C2BE978A759 (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32832936F3B37719E3BF3112AA06DA5A62F8F5F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _adUnitId = "ca-app-pub-3870393909896853/3701209690";
		__this->____adUnitId_7 = _stringLiteral32832936F3B37719E3BF3112AA06DA5A62F8F5F8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_7), (void*)_stringLiteral32832936F3B37719E3BF3112AA06DA5A62F8F5F8);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Rewarded::<LoadRewardedAd>b__5_0(GoogleMobileAds.Api.RewardedAd,GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rewarded_U3CLoadRewardedAdU3Eb__5_0_m774E55E4F8DA7989B5292A0A83FA9D412039B25B (Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* __this, RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* ___ad0, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DACDA3FBFF1F616FEA43BF199AFA4B279422BF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF3FF9F7CCA62EB6AE70F1174277FDF982D306D7);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	{
		// if (error != null || ad == null)
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___error1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_1 = ___ad0;
		if (L_1)
		{
			goto IL_0023;
		}
	}

IL_0006:
	{
		// Debug.LogError("Rewarded ad failed to load an ad " +
		//                "with error : " + error);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_2 = ___error1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = _stringLiteral5DACDA3FBFF1F616FEA43BF199AFA4B279422BF6;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = _stringLiteral5DACDA3FBFF1F616FEA43BF199AFA4B279422BF6;
			goto IL_0013;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_0018;
	}

IL_0013:
	{
		NullCheck(G_B4_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_4;
		G_B5_1 = G_B4_1;
	}

IL_0018:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_5, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// Debug.Log("Rewarded ad loaded with response : "
		//           + ad.GetResponseInfo());
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_6 = ___ad0;
		NullCheck(L_6);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_7;
		L_7 = RewardedAd_GetResponseInfo_mEED30DA50E26CBECBC9728C53DE4F75553BC4BB1(L_6, NULL);
		ResponseInfo_t9809BD9030BD343A84738E174B86DBC3658720A0* L_8 = L_7;
		G_B7_0 = L_8;
		G_B7_1 = _stringLiteralBF3FF9F7CCA62EB6AE70F1174277FDF982D306D7;
		if (L_8)
		{
			G_B8_0 = L_8;
			G_B8_1 = _stringLiteralBF3FF9F7CCA62EB6AE70F1174277FDF982D306D7;
			goto IL_0035;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_003a;
	}

IL_0035:
	{
		NullCheck(G_B8_0);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
	}

IL_003a:
	{
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// rewardedAd = ad;
		RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* L_11 = ___ad0;
		__this->___rewardedAd_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedAd_4), (void*)L_11);
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
// System.Void Rewarded/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m677864CB3F2EE70F8024CE3CC8B6F080BD69E833 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* L_0 = (U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493*)il2cpp_codegen_object_new(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8204D21A6B52CBD9E355BB1526BA7D94F2C75520(L_0, NULL);
		((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Rewarded/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8204D21A6B52CBD9E355BB1526BA7D94F2C75520 (U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Rewarded/<>c::<Start>b__3_0(GoogleMobileAds.Api.InitializationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__3_0_mAD2D91F846B5E58980438048E069B8822EDE86C8 (U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___initStatus0, const RuntimeMethod* method) 
{
	{
		// });
		return;
	}
}
// System.Void Rewarded/<>c::<ShowRewardedAd>b__6_0(GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CShowRewardedAdU3Eb__6_0_m4A8D14F96BC452EDDEB79290EACD201A4254F202 (U3CU3Ec_t5EA03C119024BA5214F4240A4FF48DA33B71B493* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___reward0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF11D4D7F89FEFB574541EC5DEA8802658159BA9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.FindObjectOfType<btnControl>().hint += 1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_0;
		L_0 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___hint_12;
		NullCheck(L_1);
		L_1->___hint_12 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// Debug.Log(String.Format(rewardMsg, reward.Type, reward.Amount));
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_3 = ___reward0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Reward_get_Type_m52A71F274CBCCF3FEF1B0E37BEBA30304C8DE5DA_inline(L_3, NULL);
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_5 = ___reward0;
		NullCheck(L_5);
		double L_6;
		L_6 = Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline(L_5, NULL);
		double L_7 = L_6;
		RuntimeObject* L_8 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF11D4D7F89FEFB574541EC5DEA8802658159BA9B, L_4, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
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
// System.Void Rewarded/<showError>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowErrorU3Ed__7__ctor_m8F76DCE62C35576BC2ABDC815502D204985272B8 (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Rewarded/<showError>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowErrorU3Ed__7_System_IDisposable_Dispose_m6F92D559C3F94D417503B5785B4DD9704417B00E (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Rewarded/<showError>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshowErrorU3Ed__7_MoveNext_m35EE0DC330D90DD854D41A83523618041DB599A9 (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// errorTextObj.SetActive(true);
		Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___errorTextObj_6;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// yield return new WaitForSeconds(2.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (2.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// errorTextObj.SetActive(false);
		Rewarded_t1087D9CA8BECEA2265CD8AEFBDB6066A24C3E04A* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___errorTextObj_6;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Rewarded/<showError>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshowErrorU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEC1A6870BD49DE57887C231C98564AE6924D9F88 (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Rewarded/<showError>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowErrorU3Ed__7_System_Collections_IEnumerator_Reset_mBBB31381ACF568BF8EB6945638CAF606017E4EA3 (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshowErrorU3Ed__7_System_Collections_IEnumerator_Reset_mBBB31381ACF568BF8EB6945638CAF606017E4EA3_RuntimeMethod_var)));
	}
}
// System.Object Rewarded/<showError>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshowErrorU3Ed__7_System_Collections_IEnumerator_get_Current_m2312B6BDD7E17252EB0447D4BC8675F888CFE892 (U3CshowErrorU3Ed__7_tB31B02D0F480FA3CE70E5B79C132095F488BC2C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void sceneLoader::lvlSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneLoader_lvlSet_mA0173FD8BABC0057B4B2698B259C2FFCC4AA1EA2 (sceneLoader_tAFF7C98C48BC6FE9C7EE755282D8CB14078146F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneToLoadNum);
		int32_t L_0 = __this->___sceneToLoadNum_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_0, NULL);
		// }
		return;
	}
}
// System.Void sceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneLoader__ctor_m56B2040705975172C7F2D41C74DAEFFC78B4793D (sceneLoader_tAFF7C98C48BC6FE9C7EE755282D8CB14078146F1* __this, const RuntimeMethod* method) 
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
// System.Void setPotsNum::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setPotsNum_Start_m7E298E8ACB3E60A0FA6EEAF3C0D80843555A6CB3 (setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void setPotsNum::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setPotsNum_Update_m404306D775F621E1C5D33D3B21A3ABA73440B94E (setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (curLvl < GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		int32_t L_0 = __this->___curLvl_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_1;
		L_1 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->___btnOnTurn_4;
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_004b;
		}
	}
	{
		// GameObject.FindObjectOfType<btnControl>().foundSpots.text = GameObject.FindObjectOfType<btnControl>().spotsNum + "/" + GameObject.FindObjectOfType<btnControl>().spotsNum;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_3;
		L_3 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_3);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = L_3->___foundSpots_28;
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_5;
		L_5 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___spotsNum_16);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_8;
		L_8 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t* L_9 = (&L_8->___spotsNum_16);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_10, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_11);
		goto IL_0082;
	}

IL_004b:
	{
		// GameObject.FindObjectOfType<btnControl>().foundSpots.text = GameObject.FindObjectOfType<btnControl>().spotFound + "/" + GameObject.FindObjectOfType<btnControl>().spotsNum;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_12;
		L_12 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_12);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12->___foundSpots_28;
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_14;
		L_14 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t* L_15 = (&L_14->___spotFound_15);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_17;
		L_17 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t* L_18 = (&L_17->___spotsNum_16);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_16, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_19, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_20);
	}

IL_0082:
	{
		// if (this.gameObject.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_21);
		bool L_22;
		L_22 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_21, NULL);
		if (!L_22)
		{
			goto IL_009f;
		}
	}
	{
		// GameObject.FindObjectOfType<btnControl>().spotsNum = newSpotNum;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_23;
		L_23 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		int32_t L_24 = __this->___newSpotNum_4;
		NullCheck(L_23);
		L_23->___spotsNum_16 = L_24;
	}

IL_009f:
	{
		// if (GameObject.FindObjectOfType<btnControl>().spotFound >= GameObject.FindObjectOfType<btnControl>().spotsNum)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_25;
		L_25 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_25);
		int32_t L_26 = L_25->___spotFound_15;
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_27;
		L_27 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28 = L_27->___spotsNum_16;
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_00f1;
		}
	}
	{
		// if (curLvl == GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		int32_t L_29 = __this->___curLvl_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_30;
		L_30 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31 = L_30->___btnOnTurn_4;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_31))))
		{
			goto IL_00d9;
		}
	}
	{
		// GameObject.FindObjectOfType<levelRecorder>().btnOnTurn += 1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_32;
		L_32 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->___btnOnTurn_4;
		NullCheck(L_33);
		L_33->___btnOnTurn_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d9:
	{
		// if (GameObject.FindObjectOfType<levelRecorder>().openLvlNum == 3)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_35;
		L_35 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_35);
		int32_t L_36 = L_35->___openLvlNum_5;
		if ((!(((uint32_t)L_36) == ((uint32_t)3))))
		{
			goto IL_00f1;
		}
	}
	{
		// GameObject.FindObjectOfType<levelRecorder>().btnOnTurn = 3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_37;
		L_37 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_37);
		L_37->___btnOnTurn_4 = 3;
	}

IL_00f1:
	{
		// if (GameObject.FindObjectOfType<setPotsNum>().curLvl >= GameObject.FindObjectOfType<levelRecorder>().btnOnTurn)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_38;
		L_38 = Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06(Object_FindObjectOfType_TissetPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6_m6251BF17FA88CE3A84946604F2236BA05ABC6D06_RuntimeMethod_var);
		NullCheck(L_38);
		int32_t L_39 = L_38->___curLvl_6;
		levelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01* L_40;
		L_40 = Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498(Object_FindObjectOfType_TislevelRecorder_t3FC2C0F8772A55E9B09E65D45A78564E430E4F01_mEC69A2463133667321AE153B1B9465A5E99C4498_RuntimeMethod_var);
		NullCheck(L_40);
		int32_t L_41 = L_40->___btnOnTurn_4;
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_012b;
		}
	}
	{
		// if (GameObject.FindObjectOfType<btnControl>().hintHit == true)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_42;
		L_42 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_42);
		bool L_43 = L_42->___hintHit_22;
		if (!L_43)
		{
			goto IL_012b;
		}
	}
	{
		// StartCoroutine(showHint());
		RuntimeObject* L_44;
		L_44 = setPotsNum_showHint_m6869DC72F5D1D1B493997FECC173265B99A1F4A5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_45;
		L_45 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_44, NULL);
		// GameObject.FindObjectOfType<btnControl>().hintHit = false;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		btnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5* L_46;
		L_46 = Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205(Object_FindObjectOfType_TisbtnControl_t0D5ADAED70CC16FA61E3864A0DAD3D8D7E79C0B5_mF8863CFF40F1E0899540F99D4505DBD83514D205_RuntimeMethod_var);
		NullCheck(L_46);
		L_46->___hintHit_22 = (bool)0;
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator setPotsNum::showHint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* setPotsNum_showHint_m6869DC72F5D1D1B493997FECC173265B99A1F4A5 (setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* L_0 = (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25*)il2cpp_codegen_object_new(U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CshowHintU3Ed__7__ctor_m3D055658436951E199DEEABFAE1AAECB8C47814E(L_0, 0, NULL);
		U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void setPotsNum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setPotsNum__ctor_m68902A60F7ECF52FD5B4E97C347E8A66021AD9A1 (setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* __this, const RuntimeMethod* method) 
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
// System.Void setPotsNum/<showHint>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowHintU3Ed__7__ctor_m3D055658436951E199DEEABFAE1AAECB8C47814E (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void setPotsNum/<showHint>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowHintU3Ed__7_System_IDisposable_Dispose_m5E87D7500C2608868D49FD2BF6FE0FC7E9B21731 (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean setPotsNum/<showHint>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CshowHintU3Ed__7_MoveNext_mF919DB2C9F54439FDDAF0B1887203B48B1D31899 (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0298;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(sparkleNum <= newSpotNum)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___sparkleNum_8;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___newSpotNum_4;
		if ((((int32_t)L_5) > ((int32_t)L_7)))
		{
			goto IL_027f;
		}
	}
	{
		// if(sparkleNum > 0)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___sparkleNum_8;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_027f;
		}
	}
	{
		// if (spotsObj[0].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_10 = V_1;
		NullCheck(L_10);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = L_10->___spotsObj_5;
		NullCheck(L_11);
		int32_t L_12 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_14;
		L_14 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_13, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_14);
		bool L_15 = L_14->___hasClick_5;
		if (L_15)
		{
			goto IL_0081;
		}
	}
	{
		// sparkle[0].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_16 = V_1;
		NullCheck(L_16);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = L_16->___sparkle_7;
		NullCheck(L_17);
		int32_t L_18 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// sparkle[sparkle.Length - sparkleNum].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_20 = V_1;
		NullCheck(L_20);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = L_20->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_22 = V_1;
		NullCheck(L_22);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = L_22->___sparkle_7;
		NullCheck(L_23);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->___sparkleNum_8;
		NullCheck(L_21);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_25));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)1, NULL);
		goto IL_025c;
	}

IL_0081:
	{
		// else if (spotsObj[1].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_28 = V_1;
		NullCheck(L_28);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_29 = L_28->___spotsObj_5;
		NullCheck(L_29);
		int32_t L_30 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_32;
		L_32 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_31, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_32);
		bool L_33 = L_32->___hasClick_5;
		if (L_33)
		{
			goto IL_00c6;
		}
	}
	{
		// sparkle[1].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_34 = V_1;
		NullCheck(L_34);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_35 = L_34->___sparkle_7;
		NullCheck(L_35);
		int32_t L_36 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 1)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_38 = V_1;
		NullCheck(L_38);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_39 = L_38->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_40 = V_1;
		NullCheck(L_40);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_41 = L_40->___sparkle_7;
		NullCheck(L_41);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = L_42->___sparkleNum_8;
		NullCheck(L_39);
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_41)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_43, 1))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)1, NULL);
		goto IL_025c;
	}

IL_00c6:
	{
		// else if (spotsObj[2].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_46 = V_1;
		NullCheck(L_46);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = L_46->___spotsObj_5;
		NullCheck(L_47);
		int32_t L_48 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_50;
		L_50 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_49, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_50);
		bool L_51 = L_50->___hasClick_5;
		if (L_51)
		{
			goto IL_010b;
		}
	}
	{
		// sparkle[2].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_52 = V_1;
		NullCheck(L_52);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_53 = L_52->___sparkle_7;
		NullCheck(L_53);
		int32_t L_54 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 2)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_56 = V_1;
		NullCheck(L_56);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_57 = L_56->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_58 = V_1;
		NullCheck(L_58);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_59 = L_58->___sparkle_7;
		NullCheck(L_59);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = L_60->___sparkleNum_8;
		NullCheck(L_57);
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_59)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_61, 2))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)1, NULL);
		goto IL_025c;
	}

IL_010b:
	{
		// else if (spotsObj[3].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_64 = V_1;
		NullCheck(L_64);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_65 = L_64->___spotsObj_5;
		NullCheck(L_65);
		int32_t L_66 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_68;
		L_68 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_67, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_68);
		bool L_69 = L_68->___hasClick_5;
		if (L_69)
		{
			goto IL_0150;
		}
	}
	{
		// sparkle[3].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_70 = V_1;
		NullCheck(L_70);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_71 = L_70->___sparkle_7;
		NullCheck(L_71);
		int32_t L_72 = 3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_73, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 3)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_74 = V_1;
		NullCheck(L_74);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_75 = L_74->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_76 = V_1;
		NullCheck(L_76);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_77 = L_76->___sparkle_7;
		NullCheck(L_77);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_78 = V_1;
		NullCheck(L_78);
		int32_t L_79 = L_78->___sparkleNum_8;
		NullCheck(L_75);
		int32_t L_80 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_77)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_79, 3))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_81, (bool)1, NULL);
		goto IL_025c;
	}

IL_0150:
	{
		// else if (spotsObj[4].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_82 = V_1;
		NullCheck(L_82);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_83 = L_82->___spotsObj_5;
		NullCheck(L_83);
		int32_t L_84 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_86;
		L_86 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_85, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_86);
		bool L_87 = L_86->___hasClick_5;
		if (L_87)
		{
			goto IL_0195;
		}
	}
	{
		// sparkle[4].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_88 = V_1;
		NullCheck(L_88);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_89 = L_88->___sparkle_7;
		NullCheck(L_89);
		int32_t L_90 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_91);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_91, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 4)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_92 = V_1;
		NullCheck(L_92);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_93 = L_92->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_94 = V_1;
		NullCheck(L_94);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_95 = L_94->___sparkle_7;
		NullCheck(L_95);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_96 = V_1;
		NullCheck(L_96);
		int32_t L_97 = L_96->___sparkleNum_8;
		NullCheck(L_93);
		int32_t L_98 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_97, 4))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_99);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_99, (bool)1, NULL);
		goto IL_025c;
	}

IL_0195:
	{
		// else if (spotsObj[5].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_100 = V_1;
		NullCheck(L_100);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_101 = L_100->___spotsObj_5;
		NullCheck(L_101);
		int32_t L_102 = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_103);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_104;
		L_104 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_103, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_104);
		bool L_105 = L_104->___hasClick_5;
		if (L_105)
		{
			goto IL_01da;
		}
	}
	{
		// sparkle[5].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_106 = V_1;
		NullCheck(L_106);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_107 = L_106->___sparkle_7;
		NullCheck(L_107);
		int32_t L_108 = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_109, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 5)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_110 = V_1;
		NullCheck(L_110);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_111 = L_110->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_112 = V_1;
		NullCheck(L_112);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_113 = L_112->___sparkle_7;
		NullCheck(L_113);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_114 = V_1;
		NullCheck(L_114);
		int32_t L_115 = L_114->___sparkleNum_8;
		NullCheck(L_111);
		int32_t L_116 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_113)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_115, 5))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		NullCheck(L_117);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_117, (bool)1, NULL);
		goto IL_025c;
	}

IL_01da:
	{
		// else if (spotsObj[6].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_118 = V_1;
		NullCheck(L_118);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_119 = L_118->___spotsObj_5;
		NullCheck(L_119);
		int32_t L_120 = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_121 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_122;
		L_122 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_121, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_122);
		bool L_123 = L_122->___hasClick_5;
		if (L_123)
		{
			goto IL_021c;
		}
	}
	{
		// sparkle[6].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_124 = V_1;
		NullCheck(L_124);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_125 = L_124->___sparkle_7;
		NullCheck(L_125);
		int32_t L_126 = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_127, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 6)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_128 = V_1;
		NullCheck(L_128);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_129 = L_128->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_130 = V_1;
		NullCheck(L_130);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_131 = L_130->___sparkle_7;
		NullCheck(L_131);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_132 = V_1;
		NullCheck(L_132);
		int32_t L_133 = L_132->___sparkleNum_8;
		NullCheck(L_129);
		int32_t L_134 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_131)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_133, 6))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_135, (bool)1, NULL);
		goto IL_025c;
	}

IL_021c:
	{
		// else if (spotsObj[7].GetComponent<disableObj>().hasClick == false)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_136 = V_1;
		NullCheck(L_136);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_137 = L_136->___spotsObj_5;
		NullCheck(L_137);
		int32_t L_138 = 7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		disableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF* L_140;
		L_140 = GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500(L_139, GameObject_GetComponent_TisdisableObj_t303A1C033ACD5C526128792B5D5A201582C8A0AF_m2EB3D3856472A2E698380CC6EE77B58B645D3500_RuntimeMethod_var);
		NullCheck(L_140);
		bool L_141 = L_140->___hasClick_5;
		if (L_141)
		{
			goto IL_025c;
		}
	}
	{
		// sparkle[4].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_142 = V_1;
		NullCheck(L_142);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_143 = L_142->___sparkle_7;
		NullCheck(L_143);
		int32_t L_144 = 4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_145 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_145);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_145, (bool)1, NULL);
		// sparkle[sparkle.Length - (sparkleNum - 7)].SetActive(true);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_146 = V_1;
		NullCheck(L_146);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_147 = L_146->___sparkle_7;
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_148 = V_1;
		NullCheck(L_148);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_149 = L_148->___sparkle_7;
		NullCheck(L_149);
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_150 = V_1;
		NullCheck(L_150);
		int32_t L_151 = L_150->___sparkleNum_8;
		NullCheck(L_147);
		int32_t L_152 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_149)->max_length)), ((int32_t)il2cpp_codegen_subtract(L_151, 7))));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_153);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_153, (bool)1, NULL);
	}

IL_025c:
	{
		// foreach (GameObject s in sparkle)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_154 = V_1;
		NullCheck(L_154);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_155 = L_154->___sparkle_7;
		V_2 = L_155;
		V_3 = 0;
		goto IL_0279;
	}

IL_0267:
	{
		// foreach (GameObject s in sparkle)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_156 = V_2;
		int32_t L_157 = V_3;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		// s.GetComponent<Animator>().enabled = true;
		NullCheck(L_159);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_160;
		L_160 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_159, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_160);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_160, (bool)1, NULL);
		int32_t L_161 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_0279:
	{
		// foreach (GameObject s in sparkle)
		int32_t L_162 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_163 = V_2;
		NullCheck(L_163);
		if ((((int32_t)L_162) < ((int32_t)((int32_t)(((RuntimeArray*)L_163)->max_length)))))
		{
			goto IL_0267;
		}
	}

IL_027f:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_164 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_164);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_164, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_164);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0298:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (GameObject s in sparkle)
		setPotsNum_tAC271667F286E7935639FCE48EDF0BB6018F3ED6* L_165 = V_1;
		NullCheck(L_165);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_166 = L_165->___sparkle_7;
		V_2 = L_166;
		V_3 = 0;
		goto IL_02b7;
	}

IL_02aa:
	{
		// foreach (GameObject s in sparkle)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_167 = V_2;
		int32_t L_168 = V_3;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		// s.SetActive(false);
		NullCheck(L_170);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_170, (bool)0, NULL);
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_02b7:
	{
		// foreach (GameObject s in sparkle)
		int32_t L_172 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_173 = V_2;
		NullCheck(L_173);
		if ((((int32_t)L_172) < ((int32_t)((int32_t)(((RuntimeArray*)L_173)->max_length)))))
		{
			goto IL_02aa;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object setPotsNum/<showHint>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshowHintU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C4766CDB4A995C592142448FB9CC980D085CE0F (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void setPotsNum/<showHint>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CshowHintU3Ed__7_System_Collections_IEnumerator_Reset_m47C1F302CC983641AD3AD739A0FAAAC6496B8B74 (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CshowHintU3Ed__7_System_Collections_IEnumerator_Reset_m47C1F302CC983641AD3AD739A0FAAAC6496B8B74_RuntimeMethod_var)));
	}
}
// System.Object setPotsNum/<showHint>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CshowHintU3Ed__7_System_Collections_IEnumerator_get_Current_m3E3AAA5AD44D545E0CD63132E11C621759F3F311 (U3CshowHintU3Ed__7_tDDC7D8C363BA2CFF1886FD0592E233DD76E24E25* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void sparkleRandScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sparkleRandScript_Start_mDE77C608C8C675A8F60C0CE1CFA3352EDB225A5E (sparkleRandScript_tE2663590032723AFFFCDABB0A456A38843C750D5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void sparkleRandScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sparkleRandScript_Update_m727F4F9CEA20C123579640C27820DFF00954AB18 (sparkleRandScript_tE2663590032723AFFFCDABB0A456A38843C750D5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void sparkleRandScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sparkleRandScript__ctor_mA5740919842C081DD07CA46BA64721B3CE9D805E (sparkleRandScript_tE2663590032723AFFFCDABB0A456A38843C750D5* __this, const RuntimeMethod* method) 
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
// System.Void tabRescaler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tabRescaler_Start_m3A25B45DD474C476040FB66FC945F45B1D3F0ACF (tabRescaler_t2D5392D3DC58EABF0E3F7AFC52B2DCB5999CA47C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void tabRescaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tabRescaler_Update_mBF87B7D8A3FA10BAABFDB5113FFCF83D2B141760 (tabRescaler_t2D5392D3DC58EABF0E3F7AFC52B2DCB5999CA47C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9235035D4B0259C748D7AFCEB584D3863705546F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC67FF9AC41580D8A3C46F1CEC91A8B958D4BA384);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// gameCanvas = GameObject.FindGameObjectsWithTag("imagesForGame");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral9235035D4B0259C748D7AFCEB584D3863705546F, NULL);
		__this->___gameCanvas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameCanvas_4), (void*)L_0);
		// gameCanvas2 = GameObject.FindGameObjectsWithTag("imagesForGameDiff");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteralC67FF9AC41580D8A3C46F1CEC91A8B958D4BA384, NULL);
		__this->___gameCanvas2_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameCanvas2_5), (void*)L_1);
		// if (Screen.width >= 1500f)
		int32_t L_2;
		L_2 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((!(((float)((float)L_2)) >= ((float)(1500.0f)))))
		{
			goto IL_0112;
		}
	}
	{
		// foreach (GameObject i in gameCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___gameCanvas_4;
		V_0 = L_3;
		V_1 = 0;
		goto IL_009b;
	}

IL_003b:
	{
		// foreach (GameObject i in gameCanvas)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 0.64f, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_9, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (1.0f), (0.639999986f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
		// i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -887f, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_2;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_12, NULL);
		NullCheck(L_13);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_13, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_15, NULL);
		NullCheck(L_16);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17;
		L_17 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_16, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_19, (-887.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_20, NULL);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_009b:
	{
		// foreach (GameObject i in gameCanvas)
		int32_t L_22 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_003b;
		}
	}
	{
		// foreach (GameObject i in gameCanvas2)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = __this->___gameCanvas2_5;
		V_0 = L_24;
		V_1 = 0;
		goto IL_010c;
	}

IL_00ac:
	{
		// foreach (GameObject i in gameCanvas2)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_3 = L_28;
		// i.gameObject.GetComponent<RectTransform>().localScale = new Vector3(1f, 0.64f, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_29, NULL);
		NullCheck(L_30);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31;
		L_31 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_30, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (1.0f), (0.639999986f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_31, L_32, NULL);
		// i.gameObject.GetComponent<RectTransform>().localPosition = new Vector3(i.gameObject.GetComponent<RectTransform>().localPosition.x, -444f, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_3;
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_33, NULL);
		NullCheck(L_34);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35;
		L_35 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_34, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_3;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_36, NULL);
		NullCheck(L_37);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_38;
		L_38 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_37, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_38, NULL);
		float L_40 = L_39.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), L_40, (-444.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_35, L_41, NULL);
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_010c:
	{
		// foreach (GameObject i in gameCanvas2)
		int32_t L_43 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = V_0;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_00ac;
		}
	}

IL_0112:
	{
		// }
		return;
	}
}
// System.Void tabRescaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void tabRescaler__ctor_mDCC62D3410882A50D92F7E611B3F8DC9887FB6A0 (tabRescaler_t2D5392D3DC58EABF0E3F7AFC52B2DCB5999CA47C* __this, const RuntimeMethod* method) 
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
// System.Void zoomControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zoomControl_Start_mC53DF9CA57122DC9C62068D92CE88A6CA3E14D2E (zoomControl_t15E7FF937C87AED05D2C6FF00B26F732720CB790* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCamera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___mainCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void zoomControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zoomControl_Update_m4B5A682BF047A8D24F3EF42757F9A37F95A0A5D8 (zoomControl_t15E7FF937C87AED05D2C6FF00B26F732720CB790* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F25EE638C3C6935EC7AF12C9079C35DE568247);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// if (Input.touchCount == 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_00ff;
		}
	}
	{
		// Touch firstTouch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// Touch secondTouch = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		V_1 = L_2;
		// firstTouchPrevPos = firstTouch.position - firstTouch.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		__this->___firstTouchPrevPos_8 = L_5;
		// secondTouchPrevPos = secondTouch.position - secondTouch.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		__this->___secondTouchPrevPos_9 = L_8;
		// touchesPrevPosDifference = (firstTouchPrevPos - secondTouchPrevPos).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___firstTouchPrevPos_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___secondTouchPrevPos_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_9, L_10, NULL);
		V_2 = L_11;
		float L_12;
		L_12 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		__this->___touchesPrevPosDifference_5 = L_12;
		// touchesCurPosDifference = (firstTouch.position - secondTouch.position).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		V_2 = L_15;
		float L_16;
		L_16 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		__this->___touchesCurPosDifference_6 = L_16;
		// zoomModifier = (firstTouch.deltaPosition - secondTouch.deltaPosition).magnitude * zoomModifierSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_17, L_18, NULL);
		V_2 = L_19;
		float L_20;
		L_20 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		float L_21 = __this->___zoomModifierSpeed_10;
		__this->___zoomModifier_7 = ((float)il2cpp_codegen_multiply(L_20, L_21));
		// if (touchesPrevPosDifference > touchesCurPosDifference)
		float L_22 = __this->___touchesPrevPosDifference_5;
		float L_23 = __this->___touchesCurPosDifference_6;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_00d9;
		}
	}
	{
		// mainCamera.orthographicSize += zoomModifier;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___mainCamera_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = L_24;
		NullCheck(L_25);
		float L_26;
		L_26 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_25, NULL);
		float L_27 = __this->___zoomModifier_7;
		NullCheck(L_25);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_25, ((float)il2cpp_codegen_add(L_26, L_27)), NULL);
	}

IL_00d9:
	{
		// if (touchesPrevPosDifference < touchesCurPosDifference)
		float L_28 = __this->___touchesPrevPosDifference_5;
		float L_29 = __this->___touchesCurPosDifference_6;
		if ((!(((float)L_28) < ((float)L_29))))
		{
			goto IL_00ff;
		}
	}
	{
		// mainCamera.orthographicSize -= zoomModifier;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = __this->___mainCamera_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = L_30;
		NullCheck(L_31);
		float L_32;
		L_32 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_31, NULL);
		float L_33 = __this->___zoomModifier_7;
		NullCheck(L_31);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_31, ((float)il2cpp_codegen_subtract(L_32, L_33)), NULL);
	}

IL_00ff:
	{
		// mainCamera.orthographicSize = Mathf.Clamp(mainCamera.orthographicSize, 2f, 10f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = __this->___mainCamera_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35 = __this->___mainCamera_4;
		NullCheck(L_35);
		float L_36;
		L_36 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_35, NULL);
		float L_37;
		L_37 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_36, (2.0f), (10.0f), NULL);
		NullCheck(L_34);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_34, L_37, NULL);
		// text.text = "Camera size " + mainCamera.orthographicSize;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = __this->___text_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39 = __this->___mainCamera_4;
		NullCheck(L_39);
		float L_40;
		L_40 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_39, NULL);
		V_3 = L_40;
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		String_t* L_42;
		L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral11F25EE638C3C6935EC7AF12C9079C35DE568247, L_41, NULL);
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_42);
		// }
		return;
	}
}
// System.Void zoomControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zoomControl__ctor_m94A920AB9F22BB5509E55C14CBDD3444FFF9DBF9 (zoomControl_t15E7FF937C87AED05D2C6FF00B26F732720CB790* __this, const RuntimeMethod* method) 
{
	{
		// float zoomModifierSpeed = 0.1f;
		__this->___zoomModifierSpeed_10 = (0.100000001f);
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
// System.Void UnityEngine.UI.Extensions.ScrollConflictManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollConflictManager_Awake_m13504BE69EC0879FDF349251D8372CE898EE2EB3 (ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral208C9E4A03D050755BE6D2C6874A5DE3058D9908);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9435BAF4864811890A7FF2DF55ED2F8054AF98FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87DF8E0DA781D8F8EDC950785C2FC3A722D10E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _myScrollRect = this.GetComponent<ScrollRect>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518(__this, Component_GetComponent_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m807654BF9CCD1E13E3FB8498D557BDDF13006518_RuntimeMethod_var);
		__this->____myScrollRect_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myScrollRect_5), (void*)L_0);
		// scrollOtherHorizontally = _myScrollRect.vertical;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____myScrollRect_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline(L_1, NULL);
		__this->___scrollOtherHorizontally_7 = L_2;
		// if (scrollOtherHorizontally)
		bool L_3 = __this->___scrollOtherHorizontally_7;
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// if (_myScrollRect.horizontal)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_4 = __this->____myScrollRect_5;
		NullCheck(L_4);
		bool L_5;
		L_5 = ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// Debug.Log("You have added the SecondScrollRect to a scroll view that already has both directions selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral208C9E4A03D050755BE6D2C6874A5DE3058D9908, NULL);
	}

IL_003c:
	{
		// if (!ParentScrollRect.horizontal)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_6 = __this->___ParentScrollRect_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		// Debug.Log("The other scroll rect doesnt support scrolling horizontally");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD87DF8E0DA781D8F8EDC950785C2FC3A722D10E0, NULL);
		return;
	}

IL_0054:
	{
		// else if (!ParentScrollRect.vertical)
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_8 = __this->___ParentScrollRect_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		// Debug.Log("The other scroll rect doesnt support scrolling vertically");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9435BAF4864811890A7FF2DF55ED2F8054AF98FC, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.ScrollConflictManager::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollConflictManager_OnBeginDrag_m7791A0D5727C7FA80F93D0B2103760AE18503D4E (ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (scrollOtherHorizontally)
		bool L_0 = __this->___scrollOtherHorizontally_7;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// scrollOther = true;
		__this->___scrollOther_6 = (bool)1;
		// ParentScrollRect.OnBeginDrag(eventData);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->___ParentScrollRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(44 /* System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData) */, L_1, L_2);
		return;
	}

IL_001c:
	{
		// scrollOther = true;
		__this->___scrollOther_6 = (bool)1;
		// ParentScrollRect.OnBeginDrag(eventData);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_3 = __this->___ParentScrollRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_3);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(44 /* System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.ScrollConflictManager::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollConflictManager_OnEndDrag_m36B52789D095215D7A998F44E2F6E67F930CAD22 (ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (scrollOther)
		bool L_0 = __this->___scrollOther_6;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// scrollOther = false;
		__this->___scrollOther_6 = (bool)0;
		// _myScrollRect.enabled = true;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->____myScrollRect_5;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// ParentScrollRect.OnEndDrag(eventData);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = __this->___ParentScrollRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		NullCheck(L_2);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(45 /* System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData) */, L_2, L_3);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.ScrollConflictManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollConflictManager_OnDrag_mA9C2510ED7DB2C9C7AA9DB455B754F3B30FF58E4 (ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if (scrollOther)
		bool L_0 = __this->___scrollOther_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// ParentScrollRect.OnDrag(eventData);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_1 = __this->___ParentScrollRect_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_1);
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(46 /* System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData) */, L_1, L_2);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.UI.Extensions.ScrollConflictManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollConflictManager__ctor_m2F30F8BDFB23B5AD3DB644E6494367EF4090D1FC (ScrollConflictManager_t5AAA1E3DB64DF2892853EED7BD9FB0FDB6F79974* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CanvasScaler_get_matchWidthOrHeight_m9C40FBA943172874FD27F3F7B880E2D5D5862C9B_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, const RuntimeMethod* method) 
{
	{
		// public float matchWidthOrHeight { get { return m_MatchWidthOrHeight; } set { m_MatchWidthOrHeight = value; } }
		float L_0 = __this->___m_MatchWidthOrHeight_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CanvasScaler_set_matchWidthOrHeight_m44635DC3E4424255C312814C325A48E37E6B6E30_inline (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float matchWidthOrHeight { get { return m_MatchWidthOrHeight; } set { m_MatchWidthOrHeight = value; } }
		float L_0 = ___value0;
		__this->___m_MatchWidthOrHeight_9 = L_0;
		// public float matchWidthOrHeight { get { return m_MatchWidthOrHeight; } set { m_MatchWidthOrHeight = value; } }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Reward_get_Type_m52A71F274CBCCF3FEF1B0E37BEBA30304C8DE5DA_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Reward_get_Amount_m2A4B7143299E26F5C7B36BA40D118A8F668CD734_inline (Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CAmountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_vertical_m43F2C650302CB71D53A0A373934CA9F9921CC38B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public bool vertical { get { return m_Vertical; } set { m_Vertical = value; } }
		bool L_0 = __this->___m_Vertical_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ScrollRect_get_horizontal_mDA4358EF29CE64E6B346D6CC5D70E08F00D3D05B_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public bool horizontal { get { return m_Horizontal; } set { m_Horizontal = value; } }
		bool L_0 = __this->___m_Horizontal_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
