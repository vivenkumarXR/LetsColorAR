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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>
struct Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.Color>
struct KeyCollection_tAAED30053BF529AED2E6E333C14B2FB3A99CA633;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.Color>
struct ValueCollection_t556DB39053EC773DAE5F5FF5668D409764519356;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.Color>[]
struct EntryU5BU5D_t4B191F9BC172FA2AEFB4767EC5834077BF1C199A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// FlexibleColorPicker/Picker[]
struct PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1;
// Readme/Section[]
struct SectionU5BU5D_t95E048E4120A5036C69C0BDEE5B90E9DA56B1651;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
// FCP_ExampleScript
struct FCP_ExampleScript_t5BBBC4711056BE45DDAC6387D61A82F4B24F4428;
// FCP_Persistence
struct FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0;
// FCP_SpriteMeshEditor
struct FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D;
// FlexibleColorPicker
struct FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D;
// UnityEngine.GUIText
struct GUIText_t82CF8CC1B4B65414B38494A7704F5F1C25FD1954;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Readme
struct Readme_t4E8D36B9FD6A576D935A9B3E4344786292402031;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
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
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// csDestroyEffect
struct csDestroyEffect_t0311B76F8F783A45D83FE1DDC474820DAB779B7C;
// csMouseOrbit
struct csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3;
// csParticleEffectPackLightControl
struct csParticleEffectPackLightControl_t14EB765C456D4EE275D5DD89980C1F0E6B5A48A8;
// csParticleMove
struct csParticleMove_tA8D48EF66709FA7205DF911FBB626D238F8D60BC;
// csShowAllEffect
struct csShowAllEffect_tE50F09507E07FBB9B243FF60B0BAC25CE95EC7D9;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// FlexibleColorPicker/AdvancedSettings
struct AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA;
// FlexibleColorPicker/BufferedColor
struct BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18;
// FlexibleColorPicker/ColorUpdateEvent
struct ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t3A61093CFDC5CCAA483473765E79E9A56715C7EC;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// FlexibleColorPicker/AdvancedSettings/PSettings
struct PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral13659F0DEF681F67CC7AD0B3BDFD8B3F4F7656A5;
IL2CPP_EXTERN_C String_t* _stringLiteral14D925A520AD81367F1DCAD164132EB746ADF391;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE5956DECEE2CB6055EA6351DA60D548465C441;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral5327B56FF13CCB05078754931F3E47BF281996B0;
IL2CPP_EXTERN_C String_t* _stringLiteral54E04DD4AECC7BF8CA97DF1D6E565FE6FDC88500;
IL2CPP_EXTERN_C String_t* _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral67C959292ACE557A7911726798B51F6178228E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral7758D00300E70B86E20D9B20465816C057EB5E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF143583376513B8231CF25AAEDB2580F79E8D9;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral89ED0BE37FFC2C105117FDE721A08DD7E9D6261E;
IL2CPP_EXTERN_C String_t* _stringLiteral914834D0F72AC636FF2A55955F3780A314B43FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral9814E7E78D36E46AC3F16A9B552F2E20B9CDE4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC18CEAF0AF0670D300CBF782FEF04D3E18F51E;
IL2CPP_EXTERN_C String_t* _stringLiteralACE1BCB820F4052529380A28EF32D87B2B6B4658;
IL2CPP_EXTERN_C String_t* _stringLiteralC00970716BC3C271ED13537368097440112B0B97;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E3D7D0229703CB3DFD1AB531D82DF4E607F9E8;
IL2CPP_EXTERN_C String_t* _stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4;
IL2CPP_EXTERN_C String_t* _stringLiteralEC23A578329CDEA022C18884D73CCEA1148ADA91;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D_m8F3C337DEA3D71AE839D46F5734463B796128493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mEA814EF8173999B1F26754057B98333E77D8C478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m86AFFC49642FE307FA7E6FAF0A9709A4CFB4FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE4E7A9514EFBEA1634B8EB06A46355A87ABA8889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF2B74A2A5C11151A0B022590961C2A151C09A626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE0EFA7825DC1F86A4950C51BFB4B0720F2AFFB29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m90EF62E094C31C01AEBA4DAAC42AEB820F2BBA76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FCP_ExampleScript_OnChangeColor_m4263F15096E9A802DB1DC5D789F9B5DCD38F5F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleColorPicker_GetValue_m6B2585C457515EC1FD1D4DA4216466F6A3B1F098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1;
struct PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>
struct Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4B191F9BC172FA2AEFB4767EC5834077BF1C199A* ____entries_1;
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
	KeyCollection_tAAED30053BF529AED2E6E333C14B2FB3A99CA633* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t556DB39053EC773DAE5F5FF5668D409764519356* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// FlexibleColorPicker/AdvancedSettings
struct AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA  : public RuntimeObject
{
	// System.Boolean FlexibleColorPicker/AdvancedSettings::mainStatic
	bool ___mainStatic_0;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::r
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___r_1;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::g
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___g_2;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::b
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___b_3;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::h
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___h_4;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::s
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___s_5;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::v
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___v_6;
	// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::a
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* ___a_7;
};

// Readme/Section
struct Section_t3A61093CFDC5CCAA483473765E79E9A56715C7EC  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// FlexibleColorPicker/Picker
struct Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 
{
	// UnityEngine.UI.Image FlexibleColorPicker/Picker::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_0;
	// UnityEngine.Sprite FlexibleColorPicker/Picker::dynamicSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dynamicSprite_1;
	// UnityEngine.Sprite FlexibleColorPicker/Picker::staticSpriteHor
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___staticSpriteHor_2;
	// UnityEngine.Sprite FlexibleColorPicker/Picker::staticSpriteVer
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___staticSpriteVer_3;
	// UnityEngine.Material FlexibleColorPicker/Picker::dynamicMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dynamicMaterial_4;
};
// Native definition for P/Invoke marshalling of FlexibleColorPicker/Picker
struct Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_pinvoke
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dynamicSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___staticSpriteHor_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___staticSpriteVer_3;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dynamicMaterial_4;
};
// Native definition for COM marshalling of FlexibleColorPicker/Picker
struct Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_com
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dynamicSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___staticSpriteHor_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___staticSpriteVer_3;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___dynamicMaterial_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>
struct KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>
struct KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
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

// FlexibleColorPicker/BufferedColor
struct BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18  : public RuntimeObject
{
	// UnityEngine.Color FlexibleColorPicker/BufferedColor::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single FlexibleColorPicker/BufferedColor::bufferedHue
	float ___bufferedHue_1;
	// System.Single FlexibleColorPicker/BufferedColor::bufferedSaturation
	float ___bufferedSaturation_2;
};

// FlexibleColorPicker/ColorUpdateEvent
struct ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
};

// FlexibleColorPicker/AdvancedSettings/PSettings
struct PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A  : public RuntimeObject
{
	// UnityEngine.Vector2 FlexibleColorPicker/AdvancedSettings/PSettings::range
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___range_0;
	// System.Boolean FlexibleColorPicker/AdvancedSettings/PSettings::overrideStatic
	bool ___overrideStatic_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>
struct Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Color>
struct Enumerator_t3088B93C516E4E6D41285C87A98998A579801498 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Readme
struct Readme_t4E8D36B9FD6A576D935A9B3E4344786292402031  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t95E048E4120A5036C69C0BDEE5B90E9DA56B1651* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
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

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
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

// FCP_ExampleScript
struct FCP_ExampleScript_t5BBBC4711056BE45DDAC6387D61A82F4B24F4428  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FCP_ExampleScript::getStartingColorFromMaterial
	bool ___getStartingColorFromMaterial_4;
	// FlexibleColorPicker FCP_ExampleScript::fcp
	FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* ___fcp_5;
	// UnityEngine.Material FCP_ExampleScript::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
};

// FCP_Persistence
struct FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String FCP_Persistence::saveName
	String_t* ___saveName_4;
	// FCP_Persistence/SaveStrategy FCP_Persistence::saveStrategy
	int32_t ___saveStrategy_5;
	// FlexibleColorPicker FCP_Persistence::fcp
	FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* ___fcp_6;
};

struct FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> FCP_Persistence::savedColors
	Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* ___savedColors_7;
	// System.String FCP_Persistence::saveFilePath
	String_t* ___saveFilePath_8;
	// System.Boolean FCP_Persistence::saveFileLoaded
	bool ___saveFileLoaded_9;
	// System.Boolean FCP_Persistence::saveFileOutdated
	bool ___saveFileOutdated_10;
};

// FCP_SpriteMeshEditor
struct FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 FCP_SpriteMeshEditor::x
	int32_t ___x_4;
	// System.Int32 FCP_SpriteMeshEditor::y
	int32_t ___y_5;
	// FCP_SpriteMeshEditor/MeshType FCP_SpriteMeshEditor::meshType
	int32_t ___meshType_6;
	// UnityEngine.Sprite FCP_SpriteMeshEditor::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_7;
	// System.Int32 FCP_SpriteMeshEditor::bufferedHash
	int32_t ___bufferedHash_8;
};

// FlexibleColorPicker
struct FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FlexibleColorPicker/Picker[] FlexibleColorPicker::pickers
	PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* ___pickers_4;
	// UnityEngine.UI.InputField FlexibleColorPicker::hexInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___hexInput_5;
	// UnityEngine.UI.Dropdown FlexibleColorPicker::modeDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___modeDropdown_6;
	// UnityEngine.Canvas FlexibleColorPicker::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_7;
	// FlexibleColorPicker/MainPickingMode FlexibleColorPicker::mode
	int32_t ___mode_8;
	// UnityEngine.Sprite[] FlexibleColorPicker::staticSpriteMain
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___staticSpriteMain_9;
	// FlexibleColorPicker/BufferedColor FlexibleColorPicker::bufferedColor
	BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___bufferedColor_10;
	// FlexibleColorPicker/Picker FlexibleColorPicker::focusedPicker
	Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 ___focusedPicker_11;
	// FlexibleColorPicker/PickerType FlexibleColorPicker::focusedPickerType
	int32_t ___focusedPickerType_12;
	// FlexibleColorPicker/MainPickingMode FlexibleColorPicker::lastUpdatedMode
	int32_t ___lastUpdatedMode_13;
	// System.Boolean FlexibleColorPicker::typeUpdate
	bool ___typeUpdate_14;
	// System.Boolean FlexibleColorPicker::triggeredStaticMode
	bool ___triggeredStaticMode_15;
	// System.Boolean FlexibleColorPicker::materialsSeperated
	bool ___materialsSeperated_16;
	// UnityEngine.Color FlexibleColorPicker::startingColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startingColor_17;
	// System.Boolean FlexibleColorPicker::staticMode
	bool ___staticMode_18;
	// System.Boolean FlexibleColorPicker::multiInstance
	bool ___multiInstance_19;
	// FlexibleColorPicker/ColorUpdateEvent FlexibleColorPicker::onColorChange
	ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* ___onColorChange_20;
	// FlexibleColorPicker/AdvancedSettings FlexibleColorPicker::advancedSettings
	AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* ___advancedSettings_29;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// csDestroyEffect
struct csDestroyEffect_t0311B76F8F783A45D83FE1DDC474820DAB779B7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// csMouseOrbit
struct csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform csMouseOrbit::Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_4;
	// System.Single csMouseOrbit::distance
	float ___distance_5;
	// System.Single csMouseOrbit::xSpeed
	float ___xSpeed_6;
	// System.Single csMouseOrbit::ySpeed
	float ___ySpeed_7;
	// System.Single csMouseOrbit::yMinLimit
	float ___yMinLimit_8;
	// System.Single csMouseOrbit::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single csMouseOrbit::x
	float ___x_10;
	// System.Single csMouseOrbit::y
	float ___y_11;
	// System.Single csMouseOrbit::CameraDist
	float ___CameraDist_12;
};

// csParticleEffectPackLightControl
struct csParticleEffectPackLightControl_t14EB765C456D4EE275D5DD89980C1F0E6B5A48A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light csParticleEffectPackLightControl::_light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____light_4;
	// System.Single csParticleEffectPackLightControl::_time
	float ____time_5;
	// System.Single csParticleEffectPackLightControl::Delay
	float ___Delay_6;
	// System.Single csParticleEffectPackLightControl::Down
	float ___Down_7;
	// UnityEngine.Light csParticleEffectPackLightControl::_light2
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ____light2_8;
	// System.Single csParticleEffectPackLightControl::Delay2
	float ___Delay2_9;
	// System.Single csParticleEffectPackLightControl::Delay3
	float ___Delay3_10;
	// System.Single csParticleEffectPackLightControl::Maxintensity
	float ___Maxintensity_11;
	// System.Single csParticleEffectPackLightControl::Up
	float ___Up_12;
};

// csParticleMove
struct csParticleMove_tA8D48EF66709FA7205DF911FBB626D238F8D60BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single csParticleMove::speed
	float ___speed_4;
};

// csShowAllEffect
struct csShowAllEffect_tE50F09507E07FBB9B243FF60B0BAC25CE95EC7D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] csShowAllEffect::EffectNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EffectNames_4;
	// System.String[] csShowAllEffect::Effect2Names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Effect2Names_5;
	// UnityEngine.Transform[] csShowAllEffect::Effect
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___Effect_6;
	// UnityEngine.GUIText csShowAllEffect::Text1
	GUIText_t82CF8CC1B4B65414B38494A7704F5F1C25FD1954* ___Text1_7;
	// System.Int32 csShowAllEffect::i
	int32_t ___i_8;
	// System.Int32 csShowAllEffect::a
	int32_t ___a_9;
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

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// FlexibleColorPicker/Picker[]
struct PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1  : public RuntimeArray
{
	ALIGN_FIELD (8) Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 m_Items[1];

	inline Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___image_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dynamicSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___staticSpriteHor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___staticSpriteVer_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dynamicMaterial_4), (void*)NULL);
		#endif
	}
	inline Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___image_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dynamicSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___staticSpriteHor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___staticSpriteVer_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___dynamicMaterial_4), (void*)NULL);
		#endif
	}
};
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// FlexibleColorPicker/AdvancedSettings/PSettings[]
struct PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED  : public RuntimeArray
{
	ALIGN_FIELD (8) PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* m_Items[1];

	inline PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6_gshared (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7CE1FD4678D8769E81090E14D0E1F13B0838A4F2_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEADB396889A4A72E1663B7278E7A7622B1D15825_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m66A99A09D4FCA0AF68C574FD862D5E3E81E97E28_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61 Dictionary_2_GetEnumerator_m505DDE64AA92FC82AA75F37D359F8A99BC856632_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6994A5BBD60BE4BDB67CE04B3E6138E7E92CA026_gshared (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 Enumerator_get_Current_mF5F347E4E030EE8A6BF4C884A4BDFD60977DA0D7_gshared_inline (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.Color>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBB4E4025047789E43BF7F6D3A8D31BB592205E16_gshared (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6719E23B5C472A0FA248B84EDA78859049511620_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Dictionary_2_get_Item_m6A61F2742A98C5E435FCD4C0B387DA70130277CE_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m86710295E28AC1A43001334C64469679C37603F5_gshared (Dictionary_2_t807986D905DA28CECB9BD59134DA9CEFFD715027* __this, RuntimeObject* ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___index0, Il2CppChar ___item1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Char>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single csMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float csMouseOrbit_ClampAngle_m793A501B53D0FF28EE142D118E1D6C734AEADC47 (csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3* __this, float ___ag0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_set_color_mEFFE8673CC6622D94FAC8F3209E683A5AED0FF30 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6 (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*, const RuntimeMethod*))UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<FlexibleColorPicker>()
inline FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* Component_GetComponent_TisFlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D_m8F3C337DEA3D71AE839D46F5734463B796128493 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void FCP_Persistence::InitStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_InitStatic_mED936E0335B7C10BF716124FAF75BDE91A9FB29C (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::.ctor()
inline void Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3 (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, const RuntimeMethod*))Dictionary_2__ctor_m7CE1FD4678D8769E81090E14D0E1F13B0838A4F2_gshared)(__this, method);
}
// System.Void FCP_Persistence::LoadDataFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_LoadDataFile_m6DA63DF750EED1FA764CB41D7DF70265B620E97B (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) ;
// System.Void FCP_Persistence::SaveDataFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_SaveDataFile_m90F26BB72A89B4664B3050E6F7B1D9106E2EE998 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) ;
// System.Boolean FCP_Persistence::LoadColor(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FCP_Persistence_LoadColor_m0F17739C9869BFDF6C5071FADF7EF83C25026AE1 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color FlexibleColorPicker::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// System.Void FCP_Persistence::SaveColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_SaveColor_m07EB5688333EB09273C93C976E4B6BC6549C8AEE (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.String[] System.IO.File::ReadAllLines(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* File_ReadAllLines_mB084BF4726ECCB1B083E5B53DEE519C821F97BD5 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D (String_t* ___htmlString0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::Add(TKey,TValue)
inline void Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, String_t* ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, String_t*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Dictionary_2_Add_mEADB396889A4A72E1663B7278E7A7622B1D15825_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::get_Count()
inline int32_t Dictionary_2_get_Count_m86AFFC49642FE307FA7E6FAF0A9709A4CFB4FFDA (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, const RuntimeMethod*))Dictionary_2_get_Count_m66A99A09D4FCA0AF68C574FD862D5E3E81E97E28_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::GetEnumerator()
inline Enumerator_t3088B93C516E4E6D41285C87A98998A579801498 Dictionary_2_GetEnumerator_mEA814EF8173999B1F26754057B98333E77D8C478 (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3088B93C516E4E6D41285C87A98998A579801498 (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m505DDE64AA92FC82AA75F37D359F8A99BC856632_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Color>::Dispose()
inline void Enumerator_Dispose_mF2B74A2A5C11151A0B022590961C2A151C09A626 (Enumerator_t3088B93C516E4E6D41285C87A98998A579801498* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3088B93C516E4E6D41285C87A98998A579801498*, const RuntimeMethod*))Enumerator_Dispose_m6994A5BBD60BE4BDB67CE04B3E6138E7E92CA026_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Color>::get_Current()
inline KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C Enumerator_get_Current_m90EF62E094C31C01AEBA4DAAC42AEB820F2BBA76_inline (Enumerator_t3088B93C516E4E6D41285C87A98998A579801498* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C (*) (Enumerator_t3088B93C516E4E6D41285C87A98998A579801498*, const RuntimeMethod*))Enumerator_get_Current_mF5F347E4E030EE8A6BF4C884A4BDFD60977DA0D7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_inline (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_inline (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C*, const RuntimeMethod*))KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline)(__this, method);
}
// System.String UnityEngine.ColorUtility::ToHtmlStringRGBA(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGBA_m54909224DA2C5FA940C41FBAD832B0B838163409 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.Color>::MoveNext()
inline bool Enumerator_MoveNext_mE0EFA7825DC1F86A4950C51BFB4B0720F2AFFB29 (Enumerator_t3088B93C516E4E6D41285C87A98998A579801498* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3088B93C516E4E6D41285C87A98998A579801498*, const RuntimeMethod*))Enumerator_MoveNext_mBB4E4025047789E43BF7F6D3A8D31BB592205E16_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2 (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m6719E23B5C472A0FA248B84EDA78859049511620_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::get_Item(TKey)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6A61F2742A98C5E435FCD4C0B387DA70130277CE_gshared)(__this, ___key0, method);
}
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE4E7A9514EFBEA1634B8EB06A46355A87ABA8889 (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* __this, String_t* ___key0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*, String_t*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Dictionary_2_set_Item_m86710295E28AC1A43001334C64469679C37603F5_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9 (int64_t ___value0, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.String FCP_Persistence::GenerateID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FCP_Persistence_GenerateID_m6A8B2100E2A2F1370ED580B1FFC3C8570DCD844D (const RuntimeMethod* method) ;
// System.Int32 FCP_SpriteMeshEditor::GetSettingHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FCP_SpriteMeshEditor_GetSettingHash_m4B639F36EBFF7804730C0763E470B48FCF9FA8D9 (FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D* __this, const RuntimeMethod* method) ;
// System.Void FCP_SpriteMeshEditor::MakeMesh(UnityEngine.Sprite,System.Int32,System.Int32,FCP_SpriteMeshEditor/MeshType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_SpriteMeshEditor_MakeMesh_m6DFB0A6826487660DBD969135E8C12D778541DC1 (FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, int32_t ___x1, int32_t ___y2, int32_t ___meshtype3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_useSpriteMesh(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_useSpriteMesh_mFA81C2E108CEB33E5F92A9142B2C83B871C3A81B (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Sprite::OverrideGeometry(UnityEngine.Vector2[],System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sprite_OverrideGeometry_mBF984058B0E3D80F5834C644D3B8D41041B2821B (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___vertices0, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___triangles1, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker/BufferedColor::Set(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor_Set_m7477F1A7E1E90AE4123692DB778025F4959F6261 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateHex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
inline void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared)(__this, ___arg00, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void FlexibleColorPicker/BufferedColor::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_m1D4BB6131802E9367757D68FBD4D2B830B23BF64 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::SeperateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SeperateMaterials_m8DE590CCBD47A4BD58436C474EB90BB01653A3F5 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::MakeModeOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_MakeModeOptions_m1C01A4C132BD47F253CC26431EE2FDC2AA646395 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::ChangeMode(FlexibleColorPicker/MainPickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_ChangeMode_m2E06F8F327E9BEDA91606162838840802A16E305 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FlexibleColorPicker::GetNormalizedPointerPosition(UnityEngine.Canvas,UnityEngine.RectTransform,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetNormalizedPointerPosition_m91D3E4AD547BA154BD56CD3B7CD704B33C7AB0AC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect1, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e2, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor_m8751197F29E52A451686DB05033604460EE51C4C (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::TypeHex(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_TypeHex_m0A7B87A9EC2EBDB6853263C54CE5158B2B423D80 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, String_t* ___input0, bool ___finish1, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateMode(FlexibleColorPicker/MainPickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateMode_m1F0381281BEBC83E96F330CF9321DE0045DF2904 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Boolean FlexibleColorPicker::IsPickerAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsPickerAvailable_m073B51EED1AA3A056E2CB7893657AF6647C1F6A1 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker::GetValue1D(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor1D(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type1, float ___value2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColorMain(FlexibleColorPicker/BufferedColor,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColorMain_mA28AE6DF043E21745E101AA63A5180A26519A71E (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v1, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor1D(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor1D_m5F4E15AD04AE5BE2811090AF58C53FC8BA06D2AE (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColorMain(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/MainPickingMode,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColorMain_mB40DAE14D3C5D3E789CD435761EE46051B98970B (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___mode1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) ;
// System.Boolean FlexibleColorPicker::IsHorizontal(FlexibleColorPicker/Picker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsHorizontal_mBE52DCE3165ECDAA01E0F640E0686A49BDE52B75 (Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 ___p0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor2D(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,System.Single,FlexibleColorPicker/PickerType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type11, float ___value12, int32_t ___type23, float ___value24, const RuntimeMethod* method) ;
// FlexibleColorPicker/AdvancedSettings FlexibleColorPicker::get_avs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) ;
// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* AdvancedSettings_Get_m0E116D5F268038AA1D91603C034DC7A210F44894 (AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickR(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickR_m3876D51CAECC28565D1905AEE655635430949D93 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickG(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickG_m76A823F5B82120EAB99C44816C4817758E0265A3 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickB_m04F70DCF84569B6CAE0585FAD0ED885C171B684B (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickH(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickH_mA6954DC93AB0228EC04741797706C063A00AE9D4 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickS(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickS_mC9520F77346CC17646DAC9B302EE454B49CCA882 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickV_mBAB7CDFE989E7FBCEDA554F0B5EAA9DE2181CB02 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickA_mAE929F2594248498A86831396361CDC1542D1BEA (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FlexibleColorPicker::GetValue(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetValue_m69262EFD0B965350B9812349E78B310DE847955D (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateMarker(FlexibleColorPicker/Picker,FlexibleColorPicker/PickerType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateMarker_m6C321F5DA530F37DCFF240213AF7F64B70BFCCAE (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 ___picker0, int32_t ___type1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::SetMarker(UnityEngine.UI.Image,UnityEngine.Vector2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SetMarker_mF0542D4E27493B8FED5393464DA420025F87F84A (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___picker0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v1, bool ___setX2, bool ___setY3, const RuntimeMethod* method) ;
// UnityEngine.RectTransform FlexibleColorPicker::GetMarker(UnityEngine.UI.Image,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___picker0, String_t* ___search1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FlexibleColorPicker::GetValue(FlexibleColorPicker/MainPickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetValue_m6B2585C457515EC1FD1D4DA4216466F6A3B1F098 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_r_mDE4032686C14B90D78E031FB41FDCFDB709378C5 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_g()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_g_mF67C4ED27F16AB9A8F82F04D89DC8D90C9C00FE7 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_b()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_b_mD572E723BBBF02A08673E734E9F4BC72983BAA3C (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_h()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedColor_get_h_m9726B9FB5C86ECB7E3941070FC01EA77808E2076_inline (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_s()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedColor_get_s_mE7AA9A95C939D3F40EEC24D796735C2AF4326BF0_inline (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_v()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_v_m941317CA3AD81D735AE0C31F1219CECCFFBDC176 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Single FlexibleColorPicker/BufferedColor::get_a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_a_m1ADC4C6C34302DE3D5A51635BABC729DF38E2D8E (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateStatic(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateStatic_m7D8D516FFDCA59518706FF52FC73A56A8A57756F (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker::UpdateDynamic(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateDynamic_mBE00D26993158E597DC8837A7BBB55F117526114 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Boolean FlexibleColorPicker::IsPickerAvailable(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsPickerAvailable_m3CC84C274AF22BBCD4C4D75B954D8BC1707635CF (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean FlexibleColorPicker::IsAlphaType(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsAlphaType_m1C586D4FC5BF329AB77CA85026E74B10EA28C9A3 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Int32 FlexibleColorPicker::GetGradientMode(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleColorPicker_GetGradientMode_m4C4AF62BEBBEB0462E77666DC92828C7E8FBB34A (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.ColorUtility::ToHtmlStringRGB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::SetTextWithoutNotify(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_SetTextWithoutNotify_m2CD8DAC2A298CBABFCEC654A17294427DDD238A3 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String FlexibleColorPicker::GetSanitizedHex(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlexibleColorPicker_GetSanitizedHex_m072FB146984724188BE831ABFEC5E9EB93223EA1 (String_t* ___input0, bool ___full1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputField_get_caretPosition_mC43674CCFF5BF7D047C2D4682B2CD7DE8A179EA7 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_caretPosition_mF502AA3301C39D4397C7BF809D1F3A18D0603BD7 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___options0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
inline void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
inline void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline)(__this, ___item0, method);
}
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.Char::ToUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpper_m7DB51DD07EE52F4CA897807281880930F5CBD2D2 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean FlexibleColorPicker::IsValidHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsValidHexChar_mF2A1B5F11A54FB0F1B582C861F0270FC7440D3DF (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
inline int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Char>::Insert(System.Int32,T)
inline void List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___index0, Il2CppChar ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, Il2CppChar, const RuntimeMethod*))List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_gshared)(__this, ___index0, ___item1, method);
}
// T[] System.Collections.Generic.List`1<System.Char>::ToArray()
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E_gshared)(__this, method);
}
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsNumber(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color FlexibleColorPicker::ParseHex(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_ParseHex_m0F94E7B3D238FFCE0195ABAE55205529A3101775 (String_t* ___input0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultColor1, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FlexibleColorPicker::GetNormScreenSpace(UnityEngine.RectTransform,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetNormScreenSpace_m85592C09163017330C25266B91472C86C1A8AB27 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FlexibleColorPicker::GetNormWorldSpace(UnityEngine.Canvas,UnityEngine.RectTransform,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetNormWorldSpace_m7DC5BD0B0A0C8161A8B11D06EE05EA65D51F06BD (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect1, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inNormal0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inPoint1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float* ___enter1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Color FlexibleColorPicker::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_HSVToRGB_m72C44B1B74473AAD36A82F98661CE241D243FA50 (float ___h0, float ___s1, float ___v2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FlexibleColorPicker::RGBToHSV(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FlexibleColorPicker_RGBToHSV_m58ADB9828E1C4301F5185492950F30A3CFECC166 (float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, const RuntimeMethod*))UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_gshared)(__this, method);
}
// System.Void FlexibleColorPicker/AdvancedSettings/PSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PSettings__ctor_m32FBD753EFAAAD2A4B2C5F3BD08D68AD6DB74254 (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 FlexibleColorPicker::RGBToHSV(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FlexibleColorPicker_RGBToHSV_m57508AFDF8C5E874998B8D61A0F399E6AD0E16DF (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker/BufferedColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_mD17689E2D1D7B9D0D98DEC513A18BC16C17185A2 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker/BufferedColor::.ctor(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_mB205BB501D7DFDE676AA1D3A483BD07EBF50B5B2 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___hue1, float ___sat2, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker/BufferedColor::Set(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor_Set_m17486F6D1944C36442739B0436D5F987A09D1EC4 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___bufferedHue1, float ___bufferedSaturation2, const RuntimeMethod* method) ;
// System.Void FlexibleColorPicker/BufferedColor::.ctor(UnityEngine.Color,FlexibleColorPicker/BufferedColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_m4318C2DAA283F5E86E3A0C1EB4EA0B155469FD9B (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___source1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
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
// System.Void csDestroyEffect::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csDestroyEffect_OnTriggerEnter_m352E6D19E9AD435213294569C88CF8527C49100A (csDestroyEffect_t0311B76F8F783A45D83FE1DDC474820DAB779B7C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF143583376513B8231CF25AAEDB2580F79E8D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("ColorOutput"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral7DF143583376513B8231CF25AAEDB2580F79E8D9, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void csDestroyEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csDestroyEffect__ctor_mF9672DE1FB49404FDC317284DCA634BC00BF9263 (csDestroyEffect_t0311B76F8F783A45D83FE1DDC474820DAB779B7C* __this, const RuntimeMethod* method) 
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
// System.Void csMouseOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csMouseOrbit_Start_m10F280E7DD75F84A4A9BB5FB8C519CAD4A070860 (csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 angles = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// x = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		__this->___x_10 = L_3;
		// y = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		__this->___y_11 = L_5;
		// distance = 30;
		__this->___distance_5 = (30.0f);
		// if (this.GetComponent<Rigidbody>() == true)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_8);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_8, (bool)1, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void csMouseOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csMouseOrbit_LateUpdate_mE86A1B5C383FF01FFF0939F7B7EFC90F6B471815 (csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00de;
		}
	}
	{
		// x += Input.GetAxis("Mouse X") * xSpeed * 0.02f;
		float L_2 = __this->___x_10;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_4 = __this->___xSpeed_6;
		__this->___x_10 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), (0.0199999996f)))));
		// y += Input.GetAxis("Mouse Y") * ySpeed * 0.05f;
		float L_5 = __this->___y_11;
		float L_6;
		L_6 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_7 = __this->___ySpeed_7;
		__this->___y_11 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, L_7)), (0.0500000007f)))));
		// y = ClampAngle(y, yMinLimit, yMaxLimit);
		float L_8 = __this->___y_11;
		float L_9 = __this->___yMinLimit_8;
		float L_10 = __this->___yMaxLimit_9;
		float L_11;
		L_11 = csMouseOrbit_ClampAngle_m793A501B53D0FF28EE142D118E1D6C734AEADC47(__this, L_8, L_9, L_10, NULL);
		__this->___y_11 = L_11;
		// Quaternion rotation = Quaternion.Euler(y, x, 0);
		float L_12 = __this->___y_11;
		float L_13 = __this->___x_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_12, L_13, (0.0f), NULL);
		V_0 = L_14;
		// Vector3 position = rotation * new Vector3(0, 0, -distance) + Target.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_0;
		float L_16 = __this->___distance_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.0f), (0.0f), ((-L_16)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_15, L_17, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___Target_4;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_20, NULL);
		V_1 = L_21;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_0;
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_23, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_25, NULL);
		// distance = CameraDist;
		float L_26 = __this->___CameraDist_12;
		__this->___distance_5 = L_26;
	}

IL_00de:
	{
		// }
		return;
	}
}
// System.Single csMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float csMouseOrbit_ClampAngle_m793A501B53D0FF28EE142D118E1D6C734AEADC47 (csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3* __this, float ___ag0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (ag < -360)
		float L_0 = ___ag0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// ag += 360;
		float L_1 = ___ag0;
		___ag0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (ag > 360)
		float L_2 = ___ag0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// ag -= 360;
		float L_3 = ___ag0;
		___ag0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(ag, min, max);
		float L_4 = ___ag0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void csMouseOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csMouseOrbit__ctor_m66D9A995CA51E65000357C515D24B9314459BABA (csMouseOrbit_t9CBC288A8DB0B85F5125F2710CB1035FA622E8C3* __this, const RuntimeMethod* method) 
{
	{
		// public float xSpeed = 250.0f;
		__this->___xSpeed_6 = (250.0f);
		// public float ySpeed = 120.0f;
		__this->___ySpeed_7 = (120.0f);
		// public float yMinLimit = -20.0f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80.0f;
		__this->___yMaxLimit_9 = (80.0f);
		// public float CameraDist = 10;
		__this->___CameraDist_12 = (10.0f);
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
// System.Void csParticleEffectPackLightControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleEffectPackLightControl_Update_mE966B784B85F44BAD48DFA34E0062B7C1BBBCBDD (csParticleEffectPackLightControl_t14EB765C456D4EE275D5DD89980C1F0E6B5A48A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _time += Time.deltaTime;
		float L_0 = __this->____time_5;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____time_5 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if(_light)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2 = __this->____light_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// if(_time > Delay)
		float L_4 = __this->____time_5;
		float L_5 = __this->___Delay_6;
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_007f;
		}
	}
	{
		// if(_light.intensity > 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_6 = __this->____light_4;
		NullCheck(L_6);
		float L_7;
		L_7 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_6, NULL);
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// _light.intensity -= Time.deltaTime*Down;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = __this->____light_4;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = L_8;
		NullCheck(L_9);
		float L_10;
		L_10 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_9, NULL);
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_12 = __this->___Down_7;
		NullCheck(L_9);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_9, ((float)il2cpp_codegen_subtract(L_10, ((float)il2cpp_codegen_multiply(L_11, L_12)))), NULL);
	}

IL_005d:
	{
		// if(_light.intensity <= 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13 = __this->____light_4;
		NullCheck(L_13);
		float L_14;
		L_14 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_13, NULL);
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// _light.intensity = 0;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = __this->____light_4;
		NullCheck(L_15);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_15, (0.0f), NULL);
	}

IL_007f:
	{
		// if(_light2)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16 = __this->____light2_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		if (!L_17)
		{
			goto IL_016e;
		}
	}
	{
		// if(_time > Delay2 && _time < Delay2+Delay3)
		float L_18 = __this->____time_5;
		float L_19 = __this->___Delay2_9;
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0107;
		}
	}
	{
		float L_20 = __this->____time_5;
		float L_21 = __this->___Delay2_9;
		float L_22 = __this->___Delay3_10;
		if ((!(((float)L_20) < ((float)((float)il2cpp_codegen_add(L_21, L_22))))))
		{
			goto IL_0107;
		}
	}
	{
		// if(_light2.intensity <= Maxintensity)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_23 = __this->____light2_8;
		NullCheck(L_23);
		float L_24;
		L_24 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_23, NULL);
		float L_25 = __this->___Maxintensity_11;
		if ((!(((float)L_24) <= ((float)L_25))))
		{
			goto IL_00e3;
		}
	}
	{
		// _light2.intensity += Time.deltaTime*Up;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_26 = __this->____light2_8;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_27 = L_26;
		NullCheck(L_27);
		float L_28;
		L_28 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_27, NULL);
		float L_29;
		L_29 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_30 = __this->___Up_12;
		NullCheck(L_27);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_27, ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(L_29, L_30)))), NULL);
	}

IL_00e3:
	{
		// if(_light2.intensity > Maxintensity)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_31 = __this->____light2_8;
		NullCheck(L_31);
		float L_32;
		L_32 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_31, NULL);
		float L_33 = __this->___Maxintensity_11;
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_0107;
		}
	}
	{
		// _light2.intensity = Maxintensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_34 = __this->____light2_8;
		float L_35 = __this->___Maxintensity_11;
		NullCheck(L_34);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_34, L_35, NULL);
	}

IL_0107:
	{
		// if(_time > Delay2+Delay3)
		float L_36 = __this->____time_5;
		float L_37 = __this->___Delay2_9;
		float L_38 = __this->___Delay3_10;
		if ((!(((float)L_36) > ((float)((float)il2cpp_codegen_add(L_37, L_38))))))
		{
			goto IL_016e;
		}
	}
	{
		// if(_light2.intensity > 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_39 = __this->____light2_8;
		NullCheck(L_39);
		float L_40;
		L_40 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_39, NULL);
		if ((!(((float)L_40) > ((float)(0.0f)))))
		{
			goto IL_014c;
		}
	}
	{
		// _light2.intensity -= Time.deltaTime*Down;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_41 = __this->____light2_8;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_42 = L_41;
		NullCheck(L_42);
		float L_43;
		L_43 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_42, NULL);
		float L_44;
		L_44 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_45 = __this->___Down_7;
		NullCheck(L_42);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_42, ((float)il2cpp_codegen_subtract(L_43, ((float)il2cpp_codegen_multiply(L_44, L_45)))), NULL);
	}

IL_014c:
	{
		// if(_light2.intensity <= 0)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_46 = __this->____light2_8;
		NullCheck(L_46);
		float L_47;
		L_47 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_46, NULL);
		if ((!(((float)L_47) <= ((float)(0.0f)))))
		{
			goto IL_016e;
		}
	}
	{
		// _light2.intensity = 0;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_48 = __this->____light2_8;
		NullCheck(L_48);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_48, (0.0f), NULL);
	}

IL_016e:
	{
		// }
		return;
	}
}
// System.Void csParticleEffectPackLightControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleEffectPackLightControl__ctor_m8EAB1E232DBDB63A6F34CE14C67AE8E2E430FF54 (csParticleEffectPackLightControl_t14EB765C456D4EE275D5DD89980C1F0E6B5A48A8* __this, const RuntimeMethod* method) 
{
	{
		// public float Delay = 0.5f;
		__this->___Delay_6 = (0.5f);
		// public float Down = 1;
		__this->___Down_7 = (1.0f);
		// public float Up = 1;
		__this->___Up_12 = (1.0f);
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
// System.Void csParticleMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleMove_Update_m4837D69C77B127CF9282AA053D17B05FDBC2E033 (csParticleMove_tA8D48EF66709FA7205DF911FBB626D238F8D60BC* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(Vector3.back * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void csParticleMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csParticleMove__ctor_m312B7A818A5D10D8EBDD1CC14903233B183D02F6 (csParticleMove_tA8D48EF66709FA7205DF911FBB626D238F8D60BC* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 0.1f;
		__this->___speed_4 = (0.100000001f);
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
// System.Void csShowAllEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csShowAllEffect_Start_m3EAC3A194B46E5BFCE1F00E8D83929B891A5F807 (csShowAllEffect_tE50F09507E07FBB9B243FF60B0BAC25CE95EC7D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 5, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___Effect_6;
		int32_t L_1 = __this->___i_8;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_3, L_4, L_5, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void csShowAllEffect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csShowAllEffect_Update_mE33D401E28C7F2C30EA379A7DDC9E1FDE29934B6 (csShowAllEffect_tE50F09507E07FBB9B243FF60B0BAC25CE95EC7D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Input.GetKeyDown(KeyCode.Z))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)122), NULL);
		if (!L_0)
		{
			goto IL_00ea;
		}
	}
	{
		// if (i <= 0)
		int32_t L_1 = __this->___i_8;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// i = 99;
		__this->___i_8 = ((int32_t)99);
		goto IL_002d;
	}

IL_001f:
	{
		// i--;
		int32_t L_2 = __this->___i_8;
		__this->___i_8 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
	}

IL_002d:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		__this->___a_9 = 0;
		goto IL_0093;
	}

IL_0036:
	{
		// if (EffectNames[i] == Effect2Names[a])
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___EffectNames_4;
		int32_t L_4 = __this->___i_8;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___Effect2Names_5;
		int32_t L_8 = __this->___a_9;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_10, NULL);
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 0.01f, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = __this->___Effect_6;
		int32_t L_13 = __this->___i_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), (0.0f), (0.00999999978f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_15, L_16, L_17, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		// break;
		goto IL_00a3;
	}

IL_0085:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		int32_t L_19 = __this->___a_9;
		__this->___a_9 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0093:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		int32_t L_20 = __this->___a_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = __this->___Effect2Names_5;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0036;
		}
	}

IL_00a3:
	{
		// if (a++ == Effect2Names.Length)
		int32_t L_22 = __this->___a_9;
		V_0 = L_22;
		int32_t L_23 = V_0;
		__this->___a_9 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___Effect2Names_5;
		NullCheck(L_25);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_00ea;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 5, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = __this->___Effect_6;
		int32_t L_27 = __this->___i_8;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_29, L_30, L_31, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
	}

IL_00ea:
	{
		// if (Input.GetKeyDown(KeyCode.X))
		bool L_33;
		L_33 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)120), NULL);
		if (!L_33)
		{
			goto IL_01d4;
		}
	}
	{
		// if (i < 99)
		int32_t L_34 = __this->___i_8;
		if ((((int32_t)L_34) >= ((int32_t)((int32_t)99))))
		{
			goto IL_0110;
		}
	}
	{
		// i++;
		int32_t L_35 = __this->___i_8;
		__this->___i_8 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		goto IL_0117;
	}

IL_0110:
	{
		// i = 0;
		__this->___i_8 = 0;
	}

IL_0117:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		__this->___a_9 = 0;
		goto IL_017d;
	}

IL_0120:
	{
		// if (EffectNames[i] == Effect2Names[a])
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = __this->___EffectNames_4;
		int32_t L_37 = __this->___i_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		String_t* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = __this->___Effect2Names_5;
		int32_t L_41 = __this->___a_9;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		String_t* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, L_43, NULL);
		if (!L_44)
		{
			goto IL_016f;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 0.01f, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_45 = __this->___Effect_6;
		int32_t L_46 = __this->___i_8;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_49), (0.0f), (0.00999999978f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_48, L_49, L_50, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		// break;
		goto IL_018d;
	}

IL_016f:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		int32_t L_52 = __this->___a_9;
		__this->___a_9 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_017d:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		int32_t L_53 = __this->___a_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = __this->___Effect2Names_5;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_0120;
		}
	}

IL_018d:
	{
		// if (a++ == Effect2Names.Length)
		int32_t L_55 = __this->___a_9;
		V_0 = L_55;
		int32_t L_56 = V_0;
		__this->___a_9 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = __this->___Effect2Names_5;
		NullCheck(L_58);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_01d4;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 5, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_59 = __this->___Effect_6;
		int32_t L_60 = __this->___i_8;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		L_64 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_62, L_63, L_64, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
	}

IL_01d4:
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_66;
		L_66 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)99), NULL);
		if (!L_66)
		{
			goto IL_029d;
		}
	}
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		__this->___a_9 = 0;
		goto IL_0246;
	}

IL_01e9:
	{
		// if (EffectNames[i] == Effect2Names[a])
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = __this->___EffectNames_4;
		int32_t L_68 = __this->___i_8;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		String_t* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = __this->___Effect2Names_5;
		int32_t L_72 = __this->___a_9;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		String_t* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		bool L_75;
		L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, L_74, NULL);
		if (!L_75)
		{
			goto IL_0238;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 0.01f, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_76 = __this->___Effect_6;
		int32_t L_77 = __this->___i_8;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_80), (0.0f), (0.00999999978f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81;
		L_81 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_79, L_80, L_81, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
		// break;
		goto IL_0256;
	}

IL_0238:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		int32_t L_83 = __this->___a_9;
		__this->___a_9 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0246:
	{
		// for (a = 0; a < Effect2Names.Length; a++)
		int32_t L_84 = __this->___a_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = __this->___Effect2Names_5;
		NullCheck(L_85);
		if ((((int32_t)L_84) < ((int32_t)((int32_t)(((RuntimeArray*)L_85)->max_length)))))
		{
			goto IL_01e9;
		}
	}

IL_0256:
	{
		// if (a++ == Effect2Names.Length)
		int32_t L_86 = __this->___a_9;
		V_0 = L_86;
		int32_t L_87 = V_0;
		__this->___a_9 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		int32_t L_88 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = __this->___Effect2Names_5;
		NullCheck(L_89);
		if ((!(((uint32_t)L_88) == ((uint32_t)((int32_t)(((RuntimeArray*)L_89)->max_length))))))
		{
			goto IL_029d;
		}
	}
	{
		// Instantiate(Effect[i], new Vector3(0, 5, 0), Quaternion.identity);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_90 = __this->___Effect_6;
		int32_t L_91 = __this->___i_8;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		memset((&L_94), 0, sizeof(L_94));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_94), (0.0f), (5.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95;
		L_95 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_96;
		L_96 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED(L_93, L_94, L_95, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_mD6EFBE8E5CFC309C748E284B0798BF1C184F49ED_RuntimeMethod_var);
	}

IL_029d:
	{
		// }
		return;
	}
}
// System.Void csShowAllEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void csShowAllEffect__ctor_mD98E19F6C3C48B274517FFA870D5E29408BF690B (csShowAllEffect_tE50F09507E07FBB9B243FF60B0BAC25CE95EC7D9* __this, const RuntimeMethod* method) 
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
// System.Void FCP_ExampleScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_ExampleScript_Start_mD2C3D9231C652642C037F0F4F4C50EB927537BFF (FCP_ExampleScript_t5BBBC4711056BE45DDAC6387D61A82F4B24F4428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_ExampleScript_OnChangeColor_m4263F15096E9A802DB1DC5D789F9B5DCD38F5F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(getStartingColorFromMaterial)
		bool L_0 = __this->___getStartingColorFromMaterial_4;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// fcp.color = material.color;
		FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* L_1 = __this->___fcp_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___material_6;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_2, NULL);
		NullCheck(L_1);
		FlexibleColorPicker_set_color_mEFFE8673CC6622D94FAC8F3209E683A5AED0FF30(L_1, L_3, NULL);
	}

IL_001e:
	{
		// fcp.onColorChange.AddListener(OnChangeColor);
		FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* L_4 = __this->___fcp_5;
		NullCheck(L_4);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_5 = L_4->___onColorChange_20;
		UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F* L_6 = (UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F*)il2cpp_codegen_object_new(UnityAction_1_t1096D18D9D13996146965189C54BB1A577A8011F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_m561D1879521834F2C181DF56266AB10500F1C9F6(L_6, __this, (intptr_t)((void*)FCP_ExampleScript_OnChangeColor_m4263F15096E9A802DB1DC5D789F9B5DCD38F5F1A_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE(L_5, L_6, UnityEvent_1_AddListener_mD935AA7032F987581BD350C04192FBE8C25DD4EE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FCP_ExampleScript::OnChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_ExampleScript_OnChangeColor_m4263F15096E9A802DB1DC5D789F9B5DCD38F5F1A (FCP_ExampleScript_t5BBBC4711056BE45DDAC6387D61A82F4B24F4428* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___co0, const RuntimeMethod* method) 
{
	{
		// material.color = co;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___co0;
		NullCheck(L_0);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FCP_ExampleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_ExampleScript__ctor_m7D7AFC402E475915E5DEE7E2E31CFAFF88E985DD (FCP_ExampleScript_t5BBBC4711056BE45DDAC6387D61A82F4B24F4428* __this, const RuntimeMethod* method) 
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
// System.Void FCP_Persistence::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_Awake_m5CC561D8F0BFD0C0AC8DA0E445480E90E92DE728 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D_m8F3C337DEA3D71AE839D46F5734463B796128493_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fcp = GetComponent<FlexibleColorPicker>();
		FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* L_0;
		L_0 = Component_GetComponent_TisFlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D_m8F3C337DEA3D71AE839D46F5734463B796128493(__this, Component_GetComponent_TisFlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D_m8F3C337DEA3D71AE839D46F5734463B796128493_RuntimeMethod_var);
		__this->___fcp_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fcp_6), (void*)L_0);
		// InitStatic();
		FCP_Persistence_InitStatic_mED936E0335B7C10BF716124FAF75BDE91A9FB29C(__this, NULL);
		// }
		return;
	}
}
// System.Void FCP_Persistence::InitStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_InitStatic_mED936E0335B7C10BF716124FAF75BDE91A9FB29C (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC23A578329CDEA022C18884D73CCEA1148ADA91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(saveFilePath == null)
		String_t* L_0 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFilePath_8;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// saveFilePath = Path.Combine(Application.persistentDataPath, "FCP_SavedColors.txt");
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteralEC23A578329CDEA022C18884D73CCEA1148ADA91, NULL);
		((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFilePath_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFilePath_8), (void*)L_2);
	}

IL_001b:
	{
		// if(savedColors == null)
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_3 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		// savedColors = new Dictionary<string, Color>();
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_4 = (Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C*)il2cpp_codegen_object_new(Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3(L_4, Dictionary_2__ctor_m24D2FD5E69A1276EC19B054FFCDBFF333C8377A3_RuntimeMethod_var);
		((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7), (void*)L_4);
	}

IL_002c:
	{
		// if(!saveFileLoaded & saveStrategy == SaveStrategy.File) {
		bool L_5 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileLoaded_9;
		int32_t L_6 = __this->___saveStrategy_5;
		if (!((int32_t)(((((int32_t)L_5) == ((int32_t)0))? 1 : 0)&((((int32_t)L_6) == ((int32_t)1))? 1 : 0))))
		{
			goto IL_004c;
		}
	}
	{
		// LoadDataFile();
		FCP_Persistence_LoadDataFile_m6DA63DF750EED1FA764CB41D7DF70265B620E97B(__this, NULL);
		// saveFileLoaded = true;
		((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileLoaded_9 = (bool)1;
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void FCP_Persistence::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_OnDestroy_mB74D5ACDCEA3B3BCA108C9FC57A1D363FD6B0D99 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(saveFileOutdated & saveStrategy == SaveStrategy.File) {
		bool L_0 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileOutdated_10;
		int32_t L_1 = __this->___saveStrategy_5;
		if (!((int32_t)((int32_t)L_0&((((int32_t)L_1) == ((int32_t)1))? 1 : 0))))
		{
			goto IL_001d;
		}
	}
	{
		// SaveDataFile();
		FCP_Persistence_SaveDataFile_m90F26BB72A89B4664B3050E6F7B1D9106E2EE998(__this, NULL);
		// saveFileOutdated = false;
		((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileOutdated_10 = (bool)0;
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void FCP_Persistence::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_OnEnable_m5B3199CD9D9D5EEB1542CB815E57F47723FACEF7 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(savedColors == null)
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_0 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// InitStatic();
		FCP_Persistence_InitStatic_mED936E0335B7C10BF716124FAF75BDE91A9FB29C(__this, NULL);
	}

IL_000d:
	{
		// if(LoadColor(out Color c))
		bool L_1;
		L_1 = FCP_Persistence_LoadColor_m0F17739C9869BFDF6C5071FADF7EF83C25026AE1(__this, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// fcp.color = c;
		FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* L_2 = __this->___fcp_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		NullCheck(L_2);
		FlexibleColorPicker_set_color_mEFFE8673CC6622D94FAC8F3209E683A5AED0FF30(L_2, L_3, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void FCP_Persistence::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_OnDisable_m15068EE7B65665E05317C0122FB6A478CA193194 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	{
		// SaveColor(fcp.color);
		FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* L_0 = __this->___fcp_6;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D(L_0, NULL);
		FCP_Persistence_SaveColor_m07EB5688333EB09273C93C976E4B6BC6549C8AEE(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void FCP_Persistence::LoadDataFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_LoadDataFile_m6DA63DF750EED1FA764CB41D7DF70265B620E97B (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// string[] data = File.ReadAllLines(saveFilePath);
		String_t* L_0 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFilePath_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = File_ReadAllLines_mB084BF4726ECCB1B083E5B53DEE519C821F97BD5(L_0, NULL);
		// foreach(string d in data) {
		V_1 = L_1;
		V_2 = 0;
		goto IL_0054;
	}

IL_000f:
	{
		// foreach(string d in data) {
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// int split = d.LastIndexOf('#');
		String_t* L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_LastIndexOf_m6BB3E7E1B48702D4C715FA423F8A822C053B290E(L_6, ((int32_t)35), NULL);
		V_4 = L_7;
		// if(split >= 0)
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		// if(ColorUtility.TryParseHtmlString(d.Substring(split, d.Length - split), out c))
		String_t* L_9 = V_3;
		int32_t L_10 = V_4;
		String_t* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		int32_t L_13 = V_4;
		NullCheck(L_9);
		String_t* L_14;
		L_14 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
		bool L_15;
		L_15 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(L_14, (&V_0), NULL);
		if (!L_15)
		{
			goto IL_0050;
		}
	}
	{
		// savedColors.Add(d.Substring(0, split), c);
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_16 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_17 = V_3;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_17, 0, L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = V_0;
		NullCheck(L_16);
		Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E(L_16, L_19, L_20, Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E_RuntimeMethod_var);
	}

IL_0050:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0054:
	{
		// foreach(string d in data) {
		int32_t L_22 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FCP_Persistence::SaveDataFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_SaveDataFile_m90F26BB72A89B4664B3050E6F7B1D9106E2EE998 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mEA814EF8173999B1F26754057B98333E77D8C478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m86AFFC49642FE307FA7E6FAF0A9709A4CFB4FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF2B74A2A5C11151A0B022590961C2A151C09A626_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE0EFA7825DC1F86A4950C51BFB4B0720F2AFFB29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m90EF62E094C31C01AEBA4DAAC42AEB820F2BBA76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t3088B93C516E4E6D41285C87A98998A579801498 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// string[] data = new string[savedColors.Count];
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_0 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m86AFFC49642FE307FA7E6FAF0A9709A4CFB4FFDA(L_0, Dictionary_2_get_Count_m86AFFC49642FE307FA7E6FAF0A9709A4CFB4FFDA_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// int i = 0;
		V_1 = 0;
		// foreach(KeyValuePair<string, Color> pair in savedColors)
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_3 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		NullCheck(L_3);
		Enumerator_t3088B93C516E4E6D41285C87A98998A579801498 L_4;
		L_4 = Dictionary_2_GetEnumerator_mEA814EF8173999B1F26754057B98333E77D8C478(L_3, Dictionary_2_GetEnumerator_mEA814EF8173999B1F26754057B98333E77D8C478_RuntimeMethod_var);
		V_2 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF2B74A2A5C11151A0B022590961C2A151C09A626((&V_2), Enumerator_Dispose_mF2B74A2A5C11151A0B022590961C2A151C09A626_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_001f_1:
			{
				// foreach(KeyValuePair<string, Color> pair in savedColors)
				KeyValuePair_2_tEAB6DE49F3BFF95441A702F044F319BAE25BFD9C L_5;
				L_5 = Enumerator_get_Current_m90EF62E094C31C01AEBA4DAAC42AEB820F2BBA76_inline((&V_2), Enumerator_get_Current_m90EF62E094C31C01AEBA4DAAC42AEB820F2BBA76_RuntimeMethod_var);
				V_3 = L_5;
				// data[i++] = pair.Key + "#" + ColorUtility.ToHtmlStringRGBA(pair.Value);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
				int32_t L_7 = V_1;
				int32_t L_8 = L_7;
				V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_inline((&V_3), KeyValuePair_2_get_Key_m599B998DD99CA9230FC2ABAD7577307ECD5B830F_RuntimeMethod_var);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
				L_10 = KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_inline((&V_3), KeyValuePair_2_get_Value_m739AD407F98208CBBBDAB57CDFDF3BDA0CFBA534_RuntimeMethod_var);
				String_t* L_11;
				L_11 = ColorUtility_ToHtmlStringRGBA_m54909224DA2C5FA940C41FBAD832B0B838163409(L_10, NULL);
				String_t* L_12;
				L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_11, NULL);
				NullCheck(L_6);
				ArrayElementTypeCheck (L_6, L_12);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (String_t*)L_12);
			}

IL_004b_1:
			{
				// foreach(KeyValuePair<string, Color> pair in savedColors)
				bool L_13;
				L_13 = Enumerator_MoveNext_mE0EFA7825DC1F86A4950C51BFB4B0720F2AFFB29((&V_2), Enumerator_MoveNext_mE0EFA7825DC1F86A4950C51BFB4B0720F2AFFB29_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// File.WriteAllText(saveFilePath, string.Join("\r\n", data));
		String_t* L_14 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFilePath_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, L_15, NULL);
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_14, L_16, NULL);
		// }
		return;
	}
}
// System.Void FCP_Persistence::SaveColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence_SaveColor_m07EB5688333EB09273C93C976E4B6BC6549C8AEE (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE4E7A9514EFBEA1634B8EB06A46355A87ABA8889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D925A520AD81367F1DCAD164132EB746ADF391);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(saveStrategy == SaveStrategy.PlayerPrefs) {
		int32_t L_0 = __this->___saveStrategy_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}
	{
		// string pref = "FCP_sc_" + saveName;
		String_t* L_1 = __this->___saveName_4;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral14D925A520AD81367F1DCAD164132EB746ADF391, L_1, NULL);
		// PlayerPrefs.SetString(pref, '#' + ColorUtility.ToHtmlStringRGBA(c));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___c0;
		String_t* L_4;
		L_4 = ColorUtility_ToHtmlStringRGBA_m54909224DA2C5FA940C41FBAD832B0B838163409(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_4, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_2, L_5, NULL);
		return;
	}

IL_002f:
	{
		// if(savedColors.ContainsKey(saveName))
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_6 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_7 = __this->___saveName_4;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2(L_6, L_7, Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// saveFileOutdated |= savedColors[saveName] != c;
		bool L_9 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileOutdated_10;
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_10 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_11 = __this->___saveName_4;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D(L_10, L_11, Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___c0;
		bool L_14;
		L_14 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_12, L_13, NULL);
		((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileOutdated_10 = (bool)((int32_t)((int32_t)L_9|(int32_t)L_14));
		// savedColors[saveName] = c;
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_15 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_16 = __this->___saveName_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___c0;
		NullCheck(L_15);
		Dictionary_2_set_Item_mE4E7A9514EFBEA1634B8EB06A46355A87ABA8889(L_15, L_16, L_17, Dictionary_2_set_Item_mE4E7A9514EFBEA1634B8EB06A46355A87ABA8889_RuntimeMethod_var);
		return;
	}

IL_0074:
	{
		// savedColors.Add(saveName, c);
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_18 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_19 = __this->___saveName_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___c0;
		NullCheck(L_18);
		Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E(L_18, L_19, L_20, Dictionary_2_Add_m1B45EE2093B81F3BCF062C504C3780BF6FCC315E_RuntimeMethod_var);
		// saveFileOutdated = true;
		((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___saveFileOutdated_10 = (bool)1;
		// }
		return;
	}
}
// System.Boolean FCP_Persistence::LoadColor(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FCP_Persistence_LoadColor_m0F17739C9869BFDF6C5071FADF7EF83C25026AE1 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D925A520AD81367F1DCAD164132EB746ADF391);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// c = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___c0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_0 = L_1;
		// if(saveStrategy == SaveStrategy.PlayerPrefs) {
		int32_t L_2 = __this->___saveStrategy_5;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_003f;
		}
	}
	{
		// string pref = "FCP_sc_" + saveName;
		String_t* L_3 = __this->___saveName_4;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral14D925A520AD81367F1DCAD164132EB746ADF391, L_3, NULL);
		V_0 = L_4;
		// if(!PlayerPrefs.HasKey(pref))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_5, NULL);
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// if(!ColorUtility.TryParseHtmlString(PlayerPrefs.GetString(pref), out c))
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = ___c0;
		bool L_10;
		L_10 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_006b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003f:
	{
		// if(savedColors.ContainsKey(saveName))
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_11 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_12 = __this->___saveName_4;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2(L_11, L_12, Dictionary_2_ContainsKey_m3567FAA82B866E13C1F3682544E1AE02AC9450A2_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// c = savedColors[saveName];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_14 = ___c0;
		Dictionary_2_t71F1393BF32881F15539B5299C48BFA2FD05984C* L_15 = ((FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_StaticFields*)il2cpp_codegen_static_fields_for(FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0_il2cpp_TypeInfo_var))->___savedColors_7;
		String_t* L_16 = __this->___saveName_4;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D(L_15, L_16, Dictionary_2_get_Item_m55EC2069AD884FEDB43D8F6D90A4CAEE8F95780D_RuntimeMethod_var);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_14 = L_17;
		goto IL_006b;
	}

IL_0069:
	{
		// return false;
		return (bool)0;
	}

IL_006b:
	{
		// return true;
		return (bool)1;
	}
}
// System.String FCP_Persistence::GenerateID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FCP_Persistence_GenerateID_m6A8B2100E2A2F1370ED580B1FFC3C8570DCD844D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Convert.ToBase64String(BitConverter.GetBytes(DateTime.Now.Ticks));
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		int64_t L_1;
		L_1 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m794066816CE7E3AF4A549BC3E41315061A98ADA9(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_2, NULL);
		return L_3;
	}
}
// System.Void FCP_Persistence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_Persistence__ctor_m00D35CF3EEF1A0A2E0E93BC12A1521E31419FD98 (FCP_Persistence_t11572576ECF25701243438E3DB84A7E5A6CC0AB0* __this, const RuntimeMethod* method) 
{
	{
		// public string saveName = GenerateID();
		String_t* L_0;
		L_0 = FCP_Persistence_GenerateID_m6A8B2100E2A2F1370ED580B1FFC3C8570DCD844D(NULL);
		__this->___saveName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveName_4), (void*)L_0);
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
// System.Void FCP_SpriteMeshEditor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_SpriteMeshEditor_Update_m64D49EC21D2BADA188EB6D15906A163A8AEBA8BB (FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	{
		// int hash = GetSettingHash();
		int32_t L_0;
		L_0 = FCP_SpriteMeshEditor_GetSettingHash_m4B639F36EBFF7804730C0763E470B48FCF9FA8D9(__this, NULL);
		V_0 = L_0;
		// if(hash != 0 && hash != bufferedHash) {
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___bufferedHash_8;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0055;
		}
	}
	{
		// MakeMesh(sprite, x, y, meshType);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___sprite_7;
		int32_t L_5 = __this->___x_4;
		int32_t L_6 = __this->___y_5;
		int32_t L_7 = __this->___meshType_6;
		FCP_SpriteMeshEditor_MakeMesh_m6DFB0A6826487660DBD969135E8C12D778541DC1(__this, L_4, L_5, L_6, L_7, NULL);
		// Image im = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_1 = L_8;
		// if(im) {
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		// im.useSpriteMesh = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = V_1;
		NullCheck(L_11);
		Image_set_useSpriteMesh_mFA81C2E108CEB33E5F92A9142B2C83B871C3A81B(L_11, (bool)0, NULL);
		// im.useSpriteMesh = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = V_1;
		NullCheck(L_12);
		Image_set_useSpriteMesh_mFA81C2E108CEB33E5F92A9142B2C83B871C3A81B(L_12, (bool)1, NULL);
	}

IL_004e:
	{
		// bufferedHash = hash;
		int32_t L_13 = V_0;
		__this->___bufferedHash_8 = L_13;
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Int32 FCP_SpriteMeshEditor::GetSettingHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FCP_SpriteMeshEditor_GetSettingHash_m4B639F36EBFF7804730C0763E470B48FCF9FA8D9 (FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(sprite == null || x <= 0 || y <= 0)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___sprite_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = __this->___x_4;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = __this->___y_5;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		// return 0;
		return 0;
	}

IL_0022:
	{
		// return sprite.GetHashCode() * (x ^ 136) * (y ^ 1342) * ((int)(meshType + 1) ^ 99999);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___sprite_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		int32_t L_6 = __this->___x_4;
		int32_t L_7 = __this->___y_5;
		int32_t L_8 = __this->___meshType_6;
		return ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_5, ((int32_t)(L_6^((int32_t)136))))), ((int32_t)(L_7^((int32_t)1342))))), ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_8, 1))^((int32_t)99999)))));
	}
}
// System.Void FCP_SpriteMeshEditor::MakeMesh(UnityEngine.Sprite,System.Int32,System.Int32,FCP_SpriteMeshEditor/MeshType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_SpriteMeshEditor_MakeMesh_m6DFB0A6826487660DBD969135E8C12D778541DC1 (FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite0, int32_t ___x1, int32_t ___y2, int32_t ___meshtype3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint16_t V_18 = 0;
	uint16_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	{
		// bool centerPoints = meshType == MeshType.CenterPoint;
		int32_t L_0 = __this->___meshType_6;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// int px = x + 1;
		int32_t L_1 = ___x1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// int py = y + 1;
		int32_t L_2 = ___y2;
		V_4 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// int t = px * py;
		int32_t L_3 = V_3;
		int32_t L_4 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_3, L_4));
		// if(centerPoints) {
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// verts = new Vector2[t + (x * y)];
		int32_t L_6 = V_5;
		int32_t L_7 = ___x1;
		int32_t L_8 = ___y2;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_9 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8)))));
		V_0 = L_9;
		// faces = new ushort[x * y * 12];
		int32_t L_10 = ___x1;
		int32_t L_11 = ___y2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_10, L_11)), ((int32_t)12))));
		V_1 = L_12;
		goto IL_0049;
	}

IL_0036:
	{
		// verts = new Vector2[t];
		int32_t L_13 = V_5;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_14 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_0 = L_14;
		// faces = new ushort[x * y * 6];
		int32_t L_15 = ___x1;
		int32_t L_16 = ___y2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_17 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), 6)));
		V_1 = L_17;
	}

IL_0049:
	{
		// for(int i = 0; i < px; i++) {
		V_6 = 0;
		goto IL_008b;
	}

IL_004e:
	{
		// float xi = (float)i / x;
		int32_t L_18 = V_6;
		int32_t L_19 = ___x1;
		V_7 = ((float)(((float)L_18)/((float)L_19)));
		// for(int j = 0; j < py; j++) {
		V_8 = 0;
		goto IL_007f;
	}

IL_005b:
	{
		// float yi = (float)j / y;
		int32_t L_20 = V_8;
		int32_t L_21 = ___y2;
		V_9 = ((float)(((float)L_20)/((float)L_21)));
		// verts[px * j + i] = new Vector2(xi, yi);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = V_0;
		int32_t L_23 = V_3;
		int32_t L_24 = V_8;
		int32_t L_25 = V_6;
		float L_26 = V_7;
		float L_27 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), L_25))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_28);
		// for(int j = 0; j < py; j++) {
		int32_t L_29 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_007f:
	{
		// for(int j = 0; j < py; j++) {
		int32_t L_30 = V_8;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_005b;
		}
	}
	{
		// for(int i = 0; i < px; i++) {
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_008b:
	{
		// for(int i = 0; i < px; i++) {
		int32_t L_33 = V_6;
		int32_t L_34 = V_3;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_004e;
		}
	}
	{
		// if(centerPoints) {
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_01c0;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		V_10 = 0;
		goto IL_00e6;
	}

IL_009b:
	{
		// float xi = (i + .5f) / x;
		int32_t L_36 = V_10;
		int32_t L_37 = ___x1;
		V_11 = ((float)(((float)il2cpp_codegen_add(((float)L_36), (0.5f)))/((float)L_37)));
		// for(int j = 0; j < y; j++) {
		V_12 = 0;
		goto IL_00db;
	}

IL_00ae:
	{
		// float yi = (j + .5f) / y;
		int32_t L_38 = V_12;
		int32_t L_39 = ___y2;
		V_13 = ((float)(((float)il2cpp_codegen_add(((float)L_38), (0.5f)))/((float)L_39)));
		// verts[j * x + i + t] = new Vector2(xi, yi);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = V_0;
		int32_t L_41 = V_12;
		int32_t L_42 = ___x1;
		int32_t L_43 = V_10;
		int32_t L_44 = V_5;
		float L_45 = V_11;
		float L_46 = V_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_47), L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_41, L_42)), L_43)), L_44))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_47);
		// for(int j = 0; j < y; j++) {
		int32_t L_48 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00db:
	{
		// for(int j = 0; j < y; j++) {
		int32_t L_49 = V_12;
		int32_t L_50 = ___y2;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00ae;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_51 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00e6:
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_52 = V_10;
		int32_t L_53 = ___x1;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_009b;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		V_14 = 0;
		goto IL_01b3;
	}

IL_00f3:
	{
		// for(int j = 0; j < y; j++) {
		V_15 = 0;
		goto IL_01a5;
	}

IL_00fb:
	{
		// int f = 12 * (j * x + i);
		int32_t L_54 = V_15;
		int32_t L_55 = ___x1;
		int32_t L_56 = V_14;
		V_16 = ((int32_t)il2cpp_codegen_multiply(((int32_t)12), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_54, L_55)), L_56))));
		// int s = (j * px + i);
		int32_t L_57 = V_15;
		int32_t L_58 = V_3;
		int32_t L_59 = V_14;
		V_17 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_57, L_58)), L_59));
		// ushort ns = (ushort)(j * x + i + t);
		int32_t L_60 = V_15;
		int32_t L_61 = ___x1;
		int32_t L_62 = V_14;
		int32_t L_63 = V_5;
		V_18 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_60, L_61)), L_62)), L_63)));
		// faces[f + 11] = faces[f] = (ushort)s;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_64 = V_1;
		int32_t L_65 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_66 = V_1;
		int32_t L_67 = V_16;
		int32_t L_68 = V_17;
		int32_t L_69 = ((int32_t)(uint16_t)L_68);
		V_19 = (uint16_t)L_69;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint16_t)L_69);
		uint16_t L_70 = V_19;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_65, ((int32_t)11)))), (uint16_t)L_70);
		// faces[f + 3] = faces[f + 2] = (ushort)(s + 1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_71 = V_1;
		int32_t L_72 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_73 = V_1;
		int32_t L_74 = V_16;
		int32_t L_75 = V_17;
		int32_t L_76 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_75, 1)));
		V_19 = (uint16_t)L_76;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 2))), (uint16_t)L_76);
		uint16_t L_77 = V_19;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_72, 3))), (uint16_t)L_77);
		// faces[f + 6] = faces[f + 5] = (ushort)(s + px + 1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_78 = V_1;
		int32_t L_79 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_80 = V_1;
		int32_t L_81 = V_16;
		int32_t L_82 = V_17;
		int32_t L_83 = V_3;
		int32_t L_84 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_82, L_83)), 1)));
		V_19 = (uint16_t)L_84;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, 5))), (uint16_t)L_84);
		uint16_t L_85 = V_19;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_79, 6))), (uint16_t)L_85);
		// faces[f + 9] = faces[f + 8] = (ushort)(s + px);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_86 = V_1;
		int32_t L_87 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_88 = V_1;
		int32_t L_89 = V_16;
		int32_t L_90 = V_17;
		int32_t L_91 = V_3;
		int32_t L_92 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_90, L_91)));
		V_19 = (uint16_t)L_92;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 8))), (uint16_t)L_92);
		uint16_t L_93 = V_19;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_87, ((int32_t)9)))), (uint16_t)L_93);
		// faces[f + 1] = faces[f + 4] = faces[f + 7] = faces[f + 10] = ns;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_94 = V_1;
		int32_t L_95 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_96 = V_1;
		int32_t L_97 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_98 = V_1;
		int32_t L_99 = V_16;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_100 = V_1;
		int32_t L_101 = V_16;
		uint16_t L_102 = V_18;
		uint16_t L_103 = L_102;
		V_19 = L_103;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, ((int32_t)10)))), (uint16_t)L_103);
		uint16_t L_104 = V_19;
		uint16_t L_105 = L_104;
		V_19 = L_105;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_99, 7))), (uint16_t)L_105);
		uint16_t L_106 = V_19;
		uint16_t L_107 = L_106;
		V_19 = L_107;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_97, 4))), (uint16_t)L_107);
		uint16_t L_108 = V_19;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_95, 1))), (uint16_t)L_108);
		// for(int j = 0; j < y; j++) {
		int32_t L_109 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_01a5:
	{
		// for(int j = 0; j < y; j++) {
		int32_t L_110 = V_15;
		int32_t L_111 = ___y2;
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_00fb;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_112 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_01b3:
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_113 = V_14;
		int32_t L_114 = ___x1;
		if ((((int32_t)L_113) < ((int32_t)L_114)))
		{
			goto IL_00f3;
		}
	}
	{
		goto IL_02b8;
	}

IL_01c0:
	{
		// if(meshtype == MeshType.forward) {
		int32_t L_115 = ___meshtype3;
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_023b;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		V_20 = 0;
		goto IL_0234;
	}

IL_01ca:
	{
		// for(int j = 0; j < y; j++) {
		V_21 = 0;
		goto IL_0229;
	}

IL_01cf:
	{
		// int f = 6 * (j * x + i);
		int32_t L_116 = V_21;
		int32_t L_117 = ___x1;
		int32_t L_118 = V_20;
		V_22 = ((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_116, L_117)), L_118))));
		// int s = (j * px + i);
		int32_t L_119 = V_21;
		int32_t L_120 = V_3;
		int32_t L_121 = V_20;
		V_23 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_119, L_120)), L_121));
		// faces[f + 5] = faces[f + 1] = (ushort)s;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_122 = V_1;
		int32_t L_123 = V_22;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_124 = V_1;
		int32_t L_125 = V_22;
		int32_t L_126 = V_23;
		int32_t L_127 = ((int32_t)(uint16_t)L_126);
		V_19 = (uint16_t)L_127;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_125, 1))), (uint16_t)L_127);
		uint16_t L_128 = V_19;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_123, 5))), (uint16_t)L_128);
		// faces[f] = (ushort)(s + 1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_129 = V_1;
		int32_t L_130 = V_22;
		int32_t L_131 = V_23;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_131, 1))));
		// faces[f + 4] = faces[f + 2] = (ushort)(s + px + 1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_132 = V_1;
		int32_t L_133 = V_22;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_134 = V_1;
		int32_t L_135 = V_22;
		int32_t L_136 = V_23;
		int32_t L_137 = V_3;
		int32_t L_138 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_136, L_137)), 1)));
		V_19 = (uint16_t)L_138;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_135, 2))), (uint16_t)L_138);
		uint16_t L_139 = V_19;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_133, 4))), (uint16_t)L_139);
		// faces[f + 3] = (ushort)(s + px);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_140 = V_1;
		int32_t L_141 = V_22;
		int32_t L_142 = V_23;
		int32_t L_143 = V_3;
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_141, 3))), (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_142, L_143))));
		// for(int j = 0; j < y; j++) {
		int32_t L_144 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0229:
	{
		// for(int j = 0; j < y; j++) {
		int32_t L_145 = V_21;
		int32_t L_146 = ___y2;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_01cf;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_147 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_0234:
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_148 = V_20;
		int32_t L_149 = ___x1;
		if ((((int32_t)L_148) < ((int32_t)L_149)))
		{
			goto IL_01ca;
		}
	}
	{
		goto IL_02b8;
	}

IL_023b:
	{
		// else if(meshType == MeshType.backward) {
		int32_t L_150 = __this->___meshType_6;
		if ((!(((uint32_t)L_150) == ((uint32_t)2))))
		{
			goto IL_02b8;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		V_24 = 0;
		goto IL_02b3;
	}

IL_0249:
	{
		// for(int j = 0; j < y; j++) {
		V_25 = 0;
		goto IL_02a8;
	}

IL_024e:
	{
		// int f = 6 * (j * x + i);
		int32_t L_151 = V_25;
		int32_t L_152 = ___x1;
		int32_t L_153 = V_24;
		V_26 = ((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_151, L_152)), L_153))));
		// int s = (j * px + i);
		int32_t L_154 = V_25;
		int32_t L_155 = V_3;
		int32_t L_156 = V_24;
		V_27 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_154, L_155)), L_156));
		// faces[f] = (ushort)s;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_157 = V_1;
		int32_t L_158 = V_26;
		int32_t L_159 = V_27;
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(L_158), (uint16_t)((int32_t)(uint16_t)L_159));
		// faces[f + 4] = faces[f + 2] = (ushort)(s + 1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_160 = V_1;
		int32_t L_161 = V_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_162 = V_1;
		int32_t L_163 = V_26;
		int32_t L_164 = V_27;
		int32_t L_165 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_164, 1)));
		V_19 = (uint16_t)L_165;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_163, 2))), (uint16_t)L_165);
		uint16_t L_166 = V_19;
		NullCheck(L_160);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_161, 4))), (uint16_t)L_166);
		// faces[f + 3] = (ushort)(s + px + 1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_167 = V_1;
		int32_t L_168 = V_26;
		int32_t L_169 = V_27;
		int32_t L_170 = V_3;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_168, 3))), (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_169, L_170)), 1))));
		// faces[f + 5] = faces[f + 1] = (ushort)(s + px);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_171 = V_1;
		int32_t L_172 = V_26;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_173 = V_1;
		int32_t L_174 = V_26;
		int32_t L_175 = V_27;
		int32_t L_176 = V_3;
		int32_t L_177 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_175, L_176)));
		V_19 = (uint16_t)L_177;
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_174, 1))), (uint16_t)L_177);
		uint16_t L_178 = V_19;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 5))), (uint16_t)L_178);
		// for(int j = 0; j < y; j++) {
		int32_t L_179 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_02a8:
	{
		// for(int j = 0; j < y; j++) {
		int32_t L_180 = V_25;
		int32_t L_181 = ___y2;
		if ((((int32_t)L_180) < ((int32_t)L_181)))
		{
			goto IL_024e;
		}
	}
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_182 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_182, 1));
	}

IL_02b3:
	{
		// for(int i = 0; i < x; i++) {
		int32_t L_183 = V_24;
		int32_t L_184 = ___x1;
		if ((((int32_t)L_183) < ((int32_t)L_184)))
		{
			goto IL_0249;
		}
	}

IL_02b8:
	{
		// sprite.OverrideGeometry(verts, faces);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_185 = ___sprite0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_186 = V_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_187 = V_1;
		NullCheck(L_185);
		Sprite_OverrideGeometry_mBF984058B0E3D80F5834C644D3B8D41041B2821B(L_185, L_186, L_187, NULL);
		// }
		return;
	}
}
// System.Void FCP_SpriteMeshEditor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FCP_SpriteMeshEditor__ctor_mE2810B99AAFFBFDDFA032C90EA9DD590874A38CA (FCP_SpriteMeshEditor_t05F5AB14F4ABF50A016150E4DD00C06D596B419D* __this, const RuntimeMethod* method) 
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
// FlexibleColorPicker/AdvancedSettings FlexibleColorPicker::get_avs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	{
		// private AdvancedSettings avs => advancedSettings;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_0 = __this->___advancedSettings_29;
		return L_0;
	}
}
// UnityEngine.Color FlexibleColorPicker::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	{
		// if(bufferedColor == null)
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_0 = __this->___bufferedColor_10;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return startingColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___startingColor_17;
		return L_1;
	}

IL_000f:
	{
		// return bufferedColor.color;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_2 = __this->___bufferedColor_10;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = L_2->___color_0;
		return L_3;
	}
}
// System.Void FlexibleColorPicker::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_set_color_mEFFE8673CC6622D94FAC8F3209E683A5AED0FF30 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(bufferedColor == null) {
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_0 = __this->___bufferedColor_10;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// startingColor = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___value0;
		__this->___startingColor_17 = L_1;
		// return;
		return;
	}

IL_0010:
	{
		// bufferedColor.Set(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_2 = __this->___bufferedColor_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___value0;
		NullCheck(L_2);
		BufferedColor_Set_m7477F1A7E1E90AE4123692DB778025F4959F6261(L_2, L_3, NULL);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// UpdateHex();
		FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9(__this, NULL);
		// typeUpdate = true;
		__this->___typeUpdate_14 = (bool)1;
		// onColorChange.Invoke(value);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_4 = __this->___onColorChange_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___value0;
		NullCheck(L_4);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_4, L_5, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Color FlexibleColorPicker::GetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_GetColor_m7CDA325ED9906327CC23286724347EC0E8B99B16 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	{
		// return color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D(__this, NULL);
		return L_0;
	}
}
// System.Void FlexibleColorPicker::SetColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SetColor_m3BE3954FE97708DE7DD03480FE79BD084EDAFED7 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// this.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		FlexibleColorPicker_set_color_mEFFE8673CC6622D94FAC8F3209E683A5AED0FF30(__this, L_0, NULL);
		// }
		return;
	}
}
// UnityEngine.Color FlexibleColorPicker::GetColorFullAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_GetColorFullAlpha_m331AE33FA6D044BC817662E6432518DDC3055009 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color toReturn = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D(__this, NULL);
		V_0 = L_0;
		// toReturn.a = 1f;
		(&V_0)->___a_3 = (1.0f);
		// return toReturn;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void FlexibleColorPicker::SetColorNoAlpha(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SetColorNoAlpha_m33AC9AEC85CF97ABD20E5D2E4CBAC28E03D18718 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// color.a = this.color.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D(__this, NULL);
		float L_1 = L_0.___a_3;
		(&___color0)->___a_3 = L_1;
		// this.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		FlexibleColorPicker_set_color_mEFFE8673CC6622D94FAC8F3209E683A5AED0FF30(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_Awake_m35902CF9ECCF26C8E7095F5EE8AA0DF3F61DB135 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_OnEnable_mD6B15C9AD12A6A56608126196AE22D1D68085DA8 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(this.bufferedColor == null)
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_0 = __this->___bufferedColor_10;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		// this.bufferedColor = new BufferedColor(startingColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___startingColor_17;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_2 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BufferedColor__ctor_m1D4BB6131802E9367757D68FBD4D2B830B23BF64(L_2, L_1, NULL);
		__this->___bufferedColor_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufferedColor_10), (void*)L_2);
	}

IL_0019:
	{
		// if(multiInstance && !materialsSeperated) {
		bool L_3 = __this->___multiInstance_19;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		bool L_4 = __this->___materialsSeperated_16;
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		// SeperateMaterials();
		FlexibleColorPicker_SeperateMaterials_m8DE590CCBD47A4BD58436C474EB90BB01653A3F5(__this, NULL);
		// materialsSeperated = true;
		__this->___materialsSeperated_16 = (bool)1;
	}

IL_0036:
	{
		// triggeredStaticMode = staticMode;
		bool L_5 = __this->___staticMode_18;
		__this->___triggeredStaticMode_15 = L_5;
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// MakeModeOptions();
		FlexibleColorPicker_MakeModeOptions_m1C01A4C132BD47F253CC26431EE2FDC2AA646395(__this, NULL);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateHex();
		FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9(__this, NULL);
		// onColorChange.Invoke(startingColor);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_6 = __this->___onColorChange_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___startingColor_17;
		NullCheck(L_6);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_6, L_7, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_Update_m15D8FB1F3FAE46DA6C55F2A385FA2680EF9035AC (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	{
		// typeUpdate = false;
		__this->___typeUpdate_14 = (bool)0;
		// if(lastUpdatedMode != mode)
		int32_t L_0 = __this->___lastUpdatedMode_13;
		int32_t L_1 = __this->___mode_8;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0021;
		}
	}
	{
		// ChangeMode(mode);
		int32_t L_2 = __this->___mode_8;
		FlexibleColorPicker_ChangeMode_m2E06F8F327E9BEDA91606162838840802A16E305(__this, L_2, NULL);
	}

IL_0021:
	{
		// if(staticMode != triggeredStaticMode) {
		bool L_3 = __this->___staticMode_18;
		bool L_4 = __this->___triggeredStaticMode_15;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0041;
		}
	}
	{
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// triggeredStaticMode = staticMode;
		bool L_5 = __this->___staticMode_18;
		__this->___triggeredStaticMode_15 = L_5;
	}

IL_0041:
	{
		// if(multiInstance && !materialsSeperated) {
		bool L_6 = __this->___multiInstance_19;
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		bool L_7 = __this->___materialsSeperated_16;
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		// SeperateMaterials();
		FlexibleColorPicker_SeperateMaterials_m8DE590CCBD47A4BD58436C474EB90BB01653A3F5(__this, NULL);
		// materialsSeperated = true;
		__this->___materialsSeperated_16 = (bool)1;
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::SetPointerFocus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SetPointerFocus_m6321F884CFC04EC7BBDE8B46C3A7221B41BFBBDE (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13659F0DEF681F67CC7AD0B3BDFD8B3F4F7656A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E04DD4AECC7BF8CA97DF1D6E565FE6FDC88500);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(i < 0 || i >= pickers.Length)
		int32_t L_0 = ___i0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___i0;
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_2 = __this->___pickers_4;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0034;
		}
	}

IL_000f:
	{
		// Debug.LogWarning("No picker image available of type " + (PickerType)i +
		//     ". Did you assign all the picker images in the editor?");
		int32_t L_3 = ___i0;
		V_0 = L_3;
		Il2CppFakeBox<int32_t> L_4(PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral54E04DD4AECC7BF8CA97DF1D6E565FE6FDC88500, L_5, _stringLiteral13659F0DEF681F67CC7AD0B3BDFD8B3F4F7656A5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		goto IL_0046;
	}

IL_0034:
	{
		// focusedPicker = pickers[i];
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_7 = __this->___pickers_4;
		int32_t L_8 = ___i0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___focusedPicker_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___focusedPicker_11))->___image_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___focusedPicker_11))->___dynamicSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___focusedPicker_11))->___staticSpriteHor_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___focusedPicker_11))->___staticSpriteVer_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___focusedPicker_11))->___dynamicMaterial_4), (void*)NULL);
		#endif
	}

IL_0046:
	{
		// focusedPickerType = (PickerType)i;
		int32_t L_11 = ___i0;
		__this->___focusedPickerType_12 = L_11;
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::PointerUpdate(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_PointerUpdate_m62B267A74E510A8F87FB101A4C26649B12E18927 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 v = GetNormalizedPointerPosition(canvas, focusedPicker.image.rectTransform, e);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_7;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087* L_1 = (&__this->___focusedPicker_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = L_1->___image_0;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_2, NULL);
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_4 = ___e0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = FlexibleColorPicker_GetNormalizedPointerPosition_m91D3E4AD547BA154BD56CD3B7CD704B33C7AB0AC(L_0, L_3, L_4, NULL);
		V_0 = L_5;
		// this.bufferedColor = PickColor(this.bufferedColor, focusedPickerType, v);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_6 = __this->___bufferedColor_10;
		int32_t L_7 = __this->___focusedPickerType_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_9;
		L_9 = FlexibleColorPicker_PickColor_m8751197F29E52A451686DB05033604460EE51C4C(__this, L_6, L_7, L_8, NULL);
		__this->___bufferedColor_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufferedColor_10), (void*)L_9);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// typeUpdate = true;
		__this->___typeUpdate_14 = (bool)1;
		// UpdateHex();
		FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9(__this, NULL);
		// onColorChange.Invoke(bufferedColor.color);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_10 = __this->___onColorChange_20;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_11 = __this->___bufferedColor_10;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11->___color_0;
		NullCheck(L_10);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_10, L_12, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::TypeHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_TypeHex_m0165A6783150C379D202D02CFD929C8DFD28269A (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, String_t* ___input0, const RuntimeMethod* method) 
{
	{
		// TypeHex(input, false);
		String_t* L_0 = ___input0;
		FlexibleColorPicker_TypeHex_m0A7B87A9EC2EBDB6853263C54CE5158B2B423D80(__this, L_0, (bool)0, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::FinishTypeHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_FinishTypeHex_m59B00733E23FD6D4F280405DDB9E79F882483C68 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, String_t* ___input0, const RuntimeMethod* method) 
{
	{
		// TypeHex(input, true);
		String_t* L_0 = ___input0;
		FlexibleColorPicker_TypeHex_m0A7B87A9EC2EBDB6853263C54CE5158B2B423D80(__this, L_0, (bool)1, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::ChangeMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_ChangeMode_m7851FAB164B96669B47CB4D7D180F5BCFCF7063D (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___newMode0, const RuntimeMethod* method) 
{
	{
		// ChangeMode((MainPickingMode)newMode);
		int32_t L_0 = ___newMode0;
		FlexibleColorPicker_ChangeMode_m2E06F8F327E9BEDA91606162838840802A16E305(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::ChangeMode(FlexibleColorPicker/MainPickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_ChangeMode_m2E06F8F327E9BEDA91606162838840802A16E305 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	{
		// this.mode = mode;
		int32_t L_0 = ___mode0;
		__this->___mode_8 = L_0;
		// triggeredStaticMode = false;
		__this->___triggeredStaticMode_15 = (bool)0;
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateMode(mode);
		int32_t L_1 = ___mode0;
		FlexibleColorPicker_UpdateMode_m1F0381281BEBC83E96F330CF9321DE0045DF2904(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::SeperateMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SeperateMaterials_m8DE590CCBD47A4BD58436C474EB90BB01653A3F5 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	{
		// for(int i = 0; i < pickers.Length; i++) {
		V_0 = 0;
		goto IL_0060;
	}

IL_0004:
	{
		// Picker p = pickers[i];
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_0 = __this->___pickers_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// if(IsPickerAvailable(i) & p.dynamicMaterial != null) {
		int32_t L_4 = V_0;
		bool L_5;
		L_5 = FlexibleColorPicker_IsPickerAvailable_m073B51EED1AA3A056E2CB7893657AF6647C1F6A1(__this, L_4, NULL);
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_6 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6.___dynamicMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!((int32_t)((int32_t)L_5&(int32_t)L_8)))
		{
			goto IL_005c;
		}
	}
	{
		// Material original = p.dynamicMaterial;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_9 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = L_9.___dynamicMaterial_4;
		// Material seperate = new Material(original);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_11, L_10, NULL);
		V_2 = L_11;
		// p.dynamicMaterial = seperate;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = V_2;
		(&V_1)->___dynamicMaterial_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___dynamicMaterial_4), (void*)L_12);
		// pickers[i] = p;
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_13 = __this->___pickers_4;
		int32_t L_14 = V_0;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_15 = V_1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087)L_15);
		// if(!staticMode)
		bool L_16 = __this->___staticMode_18;
		if (L_16)
		{
			goto IL_005c;
		}
	}
	{
		// p.image.material = seperate;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_17 = V_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = L_17.___image_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = V_2;
		NullCheck(L_18);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_18, L_19);
	}

IL_005c:
	{
		// for(int i = 0; i < pickers.Length; i++) {
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0060:
	{
		// for(int i = 0; i < pickers.Length; i++) {
		int32_t L_21 = V_0;
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_22 = __this->___pickers_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::ShiftColor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_ShiftColor_mFDC28E412276685CB681D5304C313D6A07DE3525 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, float ___delta1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// PickerType pt = (PickerType)type;
		int32_t L_0 = ___type0;
		V_0 = L_0;
		// float value = GetValue1D(pt) + delta;
		int32_t L_1 = V_0;
		float L_2;
		L_2 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, L_1, NULL);
		float L_3 = ___delta1;
		V_1 = ((float)il2cpp_codegen_add(L_2, L_3));
		// this.bufferedColor = PickColor1D(bufferedColor, pt, value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_4 = __this->___bufferedColor_10;
		int32_t L_5 = V_0;
		float L_6 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_7;
		L_7 = FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1(__this, L_4, L_5, L_6, NULL);
		__this->___bufferedColor_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufferedColor_10), (void*)L_7);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// typeUpdate = true;
		__this->___typeUpdate_14 = (bool)1;
		// UpdateHex();
		FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9(__this, NULL);
		// onColorChange.Invoke(bufferedColor.color);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_8 = __this->___onColorChange_20;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_9 = __this->___bufferedColor_10;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___color_0;
		NullCheck(L_8);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_8, L_10, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::ShiftHue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_ShiftHue_m58A4C3E3FCF7F3436684F37ECF4A8504C33F3C16 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, float ___delta0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// PickerType pt = PickerType.H;
		V_0 = 4;
		// float h = Mathf.Repeat(GetValue1D(pt) + delta, 6f) / 6f;
		int32_t L_0 = V_0;
		float L_1;
		L_1 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, L_0, NULL);
		float L_2 = ___delta0;
		float L_3;
		L_3 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_add(L_1, L_2)), (6.0f), NULL);
		V_1 = ((float)(L_3/(6.0f)));
		// this.bufferedColor = PickColor1D(bufferedColor, pt, h);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_4 = __this->___bufferedColor_10;
		int32_t L_5 = V_0;
		float L_6 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_7;
		L_7 = FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1(__this, L_4, L_5, L_6, NULL);
		__this->___bufferedColor_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufferedColor_10), (void*)L_7);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// typeUpdate = true;
		__this->___typeUpdate_14 = (bool)1;
		// UpdateHex();
		FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9(__this, NULL);
		// onColorChange.Invoke(bufferedColor.color);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_8 = __this->___onColorChange_20;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_9 = __this->___bufferedColor_10;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___color_0;
		NullCheck(L_8);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_8, L_10, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		// }
		return;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor_m8751197F29E52A451686DB05033604460EE51C4C (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___type1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 8))) > ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_000b:
	{
		// case PickerType.Main: return PickColorMain(color, v);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_2 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v2;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_4;
		L_4 = FlexibleColorPicker_PickColorMain_mA28AE6DF043E21745E101AA63A5180A26519A71E(__this, L_2, L_3, NULL);
		return L_4;
	}

IL_0014:
	{
		// return color;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_5 = ___color0;
		return L_5;
	}

IL_0016:
	{
		// default: return PickColor1D(color, type, v);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_6 = ___color0;
		int32_t L_7 = ___type1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___v2;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_9;
		L_9 = FlexibleColorPicker_PickColor1D_m5F4E15AD04AE5BE2811090AF58C53FC8BA06D2AE(__this, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColorMain(FlexibleColorPicker/BufferedColor,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColorMain_mA28AE6DF043E21745E101AA63A5180A26519A71E (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v1, const RuntimeMethod* method) 
{
	{
		// return PickColorMain(color, this.mode, v);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_0 = ___color0;
		int32_t L_1 = __this->___mode_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3;
		L_3 = FlexibleColorPicker_PickColorMain_mB40DAE14D3C5D3E789CD435761EE46051B98970B(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor1D(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor1D_m5F4E15AD04AE5BE2811090AF58C53FC8BA06D2AE (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// bool horizontal = IsHorizontal(pickers[(int)type]);
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_0 = __this->___pickers_4;
		int32_t L_1 = ___type1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = FlexibleColorPicker_IsHorizontal_mBE52DCE3165ECDAA01E0F640E0686A49BDE52B75(L_3, NULL);
		// float value = horizontal ? v.x : v.y;
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___v2;
		float L_6 = L_5.___y_1;
		G_B3_0 = L_6;
		goto IL_0021;
	}

IL_001b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___v2;
		float L_8 = L_7.___x_0;
		G_B3_0 = L_8;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		// return PickColor1D(color, type, value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_9 = ___color0;
		int32_t L_10 = ___type1;
		float L_11 = V_0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_12;
		L_12 = FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1(__this, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColorMain(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/MainPickingMode,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColorMain_mB40DAE14D3C5D3E789CD435761EE46051B98970B (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___mode1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___mode1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_007b;
			}
			case 5:
			{
				goto IL_0091;
			}
		}
	}
	{
		goto IL_00a7;
	}

IL_0023:
	{
		// case MainPickingMode.HS: return PickColor2D(color, PickerType.H, v.x, PickerType.S, v.y);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_1 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v2;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___v2;
		float L_5 = L_4.___y_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_6;
		L_6 = FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6(__this, L_1, 4, L_3, 5, L_5, NULL);
		return L_6;
	}

IL_0039:
	{
		// case MainPickingMode.HV: return PickColor2D(color, PickerType.H, v.x, PickerType.V, v.y);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_7 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___v2;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___v2;
		float L_11 = L_10.___y_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_12;
		L_12 = FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6(__this, L_7, 4, L_9, 6, L_11, NULL);
		return L_12;
	}

IL_004f:
	{
		// case MainPickingMode.SH: return PickColor2D(color, PickerType.S, v.x, PickerType.H, v.y);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_13 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___v2;
		float L_15 = L_14.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___v2;
		float L_17 = L_16.___y_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_18;
		L_18 = FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6(__this, L_13, 5, L_15, 4, L_17, NULL);
		return L_18;
	}

IL_0065:
	{
		// case MainPickingMode.SV: return PickColor2D(color, PickerType.S, v.x, PickerType.V, v.y);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_19 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___v2;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___v2;
		float L_23 = L_22.___y_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_24;
		L_24 = FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6(__this, L_19, 5, L_21, 6, L_23, NULL);
		return L_24;
	}

IL_007b:
	{
		// case MainPickingMode.VH: return PickColor2D(color, PickerType.V, v.x, PickerType.H, v.y);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_25 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___v2;
		float L_27 = L_26.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___v2;
		float L_29 = L_28.___y_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_30;
		L_30 = FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6(__this, L_25, 6, L_27, 4, L_29, NULL);
		return L_30;
	}

IL_0091:
	{
		// case MainPickingMode.VS: return PickColor2D(color, PickerType.V, v.x, PickerType.S, v.y);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_31 = ___color0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___v2;
		float L_33 = L_32.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___v2;
		float L_35 = L_34.___y_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_36;
		L_36 = FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6(__this, L_31, 6, L_33, 5, L_35, NULL);
		return L_36;
	}

IL_00a7:
	{
		// default: return bufferedColor;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_37 = __this->___bufferedColor_10;
		return L_37;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor2D(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,System.Single,FlexibleColorPicker/PickerType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor2D_mC7CD9486A468B777FAD0DF0BAA3700CEF20A9FA6 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type11, float ___value12, int32_t ___type23, float ___value24, const RuntimeMethod* method) 
{
	{
		// color = PickColor1D(color, type1, value1);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_0 = ___color0;
		int32_t L_1 = ___type11;
		float L_2 = ___value12;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3;
		L_3 = FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1(__this, L_0, L_1, L_2, NULL);
		___color0 = L_3;
		// color = PickColor1D(color, type2, value2);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_4 = ___color0;
		int32_t L_5 = ___type23;
		float L_6 = ___value24;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_7;
		L_7 = FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1(__this, L_4, L_5, L_6, NULL);
		___color0 = L_7;
		// return color;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_8 = ___color0;
		return L_8;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker::PickColor1D(FlexibleColorPicker/BufferedColor,FlexibleColorPicker/PickerType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___color0, int32_t ___type1, float ___value2, const RuntimeMethod* method) 
{
	PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* V_0 = NULL;
	{
		// var ps = avs.Get((int)type);
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_0;
		L_0 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		int32_t L_1 = ___type1;
		NullCheck(L_0);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_2;
		L_2 = AdvancedSettings_Get_m0E116D5F268038AA1D91603C034DC7A210F44894(L_0, L_1, NULL);
		V_0 = L_2;
		// value = Mathf.Lerp(ps.range.x, ps.range.y, value);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_3 = V_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&L_3->___range_0);
		float L_5 = L_4->___x_0;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_6 = V_0;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&L_6->___range_0);
		float L_8 = L_7->___y_1;
		float L_9 = ___value2;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_8, L_9, NULL);
		___value2 = L_10;
		int32_t L_11 = ___type1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 1)))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0069;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_007f;
			}
			case 6:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_008f;
	}

IL_0051:
	{
		// case PickerType.R: return color.PickR(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_12 = ___color0;
		float L_13 = ___value2;
		NullCheck(L_12);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_14;
		L_14 = BufferedColor_PickR_m3876D51CAECC28565D1905AEE655635430949D93(L_12, L_13, NULL);
		return L_14;
	}

IL_0059:
	{
		// case PickerType.G: return color.PickG(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_15 = ___color0;
		float L_16 = ___value2;
		NullCheck(L_15);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_17;
		L_17 = BufferedColor_PickG_m76A823F5B82120EAB99C44816C4817758E0265A3(L_15, L_16, NULL);
		return L_17;
	}

IL_0061:
	{
		// case PickerType.B: return color.PickB(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_18 = ___color0;
		float L_19 = ___value2;
		NullCheck(L_18);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_20;
		L_20 = BufferedColor_PickB_m04F70DCF84569B6CAE0585FAD0ED885C171B684B(L_18, L_19, NULL);
		return L_20;
	}

IL_0069:
	{
		// case PickerType.H: return color.PickH(value * HUE_LOOP);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_21 = ___color0;
		float L_22 = ___value2;
		NullCheck(L_21);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_23;
		L_23 = BufferedColor_PickH_mA6954DC93AB0228EC04741797706C063A00AE9D4(L_21, ((float)il2cpp_codegen_multiply(L_22, (5.99989986f))), NULL);
		return L_23;
	}

IL_0077:
	{
		// case PickerType.S: return color.PickS(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_24 = ___color0;
		float L_25 = ___value2;
		NullCheck(L_24);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_26;
		L_26 = BufferedColor_PickS_mC9520F77346CC17646DAC9B302EE454B49CCA882(L_24, L_25, NULL);
		return L_26;
	}

IL_007f:
	{
		// case PickerType.V: return color.PickV(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_27 = ___color0;
		float L_28 = ___value2;
		NullCheck(L_27);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_29;
		L_29 = BufferedColor_PickV_mBAB7CDFE989E7FBCEDA554F0B5EAA9DE2181CB02(L_27, L_28, NULL);
		return L_29;
	}

IL_0087:
	{
		// case PickerType.A: return color.PickA(value);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_30 = ___color0;
		float L_31 = ___value2;
		NullCheck(L_30);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_32;
		L_32 = BufferedColor_PickA_mAE929F2594248498A86831396361CDC1542D1BEA(L_30, L_31, NULL);
		return L_32;
	}

IL_008f:
	{
		// throw new Exception("Picker type " + type + " is not associated with a single color value.");
		Il2CppFakeBox<int32_t> L_33(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var)), (&___type1));
		String_t* L_34;
		L_34 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_33), NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7758D00300E70B86E20D9B20465816C057EB5E1D)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BE5956DECEE2CB6055EA6351DA60D548465C441)), NULL);
		Exception_t* L_36 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleColorPicker_PickColor1D_m4300016DE10F5FA6718B8B49EF32F9560F2043E1_RuntimeMethod_var)));
	}
}
// System.Void FlexibleColorPicker::UpdateMarkers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// for(int i = 0; i < pickers.Length; i++) {
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if(IsPickerAvailable(i)) {
		int32_t L_0 = V_0;
		bool L_1;
		L_1 = FlexibleColorPicker_IsPickerAvailable_m073B51EED1AA3A056E2CB7893657AF6647C1F6A1(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// PickerType type = (PickerType)i;
		int32_t L_2 = V_0;
		V_1 = L_2;
		// Vector2 v = GetValue(type);
		int32_t L_3 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = FlexibleColorPicker_GetValue_m69262EFD0B965350B9812349E78B310DE847955D(__this, L_3, NULL);
		V_2 = L_4;
		// UpdateMarker(pickers[i], type, v);
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_5 = __this->___pickers_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_2;
		FlexibleColorPicker_UpdateMarker_m6C321F5DA530F37DCFF240213AF7F64B70BFCCAE(__this, L_8, L_9, L_10, NULL);
	}

IL_002b:
	{
		// for(int i = 0; i < pickers.Length; i++) {
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		// for(int i = 0; i < pickers.Length; i++) {
		int32_t L_12 = V_0;
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_13 = __this->___pickers_4;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::UpdateMarker(FlexibleColorPicker/Picker,FlexibleColorPicker/PickerType,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateMarker_m6C321F5DA530F37DCFF240213AF7F64B70BFCCAE (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 ___picker0, int32_t ___type1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___type1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type1;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 8))) > ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_001b;
	}

IL_000b:
	{
		// SetMarker(picker.image, v, true, true);
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_2 = ___picker0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = L_2.___image_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___v2;
		FlexibleColorPicker_SetMarker_mF0542D4E27493B8FED5393464DA420025F87F84A(__this, L_3, L_4, (bool)1, (bool)1, NULL);
		// break;
		return;
	}

IL_001b:
	{
		// bool horizontal = IsHorizontal(picker);
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_5 = ___picker0;
		bool L_6;
		L_6 = FlexibleColorPicker_IsHorizontal_mBE52DCE3165ECDAA01E0F640E0686A49BDE52B75(L_5, NULL);
		V_0 = L_6;
		// SetMarker(picker.image, v, horizontal, !horizontal);
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_7 = ___picker0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7.___image_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___v2;
		bool L_10 = V_0;
		bool L_11 = V_0;
		FlexibleColorPicker_SetMarker_mF0542D4E27493B8FED5393464DA420025F87F84A(__this, L_8, L_9, L_10, (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::SetMarker(UnityEngine.UI.Image,UnityEngine.Vector2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_SetMarker_mF0542D4E27493B8FED5393464DA420025F87F84A (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___picker0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v1, bool ___setX2, bool ___setY3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9814E7E78D36E46AC3F16A9B552F2E20B9CDE4C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC18CEAF0AF0670D300CBF782FEF04D3E18F51E);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// RectTransform marker = null;
		V_0 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		// RectTransform offMarker = null;
		V_1 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
		// if(setX && setY)
		bool L_0 = ___setX2;
		bool L_1 = ___setY3;
		if (!((int32_t)((int32_t)L_0&(int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		// marker = GetMarker(picker, null);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = ___picker0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40(__this, L_2, (String_t*)NULL, NULL);
		V_0 = L_3;
		goto IL_0052;
	}

IL_0015:
	{
		// else if(setX) {
		bool L_4 = ___setX2;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// marker = GetMarker(picker, "hor");
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = ___picker0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40(__this, L_5, _stringLiteral9BC18CEAF0AF0670D300CBF782FEF04D3E18F51E, NULL);
		V_0 = L_6;
		// offMarker = GetMarker(picker, "ver");
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = ___picker0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40(__this, L_7, _stringLiteral9814E7E78D36E46AC3F16A9B552F2E20B9CDE4C1, NULL);
		V_1 = L_8;
		goto IL_0052;
	}

IL_0034:
	{
		// else if(setY) {
		bool L_9 = ___setY3;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// marker = GetMarker(picker, "ver");
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = ___picker0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40(__this, L_10, _stringLiteral9814E7E78D36E46AC3F16A9B552F2E20B9CDE4C1, NULL);
		V_0 = L_11;
		// offMarker = GetMarker(picker, "hor");
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = ___picker0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40(__this, L_12, _stringLiteral9BC18CEAF0AF0670D300CBF782FEF04D3E18F51E, NULL);
		V_1 = L_13;
	}

IL_0052:
	{
		// if(offMarker != null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// offMarker.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
	}

IL_0067:
	{
		// if(marker == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_0071;
		}
	}
	{
		// return;
		return;
	}

IL_0071:
	{
		// marker.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = V_0;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// RectTransform parent = picker.rectTransform;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = ___picker0;
		NullCheck(L_22);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_22, NULL);
		V_2 = L_23;
		// Vector2 parentSize = parent.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = V_2;
		NullCheck(L_24);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_25;
		L_25 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_24, NULL);
		V_5 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_5), NULL);
		V_3 = L_26;
		// Vector2 localPos = marker.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = V_0;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_27, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_28, NULL);
		V_4 = L_29;
		// if(setX)
		bool L_30 = ___setX2;
		if (!L_30)
		{
			goto IL_00c4;
		}
	}
	{
		// localPos.x = (v.x - parent.pivot.x) * parentSize.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___v1;
		float L_32 = L_31.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33 = V_2;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_33, NULL);
		float L_35 = L_34.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_3;
		float L_37 = L_36.___x_0;
		(&V_4)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_32, L_35)), L_37));
	}

IL_00c4:
	{
		// if(setY)
		bool L_38 = ___setY3;
		if (!L_38)
		{
			goto IL_00e8;
		}
	}
	{
		// localPos.y = (v.y - parent.pivot.y) * parentSize.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = ___v1;
		float L_40 = L_39.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41 = V_2;
		NullCheck(L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_41, NULL);
		float L_43 = L_42.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_3;
		float L_45 = L_44.___y_1;
		(&V_4)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_40, L_43)), L_45));
	}

IL_00e8:
	{
		// marker.localPosition = localPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_47, NULL);
		NullCheck(L_46);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_46, L_48, NULL);
		// }
		return;
	}
}
// UnityEngine.RectTransform FlexibleColorPicker::GetMarker(UnityEngine.UI.Image,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* FlexibleColorPicker_GetMarker_mE9776779E705FFBA84F33BAB7FAB150570C44D40 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___picker0, String_t* ___search1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67C959292ACE557A7911726798B51F6178228E0F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	String_t* V_2 = NULL;
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	int32_t G_B4_0 = 0;
	bool G_B4_1 = false;
	{
		// for(int i = 0; i < picker.transform.childCount; i++) {
		V_0 = 0;
		goto IL_0048;
	}

IL_0004:
	{
		// RectTransform candidate = picker.transform.GetChild(i).GetComponent<RectTransform>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___picker0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_3, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_1 = L_4;
		// string candidateName = candidate.name.ToLower();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_6, NULL);
		V_2 = L_7;
		// bool match = candidateName.Contains("marker");
		String_t* L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral67C959292ACE557A7911726798B51F6178228E0F, NULL);
		// match &= string.IsNullOrEmpty(search)
		//     || candidateName.Contains(search);
		String_t* L_10 = ___search1;
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		G_B2_0 = L_9;
		if (L_11)
		{
			G_B3_0 = L_9;
			goto IL_003e;
		}
	}
	{
		String_t* L_12 = V_2;
		String_t* L_13 = ___search1;
		NullCheck(L_12);
		bool L_14;
		L_14 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_12, L_13, NULL);
		G_B4_0 = ((int32_t)(L_14));
		G_B4_1 = G_B2_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_003f:
	{
		// if(match)
		if (!((int32_t)((int32_t)G_B4_1&G_B4_0)))
		{
			goto IL_0044;
		}
	}
	{
		// return candidate;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_1;
		return L_15;
	}

IL_0044:
	{
		// for(int i = 0; i < picker.transform.childCount; i++) {
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		// for(int i = 0; i < picker.transform.childCount; i++) {
		int32_t L_17 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = ___picker0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		if ((((int32_t)L_17) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)NULL;
	}
}
// UnityEngine.Vector2 FlexibleColorPicker::GetValue(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetValue_m69262EFD0B965350B9812349E78B310DE847955D (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 8))) > ((uint32_t)1))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_001e;
	}

IL_000b:
	{
		// case PickerType.Main: return GetValue(mode);
		int32_t L_2 = __this->___mode_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = FlexibleColorPicker_GetValue_m6B2585C457515EC1FD1D4DA4216466F6A3B1F098(__this, L_2, NULL);
		return L_3;
	}

IL_0018:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_4;
	}

IL_001e:
	{
		// float value = GetValue1D(type);
		int32_t L_5 = ___type0;
		float L_6;
		L_6 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, L_5, NULL);
		// return new Vector2(value, value);
		float L_7 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_7, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Single FlexibleColorPicker::GetValue1D(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var ps = avs.Get((int)type);
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_0;
		L_0 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		int32_t L_1 = ___type0;
		NullCheck(L_0);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_2;
		L_2 = AdvancedSettings_Get_m0E116D5F268038AA1D91603C034DC7A210F44894(L_0, L_1, NULL);
		// float min = ps.range.x;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_3 = L_2;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&L_3->___range_0);
		float L_5 = L_4->___x_0;
		V_0 = L_5;
		// float max = ps.range.y;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&L_3->___range_0);
		float L_7 = L_6->___y_1;
		V_1 = L_7;
		int32_t L_8 = ___type0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0072;
			}
			case 3:
			{
				goto IL_0085;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_00b1;
			}
			case 6:
			{
				goto IL_00c4;
			}
		}
	}
	{
		goto IL_00d7;
	}

IL_004c:
	{
		// case PickerType.R: return Mathf.InverseLerp(min, max, bufferedColor.r);
		float L_9 = V_0;
		float L_10 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_11 = __this->___bufferedColor_10;
		NullCheck(L_11);
		float L_12;
		L_12 = BufferedColor_get_r_mDE4032686C14B90D78E031FB41FDCFDB709378C5(L_11, NULL);
		float L_13;
		L_13 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_9, L_10, L_12, NULL);
		return L_13;
	}

IL_005f:
	{
		// case PickerType.G: return Mathf.InverseLerp(min, max, bufferedColor.g);
		float L_14 = V_0;
		float L_15 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_16 = __this->___bufferedColor_10;
		NullCheck(L_16);
		float L_17;
		L_17 = BufferedColor_get_g_mF67C4ED27F16AB9A8F82F04D89DC8D90C9C00FE7(L_16, NULL);
		float L_18;
		L_18 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_14, L_15, L_17, NULL);
		return L_18;
	}

IL_0072:
	{
		// case PickerType.B: return Mathf.InverseLerp(min, max, bufferedColor.b);
		float L_19 = V_0;
		float L_20 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_21 = __this->___bufferedColor_10;
		NullCheck(L_21);
		float L_22;
		L_22 = BufferedColor_get_b_mD572E723BBBF02A08673E734E9F4BC72983BAA3C(L_21, NULL);
		float L_23;
		L_23 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_19, L_20, L_22, NULL);
		return L_23;
	}

IL_0085:
	{
		// case PickerType.H: return Mathf.InverseLerp(min, max, bufferedColor.h / HUE_LOOP);
		float L_24 = V_0;
		float L_25 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_26 = __this->___bufferedColor_10;
		NullCheck(L_26);
		float L_27;
		L_27 = BufferedColor_get_h_m9726B9FB5C86ECB7E3941070FC01EA77808E2076_inline(L_26, NULL);
		float L_28;
		L_28 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_24, L_25, ((float)(L_27/(5.99989986f))), NULL);
		return L_28;
	}

IL_009e:
	{
		// case PickerType.S: return Mathf.InverseLerp(min, max, bufferedColor.s);
		float L_29 = V_0;
		float L_30 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_31 = __this->___bufferedColor_10;
		NullCheck(L_31);
		float L_32;
		L_32 = BufferedColor_get_s_mE7AA9A95C939D3F40EEC24D796735C2AF4326BF0_inline(L_31, NULL);
		float L_33;
		L_33 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_29, L_30, L_32, NULL);
		return L_33;
	}

IL_00b1:
	{
		// case PickerType.V: return Mathf.InverseLerp(min, max, bufferedColor.v);
		float L_34 = V_0;
		float L_35 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_36 = __this->___bufferedColor_10;
		NullCheck(L_36);
		float L_37;
		L_37 = BufferedColor_get_v_m941317CA3AD81D735AE0C31F1219CECCFFBDC176(L_36, NULL);
		float L_38;
		L_38 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_34, L_35, L_37, NULL);
		return L_38;
	}

IL_00c4:
	{
		// case PickerType.A: return Mathf.InverseLerp(min, max, bufferedColor.a);
		float L_39 = V_0;
		float L_40 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_41 = __this->___bufferedColor_10;
		NullCheck(L_41);
		float L_42;
		L_42 = BufferedColor_get_a_m1ADC4C6C34302DE3D5A51635BABC729DF38E2D8E(L_41, NULL);
		float L_43;
		L_43 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_39, L_40, L_42, NULL);
		return L_43;
	}

IL_00d7:
	{
		// throw new Exception("Picker type " + type + " is not associated with a single color value.");
		Il2CppFakeBox<int32_t> L_44(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var)), (&___type0));
		String_t* L_45;
		L_45 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_44), NULL);
		String_t* L_46;
		L_46 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7758D00300E70B86E20D9B20465816C057EB5E1D)), L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BE5956DECEE2CB6055EA6351DA60D548465C441)), NULL);
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, L_46, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F_RuntimeMethod_var)));
	}
}
// UnityEngine.Vector2 FlexibleColorPicker::GetValue(FlexibleColorPicker/MainPickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetValue_m6B2585C457515EC1FD1D4DA4216466F6A3B1F098 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___mode0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0048;
			}
			case 3:
			{
				goto IL_005c;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_0098;
	}

IL_0020:
	{
		// case MainPickingMode.HS: return new Vector2(GetValue1D(PickerType.H), GetValue1D(PickerType.S));
		float L_1;
		L_1 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 4, NULL);
		float L_2;
		L_2 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0034:
	{
		// case MainPickingMode.HV: return new Vector2(GetValue1D(PickerType.H), GetValue1D(PickerType.V));
		float L_4;
		L_4 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 4, NULL);
		float L_5;
		L_5 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0048:
	{
		// case MainPickingMode.SH: return new Vector2(GetValue1D(PickerType.S), GetValue1D(PickerType.H));
		float L_7;
		L_7 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 5, NULL);
		float L_8;
		L_8 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_005c:
	{
		// case MainPickingMode.SV: return new Vector2(GetValue1D(PickerType.S), GetValue1D(PickerType.V));
		float L_10;
		L_10 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 5, NULL);
		float L_11;
		L_11 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0070:
	{
		// case MainPickingMode.VH: return new Vector2(GetValue1D(PickerType.V), GetValue1D(PickerType.H));
		float L_13;
		L_13 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 6, NULL);
		float L_14;
		L_14 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0084:
	{
		// case MainPickingMode.VS: return new Vector2(GetValue1D(PickerType.V), GetValue1D(PickerType.S));
		float L_16;
		L_16 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 6, NULL);
		float L_17;
		L_17 = FlexibleColorPicker_GetValue1D_m7AF2874964E82E72027A67FBA3ABC444F98B619F(__this, 5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0098:
	{
		// default: throw new Exception("Unkown main picking mode: " + mode);
		Il2CppFakeBox<int32_t> L_19(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_il2cpp_TypeInfo_var)), (&___mode0));
		String_t* L_20;
		L_20 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_19), NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89ED0BE37FFC2C105117FDE721A08DD7E9D6261E)), L_20, NULL);
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FlexibleColorPicker_GetValue_m6B2585C457515EC1FD1D4DA4216466F6A3B1F098_RuntimeMethod_var)));
	}
}
// System.Void FlexibleColorPicker::UpdateTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// foreach(PickerType type in Enum.GetValues(typeof(PickerType))) {
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_2;
					if (!L_5)
					{
						goto IL_0078;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0078:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach(PickerType type in Enum.GetValues(typeof(PickerType))) {
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_8, PickerType_t460A2F2E860370B55E265A86E6B002BAE5416BCD_il2cpp_TypeInfo_var))));
				// if(staticMode | avs.Get((int)type).overrideStatic | (type == PickerType.Main & avs.mainStatic))
				bool L_9 = __this->___staticMode_18;
				AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_10;
				L_10 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
				int32_t L_11 = V_1;
				NullCheck(L_10);
				PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_12;
				L_12 = AdvancedSettings_Get_m0E116D5F268038AA1D91603C034DC7A210F44894(L_10, L_11, NULL);
				NullCheck(L_12);
				bool L_13 = L_12->___overrideStatic_1;
				int32_t L_14 = V_1;
				AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_15;
				L_15 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
				NullCheck(L_15);
				bool L_16 = L_15->___mainStatic_0;
				if (!((int32_t)(((int32_t)((int32_t)L_9|(int32_t)L_13))|((int32_t)(((((int32_t)L_14) == ((int32_t)0))? 1 : 0)&(int32_t)L_16)))))
				{
					goto IL_0057_1;
				}
			}
			{
				// UpdateStatic(type);
				int32_t L_17 = V_1;
				FlexibleColorPicker_UpdateStatic_m7D8D516FFDCA59518706FF52FC73A56A8A57756F(__this, L_17, NULL);
				goto IL_005e_1;
			}

IL_0057_1:
			{
				// UpdateDynamic(type);
				int32_t L_18 = V_1;
				FlexibleColorPicker_UpdateDynamic_mBE00D26993158E597DC8837A7BBB55F117526114(__this, L_18, NULL);
			}

IL_005e_1:
			{
				// foreach(PickerType type in Enum.GetValues(typeof(PickerType))) {
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0079;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::UpdateStatic(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateStatic_m7D8D516FFDCA59518706FF52FC73A56A8A57756F (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_2 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B5_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B9_0 = NULL;
	{
		// if(!IsPickerAvailable(type))
		int32_t L_0 = ___type0;
		bool L_1;
		L_1 = FlexibleColorPicker_IsPickerAvailable_m3CC84C274AF22BBCD4C4D75B954D8BC1707635CF(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Picker p = pickers[(int)type];
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_2 = __this->___pickers_4;
		int32_t L_3 = ___type0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// bool hor = IsHorizontal(p);
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_6 = V_0;
		bool L_7;
		L_7 = FlexibleColorPicker_IsHorizontal_mBE52DCE3165ECDAA01E0F640E0686A49BDE52B75(L_6, NULL);
		V_1 = L_7;
		// Sprite s = hor ? p.staticSpriteHor : p.staticSpriteVer;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_9 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = L_9.___staticSpriteVer_3;
		G_B5_0 = L_10;
		goto IL_002f;
	}

IL_0029:
	{
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_11 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = L_11.___staticSpriteHor_2;
		G_B5_0 = L_12;
	}

IL_002f:
	{
		V_2 = G_B5_0;
		// if(s == null)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		// s = hor ? p.staticSpriteVer : p.staticSpriteHor;
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0044;
		}
	}
	{
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_16 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = L_16.___staticSpriteHor_2;
		G_B9_0 = L_17;
		goto IL_004a;
	}

IL_0044:
	{
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_18 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19 = L_18.___staticSpriteVer_3;
		G_B9_0 = L_19;
	}

IL_004a:
	{
		V_2 = G_B9_0;
	}

IL_004b:
	{
		// p.image.sprite = s;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_20 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = L_20.___image_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = V_2;
		NullCheck(L_21);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_21, L_22, NULL);
		// p.image.material = null;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_23 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = L_23.___image_0;
		NullCheck(L_24);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_24, (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL);
		// p.image.color = Color.white;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_25 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = L_25.___image_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_27);
		// Color prvw = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D(__this, NULL);
		V_3 = L_28;
		int32_t L_29 = ___type0;
		if (!L_29)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_30 = ___type0;
		if ((((int32_t)L_30) == ((int32_t)8)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_31 = ___type0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)9))))
		{
			goto IL_00b9;
		}
	}
	{
		return;
	}

IL_0087:
	{
		// p.image.sprite = staticSpriteMain[(int)mode];
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_32 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = L_32.___image_0;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_34 = __this->___staticSpriteMain_9;
		int32_t L_35 = __this->___mode_8;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_33);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_33, L_37, NULL);
		// break;
		return;
	}

IL_00a0:
	{
		// prvw.a = 1f;
		(&V_3)->___a_3 = (1.0f);
		// p.image.color = prvw;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_38 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = L_38.___image_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = V_3;
		NullCheck(L_39);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_40);
		// break;
		return;
	}

IL_00b9:
	{
		// p.image.color = prvw;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_41 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = L_41.___image_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_3;
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::UpdateDynamic(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateDynamic_mBE00D26993158E597DC8837A7BBB55F117526114 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5327B56FF13CCB05078754931F3E47BF281996B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59861356BAB5171272E157858059C1801D7D5E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACE1BCB820F4052529380A28EF32D87B2B6B4658);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC00970716BC3C271ED13537368097440112B0B97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0E3D7D0229703CB3DFD1AB531D82DF4E607F9E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4);
		s_Il2CppMethodInitialized = true;
	}
	Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* V_2 = NULL;
	bool V_3 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	String_t* G_B10_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_4 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B9_2 = 0.0f;
	String_t* G_B9_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B9_4 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	float G_B11_3 = 0.0f;
	String_t* G_B11_4 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B11_5 = NULL;
	{
		// if(!IsPickerAvailable(type))
		int32_t L_0 = ___type0;
		bool L_1;
		L_1 = FlexibleColorPicker_IsPickerAvailable_m3CC84C274AF22BBCD4C4D75B954D8BC1707635CF(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Picker p = pickers[(int)type];
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_2 = __this->___pickers_4;
		int32_t L_3 = ___type0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if(p.dynamicMaterial == null)
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_6 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = L_6.___dynamicMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		return;
	}

IL_0026:
	{
		// p.image.material = p.dynamicMaterial;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_9 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = L_9.___image_0;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_11 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = L_11.___dynamicMaterial_4;
		NullCheck(L_10);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_10, L_12);
		// p.image.color = Color.white;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_13 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = L_13.___image_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
		// p.image.sprite = p.dynamicSprite;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_16 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = L_16.___image_0;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_18 = V_0;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19 = L_18.___dynamicSprite_1;
		NullCheck(L_17);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_19, NULL);
		// Material m = p.image.materialForRendering;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_20 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = L_20.___image_0;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(34 /* UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering() */, L_21);
		V_1 = L_22;
		// BufferedColor bc = this.bufferedColor;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_23 = __this->___bufferedColor_10;
		V_2 = L_23;
		// bool alpha = IsAlphaType(type);
		int32_t L_24 = ___type0;
		bool L_25;
		L_25 = FlexibleColorPicker_IsAlphaType_m1C586D4FC5BF329AB77CA85026E74B10EA28C9A3(L_24, NULL);
		V_3 = L_25;
		// m.SetInt(SHADER_MODE, GetGradientMode(type));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = V_1;
		int32_t L_27 = ___type0;
		int32_t L_28;
		L_28 = FlexibleColorPicker_GetGradientMode_m4C4AF62BEBBEB0462E77666DC92828C7E8FBB34A(__this, L_27, NULL);
		NullCheck(L_26);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_26, _stringLiteral7D61FA9D9BE7581D7E2EE28C775ABE0D4B8C3D69, L_28, NULL);
		// Color c1 = PickColor(bc, type, Vector2.zero).color;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_29 = V_2;
		int32_t L_30 = ___type0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_32;
		L_32 = FlexibleColorPicker_PickColor_m8751197F29E52A451686DB05033604460EE51C4C(__this, L_29, L_30, L_31, NULL);
		NullCheck(L_32);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = L_32->___color_0;
		V_4 = L_33;
		// Color c2 = PickColor(bc, type, Vector2.one).color;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_34 = V_2;
		int32_t L_35 = ___type0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_37;
		L_37 = FlexibleColorPicker_PickColor_m8751197F29E52A451686DB05033604460EE51C4C(__this, L_34, L_35, L_36, NULL);
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = L_37->___color_0;
		V_5 = L_38;
		// if(!alpha) {
		bool L_39 = V_3;
		if (L_39)
		{
			goto IL_00e7;
		}
	}
	{
		// c1 = new Color(c1.r, c1.g, c1.b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = V_4;
		float L_41 = L_40.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = V_4;
		float L_43 = L_42.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = V_4;
		float L_45 = L_44.___b_2;
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_4), L_41, L_43, L_45, NULL);
		// c2 = new Color(c2.r, c2.g, c2.b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = V_5;
		float L_47 = L_46.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48 = V_5;
		float L_49 = L_48.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = V_5;
		float L_51 = L_50.___b_2;
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_5), L_47, L_49, L_51, NULL);
	}

IL_00e7:
	{
		// m.SetColor(SHADER_C1, c1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = V_4;
		NullCheck(L_52);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_52, _stringLiteralE1995802ABE6A3EC346C8751E74E33799D0F46B4, L_53, NULL);
		// m.SetColor(SHADER_C2, c2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55 = V_5;
		NullCheck(L_54);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_54, _stringLiteral59861356BAB5171272E157858059C1801D7D5E5D, L_55, NULL);
		// if(type == PickerType.Main)
		int32_t L_56 = ___type0;
		if (L_56)
		{
			goto IL_0115;
		}
	}
	{
		// m.SetInt(SHADER_DOUBLE_MODE, (int)mode);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57 = V_1;
		int32_t L_58 = __this->___mode_8;
		NullCheck(L_57);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_57, _stringLiteralACE1BCB820F4052529380A28EF32D87B2B6B4658, L_58, NULL);
	}

IL_0115:
	{
		// m.SetVector(SHADER_HSV, new Vector4(bc.h / HUE_LOOP, bc.s, bc.v, alpha ? bc.a : 1f));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_59 = V_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_60 = V_2;
		NullCheck(L_60);
		float L_61;
		L_61 = BufferedColor_get_h_m9726B9FB5C86ECB7E3941070FC01EA77808E2076_inline(L_60, NULL);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_62 = V_2;
		NullCheck(L_62);
		float L_63;
		L_63 = BufferedColor_get_s_mE7AA9A95C939D3F40EEC24D796735C2AF4326BF0_inline(L_62, NULL);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_64 = V_2;
		NullCheck(L_64);
		float L_65;
		L_65 = BufferedColor_get_v_m941317CA3AD81D735AE0C31F1219CECCFFBDC176(L_64, NULL);
		bool L_66 = V_3;
		G_B9_0 = L_65;
		G_B9_1 = L_63;
		G_B9_2 = ((float)(L_61/(5.99989986f)));
		G_B9_3 = _stringLiteralE0E3D7D0229703CB3DFD1AB531D82DF4E607F9E8;
		G_B9_4 = L_59;
		if (L_66)
		{
			G_B10_0 = L_65;
			G_B10_1 = L_63;
			G_B10_2 = ((float)(L_61/(5.99989986f)));
			G_B10_3 = _stringLiteralE0E3D7D0229703CB3DFD1AB531D82DF4E607F9E8;
			G_B10_4 = L_59;
			goto IL_013d;
		}
	}
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		G_B11_4 = G_B9_3;
		G_B11_5 = G_B9_4;
		goto IL_0143;
	}

IL_013d:
	{
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_67 = V_2;
		NullCheck(L_67);
		float L_68;
		L_68 = BufferedColor_get_a_m1ADC4C6C34302DE3D5A51635BABC729DF38E2D8E(L_67, NULL);
		G_B11_0 = L_68;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
		G_B11_4 = G_B10_3;
		G_B11_5 = G_B10_4;
	}

IL_0143:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_69), G_B11_3, G_B11_2, G_B11_1, G_B11_0, /*hidden argument*/NULL);
		NullCheck(G_B11_5);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B11_5, G_B11_4, L_69, NULL);
		// m.SetVector(SHADER_HSV_MIN, new Vector4(avs.h.range.x, avs.s.range.x, avs.v.range.x));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70 = V_1;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_71;
		L_71 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		NullCheck(L_71);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_72 = L_71->___h_4;
		NullCheck(L_72);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_73 = (&L_72->___range_0);
		float L_74 = L_73->___x_0;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_75;
		L_75 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		NullCheck(L_75);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_76 = L_75->___s_5;
		NullCheck(L_76);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_77 = (&L_76->___range_0);
		float L_78 = L_77->___x_0;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_79;
		L_79 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		NullCheck(L_79);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_80 = L_79->___v_6;
		NullCheck(L_80);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = (&L_80->___range_0);
		float L_82 = L_81->___x_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline((&L_83), L_74, L_78, L_82, /*hidden argument*/NULL);
		NullCheck(L_70);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_70, _stringLiteralC00970716BC3C271ED13537368097440112B0B97, L_83, NULL);
		// m.SetVector(SHADER_HSV_MAX, new Vector4(avs.h.range.y, avs.s.range.y, avs.v.range.y));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_84 = V_1;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_85;
		L_85 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		NullCheck(L_85);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_86 = L_85->___h_4;
		NullCheck(L_86);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_87 = (&L_86->___range_0);
		float L_88 = L_87->___y_1;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_89;
		L_89 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		NullCheck(L_89);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_90 = L_89->___s_5;
		NullCheck(L_90);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_91 = (&L_90->___range_0);
		float L_92 = L_91->___y_1;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_93;
		L_93 = FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline(__this, NULL);
		NullCheck(L_93);
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_94 = L_93->___v_6;
		NullCheck(L_94);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_95 = (&L_94->___range_0);
		float L_96 = L_95->___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_97;
		memset((&L_97), 0, sizeof(L_97));
		Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline((&L_97), L_88, L_92, L_96, /*hidden argument*/NULL);
		NullCheck(L_84);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_84, _stringLiteral5327B56FF13CCB05078754931F3E47BF281996B0, L_97, NULL);
		// }
		return;
	}
}
// System.Int32 FlexibleColorPicker::GetGradientMode(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlexibleColorPicker_GetGradientMode_m4C4AF62BEBBEB0462E77666DC92828C7E8FBB34A (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int o = IsHorizontal(pickers[(int)type]) ? 0 : 1;
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_0 = __this->___pickers_4;
		int32_t L_1 = ___type0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4;
		L_4 = FlexibleColorPicker_IsHorizontal_mBE52DCE3165ECDAA01E0F640E0686A49BDE52B75(L_3, NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		int32_t L_5 = ___type0;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_6 = ___type0;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0027;
	}

IL_0021:
	{
		// case PickerType.Main: return 2;
		return 2;
	}

IL_0023:
	{
		// case PickerType.H: return 3 + o;
		int32_t L_7 = V_0;
		return ((int32_t)il2cpp_codegen_add(3, L_7));
	}

IL_0027:
	{
		// default: return o;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean FlexibleColorPicker::IsPickerAvailable(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsPickerAvailable_m3CC84C274AF22BBCD4C4D75B954D8BC1707635CF (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// return IsPickerAvailable((int)type);
		int32_t L_0 = ___type0;
		bool L_1;
		L_1 = FlexibleColorPicker_IsPickerAvailable_m073B51EED1AA3A056E2CB7893657AF6647C1F6A1(__this, L_0, NULL);
		return L_1;
	}
}
// System.Boolean FlexibleColorPicker::IsPickerAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsPickerAvailable_m073B51EED1AA3A056E2CB7893657AF6647C1F6A1 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(index < 0 || index >= pickers.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index0;
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_2 = __this->___pickers_4;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0011;
		}
	}

IL_000f:
	{
		// return false;
		return (bool)0;
	}

IL_0011:
	{
		// Picker p = pickers[index];
		PickerU5BU5D_t0B07D5C34CB28F039F5ED87270EB87FA130CC0C1* L_3 = __this->___pickers_4;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// if(p.image == null || !p.image.gameObject.activeInHierarchy)
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_7 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = L_7.___image_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_10 = V_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = L_10.___image_0;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_12, NULL);
		if (L_13)
		{
			goto IL_0040;
		}
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void FlexibleColorPicker::UpdateHex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateHex_m160A3F93088585937CA2D13649F8D2BEC6D274B9 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(hexInput == null || !hexInput.gameObject.activeInHierarchy)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___hexInput_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___hexInput_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		// return;
		return;
	}

IL_0021:
	{
		// hexInput.SetTextWithoutNotify("#" + ColorUtility.ToHtmlStringRGB(this.color));
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___hexInput_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = FlexibleColorPicker_get_color_m8B3D57673DD308A231E3EF3DD1CF814DB58DCB1D(__this, NULL);
		String_t* L_7;
		L_7 = ColorUtility_ToHtmlStringRGB_m50D59301FF2736B78C95C1FD5619D429358B7433(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, L_7, NULL);
		NullCheck(L_5);
		InputField_SetTextWithoutNotify_m2CD8DAC2A298CBABFCEC654A17294427DDD238A3(L_5, L_8, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::TypeHex(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_TypeHex_m0A7B87A9EC2EBDB6853263C54CE5158B2B423D80 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, String_t* ___input0, bool ___finish1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		// if(typeUpdate)
		bool L_0 = __this->___typeUpdate_14;
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
		// typeUpdate = true;
		__this->___typeUpdate_14 = (bool)1;
		// string newText = GetSanitizedHex(input, finish);
		String_t* L_1 = ___input0;
		bool L_2 = ___finish1;
		String_t* L_3;
		L_3 = FlexibleColorPicker_GetSanitizedHex_m072FB146984724188BE831ABFEC5E9EB93223EA1(L_1, L_2, NULL);
		V_0 = L_3;
		// string parseText = GetSanitizedHex(input, true);
		String_t* L_4 = ___input0;
		String_t* L_5;
		L_5 = FlexibleColorPicker_GetSanitizedHex_m072FB146984724188BE831ABFEC5E9EB93223EA1(L_4, (bool)1, NULL);
		// int cp = hexInput.caretPosition;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->___hexInput_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InputField_get_caretPosition_mC43674CCFF5BF7D047C2D4682B2CD7DE8A179EA7(L_6, NULL);
		V_1 = L_7;
		// hexInput.SetTextWithoutNotify(newText);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_8 = __this->___hexInput_5;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		InputField_SetTextWithoutNotify_m2CD8DAC2A298CBABFCEC654A17294427DDD238A3(L_8, L_9, NULL);
		// if(hexInput.caretPosition == 0)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_10 = __this->___hexInput_5;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InputField_get_caretPosition_mC43674CCFF5BF7D047C2D4682B2CD7DE8A179EA7(L_10, NULL);
		G_B3_0 = L_5;
		if (L_11)
		{
			G_B4_0 = L_5;
			goto IL_0052;
		}
	}
	{
		// hexInput.caretPosition = 1;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_12 = __this->___hexInput_5;
		NullCheck(L_12);
		InputField_set_caretPosition_mF502AA3301C39D4397C7BF809D1F3A18D0603BD7(L_12, 1, NULL);
		G_B9_0 = G_B3_0;
		goto IL_009a;
	}

IL_0052:
	{
		// else if(newText.Length == 2)
		String_t* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			G_B6_0 = G_B4_0;
			goto IL_0069;
		}
	}
	{
		// hexInput.caretPosition = 2;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_15 = __this->___hexInput_5;
		NullCheck(L_15);
		InputField_set_caretPosition_mF502AA3301C39D4397C7BF809D1F3A18D0603BD7(L_15, 2, NULL);
		G_B9_0 = G_B5_0;
		goto IL_009a;
	}

IL_0069:
	{
		// else if(input.Length > newText.Length && cp < input.Length)
		String_t* L_16 = ___input0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		String_t* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_18, NULL);
		G_B7_0 = G_B6_0;
		if ((((int32_t)L_17) <= ((int32_t)L_19)))
		{
			G_B9_0 = G_B6_0;
			goto IL_009a;
		}
	}
	{
		int32_t L_20 = V_1;
		String_t* L_21 = ___input0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_21, NULL);
		G_B8_0 = G_B7_0;
		if ((((int32_t)L_20) >= ((int32_t)L_22)))
		{
			G_B9_0 = G_B7_0;
			goto IL_009a;
		}
	}
	{
		// hexInput.caretPosition = cp - input.Length + newText.Length;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_23 = __this->___hexInput_5;
		int32_t L_24 = V_1;
		String_t* L_25 = ___input0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_25, NULL);
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_27, NULL);
		NullCheck(L_23);
		InputField_set_caretPosition_mF502AA3301C39D4397C7BF809D1F3A18D0603BD7(L_23, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_24, L_26)), L_28)), NULL);
		G_B9_0 = G_B8_0;
	}

IL_009a:
	{
		// if(ColorUtility.TryParseHtmlString(parseText, out newColor)) {
		bool L_29;
		L_29 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(G_B9_0, (&V_2), NULL);
		if (!L_29)
		{
			goto IL_00d7;
		}
	}
	{
		// if(bufferedColor != null) {
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_30 = __this->___bufferedColor_10;
		if (!L_30)
		{
			goto IL_00d0;
		}
	}
	{
		// bufferedColor.Set(newColor);
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_31 = __this->___bufferedColor_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = V_2;
		NullCheck(L_31);
		BufferedColor_Set_m7477F1A7E1E90AE4123692DB778025F4959F6261(L_31, L_32, NULL);
		// UpdateMarkers();
		FlexibleColorPicker_UpdateMarkers_mF9B6310080F80C9E74BAAD6EF4D21BD4C9F0C49F(__this, NULL);
		// UpdateTextures();
		FlexibleColorPicker_UpdateTextures_mAEA38C6D53116B0357A0643040F12A04154436A3(__this, NULL);
		// onColorChange.Invoke(newColor);
		ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* L_33 = __this->___onColorChange_20;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = V_2;
		NullCheck(L_33);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(L_33, L_34, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		return;
	}

IL_00d0:
	{
		// startingColor = newColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_2;
		__this->___startingColor_17 = L_35;
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::MakeModeOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_MakeModeOptions_m1C01A4C132BD47F253CC26431EE2FDC2AA646395 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// if(modeDropdown == null || !modeDropdown.gameObject.activeInHierarchy)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_0 = __this->___modeDropdown_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_2 = __this->___modeDropdown_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		// return;
		return;
	}

IL_0021:
	{
		// modeDropdown.ClearOptions();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_5 = __this->___modeDropdown_6;
		NullCheck(L_5);
		Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56(L_5, NULL);
		// List<string> options = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_6, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_6;
		// foreach(MainPickingMode mode in Enum.GetValues(typeof(MainPickingMode)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_9;
		L_9 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Array_GetEnumerator_mDB7E2AF23F2BDC715D429C71CA3B8D0151F0DC1E(L_9, NULL);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_12 = V_3;
					if (!L_12)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_13 = V_3;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0068_1;
			}

IL_0049_1:
			{
				// foreach(MainPickingMode mode in Enum.GetValues(typeof(MainPickingMode)))
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				V_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_15, MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_il2cpp_TypeInfo_var))));
				// options.Add(mode.ToString());
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = V_0;
				Il2CppFakeBox<int32_t> L_17(MainPickingMode_t264E6607803CADD03920D154989D74226479C4B2_il2cpp_TypeInfo_var, (&V_2));
				String_t* L_18;
				L_18 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_17), NULL);
				NullCheck(L_16);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_16, L_18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0068_1:
			{
				// foreach(MainPickingMode mode in Enum.GetValues(typeof(MainPickingMode)))
				RuntimeObject* L_19 = V_1;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// modeDropdown.AddOptions(options);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_21 = __this->___modeDropdown_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = V_0;
		NullCheck(L_21);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_21, L_22, NULL);
		// UpdateMode(this.mode);
		int32_t L_23 = __this->___mode_8;
		FlexibleColorPicker_UpdateMode_m1F0381281BEBC83E96F330CF9321DE0045DF2904(__this, L_23, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker::UpdateMode(FlexibleColorPicker/MainPickingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker_UpdateMode_m1F0381281BEBC83E96F330CF9321DE0045DF2904 (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, int32_t ___mode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastUpdatedMode = mode;
		int32_t L_0 = ___mode0;
		__this->___lastUpdatedMode_13 = L_0;
		// if(modeDropdown == null || !modeDropdown.gameObject.activeInHierarchy)
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___modeDropdown_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___modeDropdown_6;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_4, NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}

IL_0027:
	{
		// return;
		return;
	}

IL_0028:
	{
		// modeDropdown.value = (int)mode;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->___modeDropdown_6;
		int32_t L_7 = ___mode0;
		NullCheck(L_6);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Boolean FlexibleColorPicker::IsPreviewType(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsPreviewType_mB0425475D4462929A7F20751BACC9C30E6FA4636 (int32_t ___type0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___type0;
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_000f;
	}

IL_000b:
	{
		// case PickerType.Preview: return true;
		return (bool)1;
	}

IL_000d:
	{
		// case PickerType.PreviewAlpha: return true;
		return (bool)1;
	}

IL_000f:
	{
		// default: return false;
		return (bool)0;
	}
}
// System.Boolean FlexibleColorPicker::IsAlphaType(FlexibleColorPicker/PickerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsAlphaType_m1C586D4FC5BF329AB77CA85026E74B10EA28C9A3 (int32_t ___type0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___type0;
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___type0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)9))))
		{
			goto IL_000d;
		}
	}
	{
		goto IL_000f;
	}

IL_000b:
	{
		// case PickerType.A: return true;
		return (bool)1;
	}

IL_000d:
	{
		// case PickerType.PreviewAlpha: return true;
		return (bool)1;
	}

IL_000f:
	{
		// default: return false;
		return (bool)0;
	}
}
// System.Boolean FlexibleColorPicker::IsHorizontal(FlexibleColorPicker/Picker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsHorizontal_mBE52DCE3165ECDAA01E0F640E0686A49BDE52B75 (Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 ___p0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 size = p.image.rectTransform.rect.size;
		Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087 L_0 = ___p0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = L_0.___image_0;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_1, NULL);
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_1 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		V_0 = L_4;
		// return size.x >= size.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		return (bool)((((int32_t)((!(((float)L_6) >= ((float)L_8)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String FlexibleColorPicker::GetSanitizedHex(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlexibleColorPicker_GetSanitizedHex_m072FB146984724188BE831ABFEC5E9EB93223EA1 (String_t* ___input0, bool ___full1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* V_0 = NULL;
	int32_t V_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	{
		// if(string.IsNullOrEmpty(input))
		String_t* L_0 = ___input0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return "#";
		return _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
	}

IL_000e:
	{
		// List<char> toReturn = new List<char>();
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_2 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82(L_2, List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		V_0 = L_2;
		// toReturn.Add('#');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_3 = V_0;
		NullCheck(L_3);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_3, ((int32_t)35), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		// int i = 0;
		V_1 = 0;
		// char[] chars = input.ToCharArray();
		String_t* L_4 = ___input0;
		NullCheck(L_4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5;
		L_5 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_4, NULL);
		V_2 = L_5;
		goto IL_0043;
	}

IL_0027:
	{
		// char nextChar = char.ToUpper(chars[i++]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		uint16_t L_10 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		Il2CppChar L_11;
		L_11 = Char_ToUpper_m7DB51DD07EE52F4CA897807281880930F5CBD2D2(L_10, NULL);
		V_3 = L_11;
		// if(IsValidHexChar(nextChar))
		Il2CppChar L_12 = V_3;
		bool L_13;
		L_13 = FlexibleColorPicker_IsValidHexChar_mF2A1B5F11A54FB0F1B582C861F0270FC7440D3DF(L_12, NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		// toReturn.Add(nextChar);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_14 = V_0;
		Il2CppChar L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_14, L_15, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
	}

IL_0043:
	{
		// while(toReturn.Count < 7 && i < input.Length) {
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_16, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_17) >= ((int32_t)7)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_18 = V_1;
		String_t* L_19 = ___input0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0060;
	}

IL_0057:
	{
		// toReturn.Insert(1, '0');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_21 = V_0;
		NullCheck(L_21);
		List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403(L_21, 1, ((int32_t)48), List_1_Insert_m93EFDEE741FB849BD50E39217E7005B609E29403_RuntimeMethod_var);
	}

IL_0060:
	{
		// while(full && toReturn.Count < 7)
		bool L_22 = ___full1;
		if (!L_22)
		{
			goto IL_006c;
		}
	}
	{
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_23, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_24) < ((int32_t)7)))
		{
			goto IL_0057;
		}
	}

IL_006c:
	{
		// return new string(toReturn.ToArray());
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_25 = V_0;
		NullCheck(L_25);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26;
		L_26 = List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E(L_25, List_1_ToArray_m77841A4D182AAC74078D56BAF90A48AEB570D17E_RuntimeMethod_var);
		String_t* L_27;
		L_27 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_26, NULL);
		return L_27;
	}
}
// System.Boolean FlexibleColorPicker::IsValidHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FlexibleColorPicker_IsValidHexChar_mF2A1B5F11A54FB0F1B582C861F0270FC7440D3DF (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool valid = char.IsNumber(c);
		Il2CppChar L_0 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_0, NULL);
		// valid |= c >= 'A' & c <= 'F';
		Il2CppChar L_2 = ___c0;
		Il2CppChar L_3 = ___c0;
		// return valid;
		return (bool)((int32_t)((int32_t)L_1|((int32_t)(((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)65)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)70)))? 1 : 0)) == ((int32_t)0))? 1 : 0)))));
	}
}
// UnityEngine.Color FlexibleColorPicker::ParseHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_ParseHex_mEE27863DD81C1F9A225E2DFD050C399AB9AA474A (String_t* ___input0, const RuntimeMethod* method) 
{
	{
		// return ParseHex(input, Color.black);
		String_t* L_0 = ___input0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = FlexibleColorPicker_ParseHex_m0F94E7B3D238FFCE0195ABAE55205529A3101775(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Color FlexibleColorPicker::ParseHex(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_ParseHex_m0F94E7B3D238FFCE0195ABAE55205529A3101775 (String_t* ___input0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___defaultColor1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// string parseText = GetSanitizedHex(input, true);
		String_t* L_0 = ___input0;
		String_t* L_1;
		L_1 = FlexibleColorPicker_GetSanitizedHex_m072FB146984724188BE831ABFEC5E9EB93223EA1(L_0, (bool)1, NULL);
		// if(ColorUtility.TryParseHtmlString(parseText, out toReturn))
		bool L_2;
		L_2 = ColorUtility_TryParseHtmlString_m8E4DF912AF247EE6893655537CDF0FB47BFE563D(L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return toReturn;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// return defaultColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___defaultColor1;
		return L_4;
	}
}
// UnityEngine.Vector2 FlexibleColorPicker::GetNormalizedPointerPosition(UnityEngine.Canvas,UnityEngine.RectTransform,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetNormalizedPointerPosition_m91D3E4AD547BA154BD56CD3B7CD704B33C7AB0AC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect1, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral914834D0F72AC636FF2A55955F3780A314B43FA0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch(canvas.renderMode) {
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = ___canvas0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_001b;
			}
			case 2:
			{
				goto IL_0042;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_001b:
	{
		// if(canvas.worldCamera == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = ___canvas0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// return GetNormScreenSpace(rect, e);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___rect1;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_7 = ___e2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = FlexibleColorPicker_GetNormScreenSpace_m85592C09163017330C25266B91472C86C1A8AB27(L_6, L_7, NULL);
		return L_8;
	}

IL_0031:
	{
		// return GetNormWorldSpace(canvas, rect, e);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9 = ___canvas0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = ___rect1;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_11 = ___e2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = FlexibleColorPicker_GetNormWorldSpace_m7DC5BD0B0A0C8161A8B11D06EE05EA65D51F06BD(L_9, L_10, L_11, NULL);
		return L_12;
	}

IL_003a:
	{
		// return GetNormScreenSpace(rect, e);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = ___rect1;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_14 = ___e2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = FlexibleColorPicker_GetNormScreenSpace_m85592C09163017330C25266B91472C86C1A8AB27(L_13, L_14, NULL);
		return L_15;
	}

IL_0042:
	{
		// if(canvas.worldCamera == null) {
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = ___canvas0;
		NullCheck(L_16);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17;
		L_17 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.LogError("FCP in world space render mode requires an event camera to be set up on the parent canvas!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral914834D0F72AC636FF2A55955F3780A314B43FA0, NULL);
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_19;
	}

IL_0060:
	{
		// return GetNormWorldSpace(canvas, rect, e);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_20 = ___canvas0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = ___rect1;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_22 = ___e2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = FlexibleColorPicker_GetNormWorldSpace_m7DC5BD0B0A0C8161A8B11D06EE05EA65D51F06BD(L_20, L_21, L_22, NULL);
		return L_23;
	}

IL_0069:
	{
		// default: return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_24;
	}
}
// UnityEngine.Vector2 FlexibleColorPicker::GetNormScreenSpace(UnityEngine.RectTransform,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetNormScreenSpace_m85592C09163017330C25266B91472C86C1A8AB27 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector2 screenPoint = ((PointerEventData)e).position;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___e1;
		NullCheck(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		// Vector2 localPos = rect.worldToLocalMatrix.MultiplyPoint(screenPoint);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rect0;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_2, NULL);
		V_3 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_3), L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		// float x = Mathf.Clamp01((localPos.x / rect.rect.size.x) + rect.pivot.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = L_7;
		float L_9 = L_8.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = ___rect0;
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_10, NULL);
		V_4 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_4), NULL);
		float L_13 = L_12.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = ___rect0;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_14, NULL);
		float L_16 = L_15.___x_0;
		float L_17;
		L_17 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(((float)(L_9/L_13)), L_16)), NULL);
		V_1 = L_17;
		// float y = Mathf.Clamp01((localPos.y / rect.rect.size.y) + rect.pivot.y);
		float L_18 = L_8.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = ___rect0;
		NullCheck(L_19);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		L_20 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_19, NULL);
		V_4 = L_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_4), NULL);
		float L_22 = L_21.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = ___rect0;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_23, NULL);
		float L_25 = L_24.___y_1;
		float L_26;
		L_26 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(((float)(L_18/L_22)), L_25)), NULL);
		V_2 = L_26;
		// return new Vector2(x, y);
		float L_27 = V_1;
		float L_28 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_29), L_27, L_28, /*hidden argument*/NULL);
		return L_29;
	}
}
// UnityEngine.Vector2 FlexibleColorPicker::GetNormWorldSpace(UnityEngine.Canvas,UnityEngine.RectTransform,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FlexibleColorPicker_GetNormWorldSpace_m7DC5BD0B0A0C8161A8B11D06EE05EA65D51F06BD (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect1, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___e2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// Vector2 screenPoint = ((PointerEventData)e).position;
		BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* L_0 = ___e2;
		NullCheck(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(((PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)CastclassClass((RuntimeObject*)L_0, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_1;
		// Ray pointerRay = canvas.worldCamera.ScreenPointToRay(screenPoint);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = ___canvas0;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_5, NULL);
		V_1 = L_6;
		// Plane canvasPlane = new Plane(canvas.transform.forward, canvas.transform.position);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = ___canvas0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_8, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = ___canvas0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_2), L_9, L_12, NULL);
		// canvasPlane.Raycast(pointerRay, out enter);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_13 = V_1;
		bool L_14;
		L_14 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_2), L_13, (&V_3), NULL);
		// Vector3 worldPoint = pointerRay.origin + enter * pointerRay.direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_1), NULL);
		float L_16 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_18, NULL);
		V_4 = L_19;
		// Vector2 localPoint = rect.worldToLocalMatrix.MultiplyPoint(worldPoint);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = ___rect1;
		NullCheck(L_20);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_20, NULL);
		V_7 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&V_7), L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		// float x = Mathf.Clamp01((localPoint.x / rect.rect.size.x) + rect.pivot.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = L_24;
		float L_26 = L_25.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27 = ___rect1;
		NullCheck(L_27);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_27, NULL);
		V_8 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_8), NULL);
		float L_30 = L_29.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = ___rect1;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_31, NULL);
		float L_33 = L_32.___x_0;
		float L_34;
		L_34 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(((float)(L_26/L_30)), L_33)), NULL);
		V_5 = L_34;
		// float y = Mathf.Clamp01((localPoint.y / rect.rect.size.y) + rect.pivot.y);
		float L_35 = L_25.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_36 = ___rect1;
		NullCheck(L_36);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_37;
		L_37 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_36, NULL);
		V_8 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_8), NULL);
		float L_39 = L_38.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_40 = ___rect1;
		NullCheck(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_40, NULL);
		float L_42 = L_41.___y_1;
		float L_43;
		L_43 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)il2cpp_codegen_add(((float)(L_35/L_39)), L_42)), NULL);
		V_6 = L_43;
		// return new Vector2(x, y);
		float L_44 = V_5;
		float L_45 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_46), L_44, L_45, /*hidden argument*/NULL);
		return L_46;
	}
}
// UnityEngine.Color FlexibleColorPicker::HSVToRGB(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_HSVToRGB_m4C1D6D2246059E1702538D1D174280E4589F7F7B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___hsv0, const RuntimeMethod* method) 
{
	{
		// return HSVToRGB(hsv.x, hsv.y, hsv.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___hsv0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___hsv0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___hsv0;
		float L_5 = L_4.___z_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = FlexibleColorPicker_HSVToRGB_m72C44B1B74473AAD36A82F98661CE241D243FA50(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Color FlexibleColorPicker::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FlexibleColorPicker_HSVToRGB_m72C44B1B74473AAD36A82F98661CE241D243FA50 (float ___h0, float ___s1, float ___v2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// float c = s * v;
		float L_0 = ___s1;
		float L_1 = ___v2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float m = v - c;
		float L_2 = ___v2;
		float L_3 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// float x = c * (1f - Mathf.Abs(h % 2f - 1f)) + m;
		float L_4 = V_0;
		float L_5 = ___h0;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract((fmodf(L_5, (2.0f))), (1.0f))));
		float L_7 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, ((float)il2cpp_codegen_subtract((1.0f), L_6)))), L_7));
		// c += m;
		float L_8 = V_0;
		float L_9 = V_1;
		V_0 = ((float)il2cpp_codegen_add(L_8, L_9));
		// int range = Mathf.FloorToInt(h % 6f);
		float L_10 = ___h0;
		int32_t L_11;
		L_11 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline((fmodf(L_10, (6.0f))), NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		switch (L_12)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_007a;
			}
			case 5:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_008c;
	}

IL_0056:
	{
		// case 0: return new Color(c, x, m);
		float L_13 = V_0;
		float L_14 = V_2;
		float L_15 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_16), L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_005f:
	{
		// case 1: return new Color(x, c, m);
		float L_17 = V_2;
		float L_18 = V_0;
		float L_19 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_20), L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0068:
	{
		// case 2: return new Color(m, c, x);
		float L_21 = V_1;
		float L_22 = V_0;
		float L_23 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0071:
	{
		// case 3: return new Color(m, x, c);
		float L_25 = V_1;
		float L_26 = V_2;
		float L_27 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_007a:
	{
		// case 4: return new Color(x, m, c);
		float L_29 = V_2;
		float L_30 = V_1;
		float L_31 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_32), L_29, L_30, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_0083:
	{
		// case 5: return new Color(c, m, x);
		float L_33 = V_0;
		float L_34 = V_1;
		float L_35 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_36), L_33, L_34, L_35, /*hidden argument*/NULL);
		return L_36;
	}

IL_008c:
	{
		// default: return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_37;
	}
}
// UnityEngine.Vector3 FlexibleColorPicker::RGBToHSV(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FlexibleColorPicker_RGBToHSV_m57508AFDF8C5E874998B8D61A0F399E6AD0E16DF (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float r = color.r;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___r_0;
		// float g = color.g;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		float L_3 = L_2.___g_1;
		V_0 = L_3;
		// float b = color.b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___b_2;
		V_1 = L_5;
		// return RGBToHSV(r, g, b);
		float L_6 = V_0;
		float L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = FlexibleColorPicker_RGBToHSV_m58ADB9828E1C4301F5185492950F30A3CFECC166(L_1, L_6, L_7, NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 FlexibleColorPicker::RGBToHSV(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FlexibleColorPicker_RGBToHSV_m58ADB9828E1C4301F5185492950F30A3CFECC166 (float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float G_B13_0 = 0.0f;
	{
		// float cMax = Mathf.Max(r,g,b);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = ___r0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = ___g1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = ___b2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		float L_7;
		L_7 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_5, NULL);
		V_0 = L_7;
		// float cMin = Mathf.Min(r,g,b);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		float L_10 = ___r0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = ___g1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = ___b2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_14);
		float L_15;
		L_15 = Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline(L_13, NULL);
		V_1 = L_15;
		// float delta = cMax - cMin;
		float L_16 = V_0;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		// float h = 0f;
		V_3 = (0.0f);
		// if(delta > 0f) {
		float L_18 = V_2;
		if ((!(((float)L_18) > ((float)(0.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// if(r >= b && r >= g)
		float L_19 = ___r0;
		float L_20 = ___b2;
		if ((!(((float)L_19) >= ((float)L_20))))
		{
			goto IL_005c;
		}
	}
	{
		float L_21 = ___r0;
		float L_22 = ___g1;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_005c;
		}
	}
	{
		// h = Mathf.Repeat((g - b) / delta, 6f);
		float L_23 = ___g1;
		float L_24 = ___b2;
		float L_25 = V_2;
		float L_26;
		L_26 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)(((float)il2cpp_codegen_subtract(L_23, L_24))/L_25)), (6.0f), NULL);
		V_3 = L_26;
		goto IL_0086;
	}

IL_005c:
	{
		// else if(g >= r && g >= b)
		float L_27 = ___g1;
		float L_28 = ___r0;
		if ((!(((float)L_27) >= ((float)L_28))))
		{
			goto IL_0072;
		}
	}
	{
		float L_29 = ___g1;
		float L_30 = ___b2;
		if ((!(((float)L_29) >= ((float)L_30))))
		{
			goto IL_0072;
		}
	}
	{
		// h = (b - r) / delta + 2f;
		float L_31 = ___b2;
		float L_32 = ___r0;
		float L_33 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_31, L_32))/L_33)), (2.0f)));
		goto IL_0086;
	}

IL_0072:
	{
		// else if(b >= r && b >= g)
		float L_34 = ___b2;
		float L_35 = ___r0;
		if ((!(((float)L_34) >= ((float)L_35))))
		{
			goto IL_0086;
		}
	}
	{
		float L_36 = ___b2;
		float L_37 = ___g1;
		if ((!(((float)L_36) >= ((float)L_37))))
		{
			goto IL_0086;
		}
	}
	{
		// h = (r - g) / delta + 4f;
		float L_38 = ___r0;
		float L_39 = ___g1;
		float L_40 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_subtract(L_38, L_39))/L_40)), (4.0f)));
	}

IL_0086:
	{
		// float s = cMax == 0f ? 0f : delta / cMax;
		float L_41 = V_0;
		if ((((float)L_41) == ((float)(0.0f))))
		{
			goto IL_0093;
		}
	}
	{
		float L_42 = V_2;
		float L_43 = V_0;
		G_B13_0 = ((float)(L_42/L_43));
		goto IL_0098;
	}

IL_0093:
	{
		G_B13_0 = (0.0f);
	}

IL_0098:
	{
		V_4 = G_B13_0;
		// float v = cMax;
		float L_44 = V_0;
		V_5 = L_44;
		// return new Vector3(h, s, v);
		float L_45 = V_3;
		float L_46 = V_4;
		float L_47 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_45, L_46, L_47, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void FlexibleColorPicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlexibleColorPicker__ctor_mE2C92FA3C035003A56EECE37042AFFD66FD402EC (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	{
		// private Color startingColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___startingColor_17 = L_0;
		// public bool multiInstance = true;
		__this->___multiInstance_19 = (bool)1;
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
// Conversion methods for marshalling of: FlexibleColorPicker/Picker
IL2CPP_EXTERN_C void Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshal_pinvoke(const Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087& unmarshaled, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_pinvoke& marshaled)
{
	Exception_t* ___image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'Picker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_0Exception, NULL);
}
IL2CPP_EXTERN_C void Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshal_pinvoke_back(const Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_pinvoke& marshaled, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087& unmarshaled)
{
	Exception_t* ___image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'Picker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: FlexibleColorPicker/Picker
IL2CPP_EXTERN_C void Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshal_pinvoke_cleanup(Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FlexibleColorPicker/Picker
IL2CPP_EXTERN_C void Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshal_com(const Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087& unmarshaled, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_com& marshaled)
{
	Exception_t* ___image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'Picker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_0Exception, NULL);
}
IL2CPP_EXTERN_C void Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshal_com_back(const Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_com& marshaled, Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087& unmarshaled)
{
	Exception_t* ___image_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'Picker': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: FlexibleColorPicker/Picker
IL2CPP_EXTERN_C void Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshal_com_cleanup(Picker_tFE40EED18E17047EAC6313980ADE4288DDD5F087_marshaled_com& marshaled)
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
// System.Void FlexibleColorPicker/ColorUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorUpdateEvent__ctor_m8D6B1FBA7439007C3E60E87A0E1850D560F8F24B (ColorUpdateEvent_t60EC3AB363D5A022306F4ADA123348D32971E650* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D(__this, UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
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
// FlexibleColorPicker/AdvancedSettings/PSettings FlexibleColorPicker/AdvancedSettings::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* AdvancedSettings_Get_m0E116D5F268038AA1D91603C034DC7A210F44894 (AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(i <= 0 | i > 7)
		int32_t L_0 = ___i0;
		int32_t L_1 = ___i0;
		if (!((int32_t)(((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0)|((((int32_t)L_1) > ((int32_t)7))? 1 : 0))))
		{
			goto IL_0014;
		}
	}
	{
		// return new PSettings();
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_2 = (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)il2cpp_codegen_object_new(PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PSettings__ctor_m32FBD753EFAAAD2A4B2C5F3BD08D68AD6DB74254(L_2, NULL);
		return L_2;
	}

IL_0014:
	{
		// PSettings[] p = new PSettings[] { r, g, b, h, s, v, a };
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_3 = (PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED*)(PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED*)SZArrayNew(PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED_il2cpp_TypeInfo_var, (uint32_t)7);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_4 = L_3;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_5 = __this->___r_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_5);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_6 = L_4;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_7 = __this->___g_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_7);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_8 = L_6;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_9 = __this->___b_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_9);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_10 = L_8;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_11 = __this->___h_4;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_11);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_12 = L_10;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_13 = __this->___s_5;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_13);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_14 = L_12;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_15 = __this->___v_6;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(5), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_15);
		PSettingsU5BU5D_t0953B1230BC7DDEA8A859AFA618E08F5084AABED* L_16 = L_14;
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_17 = __this->___a_7;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A*)L_17);
		// return p[i - 1];
		int32_t L_18 = ___i0;
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		return L_20;
	}
}
// System.Void FlexibleColorPicker/AdvancedSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvancedSettings__ctor_mD159B68B6C25277EA11B74979AF149CCD3E2FBE9 (AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* __this, const RuntimeMethod* method) 
{
	{
		// public bool mainStatic = true;
		__this->___mainStatic_0 = (bool)1;
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
// System.Void FlexibleColorPicker/AdvancedSettings/PSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PSettings__ctor_m32FBD753EFAAAD2A4B2C5F3BD08D68AD6DB74254 (PSettings_tC026A35757EC3EDFAC69FAB08BC74F4CB16ED12A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 range = new Vector2(0f, 1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___range_0 = L_0;
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
// System.Single FlexibleColorPicker/BufferedColor::get_r()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_r_mDE4032686C14B90D78E031FB41FDCFDB709378C5 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float r { get { return color.r; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_0);
		float L_1 = L_0->___r_0;
		return L_1;
	}
}
// System.Single FlexibleColorPicker/BufferedColor::get_g()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_g_mF67C4ED27F16AB9A8F82F04D89DC8D90C9C00FE7 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float g { get { return color.g; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_0);
		float L_1 = L_0->___g_1;
		return L_1;
	}
}
// System.Single FlexibleColorPicker/BufferedColor::get_b()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_b_mD572E723BBBF02A08673E734E9F4BC72983BAA3C (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float b { get { return color.b; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_0);
		float L_1 = L_0->___b_2;
		return L_1;
	}
}
// System.Single FlexibleColorPicker/BufferedColor::get_a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_a_m1ADC4C6C34302DE3D5A51635BABC729DF38E2D8E (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float a { get { return color.a; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_0);
		float L_1 = L_0->___a_3;
		return L_1;
	}
}
// System.Single FlexibleColorPicker/BufferedColor::get_h()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_h_m9726B9FB5C86ECB7E3941070FC01EA77808E2076 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float h { get { return bufferedHue; } }
		float L_0 = __this->___bufferedHue_1;
		return L_0;
	}
}
// System.Single FlexibleColorPicker/BufferedColor::get_s()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_s_mE7AA9A95C939D3F40EEC24D796735C2AF4326BF0 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float s { get { return bufferedSaturation; } }
		float L_0 = __this->___bufferedSaturation_2;
		return L_0;
	}
}
// System.Single FlexibleColorPicker/BufferedColor::get_v()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BufferedColor_get_v_m941317CA3AD81D735AE0C31F1219CECCFFBDC176 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float v { get { return RGBToHSV(color).z; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = FlexibleColorPicker_RGBToHSV_m57508AFDF8C5E874998B8D61A0F399E6AD0E16DF(L_0, NULL);
		float L_2 = L_1.___z_4;
		return L_2;
	}
}
// System.Void FlexibleColorPicker/BufferedColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_mD17689E2D1D7B9D0D98DEC513A18BC16C17185A2 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public BufferedColor() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.bufferedHue = 0f;
		__this->___bufferedHue_1 = (0.0f);
		// this.bufferedSaturation = 0f;
		__this->___bufferedSaturation_2 = (0.0f);
		// this.color = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___color_0 = L_0;
		// }
		return;
	}
}
// System.Void FlexibleColorPicker/BufferedColor::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_m1D4BB6131802E9367757D68FBD4D2B830B23BF64 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// public BufferedColor(Color color) : this() {
		BufferedColor__ctor_mD17689E2D1D7B9D0D98DEC513A18BC16C17185A2(__this, NULL);
		// this.Set(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		BufferedColor_Set_m7477F1A7E1E90AE4123692DB778025F4959F6261(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker/BufferedColor::.ctor(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_mB205BB501D7DFDE676AA1D3A483BD07EBF50B5B2 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___hue1, float ___sat2, const RuntimeMethod* method) 
{
	{
		// public BufferedColor(Color color, float hue, float sat) : this(color) {
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		BufferedColor__ctor_m1D4BB6131802E9367757D68FBD4D2B830B23BF64(__this, L_0, NULL);
		// this.bufferedHue = hue;
		float L_1 = ___hue1;
		__this->___bufferedHue_1 = L_1;
		// this.bufferedSaturation = sat;
		float L_2 = ___sat2;
		__this->___bufferedSaturation_2 = L_2;
		// }
		return;
	}
}
// System.Void FlexibleColorPicker/BufferedColor::.ctor(UnityEngine.Color,FlexibleColorPicker/BufferedColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor__ctor_m4318C2DAA283F5E86E3A0C1EB4EA0B155469FD9B (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* ___source1, const RuntimeMethod* method) 
{
	{
		// this(color, source.bufferedHue, source.bufferedSaturation) {
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_1 = ___source1;
		NullCheck(L_1);
		float L_2 = L_1->___bufferedHue_1;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3 = ___source1;
		NullCheck(L_3);
		float L_4 = L_3->___bufferedSaturation_2;
		BufferedColor__ctor_mB205BB501D7DFDE676AA1D3A483BD07EBF50B5B2(__this, L_0, L_2, L_4, NULL);
		// this.Set(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color0;
		BufferedColor_Set_m7477F1A7E1E90AE4123692DB778025F4959F6261(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker/BufferedColor::Set(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor_Set_m7477F1A7E1E90AE4123692DB778025F4959F6261 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// this.Set(color, this.bufferedHue, this.bufferedSaturation);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = __this->___bufferedHue_1;
		float L_2 = __this->___bufferedSaturation_2;
		BufferedColor_Set_m17486F6D1944C36442739B0436D5F987A09D1EC4(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlexibleColorPicker/BufferedColor::Set(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedColor_Set_m17486F6D1944C36442739B0436D5F987A09D1EC4 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___bufferedHue1, float ___bufferedSaturation2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// this.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		__this->___color_0 = L_0;
		// Vector3 hsv = RGBToHSV(color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___color0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = FlexibleColorPicker_RGBToHSV_m57508AFDF8C5E874998B8D61A0F399E6AD0E16DF(L_1, NULL);
		V_0 = L_2;
		// bool hueSingularity = hsv.y == 0f || hsv.z == 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		if ((((float)L_4) == ((float)(0.0f))))
		{
			goto IL_002a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		G_B3_0 = ((((float)L_6) == ((float)(0.0f)))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 1;
	}

IL_002b:
	{
		// if(hueSingularity)
		if (!G_B3_0)
		{
			goto IL_0036;
		}
	}
	{
		// this.bufferedHue = bufferedHue;
		float L_7 = ___bufferedHue1;
		__this->___bufferedHue_1 = L_7;
		goto IL_0042;
	}

IL_0036:
	{
		// this.bufferedHue = hsv.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		float L_9 = L_8.___x_2;
		__this->___bufferedHue_1 = L_9;
	}

IL_0042:
	{
		// bool saturationSingularity = hsv.z == 0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___z_4;
		// if(saturationSingularity)
		if (!((((float)L_11) == ((float)(0.0f)))? 1 : 0))
		{
			goto IL_0059;
		}
	}
	{
		// this.bufferedSaturation = bufferedSaturation;
		float L_12 = ___bufferedSaturation2;
		__this->___bufferedSaturation_2 = L_12;
		return;
	}

IL_0059:
	{
		// this.bufferedSaturation = hsv.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___y_3;
		__this->___bufferedSaturation_2 = L_14;
		// }
		return;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickR(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickR_m3876D51CAECC28565D1905AEE655635430949D93 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color toReturn = this.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		// toReturn.r = value;
		float L_1 = ___value0;
		(&V_0)->___r_0 = L_1;
		// return new BufferedColor(toReturn, this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferedColor__ctor_m4318C2DAA283F5E86E3A0C1EB4EA0B155469FD9B(L_3, L_2, __this, NULL);
		return L_3;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickG(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickG_m76A823F5B82120EAB99C44816C4817758E0265A3 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color toReturn = this.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		// toReturn.g = value;
		float L_1 = ___value0;
		(&V_0)->___g_1 = L_1;
		// return new BufferedColor(toReturn, this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferedColor__ctor_m4318C2DAA283F5E86E3A0C1EB4EA0B155469FD9B(L_3, L_2, __this, NULL);
		return L_3;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickB_m04F70DCF84569B6CAE0585FAD0ED885C171B684B (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color toReturn = this.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		// toReturn.b = value;
		float L_1 = ___value0;
		(&V_0)->___b_2 = L_1;
		// return new BufferedColor(toReturn, this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferedColor__ctor_m4318C2DAA283F5E86E3A0C1EB4EA0B155469FD9B(L_3, L_2, __this, NULL);
		return L_3;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickA_mAE929F2594248498A86831396361CDC1542D1BEA (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color toReturn = this.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		V_0 = L_0;
		// toReturn.a = value;
		float L_1 = ___value0;
		(&V_0)->___a_3 = L_1;
		// return new BufferedColor(toReturn, this);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_3 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferedColor__ctor_m4318C2DAA283F5E86E3A0C1EB4EA0B155469FD9B(L_3, L_2, __this, NULL);
		return L_3;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickH(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickH_mA6954DC93AB0228EC04741797706C063A00AE9D4 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 hsv = RGBToHSV(this.color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = FlexibleColorPicker_RGBToHSV_m57508AFDF8C5E874998B8D61A0F399E6AD0E16DF(L_0, NULL);
		V_0 = L_1;
		// Color toReturn = HSVToRGB(value, hsv.y, hsv.z);
		float L_2 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___z_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = FlexibleColorPicker_HSVToRGB_m72C44B1B74473AAD36A82F98661CE241D243FA50(L_2, L_4, L_6, NULL);
		V_1 = L_7;
		// toReturn.a = this.color.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = (&__this->___color_0);
		float L_9 = L_8->___a_3;
		(&V_1)->___a_3 = L_9;
		// return new BufferedColor(toReturn, value, bufferedSaturation);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_1;
		float L_11 = ___value0;
		float L_12 = __this->___bufferedSaturation_2;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_13 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		BufferedColor__ctor_mB205BB501D7DFDE676AA1D3A483BD07EBF50B5B2(L_13, L_10, L_11, L_12, NULL);
		return L_13;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickS(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickS_mC9520F77346CC17646DAC9B302EE454B49CCA882 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 hsv = RGBToHSV(this.color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___color_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = FlexibleColorPicker_RGBToHSV_m57508AFDF8C5E874998B8D61A0F399E6AD0E16DF(L_0, NULL);
		V_0 = L_1;
		// Color toReturn = HSVToRGB(bufferedHue, value, hsv.z);
		float L_2 = __this->___bufferedHue_1;
		float L_3 = ___value0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___z_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = FlexibleColorPicker_HSVToRGB_m72C44B1B74473AAD36A82F98661CE241D243FA50(L_2, L_3, L_5, NULL);
		V_1 = L_6;
		// toReturn.a = this.color.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___color_0);
		float L_8 = L_7->___a_3;
		(&V_1)->___a_3 = L_8;
		// return new BufferedColor(toReturn, bufferedHue, value);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_1;
		float L_10 = __this->___bufferedHue_1;
		float L_11 = ___value0;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_12 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		BufferedColor__ctor_mB205BB501D7DFDE676AA1D3A483BD07EBF50B5B2(L_12, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// FlexibleColorPicker/BufferedColor FlexibleColorPicker/BufferedColor::PickV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* BufferedColor_PickV_mBAB7CDFE989E7FBCEDA554F0B5EAA9DE2181CB02 (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color toReturn = HSVToRGB(bufferedHue, bufferedSaturation, value);
		float L_0 = __this->___bufferedHue_1;
		float L_1 = __this->___bufferedSaturation_2;
		float L_2 = ___value0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = FlexibleColorPicker_HSVToRGB_m72C44B1B74473AAD36A82F98661CE241D243FA50(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// toReturn.a = this.color.a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___color_0);
		float L_5 = L_4->___a_3;
		(&V_0)->___a_3 = L_5;
		// return new BufferedColor(toReturn, bufferedHue, bufferedSaturation);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		float L_7 = __this->___bufferedHue_1;
		float L_8 = __this->___bufferedSaturation_2;
		BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* L_9 = (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18*)il2cpp_codegen_object_new(BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BufferedColor__ctor_mB205BB501D7DFDE676AA1D3A483BD07EBF50B5B2(L_9, L_6, L_7, L_8, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m29D7F3B12ED9685CC0C4A3A9D4F57CB9007A7BE8 (Readme_t4E8D36B9FD6A576D935A9B3E4344786292402031* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mAA2E56A250FE6416CFBFD940F0D6100263EB74BE (Section_t3A61093CFDC5CCAA483473765E79E9A56715C7EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* FlexibleColorPicker_get_avs_mE53E7C7A74EB60ECC8488F11D4C6E7FD9EF8CC93_inline (FlexibleColorPicker_t9BDF8A818209FD6503064563285A1FD5C2B8212D* __this, const RuntimeMethod* method) 
{
	{
		// private AdvancedSettings avs => advancedSettings;
		AdvancedSettings_t2AF1DE0E6F88359D8FB21AD8E385386D66F447AA* L_0 = __this->___advancedSettings_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedColor_get_h_m9726B9FB5C86ECB7E3941070FC01EA77808E2076_inline (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float h { get { return bufferedHue; } }
		float L_0 = __this->___bufferedHue_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BufferedColor_get_s_mE7AA9A95C939D3F40EEC24D796735C2AF4326BF0_inline (BufferedColor_t61160EB742A5C8912D492D1FFC5811CEF5262B18* __this, const RuntimeMethod* method) 
{
	{
		// public float s { get { return bufferedSaturation; } }
		float L_0 = __this->___bufferedSaturation_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_mBE520C0BA6BB8F452B206BF1D9F4AAD1873CCA85_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		__this->___w_4 = (0.0f);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mCE17F4139B7DF5BB96192C88AF390D3C99F11858_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) < ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 Enumerator_get_Current_mF5F347E4E030EE8A6BF4C884A4BDFD60977DA0D7_gshared_inline (Enumerator_tB8D9BCD4F0E1A3F8E046E20BF11ED672CA89BE61* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055 L_0 = (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mC34BFE336212774A0174CD8DDD49A29E7C7137E4_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F KeyValuePair_2_get_Value_mF29EED4089C4263A56043B143B694C4C0FD1EE03_gshared_inline (KeyValuePair_2_t381EC4ED77C4A2957913984ED76489E031776055* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = V_1;
		Il2CppChar L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppChar)L_8);
		return;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___item0;
		((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
