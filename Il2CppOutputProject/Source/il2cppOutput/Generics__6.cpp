#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18;
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89;
struct Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1;
struct Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D;
struct Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2;
struct Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4;
struct Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B;
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
struct Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96;
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49;
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3;
struct ICollection_1_t60B9D6D787F4AF7927AA0DF5B55BEDB39EE259E4;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_tD56FFE4395E7AAA9BC6513B7180B31801ABF0135;
struct ICollection_1_t8E586504E466B6BEDF577BDECB83D5C5A010E204;
struct ICollection_1_tE27769A0604DD801C73619668DB47C1F0EE71ADC;
struct ICollection_1_t66DAAF182F510EC3C3912AF7D95A5C8232C0D914;
struct ICollection_1_t209EF5DCBBB093822250D6835841E0686275F198;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tB424EF10C51C92C8E8FB596934664B35CDCB2B20;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t17FF839BF7E6E58666DFD1EF4BA5F4D216E5C16E;
struct IComparer_1_t24C0B9CAFC1C89DBB8F3CBE48DAC1B9FDF795F08;
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
struct IComparer_1_t51428AB1FFAFB02ED44A5754BAB3C1B933B8949B;
struct IComparer_1_tF887732C706BA1F3B08FB7CA806A3B53735CFFB2;
struct IComparer_1_t403C2DE5790867FE20717D431B36E7B838F2334E;
struct IComparer_1_tE636C847DBCCD021888531AE5D7C1372635586E3;
struct IComparer_1_t8300162E08B59CBCDB33F76C89237A2F204D244E;
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
struct IComparer_1_t766672CE05A50F63E68A4A125A08CE97FC597492;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IComparer_1_t5C8ADB6DF803417A1731826FA07541C9E165AB71;
struct IEnumerable_1_t7EEEB24ADB84B113CFFCB8460A1300F296F80A84;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_tFA2C9F20A0CA6B0EB8EB9CE3A7E3054FC7D086C4;
struct IEnumerable_1_tA59BB0FF788E897F7780BE4B1ED8368F6FF136AB;
struct IEnumerable_1_t81A1BB28917684AB2D79DB5CDCF38240B2D16524;
struct IEnumerable_1_t7E13FCC61B2DB26146CA569CB146A0200C4618D1;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t61136EFE7162ED99AD736F9E8AA40A86A20DAB5E;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t616D8494D191E02CD416B710E4C06389401F060C;
struct IEnumerator_1_tE63A1850605587CAFA3FEB2AE63BEDADF9E336A6;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_tC5A549584BF51BF4B0D01CFDDAD5B6E2E5BF699F;
struct IEnumerator_1_tD155E7BDFCF2567CB9A53F00B4B0B8B7CE464F45;
struct IEnumerator_1_tCD70AF37D926F6D6A6EE9B49263AE9D7831EFD9E;
struct IEnumerator_1_t9EBA015A0670545A091B6BE5A51191A69DD0F5EB;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t0F751049F7CE71D151503045E9100AF3D309B590;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tFA909B65895E40AAB1C8DD427FCA2D3EE869603F;
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
struct List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410;
struct List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456;
struct List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE;
struct List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A;
struct Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A;
struct Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365;
struct Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8;
struct Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841;
struct Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649;
struct ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F;
struct MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649;
struct ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F;
struct MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C  : public RuntimeObject
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410  : public RuntimeObject
{
	ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456  : public RuntimeObject
{
	ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE  : public RuntimeObject
{
	MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452  : public RuntimeObject
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC  : public RuntimeObject
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A  : public RuntimeObject
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC 
{
	List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* ____list;
	int32_t ____index;
	int32_t ____version;
	int16_t ____current;
};
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 
{
	List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* ____list;
	int32_t ____index;
	int32_t ____version;
	int8_t ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 
{
	int32_t ___iconID;
	int32_t ___id;
};
struct ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB 
{
	int32_t ___iconID;
	int32_t ___id;
	String_t* ___name;
	int32_t ___optionKind;
};
struct ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_marshaled_pinvoke
{
	int32_t ___iconID;
	int32_t ___id;
	char* ___name;
	int32_t ___optionKind;
};
struct ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_marshaled_com
{
	int32_t ___iconID;
	int32_t ___id;
	Il2CppChar* ___name;
	int32_t ___optionKind;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
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
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct Enumerator_t82E48C75F211812239518013EFC8B9671F29721D 
{
	List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* ____list;
	int32_t ____index;
	int32_t ____version;
	ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ____current;
};
struct Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB 
{
	List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* ____list;
	int32_t ____index;
	int32_t ____version;
	ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ____current;
};
struct Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA 
{
	List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* ____list;
	int32_t ____index;
	int32_t ____version;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____current;
};
struct Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 
{
	List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ____list;
	int32_t ____index;
	int32_t ____version;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ____current;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeMapNext_t81F551FAB7B69E0833BF7D2373BC5CF0ACAD3740 
{
	int32_t ___value__;
};
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 
{
	int32_t ___MapID;
	int32_t ___Type;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Info;
};
struct MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_marshaled_pinvoke
{
	int32_t ___MapID;
	int32_t ___Type;
	Il2CppSafeArray* ___Info;
};
struct MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_marshaled_com
{
	int32_t ___MapID;
	int32_t ___Type;
	Il2CppSafeArray* ___Info;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18  : public MulticastDelegate_t
{
};
struct Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89  : public MulticastDelegate_t
{
};
struct Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1  : public MulticastDelegate_t
{
};
struct Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D  : public MulticastDelegate_t
{
};
struct Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2  : public MulticastDelegate_t
{
};
struct Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4  : public MulticastDelegate_t
{
};
struct Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B  : public MulticastDelegate_t
{
};
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645  : public MulticastDelegate_t
{
};
struct Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96  : public MulticastDelegate_t
{
};
struct Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49  : public MulticastDelegate_t
{
};
struct Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3  : public MulticastDelegate_t
{
};
struct Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 
{
	List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* ____list;
	int32_t ____index;
	int32_t ____version;
	MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ____current;
};
struct Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A  : public MulticastDelegate_t
{
};
struct Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365  : public MulticastDelegate_t
{
};
struct Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8  : public MulticastDelegate_t
{
};
struct Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841  : public MulticastDelegate_t
{
};
struct Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788  : public MulticastDelegate_t
{
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0  : public MulticastDelegate_t
{
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___s_emptyArray;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___s_emptyArray;
};
struct List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields
{
	ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___s_emptyArray;
};
struct List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields
{
	ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___s_emptyArray;
};
struct List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields
{
	MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___s_emptyArray;
};
struct List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___s_emptyArray;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
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
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
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
struct ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649  : public RuntimeArray
{
	ALIGN_FIELD (8) ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 m_Items[1];

	inline ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 value)
	{
		m_Items[index] = value;
	}
};
struct ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F  : public RuntimeArray
{
	ALIGN_FIELD (8) ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB m_Items[1];

	inline ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5  : public RuntimeArray
{
	ALIGN_FIELD (8) MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 m_Items[1];

	inline MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Info), (void*)NULL);
	}
	inline MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Info), (void*)NULL);
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
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
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88  : public RuntimeArray
{
	ALIGN_FIELD (8) OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 m_Items[1];

	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m5AB0E2CA7438E1B1272B1B724260C6AD307C178D_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t List_1_get_Item_m448718D23F3512FDDBF0AB53E5D2DB0EABF8E569_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFB0503C5B9160C3D1241A77941BEF8579A5CA575_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int16_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_gshared_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mBCDB5945A955B1C74D89CF4AFCDF2A8AB030D011_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5999772E5D4B86AA7359A3A70E28A67F86862B3C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m2774EBD521194EF0435AA0AFE664D6E02FEF5C04_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA2A1AE2D87B71B10BE19D8260829B015509C2281_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mC45D40FE034E02EA3AD41A59687C76A2D2225CA7_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2945CE4E818865D1B520054A7413596E3ACF67C1_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_gshared_inline (Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* __this, int16_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m41B1173CF7B65125215EB69E5562B195B50B8A54_gshared (Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC* __this, List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF7EE93DA7FC26297A344019BE48DA9CF6229F76B_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int16_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m2FD12E7B142D22EB11F4A21B1EF1C9377C8EF8D2_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int16_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mBF7F7C9A3085B48EC49C2A3C4944E2229526710F_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m12D71111CB51FB5F0BE7E3815FB79D3C9D1CF6C8_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mEDA13AB5685C40DC48E115ED93F55685103FF4C0_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mAF9707A543F1822B8560295160DE061FAC8E2683_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m46BC1ABDAD5DFD60C66FEE8B379C13CF223F886C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m381FA03B1B859894163380457DFEEBD8CB62E4B6_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m616DB632F5E4E0DB0C05EDDA3071CF3D5537DE39_gshared (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m4008C22F3C8A5C08E7F14D53BB8653C04A1DEFD7_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m1765E68376693969733E3F9C7E1CA261F43DA9A2_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mC1A070CACCE6F75EA6474F9575F085C259C24027_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 List_1_get_Item_mC283F9F6CFF377195BFC3246AA74D0FE6963C433_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m578469D3580F5FC2E8A839B6AB034B24A811B5FD_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mAA0D29A9F4BFC92EEF7C3504499066D957623E18_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD354BFCE55D77CC25687AD1A52E4BDE1E8A1B34B_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5B6D9B27ED3425725CEAEF21923F024DA9BB2880_gshared_inline (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_gshared_inline (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m5335537650B41E6619A88CA16F0E59F6A88AC2B2_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCF818543BB4A5723BFC15E5E4F1C61F6ADBD7F29_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mADA7B97499DEE68E227888AECC2CC666559BC69C_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m6C37DE2960A7DFB4BBC282695A25E1ED3DDC128C_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFBFDEFF3B654EC442AE1D1E39323329F68DA0F37_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m640225758D32BAE2702CE5F9A6B79DC77209BA09_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_gshared_inline (Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m36591C80FAE50E75278735266D80B6E37EA3B979_gshared (Enumerator_t82E48C75F211812239518013EFC8B9671F29721D* __this, List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_mAB3D40AF210A1D800CCB16C59C031E0FA56E077D_gshared (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mD2AA190C258AE95E8ABAC60058AD856907FBD696_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m016A77F390FD3C6C5577624E4BD72D3A406F6585_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5B008AC3AD66FB34061029E3C203D26BBE61941B_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m417FF1C3C22A317ABBA7EA7DD5FA1752B739A438_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m73ABB365157315D711647B21FFE4D0A3CD3CA739_gshared (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94C6FBE3371522C69BF56F2427F194132935720C_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m8F5556F01BF663C280537B05CF24DA13E0DAF109_gshared (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m7C4AB6A8E1635B20C31650C51FEB6F965A1FD112_gshared (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4CEA2CFCF80246789857C1083C6EEE2E6B20E95E_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB List_1_get_Item_m6EFE20EC7F696CE45DD42C150EFB6FB21B9739FF_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m52730E98DDE3869912E05A9B6397C166C52CDF83_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m643976024B5A29CF56C088A0FCA3BE0B6A884F8A_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m78E326D36965A9E9B65DA03CB5F4104717469B0E_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA942CDC549C207A9D6777348B426A207CC1C173A_gshared_inline (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_gshared_inline (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2D2500A33A70519FDB24B9A59C3F69A131624804_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m182F1838BAFC17E6FEF3CA7F3CE761E744F63398_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m52F89AE91348A0FF02E77CFE2D94C4616E167359_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m16BF6FC422DAEC3C13CC4D4BE28ECC29C8FB4A1F_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m1EF71DFAC520F3E855620AD21EE157A77971ABB8_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m73B65CC61C8CF70DE1D6A48BB691158CF8B2871B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_gshared_inline (Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1B0BE162F71DAED729F02331144357F9CDD16C8D_gshared (Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB* __this, List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mD96A2C67AA178DBA1318C82062007AC89BF7E929_gshared (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mA6A8703F283FDDF90CB721E215C84F1471629DD0_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m617667FB38717B5A08D28762C68A8804A1C706F1_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4D17EBEAAA9948A2828300CF47632C582DE7278B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mDB76719B6D00E5012CD322CA9CA4C082C04C516B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m91D67F00E43F28115E3EF07E79153F9DED33F87A_gshared (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6395E421973AB514F66B38EA93565BBFCEBCFA2A_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mEE4A9F614B35D980C0161C5320183E436E8C35B5_gshared (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m34E21255210956EDB2FE229E0E32D3CAB0AEB09C_gshared (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m2FD7B5C635A3FF909B80C6282710C7612B8F323A_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 List_1_get_Item_m4F5283BFCDBF0D7CCD75D45AE8483B471035791B_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mCD7BB12C293680B4CE5DEB271461AEBC00E6223B_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mC25CC3030B4D3F39F4F7ABEA66369052009EDAEF_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m16FFDD35B569CC4568B287BD759EE79013DCD570_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m92EF7CE180DADBE3123A86EDB1F4D04EF6A5FA62_gshared_inline (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_gshared_inline (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m59316DFD9FB94C17D399DFDDC73F28ECAD6A66E5_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m7C4E1BB32EAA20036979BF8FE6A8730E49D74EC3_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mFDC00F07C9F3CA8F131C0388D09638FA79A2C3DA_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m40F3D7E13C01DB9F625E3A1989BE63DA78D57CC1_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m01F527072A9C8F41783B0537671822CDF8D2BA84_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE17619828966336C714CCD37FE06C6B9FF639402_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_gshared_inline (Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDD65FC7F19364C3C2AA963ADCBA799B2D3193750_gshared (Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4* __this, List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mFAD8EC369EAFFDBE2644C680A8C653BE0233F320_gshared (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3C23D3B5B61C9641E8FB7FEC69D3D99F4067E95F_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m00117E29C91602FA18AAE2B243122D1CF8CC093A_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4C1CB807C55963BE0C7FB39CE9B8C3A821583786_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB789AD9DE679B98B244C46DDA84601C91BBDC745_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mC2C7ADE290B43480C5AA8F172E7DB833AE946D49_gshared (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m270E1867C09EBB2482219DC72A525E956951F278_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_m2B68559730F1ACE0DBE1D70382CF5D153AE035C0_gshared (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mAB079B992C725F6BECE702BD3E0380F123E1D7EB_gshared (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mAE2B0C87F768F4DFAA803D2E47567222B93B36C7_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 List_1_get_Item_m7ECA8E19707EB7795F4BC62BE1D6B35C34B5DF42_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m8F3347D8126C5E6B6F8517F240C26037AF221A65_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mC73ADA51A91004EB3319A9DB14B5DE13D642C90F_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m64F9F4C32CDD01D323D17E7A61A97EB924206093_gshared_inline (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_gshared_inline (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m39C05FB9442FF9AE1BFF9D9BA6981EFEE4915275_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m490F96EE94C1D248CDA59F81CFDB06FAD7E6DBE2_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mB915B2F3975D3AFDBD665B01865206DAD79286CB_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mADC99C1FF0D43662CA011BF63EB54FBC50DCE929_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mF5CE6664FAC83919E0A1A4061BEE38A5C2224D44_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m0B34C3FF8AA822F64ABBB4EBA1599B7A9F836851_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_gshared_inline (Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m11FF44E94EC66D7385574292079D8C9B0F3AB8F1_gshared (Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA* __this, List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3A242FDE2C2E163ED17EC1A7D8E8A3989607DFBB_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1CEB6D8F18FD9BB098E295A1F35F1FF3A4C93B85_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA178AE64083A1AD3E08153E629F3119E54DA4F18_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mBBBA23C9534D57FAF0D64F2665DE0B3C38E721DC_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE2586031F4BF52DB1AC8D0E1E1D218913B399190_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF4C21EEA52149C3C7E8BF43D9D13B097922E3EF9_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6A1FB357C1BCE9953C61F766F92AEC8BBF2CF97E_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m431F56DDCE87CEC08626A72DE2169B70CEFADCAD_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mCE7CC939434D0933B11E309F889C5C00B1C83F46_gshared (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2E36D7828A12EC36948A76FEFD20CF459D89467E_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7FA36B88E4A9EF847A8949EBA76F584EB0E905D0_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t List_1_get_Item_mC8F1627962201B31BACD3E44D76C96EBB42B5E34_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7EEC06994B2D7CB305230F338D6C644858890A9B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int8_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_gshared_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mDE5CF8A3237B218D5EE1187641F803A214A4AFF7_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FA09CFD8E3D62EEC7585357B55EFD427AE18C43_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m07575FC4FF6BED54C910457FE0176D128A11A8D3_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mEA27395CC2723618924E0C7B35EF5DEF13BF96BD_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m44AF47C8B71DF4ECE9E2068C443807A680BEBF0B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m254686ACF02582C0B49821FAFE89244631686F0B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_gshared_inline (Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* __this, int8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mED2678F591A6A2B23B4D21643B129B4A1D905977_gshared (Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5* __this, List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD6356D6E3B1AF2CD83E6EA48E4440E0E44AA11E5_gshared (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int8_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m04A00FE56918CD2400EC56B9C4E6641FA9F1E5E9_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m70F883569657823D114157579B983983E86962A0_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCB6B303513E6FFD412CEE0B6991DCC33D71FA00E_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m75EBD95C73368E3DDABD2F76A61B02592AFD5398_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m75AAFED2BB1872BF45B18BD54C867B8EA15B4BD9_gshared (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m04C25FEDEA89E45339617B284090C688AE4CD93B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA704A3BB3ECE434AB3254E47B932C4551861A8CB_gshared (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mCEDAD9A8A7FF8E35C8F6A5698BEF68783457C60D_gshared (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m8E32928E07448E4DE50B13A27ABDF776DE8F4DDD_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA5DDCB0CBD1B539DB3213A4B3AE1C72E519C98A8_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E_gshared (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251* __this, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F_gshared (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___3_comparer, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_m5AB0E2CA7438E1B1272B1B724260C6AD307C178D (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m5AB0E2CA7438E1B1272B1B724260C6AD307C178D_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline int16_t List_1_get_Item_m448718D23F3512FDDBF0AB53E5D2DB0EABF8E569 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int16_t (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, const RuntimeMethod*))List_1_get_Item_m448718D23F3512FDDBF0AB53E5D2DB0EABF8E569_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mFB0503C5B9160C3D1241A77941BEF8579A5CA575 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int16_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, int16_t, const RuntimeMethod*))List_1_set_Item_mFB0503C5B9160C3D1241A77941BEF8579A5CA575_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, const RuntimeMethod*))List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_mBCDB5945A955B1C74D89CF4AFCDF2A8AB030D011 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mBCDB5945A955B1C74D89CF4AFCDF2A8AB030D011_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A_gshared)(___0_value, method);
}
inline bool List_1_Contains_m5999772E5D4B86AA7359A3A70E28A67F86862B3C (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_Contains_m5999772E5D4B86AA7359A3A70E28A67F86862B3C_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m2774EBD521194EF0435AA0AFE664D6E02FEF5C04 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, const RuntimeMethod*))List_1_CopyTo_m2774EBD521194EF0435AA0AFE664D6E02FEF5C04_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void List_1_set_Capacity_mA2A1AE2D87B71B10BE19D8260829B015509C2281 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mA2A1AE2D87B71B10BE19D8260829B015509C2281_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_mC45D40FE034E02EA3AD41A59687C76A2D2225CA7 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB*, const RuntimeMethod*))List_1_FindIndex_mC45D40FE034E02EA3AD41A59687C76A2D2225CA7_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m2945CE4E818865D1B520054A7413596E3ACF67C1 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, int32_t, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB*, const RuntimeMethod*))List_1_FindIndex_m2945CE4E818865D1B520054A7413596E3ACF67C1_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7 (const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_inline (Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* __this, int16_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB*, int16_t, const RuntimeMethod*))Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m41B1173CF7B65125215EB69E5562B195B50B8A54 (Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC* __this, List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC*, List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, const RuntimeMethod*))Enumerator__ctor_m41B1173CF7B65125215EB69E5562B195B50B8A54_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF7EE93DA7FC26297A344019BE48DA9CF6229F76B (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int16_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int16_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF7EE93DA7FC26297A344019BE48DA9CF6229F76B_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m2FD12E7B142D22EB11F4A21B1EF1C9377C8EF8D2 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int16_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, int16_t, const RuntimeMethod*))List_1_Insert_m2FD12E7B142D22EB11F4A21B1EF1C9377C8EF8D2_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mBF7F7C9A3085B48EC49C2A3C4944E2229526710F (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mBF7F7C9A3085B48EC49C2A3C4944E2229526710F_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m12D71111CB51FB5F0BE7E3815FB79D3C9D1CF6C8 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))List_1_Remove_m12D71111CB51FB5F0BE7E3815FB79D3C9D1CF6C8_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline void List_1_Reverse_mEDA13AB5685C40DC48E115ED93F55685103FF4C0 (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mEDA13AB5685C40DC48E115ED93F55685103FF4C0_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mAF9707A543F1822B8560295160DE061FAC8E2683 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mAF9707A543F1822B8560295160DE061FAC8E2683_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m46BC1ABDAD5DFD60C66FEE8B379C13CF223F886C (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m46BC1ABDAD5DFD60C66FEE8B379C13CF223F886C_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m381FA03B1B859894163380457DFEEBD8CB62E4B6 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m381FA03B1B859894163380457DFEEBD8CB62E4B6_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m616DB632F5E4E0DB0C05EDDA3071CF3D5537DE39 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t, int32_t, Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18*, const RuntimeMethod*))ArraySortHelper_1_Sort_m616DB632F5E4E0DB0C05EDDA3071CF3D5537DE39_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared)(__this, ___0_enumerable, method);
}
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3*, const RuntimeMethod*))List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3*, const RuntimeMethod*))List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89*, const RuntimeMethod*))ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared)(__this, ___0_enumerable, method);
}
inline int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared)(___0_value, method);
}
inline bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, const RuntimeMethod*))List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m4008C22F3C8A5C08E7F14D53BB8653C04A1DEFD7 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A*, const RuntimeMethod*))List_1_FindIndex_m4008C22F3C8A5C08E7F14D53BB8653C04A1DEFD7_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m1765E68376693969733E3F9C7E1CA261F43DA9A2 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A*, const RuntimeMethod*))List_1_FindIndex_m1765E68376693969733E3F9C7E1CA261F43DA9A2_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B*, List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, const RuntimeMethod*))Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, const RuntimeMethod*))List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4 (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9 (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1*, const RuntimeMethod*))ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mC1A070CACCE6F75EA6474F9575F085C259C24027 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mC1A070CACCE6F75EA6474F9575F085C259C24027_gshared)(__this, ___0_enumerable, method);
}
inline ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 List_1_get_Item_mC283F9F6CFF377195BFC3246AA74D0FE6963C433 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, const RuntimeMethod*))List_1_get_Item_mC283F9F6CFF377195BFC3246AA74D0FE6963C433_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m578469D3580F5FC2E8A839B6AB034B24A811B5FD (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m578469D3580F5FC2E8A839B6AB034B24A811B5FD_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mAA0D29A9F4BFC92EEF7C3504499066D957623E18 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_set_Item_mAA0D29A9F4BFC92EEF7C3504499066D957623E18_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mD354BFCE55D77CC25687AD1A52E4BDE1E8A1B34B (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_AddWithResize_mD354BFCE55D77CC25687AD1A52E4BDE1E8A1B34B_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m5B6D9B27ED3425725CEAEF21923F024DA9BB2880_inline (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_Add_m5B6D9B27ED3425725CEAEF21923F024DA9BB2880_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_inline (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, const RuntimeMethod*))List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m5335537650B41E6619A88CA16F0E59F6A88AC2B2 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m5335537650B41E6619A88CA16F0E59F6A88AC2B2_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7_gshared)(___0_value, method);
}
inline bool List_1_Contains_mCF818543BB4A5723BFC15E5E4F1C61F6ADBD7F29 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_Contains_mCF818543BB4A5723BFC15E5E4F1C61F6ADBD7F29_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mADA7B97499DEE68E227888AECC2CC666559BC69C (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, int32_t, const RuntimeMethod*))List_1_CopyTo_mADA7B97499DEE68E227888AECC2CC666559BC69C_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m6C37DE2960A7DFB4BBC282695A25E1ED3DDC128C (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m6C37DE2960A7DFB4BBC282695A25E1ED3DDC128C_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_mFBFDEFF3B654EC442AE1D1E39323329F68DA0F37 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365*, const RuntimeMethod*))List_1_FindIndex_mFBFDEFF3B654EC442AE1D1E39323329F68DA0F37_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m640225758D32BAE2702CE5F9A6B79DC77209BA09 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, int32_t, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365*, const RuntimeMethod*))List_1_FindIndex_m640225758D32BAE2702CE5F9A6B79DC77209BA09_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_inline (Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m36591C80FAE50E75278735266D80B6E37EA3B979 (Enumerator_t82E48C75F211812239518013EFC8B9671F29721D* __this, List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t82E48C75F211812239518013EFC8B9671F29721D*, List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, const RuntimeMethod*))Enumerator__ctor_m36591C80FAE50E75278735266D80B6E37EA3B979_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_mAB3D40AF210A1D800CCB16C59C031E0FA56E077D (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_mAB3D40AF210A1D800CCB16C59C031E0FA56E077D_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mD2AA190C258AE95E8ABAC60058AD856907FBD696 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_Insert_mD2AA190C258AE95E8ABAC60058AD856907FBD696_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m016A77F390FD3C6C5577624E4BD72D3A406F6585 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m016A77F390FD3C6C5577624E4BD72D3A406F6585_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m5B008AC3AD66FB34061029E3C203D26BBE61941B (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*))List_1_Remove_m5B008AC3AD66FB34061029E3C203D26BBE61941B_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m417FF1C3C22A317ABBA7EA7DD5FA1752B739A438 (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m417FF1C3C22A317ABBA7EA7DD5FA1752B739A438_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m73ABB365157315D711647B21FFE4D0A3CD3CA739 (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m73ABB365157315D711647B21FFE4D0A3CD3CA739_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m94C6FBE3371522C69BF56F2427F194132935720C (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m94C6FBE3371522C69BF56F2427F194132935720C_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m8F5556F01BF663C280537B05CF24DA13E0DAF109 (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m8F5556F01BF663C280537B05CF24DA13E0DAF109_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m7C4AB6A8E1635B20C31650C51FEB6F965A1FD112 (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, int32_t, int32_t, Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D*, const RuntimeMethod*))ArraySortHelper_1_Sort_m7C4AB6A8E1635B20C31650C51FEB6F965A1FD112_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m4CEA2CFCF80246789857C1083C6EEE2E6B20E95E (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m4CEA2CFCF80246789857C1083C6EEE2E6B20E95E_gshared)(__this, ___0_enumerable, method);
}
inline ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB List_1_get_Item_m6EFE20EC7F696CE45DD42C150EFB6FB21B9739FF (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, const RuntimeMethod*))List_1_get_Item_m6EFE20EC7F696CE45DD42C150EFB6FB21B9739FF_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m52730E98DDE3869912E05A9B6397C166C52CDF83 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m52730E98DDE3869912E05A9B6397C166C52CDF83_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m643976024B5A29CF56C088A0FCA3BE0B6A884F8A (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_set_Item_m643976024B5A29CF56C088A0FCA3BE0B6A884F8A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m78E326D36965A9E9B65DA03CB5F4104717469B0E (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_AddWithResize_m78E326D36965A9E9B65DA03CB5F4104717469B0E_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mA942CDC549C207A9D6777348B426A207CC1C173A_inline (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_Add_mA942CDC549C207A9D6777348B426A207CC1C173A_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_inline (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, const RuntimeMethod*))List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m2D2500A33A70519FDB24B9A59C3F69A131624804 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m2D2500A33A70519FDB24B9A59C3F69A131624804_gshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F_gshared)(___0_value, method);
}
inline bool List_1_Contains_m182F1838BAFC17E6FEF3CA7F3CE761E744F63398 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_Contains_m182F1838BAFC17E6FEF3CA7F3CE761E744F63398_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m52F89AE91348A0FF02E77CFE2D94C4616E167359 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, int32_t, const RuntimeMethod*))List_1_CopyTo_m52F89AE91348A0FF02E77CFE2D94C4616E167359_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m16BF6FC422DAEC3C13CC4D4BE28ECC29C8FB4A1F (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m16BF6FC422DAEC3C13CC4D4BE28ECC29C8FB4A1F_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m1EF71DFAC520F3E855620AD21EE157A77971ABB8 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8*, const RuntimeMethod*))List_1_FindIndex_m1EF71DFAC520F3E855620AD21EE157A77971ABB8_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m73B65CC61C8CF70DE1D6A48BB691158CF8B2871B (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, int32_t, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8*, const RuntimeMethod*))List_1_FindIndex_m73B65CC61C8CF70DE1D6A48BB691158CF8B2871B_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_inline (Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m1B0BE162F71DAED729F02331144357F9CDD16C8D (Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB* __this, List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB*, List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, const RuntimeMethod*))Enumerator__ctor_m1B0BE162F71DAED729F02331144357F9CDD16C8D_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mD96A2C67AA178DBA1318C82062007AC89BF7E929 (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mD96A2C67AA178DBA1318C82062007AC89BF7E929_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mA6A8703F283FDDF90CB721E215C84F1471629DD0 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_Insert_mA6A8703F283FDDF90CB721E215C84F1471629DD0_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m617667FB38717B5A08D28762C68A8804A1C706F1 (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m617667FB38717B5A08D28762C68A8804A1C706F1_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4D17EBEAAA9948A2828300CF47632C582DE7278B (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*))List_1_Remove_m4D17EBEAAA9948A2828300CF47632C582DE7278B_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mDB76719B6D00E5012CD322CA9CA4C082C04C516B (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mDB76719B6D00E5012CD322CA9CA4C082C04C516B_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m91D67F00E43F28115E3EF07E79153F9DED33F87A (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m91D67F00E43F28115E3EF07E79153F9DED33F87A_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m6395E421973AB514F66B38EA93565BBFCEBCFA2A (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m6395E421973AB514F66B38EA93565BBFCEBCFA2A_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mEE4A9F614B35D980C0161C5320183E436E8C35B5 (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mEE4A9F614B35D980C0161C5320183E436E8C35B5_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m34E21255210956EDB2FE229E0E32D3CAB0AEB09C (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, int32_t, int32_t, Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2*, const RuntimeMethod*))ArraySortHelper_1_Sort_m34E21255210956EDB2FE229E0E32D3CAB0AEB09C_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m2FD7B5C635A3FF909B80C6282710C7612B8F323A (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m2FD7B5C635A3FF909B80C6282710C7612B8F323A_gshared)(__this, ___0_enumerable, method);
}
inline MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 List_1_get_Item_m4F5283BFCDBF0D7CCD75D45AE8483B471035791B (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, const RuntimeMethod*))List_1_get_Item_m4F5283BFCDBF0D7CCD75D45AE8483B471035791B_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mCD7BB12C293680B4CE5DEB271461AEBC00E6223B (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mCD7BB12C293680B4CE5DEB271461AEBC00E6223B_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_mC25CC3030B4D3F39F4F7ABEA66369052009EDAEF (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_set_Item_mC25CC3030B4D3F39F4F7ABEA66369052009EDAEF_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m16FFDD35B569CC4568B287BD759EE79013DCD570 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_AddWithResize_m16FFDD35B569CC4568B287BD759EE79013DCD570_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m92EF7CE180DADBE3123A86EDB1F4D04EF6A5FA62_inline (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_Add_m92EF7CE180DADBE3123A86EDB1F4D04EF6A5FA62_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_inline (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, const RuntimeMethod*))List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m59316DFD9FB94C17D399DFDDC73F28ECAD6A66E5 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m59316DFD9FB94C17D399DFDDC73F28ECAD6A66E5_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D_gshared)(___0_value, method);
}
inline bool List_1_Contains_m7C4E1BB32EAA20036979BF8FE6A8730E49D74EC3 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_Contains_m7C4E1BB32EAA20036979BF8FE6A8730E49D74EC3_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mFDC00F07C9F3CA8F131C0388D09638FA79A2C3DA (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, int32_t, const RuntimeMethod*))List_1_CopyTo_mFDC00F07C9F3CA8F131C0388D09638FA79A2C3DA_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_m40F3D7E13C01DB9F625E3A1989BE63DA78D57CC1 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m40F3D7E13C01DB9F625E3A1989BE63DA78D57CC1_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m01F527072A9C8F41783B0537671822CDF8D2BA84 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841*, const RuntimeMethod*))List_1_FindIndex_m01F527072A9C8F41783B0537671822CDF8D2BA84_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_mE17619828966336C714CCD37FE06C6B9FF639402 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, int32_t, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841*, const RuntimeMethod*))List_1_FindIndex_mE17619828966336C714CCD37FE06C6B9FF639402_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_inline (Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mDD65FC7F19364C3C2AA963ADCBA799B2D3193750 (Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4* __this, List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4*, List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, const RuntimeMethod*))Enumerator__ctor_mDD65FC7F19364C3C2AA963ADCBA799B2D3193750_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mFAD8EC369EAFFDBE2644C680A8C653BE0233F320 (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mFAD8EC369EAFFDBE2644C680A8C653BE0233F320_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m3C23D3B5B61C9641E8FB7FEC69D3D99F4067E95F (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_Insert_m3C23D3B5B61C9641E8FB7FEC69D3D99F4067E95F_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m00117E29C91602FA18AAE2B243122D1CF8CC093A (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m00117E29C91602FA18AAE2B243122D1CF8CC093A_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4C1CB807C55963BE0C7FB39CE9B8C3A821583786 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*))List_1_Remove_m4C1CB807C55963BE0C7FB39CE9B8C3A821583786_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mB789AD9DE679B98B244C46DDA84601C91BBDC745 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mB789AD9DE679B98B244C46DDA84601C91BBDC745_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mC2C7ADE290B43480C5AA8F172E7DB833AE946D49 (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mC2C7ADE290B43480C5AA8F172E7DB833AE946D49_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m270E1867C09EBB2482219DC72A525E956951F278 (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m270E1867C09EBB2482219DC72A525E956951F278_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_m2B68559730F1ACE0DBE1D70382CF5D153AE035C0 (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_m2B68559730F1ACE0DBE1D70382CF5D153AE035C0_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mAB079B992C725F6BECE702BD3E0380F123E1D7EB (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, int32_t, int32_t, Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4*, const RuntimeMethod*))ArraySortHelper_1_Sort_mAB079B992C725F6BECE702BD3E0380F123E1D7EB_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mAE2B0C87F768F4DFAA803D2E47567222B93B36C7 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mAE2B0C87F768F4DFAA803D2E47567222B93B36C7_gshared)(__this, ___0_enumerable, method);
}
inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 List_1_get_Item_m7ECA8E19707EB7795F4BC62BE1D6B35C34B5DF42 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, const RuntimeMethod*))List_1_get_Item_m7ECA8E19707EB7795F4BC62BE1D6B35C34B5DF42_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m8F3347D8126C5E6B6F8517F240C26037AF221A65 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_set_Item_m8F3347D8126C5E6B6F8517F240C26037AF221A65_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mC73ADA51A91004EB3319A9DB14B5DE13D642C90F (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_AddWithResize_mC73ADA51A91004EB3319A9DB14B5DE13D642C90F_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m64F9F4C32CDD01D323D17E7A61A97EB924206093_inline (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_Add_m64F9F4C32CDD01D323D17E7A61A97EB924206093_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_inline (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, const RuntimeMethod*))List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m39C05FB9442FF9AE1BFF9D9BA6981EFEE4915275 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m39C05FB9442FF9AE1BFF9D9BA6981EFEE4915275_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD_gshared)(___0_value, method);
}
inline bool List_1_Contains_m490F96EE94C1D248CDA59F81CFDB06FAD7E6DBE2 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_Contains_m490F96EE94C1D248CDA59F81CFDB06FAD7E6DBE2_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mB915B2F3975D3AFDBD665B01865206DAD79286CB (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, int32_t, const RuntimeMethod*))List_1_CopyTo_mB915B2F3975D3AFDBD665B01865206DAD79286CB_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mADC99C1FF0D43662CA011BF63EB54FBC50DCE929 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mADC99C1FF0D43662CA011BF63EB54FBC50DCE929_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_mF5CE6664FAC83919E0A1A4061BEE38A5C2224D44 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788*, const RuntimeMethod*))List_1_FindIndex_mF5CE6664FAC83919E0A1A4061BEE38A5C2224D44_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m0B34C3FF8AA822F64ABBB4EBA1599B7A9F836851 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, int32_t, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788*, const RuntimeMethod*))List_1_FindIndex_m0B34C3FF8AA822F64ABBB4EBA1599B7A9F836851_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_inline (Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m11FF44E94EC66D7385574292079D8C9B0F3AB8F1 (Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA* __this, List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA*, List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, const RuntimeMethod*))Enumerator__ctor_m11FF44E94EC66D7385574292079D8C9B0F3AB8F1_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3A242FDE2C2E163ED17EC1A7D8E8A3989607DFBB (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3A242FDE2C2E163ED17EC1A7D8E8A3989607DFBB_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m1CEB6D8F18FD9BB098E295A1F35F1FF3A4C93B85 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_Insert_m1CEB6D8F18FD9BB098E295A1F35F1FF3A4C93B85_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mA178AE64083A1AD3E08153E629F3119E54DA4F18 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mA178AE64083A1AD3E08153E629F3119E54DA4F18_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mBBBA23C9534D57FAF0D64F2665DE0B3C38E721DC (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*))List_1_Remove_mBBBA23C9534D57FAF0D64F2665DE0B3C38E721DC_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mE2586031F4BF52DB1AC8D0E1E1D218913B399190 (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mE2586031F4BF52DB1AC8D0E1E1D218913B399190_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF4C21EEA52149C3C7E8BF43D9D13B097922E3EF9 (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF4C21EEA52149C3C7E8BF43D9D13B097922E3EF9_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m6A1FB357C1BCE9953C61F766F92AEC8BBF2CF97E (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m6A1FB357C1BCE9953C61F766F92AEC8BBF2CF97E_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m431F56DDCE87CEC08626A72DE2169B70CEFADCAD (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m431F56DDCE87CEC08626A72DE2169B70CEFADCAD_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mCE7CC939434D0933B11E309F889C5C00B1C83F46 (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, int32_t, int32_t, Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B*, const RuntimeMethod*))ArraySortHelper_1_Sort_mCE7CC939434D0933B11E309F889C5C00B1C83F46_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared)(__this, ___0_enumerable, method);
}
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, const RuntimeMethod*))List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m2E36D7828A12EC36948A76FEFD20CF459D89467E (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, const RuntimeMethod*))List_1_FindIndex_m2E36D7828A12EC36948A76FEFD20CF459D89467E_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645*, const RuntimeMethod*))ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m7FA36B88E4A9EF847A8949EBA76F584EB0E905D0 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m7FA36B88E4A9EF847A8949EBA76F584EB0E905D0_gshared)(__this, ___0_enumerable, method);
}
inline int8_t List_1_get_Item_mC8F1627962201B31BACD3E44D76C96EBB42B5E34 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int8_t (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, const RuntimeMethod*))List_1_get_Item_mC8F1627962201B31BACD3E44D76C96EBB42B5E34_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m7EEC06994B2D7CB305230F338D6C644858890A9B (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int8_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, int8_t, const RuntimeMethod*))List_1_set_Item_m7EEC06994B2D7CB305230F338D6C644858890A9B_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_mDE5CF8A3237B218D5EE1187641F803A214A4AFF7 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mDE5CF8A3237B218D5EE1187641F803A214A4AFF7_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A_gshared)(___0_value, method);
}
inline bool List_1_Contains_m4FA09CFD8E3D62EEC7585357B55EFD427AE18C43 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_Contains_m4FA09CFD8E3D62EEC7585357B55EFD427AE18C43_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m07575FC4FF6BED54C910457FE0176D128A11A8D3 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int32_t, const RuntimeMethod*))List_1_CopyTo_m07575FC4FF6BED54C910457FE0176D128A11A8D3_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mEA27395CC2723618924E0C7B35EF5DEF13BF96BD (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mEA27395CC2723618924E0C7B35EF5DEF13BF96BD_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m44AF47C8B71DF4ECE9E2068C443807A680BEBF0B (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B*, const RuntimeMethod*))List_1_FindIndex_m44AF47C8B71DF4ECE9E2068C443807A680BEBF0B_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_m254686ACF02582C0B49821FAFE89244631686F0B (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, int32_t, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B*, const RuntimeMethod*))List_1_FindIndex_m254686ACF02582C0B49821FAFE89244631686F0B_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_inline (Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* __this, int8_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B*, int8_t, const RuntimeMethod*))Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mED2678F591A6A2B23B4D21643B129B4A1D905977 (Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5* __this, List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5*, List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))Enumerator__ctor_mED2678F591A6A2B23B4D21643B129B4A1D905977_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD6356D6E3B1AF2CD83E6EA48E4440E0E44AA11E5 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int8_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int8_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD6356D6E3B1AF2CD83E6EA48E4440E0E44AA11E5_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m04A00FE56918CD2400EC56B9C4E6641FA9F1E5E9 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, int8_t, const RuntimeMethod*))List_1_Insert_m04A00FE56918CD2400EC56B9C4E6641FA9F1E5E9_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m70F883569657823D114157579B983983E86962A0 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m70F883569657823D114157579B983983E86962A0_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mCB6B303513E6FFD412CEE0B6991DCC33D71FA00E (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))List_1_Remove_mCB6B303513E6FFD412CEE0B6991DCC33D71FA00E_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m75EBD95C73368E3DDABD2F76A61B02592AFD5398 (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m75EBD95C73368E3DDABD2F76A61B02592AFD5398_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m75AAFED2BB1872BF45B18BD54C867B8EA15B4BD9 (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m75AAFED2BB1872BF45B18BD54C867B8EA15B4BD9_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_m04C25FEDEA89E45339617B284090C688AE4CD93B (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_m04C25FEDEA89E45339617B284090C688AE4CD93B_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA704A3BB3ECE434AB3254E47B932C4551861A8CB (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA704A3BB3ECE434AB3254E47B932C4551861A8CB_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mCEDAD9A8A7FF8E35C8F6A5698BEF68783457C60D (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int32_t, int32_t, Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96*, const RuntimeMethod*))ArraySortHelper_1_Sort_mCEDAD9A8A7FF8E35C8F6A5698BEF68783457C60D_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_gshared)(__this, ___0_list, method);
}
inline void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared)(__this, ___0_enumerable, method);
}
inline OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, const RuntimeMethod*))List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared)(___0_value, method);
}
inline bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, const RuntimeMethod*))List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m8E32928E07448E4DE50B13A27ABDF776DE8F4DDD (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0*, const RuntimeMethod*))List_1_FindIndex_m8E32928E07448E4DE50B13A27ABDF776DE8F4DDD_gshared)(__this, ___0_match, method);
}
inline int32_t List_1_FindIndex_mA5DDCB0CBD1B539DB3213A4B3AE1C72E519C98A8 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0*, const RuntimeMethod*))List_1_FindIndex_mA5DDCB0CBD1B539DB3213A4B3AE1C72E519C98A8_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251* __this, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251*, List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, const RuntimeMethod*))Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9 (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*))List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04 (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995 (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t, int32_t, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3*, const RuntimeMethod*))ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m10B7B906CB001FD99973B2681589D138E212FE45_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEF85C755C705FA2F5D319F72DB6F6D109FF98AA5_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m666D5A875F2C95BC55DA5B96E4C28B69D6B4BFC7_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = ((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = ((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m5AB0E2CA7438E1B1272B1B724260C6AD307C178D(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA2A1AE2D87B71B10BE19D8260829B015509C2281_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->____items;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = ((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m2679DF97034ECA4058505BA80E0FA178B7E5E280_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m1F9E7783F1BCABD25A5D79CE34AF3178CFDC92B3_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m6DDDD50CF7485D0C701FFB5D53A409379DC68878_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t List_1_get_Item_m448718D23F3512FDDBF0AB53E5D2DB0EABF8E569_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mFB0503C5B9160C3D1241A77941BEF8579A5CA575_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int16_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int16_t L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int16_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
		int16_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mA1495DE3FDADF3CD6F21AB038BE0393952E86F8D_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int16_t L_1;
		L_1 = List_1_get_Item_m448718D23F3512FDDBF0AB53E5D2DB0EABF8E569(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m816BD34F3E44126665A1387190898FFE66E36FA6_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mFB0503C5B9160C3D1241A77941BEF8579A5CA575(__this, L_1, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = V_0;
		int32_t L_7 = V_1;
		int16_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int16_t)L_8);
		return;
	}

IL_0034:
	{
		int16_t L_9 = ___0_item;
		List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int16_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int16_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mB37B4159EE40568F4422AA4EDA4AEEBCC2D21A6C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_inline(__this, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m36515046C2EDCC2A5EF1C7372EA03A12202EB1CA_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mBCDB5945A955B1C74D89CF4AFCDF2A8AB030D011(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mAD92F50924A47EF4645973FA54E88D4558A6A730_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m5999772E5D4B86AA7359A3A70E28A67F86862B3C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int16_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m204B6CF44CD612D35FFF507F51C630A520F2F0C4_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m5999772E5D4B86AA7359A3A70E28A67F86862B3C(__this, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDAE6FFCC9D6D049AFC4A02A90715C475B652A559_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___0_array;
		List_1_CopyTo_m2774EBD521194EF0435AA0AFE664D6E02FEF5C04(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB1CB27896D63B67C254044F977C6ED3D1817F957_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m2774EBD521194EF0435AA0AFE664D6E02FEF5C04_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->____items;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mA2A1AE2D87B71B10BE19D8260829B015509C2281(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mDA07804D0C0A663DD805C9DAB3CD0AA34A45788D_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mC45D40FE034E02EA3AD41A59687C76A2D2225CA7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mC45D40FE034E02EA3AD41A59687C76A2D2225CA7_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m2945CE4E818865D1B520054A7413596E3ACF67C1(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2945CE4E818865D1B520054A7413596E3ACF67C1_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_10 = ___2_match;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC List_1_GetEnumerator_m1BDCBC5A05C847B35B1702AB2E3AB79E47B0B7F9_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m41B1173CF7B65125215EB69E5562B195B50B8A54((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA8643733E088E95EFA36D237475C5570D1B74D47_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m41B1173CF7B65125215EB69E5562B195B50B8A54((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m6CEEC2984EE33475434E54136447C441020F31EE_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m41B1173CF7B65125215EB69E5562B195B50B8A54((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t3931E6BA6E74FDB51FA376F644FAB53A41D9F5DC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = __this->____items;
		int16_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF7EE93DA7FC26297A344019BE48DA9CF6229F76B(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m7597A003D56F188D75C8626BC353C6297F9533A6_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048(__this, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m2FD12E7B142D22EB11F4A21B1EF1C9377C8EF8D2_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int16_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int16_t L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int16_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mBF381931F4EA878F0E9CDFDE67112E0D2BCD28CF_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m2FD12E7B142D22EB11F4A21B1EF1C9377C8EF8D2(__this, L_1, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mBCDB5945A955B1C74D89CF4AFCDF2A8AB030D011_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_20 = __this->____items;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				int16_t L_45;
				L_45 = InterfaceFuncInvoker0< int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_m2FD12E7B142D22EB11F4A21B1EF1C9377C8EF8D2(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m5AB0E2CA7438E1B1272B1B724260C6AD307C178D(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m12D71111CB51FB5F0BE7E3815FB79D3C9D1CF6C8_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int16_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m3B6DE127E2E7A56EEEECE54B7B47E401B4193048(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mBF7F7C9A3085B48EC49C2A3C4944E2229526710F(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m0BBC65AEC5DC90C1468D2FE58A54E04231D124E5_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF8680902618CABCB3344AD9AF4FD883585A4145A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m12D71111CB51FB5F0BE7E3815FB79D3C9D1CF6C8(__this, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m7D9A66B4691D6AD9EFFD84AFB37E0FBE0A51B3BB_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_4 = ___0_match;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int16_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* L_16 = ___0_match;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int16_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		int16_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int16_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mBF7F7C9A3085B48EC49C2A3C4944E2229526710F_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m36D7DE2CCAA829875AFFDFAAA96B5D25388858A0_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m81F065BD27089D22DCC6C10E6C332E94E6CCCDAD_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mEDA13AB5685C40DC48E115ED93F55685103FF4C0(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mEDA13AB5685C40DC48E115ED93F55685103FF4C0_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mAF9707A543F1822B8560295160DE061FAC8E2683(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD626AE199A847025CEA5150DD30A400806D715CC_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m46BC1ABDAD5DFD60C66FEE8B379C13CF223F886C(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m46BC1ABDAD5DFD60C66FEE8B379C13CF223F886C_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m381FA03B1B859894163380457DFEEBD8CB62E4B6(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m486A0D2D899ABEDD9D886EC487C74D030E26D1AA_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tCCC1AA529B0E52A90DB79D3D9E621FCA5ED86C18* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m616DB632F5E4E0DB0C05EDDA3071CF3D5537DE39(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* List_1_ToArray_m54D37FBCF68237223B6E36E4991BE2CA510E5931_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = ((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = __this->____items;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m5AB0E2CA7438E1B1272B1B724260C6AD307C178D_gshared (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int16_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				int16_t L_6;
				L_6 = InterfaceFuncInvoker0< int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mF765F8BA57535EB1F856C9458FE1B59E00E3003C(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int16_t L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int16_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mEFB03EF1B46F7B08738233577AC32058E3CA75DF_gshared (const RuntimeMethod* method) 
{
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCC0E71080DE343C1A527526A1AC2DBEC355CEA6C_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mDA21D2FFF7A4A17311DEA5D1F58D0B5FDF8D5D71_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m0282477399CABCA202E725739468CDD1A81894A8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m7955A9D0A82598F84D4B407A1C5859C271D02BD9_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E933D1B423B829C27D0AAE6181F4C5E0CA89F33_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9CD1267F4F075504130F719883E3EFD9DF762253_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m39E3DB029FA8CE14D5437A70E01A96684957F6B6_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1A10E697703D67F6551D47C603FFE78E16CE4204_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mE7517FD1F4EBD12003672EAFAEB76B269822CD44_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mF4D90DC6EDE97B45F2F568839E9D5C34233FFA6B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB9E522FCF1D9B1628FBD94CA249A772409309756_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m030AAF730ACCF739D45671086EBF4786FED908D5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mA667E9DF466C9574AC22A4B0FE0E358D818505CC(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mA59E550755D80A19985EA4724BF837C2B2DE94FD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m79D8B2C7A3C18BE40305CA2655DDCE653B51B298_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mCBF0FDA073FE813C7E45E17EB7B3970F47A3AD24_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_10 = ___2_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB9F20F5DCF4F0D1D426C507F13B662C972AE4516_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC6BECA0B4B79418D229C9568104AEBCE2D23C903_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5D11409C5765078140B3C3652FEF06536FDFA6B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m9FC60CFC60B64D25F3F26455A4AC0386E6E2C26F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int32_t L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m998EB213788F375DC5B0A8A62C3400CBD267E86B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1D3DE2073A8946E2D1113677F2062F35881FA7B8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_mC1B6D4E6CC94D8BA82A60B2F80CE9684D9345AAE(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mC3D1A2CECAC0E3D42C78B43772E1BD3D0333C450(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mC39E90783873C337B8CB0938BE43A6E5AD42EF0A_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0C506FD38C6F16AC8A7700817EF89401910F873C(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m2B41E5B9E061DD4D5F58B693018024AADF2AD7F5(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mF14DFF09F0ADFF511FBE004265EF8B7269ABA4D8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_4 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_16 = ___0_match;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m1E69C4C8438AA5D7E05C2936C79C01D96F89BE68_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m09394C650409964E568ED088D88C1BA78EE468DC_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE0857BE335F36FD830B3A301AA7BF67F2F3C783F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m57764BD8E3718881AE35094284EFDECEE528991D(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m8AF34E53DDA0850F189B6FA670A2CC358C9747E7_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3178B19CB7B6281DC7B995E4C5A6AD200EC6153B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E0CF4C26182BB9D788C90ABE423C2F4CD145E41(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m90CDC07AEBE737318A490F4C2BC6F2955443EDA4_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tB7DE1436CB53924C2FC41FF926D074C1ACC14D89* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m7FA55FB83B1A81CF769D2928FCE3E06425DAC06B(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* List_1_ToArray_m65479FB75A5FE539EA1A0D6681172717D23CEAAA_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____items;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m0D03C24E342A0F77A0042603E40AD506136B684F_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m86DF3071CD67B1463C1CF26C7791331D70D431C0(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int32_t L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m34A28120D67ECFCD65E7E95E5A27026C1DF8B865_gshared (const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7C3D0A1FD36704AFBBE4FD4E69204B809D3FC90E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFA5964F4DCFAAF3789DB92674BFBD4734426BDF8_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9F9FACA262C60BC180B483D011636D28822CF4C5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m94A9DF9D55CC3136DB3FD45DC9EAFD824B401267_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mBDEDAB261381FF8A6A32B93F5BF72814FAAC8096_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m9B8E301A17A11AA9C9B11CD5290E2FFB530085BA_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m6983F200CA61558FE9D93EC1C37297CD534233EE_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1;
		L_1 = List_1_get_Item_mDE2F02C693FD9EAA8F93873E407BC46C47ACFC7A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m9C2490004857BB44F978BF7988ED4912C73C570A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mB4FCD891721B07472641D7000AAE93A9CABBAE5A(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m8DD55D9D9CB66A56905DE172614C28F716BAFE35_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_inline(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4874A6690007FD4908D00149317EF9E93E70C03A_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4F220B4D805F163DF05F6FB4538DBC9D1610D16E_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m39706E6EBA76CBA5A2D9981863397BEEA368096D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mF78C4E1EE072C25D5CDEB5057184058E94DF8634(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m306E211EDE0C075140F253CD2C9196DD9E1147A4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ___0_array;
		List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mC112CD31B36C5ACECC64EDD676DF26DA4AEE7487_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m839F5ADDC59B70CAC1B14D9841A524465A3BC9E5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m7ED78746E0AFEF2F59490B581943C977BE1A5479(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m0F934C6E2B27DA27E50A120495CF9321916AC602_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m4008C22F3C8A5C08E7F14D53BB8653C04A1DEFD7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m4008C22F3C8A5C08E7F14D53BB8653C04A1DEFD7_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m1765E68376693969733E3F9C7E1CA261F43DA9A2(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m1765E68376693969733E3F9C7E1CA261F43DA9A2_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_10 = ___2_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA9DF5D78B8C879762C73551E01777F5F175D71F0_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m98A983CE0706CC345CEDB4FCD924FE648FAA6731_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC6E6B2337772FC83C59264783DAFF1D4CF9F023E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = __this->____items;
		int32_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mC54DA10260369766A8625313EA0119E4EE1E1EEB_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int32_t L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int32_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m2BFCF4BC60FEBF9FE7646CCBB3EB86B85F4B27C5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D(__this, L_1, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m97B7B4D0EFFBE810751F8A48DA53CFB8B91B4A3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_20 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				int32_t L_45;
				L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_m1E433D24E9C67F0BA5D1ACF7708F97EF1DC4AE3D(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m4803410520A110B163A6B92857AEFA8FEE015752(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mA0EB41D8902BACEC49286B9EFAF58046DB1943E4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m0889B00F24FBB309BEE1702FD3CB4C42AD832A39(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4238AF38CE7EEE7C4C5C568B53D88116FB692B53(__this, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m16B29FE13BB76F2EA2F3F420843BDE5842C3A11F_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_4 = ___0_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_16 = ___0_match;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA0D34DB4A9D4C8FECCD3278530CEEB3147A19D54_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mD0C33E51143D0DF95FBCC1C503FBC9463088C2BC_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB85151226AC8FFAB3654B7CEC3DBBCD852CE2F3B_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m7DE6AE4FAB338990D0A930D6CD525BA07B7E3CB4_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF0352521EE3186887C68DFC25905E29D1393515(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m98CE28BB7BF76E332649A98449718159CB3C76B5_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3EC8C34030BE04C522C1CBDB2E96DFAEDB2F011D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m632FD913827035A385A987CEA4B0D30A6C1BB317(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m12C3A6424300825E4F1541100D2BF098D5CB9542_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t867D3AA383F5B47704F3B33AF0917C4E98ABEBF1* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m3FCF73F735AAA03BF7352EF6635F318F66177EB9(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* List_1_ToArray_mAA6D48892E79049030D3619D8931B026C1328974_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = ((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = __this->____items;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m888E7562D4D5756B46E7DE52614832960DA81A0D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mE0139DA252869EB064FCEC6240A927BCE4945327(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int32_t L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mE9586868AA80CB6AD6E8540292BFD0AD2B0EB4A7_gshared (const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m375595588C23EDC61BA450EBD43AB980670DB130_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_0 = ((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4245DF88DB2D12EE751BDC1197F283610A846205_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_2 = ((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_4 = (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)(ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m73E221831BACD9602346500347B94E7667E9D7D6_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_6 = ((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_8 = (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)(ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_12 = ((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mC1A070CACCE6F75EA6474F9575F085C259C24027(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m6C37DE2960A7DFB4BBC282695A25E1ED3DDC128C_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_6 = (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)(ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_8 = __this->____items;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_12 = ((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m5DF835EAAA1B4A0A8D619241334570DEAFF588A9_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m8FB8E498588CAE91E9E1D46E472C75245FC14684_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m9BF3D6E1BCA3D2CBABFF6CAF4932F2609C38ACBD_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 List_1_get_Item_mC283F9F6CFF377195BFC3246AA74D0FE6963C433_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mAA0D29A9F4BFC92EEF7C3504499066D957623E18_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97));
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mCCD169C4DA10F56C343F4EFE2326AA69AC0ED773_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_1;
		L_1 = List_1_get_Item_mC283F9F6CFF377195BFC3246AA74D0FE6963C433(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m6DD279AA275487F606054677090383DB62F340BC_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m578469D3580F5FC2E8A839B6AB034B24A811B5FD(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mAA0D29A9F4BFC92EEF7C3504499066D957623E18(__this, L_1, ((*(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)((ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m5B6D9B27ED3425725CEAEF21923F024DA9BB2880_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) 
{
	ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_6 = V_0;
		int32_t L_7 = V_1;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_8);
		return;
	}

IL_0034:
	{
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_9 = ___0_item;
		List_1_AddWithResize_mD354BFCE55D77CC25687AD1A52E4BDE1E8A1B34B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD354BFCE55D77CC25687AD1A52E4BDE1E8A1B34B_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mCE73E0078AC9A2D4AED11526BACBED6DF69A59DA_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m578469D3580F5FC2E8A839B6AB034B24A811B5FD(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m5B6D9B27ED3425725CEAEF21923F024DA9BB2880_inline(__this, ((*(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)((ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6CCAB6B3B792016DA44731DD01D450A25D430655_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m5335537650B41E6619A88CA16F0E59F6A88AC2B2(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mA11C3DC26AC277F4E1806DEF399B5A702DF980B7_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCF818543BB4A5723BFC15E5E4F1C61F6ADBD7F29_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mEC8A912FA1EC76BC5502C1E47BC28994071F6F99_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mCF818543BB4A5723BFC15E5E4F1C61F6ADBD7F29(__this, ((*(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)((ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m40087889EEC20FDDFB51FA92473171B5EF591090_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, const RuntimeMethod* method) 
{
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_0 = ___0_array;
		List_1_CopyTo_mADA7B97499DEE68E227888AECC2CC666559BC69C(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m3F086D2FFD0D59725645D9757EC48841D41543AC_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mADA7B97499DEE68E227888AECC2CC666559BC69C_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_0 = __this->____items;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m6C37DE2960A7DFB4BBC282695A25E1ED3DDC128C(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m877F6F74CAB63E0AF14535BEB46ABFD388025182_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mFBFDEFF3B654EC442AE1D1E39323329F68DA0F37(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFBFDEFF3B654EC442AE1D1E39323329F68DA0F37_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m640225758D32BAE2702CE5F9A6B79DC77209BA09(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m640225758D32BAE2702CE5F9A6B79DC77209BA09_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_10 = ___2_match;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t82E48C75F211812239518013EFC8B9671F29721D List_1_GetEnumerator_m1AC34BB64CDF027006C9FB7EB63F9F950474ABC4_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t82E48C75F211812239518013EFC8B9671F29721D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m36591C80FAE50E75278735266D80B6E37EA3B979((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4B37907863742F5A003C12AA712DFA4BBA64FE1E_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t82E48C75F211812239518013EFC8B9671F29721D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m36591C80FAE50E75278735266D80B6E37EA3B979((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t82E48C75F211812239518013EFC8B9671F29721D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mB517D79D846170BAC19413D62DA93D75C2266BCE_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t82E48C75F211812239518013EFC8B9671F29721D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m36591C80FAE50E75278735266D80B6E37EA3B979((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t82E48C75F211812239518013EFC8B9671F29721D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) 
{
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_0 = __this->____items;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_mAB3D40AF210A1D800CCB16C59C031E0FA56E077D(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m311B956D9FF7102A37E8AC5DE2AB10F1768686A7_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051(__this, ((*(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)((ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mD2AA190C258AE95E8ABAC60058AD856907FBD696_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mCDDAD4DA28B6A571EA6D9A874E05BD4B32BD35A8_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m578469D3580F5FC2E8A839B6AB034B24A811B5FD(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mD2AA190C258AE95E8ABAC60058AD856907FBD696(__this, L_1, ((*(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)((ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m5335537650B41E6619A88CA16F0E59F6A88AC2B2_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_20 = __this->____items;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_45;
				L_45 = InterfaceFuncInvoker0< ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_mD2AA190C258AE95E8ABAC60058AD856907FBD696(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mC1A070CACCE6F75EA6474F9575F085C259C24027(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m5B008AC3AD66FB34061029E3C203D26BBE61941B_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m57FA3026397A48DDF19DBBBCD55E4EE7BEB71051(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m016A77F390FD3C6C5577624E4BD72D3A406F6585(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mA0324212E770F3B59D33849A705B412338DE24AF_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m246D3F569B1A3FCA29AFA0984C8CAE0BC31689E7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m5B008AC3AD66FB34061029E3C203D26BBE61941B(__this, ((*(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)((ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)(ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m9B0534D63AFD092F8B69FF01807AD0EC8679CDD1_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_4 = ___0_match;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* L_16 = ___0_match;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m016A77F390FD3C6C5577624E4BD72D3A406F6585_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m620303673854613F246BA28E180D5367CA61EC61_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB45C3082089CA1E9F35F1CD6032E5658330317F2_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m417FF1C3C22A317ABBA7EA7DD5FA1752B739A438(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m417FF1C3C22A317ABBA7EA7DD5FA1752B739A438_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m73ABB365157315D711647B21FFE4D0A3CD3CA739(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5AD9A1AADAEC769180A5E44AFF7A6E3211B6982F_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m94C6FBE3371522C69BF56F2427F194132935720C(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m94C6FBE3371522C69BF56F2427F194132935720C_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97_m8F5556F01BF663C280537B05CF24DA13E0DAF109(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m1EAB3BB007323CA492BC2F33DABDEBD2CAF8ACC8_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t64C49C69D079EADC38957C4D0BA68D1C6245609D* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m7C4AB6A8E1635B20C31650C51FEB6F965A1FD112(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* List_1_ToArray_m88768D0902D8C09A8BF90C862CBEB4E501D108B5_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_1 = ((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_3 = (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)(ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_4 = __this->____items;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mC1A070CACCE6F75EA6474F9575F085C259C24027_gshared (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_6;
				L_6 = InterfaceFuncInvoker0< ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m9A42029448D34167163B66A401CF5328746BA939(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m2B6DD434A62BFDDCD200E7C427AC8EF717159721_gshared (const RuntimeMethod* method) 
{
	{
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_0 = (ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)(ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m11A95B8A94715DE9BE8BEE1CC56343753FF2A514_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_0 = ((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1CC67BFDA2BC263790B2E44BF8559C31242F4852_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_2 = ((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_4 = (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)(ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m41EB7A1B54567A8156AC45A1C039F0E721BD656B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_6 = ((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_8 = (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)(ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_12 = ((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m4CEA2CFCF80246789857C1083C6EEE2E6B20E95E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m16BF6FC422DAEC3C13CC4D4BE28ECC29C8FB4A1F_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_6 = (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)(ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_8 = __this->____items;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_12 = ((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7F0AB74E0A099C79739C5A94BC91313BAAB73983_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m39D6A3C868955101BDD10C24649A9FDACFEE02B6_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mEB4B1419EC1AE76CE7B067D5CA1C501048A3428F_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB List_1_get_Item_m6EFE20EC7F696CE45DD42C150EFB6FB21B9739FF_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m643976024B5A29CF56C088A0FCA3BE0B6A884F8A_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB));
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m29110DD514E4817DFC5AC882E2996691B08DD272_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_1;
		L_1 = List_1_get_Item_m6EFE20EC7F696CE45DD42C150EFB6FB21B9739FF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m1F2326DB570609211B0345E25005F1C009827B4B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m52730E98DDE3869912E05A9B6397C166C52CDF83(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m643976024B5A29CF56C088A0FCA3BE0B6A884F8A(__this, L_1, ((*(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)((ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA942CDC549C207A9D6777348B426A207CC1C173A_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) 
{
	ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_6 = V_0;
		int32_t L_7 = V_1;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_8);
		return;
	}

IL_0034:
	{
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_9 = ___0_item;
		List_1_AddWithResize_m78E326D36965A9E9B65DA03CB5F4104717469B0E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m78E326D36965A9E9B65DA03CB5F4104717469B0E_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mF9FCDD8E8BA8403A295FEDA549460557BDF3EB2F_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m52730E98DDE3869912E05A9B6397C166C52CDF83(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mA942CDC549C207A9D6777348B426A207CC1C173A_inline(__this, ((*(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)((ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mE36C979818EF7CF1F39678E5A7BFCDDB91330EC5_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m2D2500A33A70519FDB24B9A59C3F69A131624804(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD53F94F4380DBE591A80FF3E4966C8B029D69C26_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m182F1838BAFC17E6FEF3CA7F3CE761E744F63398_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m0F3F54153A2093A6C03B924E922846308530AF00_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m182F1838BAFC17E6FEF3CA7F3CE761E744F63398(__this, ((*(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)((ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mAE9B9FDBF66E8F2413B4CBF4BDF7BB14995ADCB0_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, const RuntimeMethod* method) 
{
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_0 = ___0_array;
		List_1_CopyTo_m52F89AE91348A0FF02E77CFE2D94C4616E167359(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m07060D82964019262D78A5286CA9AC03F520BA95_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m52F89AE91348A0FF02E77CFE2D94C4616E167359_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_0 = __this->____items;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m16BF6FC422DAEC3C13CC4D4BE28ECC29C8FB4A1F(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m4D50BABD78F31F168B2950DD30F3D07E3F3C611F_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m1EF71DFAC520F3E855620AD21EE157A77971ABB8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m1EF71DFAC520F3E855620AD21EE157A77971ABB8_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m73B65CC61C8CF70DE1D6A48BB691158CF8B2871B(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m73B65CC61C8CF70DE1D6A48BB691158CF8B2871B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_10 = ___2_match;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB List_1_GetEnumerator_mC86B92750D303F671B93476CDCF68832954E8CA9_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1B0BE162F71DAED729F02331144357F9CDD16C8D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mD73B100998205D5C8FBD461321F5B192916CCFE3_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1B0BE162F71DAED729F02331144357F9CDD16C8D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC30CA7C738C33C2E3FEEF7739452608EAED935CD_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m1B0BE162F71DAED729F02331144357F9CDD16C8D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4DD1FDD452D035023FF3B123591EEC8CAF57DEAB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) 
{
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_0 = __this->____items;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mD96A2C67AA178DBA1318C82062007AC89BF7E929(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m3D18B4EFDB6013C636FF5C48079FA6455D80A69D_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17(__this, ((*(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)((ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mA6A8703F283FDDF90CB721E215C84F1471629DD0_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m70F0B9EBB1A538600977C042AAE75E593DDEBAAD_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m52730E98DDE3869912E05A9B6397C166C52CDF83(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mA6A8703F283FDDF90CB721E215C84F1471629DD0(__this, L_1, ((*(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)((ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m2D2500A33A70519FDB24B9A59C3F69A131624804_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_20 = __this->____items;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_45;
				L_45 = InterfaceFuncInvoker0< ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_mA6A8703F283FDDF90CB721E215C84F1471629DD0(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m4CEA2CFCF80246789857C1083C6EEE2E6B20E95E(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4D17EBEAAA9948A2828300CF47632C582DE7278B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mDD939B2DBF6957A3841C2DED40D340B8012E6C17(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m617667FB38717B5A08D28762C68A8804A1C706F1(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m26321B51BD9F3CA620AE7AF62AC78EC632B0C0E5_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m40822838526EB0E059F47344C40D90B8A44B2E0F(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4D17EBEAAA9948A2828300CF47632C582DE7278B(__this, ((*(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)((ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m6E0518DD2D69CE440D2F0B4DB6EBD07D139E7CB7_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_4 = ___0_match;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* L_16 = ___0_match;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m617667FB38717B5A08D28762C68A8804A1C706F1_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB));
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mF341DCA702FD55EF1ABF85A762B20648C1E6D78B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6543B245E67D48ADDF16342B59B4450FB55AA1A9_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mDB76719B6D00E5012CD322CA9CA4C082C04C516B(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mDB76719B6D00E5012CD322CA9CA4C082C04C516B_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_m91D67F00E43F28115E3EF07E79153F9DED33F87A(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE8C1D934CB576CB32D15DD7FB2CBDCCEF009A0B4_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m6395E421973AB514F66B38EA93565BBFCEBCFA2A(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6395E421973AB514F66B38EA93565BBFCEBCFA2A_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB_mEE4A9F614B35D980C0161C5320183E436E8C35B5(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mAFF3DCA2567A2A45877C16E0E4A94A91EF3BF396_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tD019493A2CC7D8A430521F76A86DB64F84BA09B2* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m34E21255210956EDB2FE229E0E32D3CAB0AEB09C(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* List_1_ToArray_m007BAF8AEE7DE1FCB4EE7B650A3CC73BFE15B809_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_1 = ((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_3 = (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)(ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_4 = __this->____items;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m4CEA2CFCF80246789857C1083C6EEE2E6B20E95E_gshared (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_6;
				L_6 = InterfaceFuncInvoker0< ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mFEA07E1194C274F7550DAF962E83B2D4C1B46CD5(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m86445141321F364A34905F5885B653FCE0B43198_gshared (const RuntimeMethod* method) 
{
	{
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_0 = (ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)(ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m5C784464AC22797CBB0E6509E935D29AC8B120EE_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_0 = ((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0469DD36574E7D910F5BFD5A6A709DC9B84BD9E7_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_2 = ((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_4 = (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)(MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0C3892EFDFF009975617201EFD4B88A7EADB5402_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_6 = ((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_8 = (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)(MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_12 = ((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m2FD7B5C635A3FF909B80C6282710C7612B8F323A(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m40F3D7E13C01DB9F625E3A1989BE63DA78D57CC1_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_6 = (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)(MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_8 = __this->____items;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_12 = ((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mED1C9C6AB24C14ECAD0D9BDEFE5031094799A270_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mA31BC34A1DD5117E792E5824A907A91BDA0DA610_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m7CFBDEBA0757B5ED0058E0DE616D0537B372E97E_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 List_1_get_Item_m4F5283BFCDBF0D7CCD75D45AE8483B471035791B_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mC25CC3030B4D3F39F4F7ABEA66369052009EDAEF_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7));
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m0A62579296E241E826E7ABF821CD745B230C5811_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_1;
		L_1 = List_1_get_Item_m4F5283BFCDBF0D7CCD75D45AE8483B471035791B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mAD903B1373FED876A77C544F48AF11BA88F65406_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mCD7BB12C293680B4CE5DEB271461AEBC00E6223B(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_mC25CC3030B4D3F39F4F7ABEA66369052009EDAEF(__this, L_1, ((*(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)((MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m92EF7CE180DADBE3123A86EDB1F4D04EF6A5FA62_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) 
{
	MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_6 = V_0;
		int32_t L_7 = V_1;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_8);
		return;
	}

IL_0034:
	{
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_9 = ___0_item;
		List_1_AddWithResize_m16FFDD35B569CC4568B287BD759EE79013DCD570(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m16FFDD35B569CC4568B287BD759EE79013DCD570_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = __this->____items;
		int32_t L_4 = V_0;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mF227051769C1BEA0484DE4078F7D3311D3E66DDE_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mCD7BB12C293680B4CE5DEB271461AEBC00E6223B(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m92EF7CE180DADBE3123A86EDB1F4D04EF6A5FA62_inline(__this, ((*(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)((MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mEB071BFA9DAADA9D2C701C54008AB29AB881D117_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m59316DFD9FB94C17D399DFDDC73F28ECAD6A66E5(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mEFE5DA00FD5F515F585922BC270339835FA96977_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m7C4E1BB32EAA20036979BF8FE6A8730E49D74EC3_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mB27456718124B7FE3936CE1C8A98619593C715AF_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m7C4E1BB32EAA20036979BF8FE6A8730E49D74EC3(__this, ((*(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)((MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m9C8BC645727D6D3F67F98131B45F7F5AD45DBD61_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, const RuntimeMethod* method) 
{
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_0 = ___0_array;
		List_1_CopyTo_mFDC00F07C9F3CA8F131C0388D09638FA79A2C3DA(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m0BF9B7C61458BB214A39BFFB3B9292D5CA1F8F5A_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mFDC00F07C9F3CA8F131C0388D09638FA79A2C3DA_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_0 = __this->____items;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m40F3D7E13C01DB9F625E3A1989BE63DA78D57CC1(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mA17EA068949B66951A70F9FA56249E936FDEEFA5_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m01F527072A9C8F41783B0537671822CDF8D2BA84(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m01F527072A9C8F41783B0537671822CDF8D2BA84_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mE17619828966336C714CCD37FE06C6B9FF639402(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE17619828966336C714CCD37FE06C6B9FF639402_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_10 = ___2_match;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 List_1_GetEnumerator_mED3A888015D3BB6AADF6E2FAA9C13E05407B063F_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDD65FC7F19364C3C2AA963ADCBA799B2D3193750((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22C010135D1ED101AE6671FEF9FA9965502D2673_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDD65FC7F19364C3C2AA963ADCBA799B2D3193750((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC7A293A6F47DB51BDE15427C21365B551FF71DA2_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mDD65FC7F19364C3C2AA963ADCBA799B2D3193750((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t4585E0A0E614A4BEE60FEA274F8E553C1C77DEE4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) 
{
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_0 = __this->____items;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mFAD8EC369EAFFDBE2644C680A8C653BE0233F320(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mD4FE6BE0A5496832DA1D7E8B76837CD3C43D61FF_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32(__this, ((*(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)((MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m3C23D3B5B61C9641E8FB7FEC69D3D99F4067E95F_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m6E12BFFED0799F6A36DCF3A6E42CDAB498CA4AAE_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mCD7BB12C293680B4CE5DEB271461AEBC00E6223B(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m3C23D3B5B61C9641E8FB7FEC69D3D99F4067E95F(__this, L_1, ((*(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)((MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m59316DFD9FB94C17D399DFDDC73F28ECAD6A66E5_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_20 = __this->____items;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_45;
				L_45 = InterfaceFuncInvoker0< MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_m3C23D3B5B61C9641E8FB7FEC69D3D99F4067E95F(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m2FD7B5C635A3FF909B80C6282710C7612B8F323A(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4C1CB807C55963BE0C7FB39CE9B8C3A821583786_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mE6A7D5A8C2E6B8FABC4D4113D7CDB2B983BDAA32(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m00117E29C91602FA18AAE2B243122D1CF8CC093A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m22061794CAF3325D5AFCA8ABC4173870FE45965A_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m43D45D6C9D454FA2EA123ADEF817AEE948C5EE7D(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4C1CB807C55963BE0C7FB39CE9B8C3A821583786(__this, ((*(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)((MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m670762E4372D42D40FB404006C49B2E30ADBCB9E_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_4 = ___0_match;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* L_16 = ___0_match;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m00117E29C91602FA18AAE2B243122D1CF8CC093A_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7));
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m49177F3EC5200C7FF4A380EE19968D0C95C9A405_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m54FA25A278E576A6B7D71E0E3BB9D27EFEF8D836_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mB789AD9DE679B98B244C46DDA84601C91BBDC745(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB789AD9DE679B98B244C46DDA84601C91BBDC745_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_mC2C7ADE290B43480C5AA8F172E7DB833AE946D49(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFB5F4E1FFE56A1D912EF4194D9C7670D34D1960C_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m270E1867C09EBB2482219DC72A525E956951F278(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m270E1867C09EBB2482219DC72A525E956951F278_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisMapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7_m2B68559730F1ACE0DBE1D70382CF5D153AE035C0(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF69FED9E56DE729B736DE676F0C707E6A71A918C_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tAF8F6F676B797D86D81BB1150D7D4A6DF8FA81A4* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_mAB079B992C725F6BECE702BD3E0380F123E1D7EB(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* List_1_ToArray_m5A8C17D9A1C27514D8509355CF18923943AB2B9B_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_1 = ((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_3 = (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)(MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_4 = __this->____items;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m2FD7B5C635A3FF909B80C6282710C7612B8F323A_gshared (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_6;
				L_6 = InterfaceFuncInvoker0< MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m0C5A4A0C30876A73AF8D24B04DD9EDD2B9D5760D(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m91E543540442361FF8F991BD718498A3AAA9DEAA_gshared (const RuntimeMethod* method) 
{
	{
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_0 = (MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)(MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7E96FE86519334BAB0B856C18ACB490B91E293A7_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0492DC86079018970039CAA2500E739297E831D8_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = ((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC3136421FDE22BA32CD6A17D956A3AF0634F6601_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = ((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12 = ((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mAE2B0C87F768F4DFAA803D2E47567222B93B36C7(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mADC99C1FF0D43662CA011BF63EB54FBC50DCE929_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = __this->____items;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12 = ((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mCA14BFC9EFA2DC02388FB095023740A6DB6181F7_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m2C0734FCBE779117B472C48289BCBD87CF88775E_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mC4D0B4E7CDB16C0276973E1C99D5C53DCAD7BA79_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 List_1_get_Item_m7ECA8E19707EB7795F4BC62BE1D6B35C34B5DF42_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m8F3347D8126C5E6B6F8517F240C26037AF221A65_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mCF6E01FAD1C740F1596E199ED335A52D5E2B902A_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = List_1_get_Item_m7ECA8E19707EB7795F4BC62BE1D6B35C34B5DF42(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mADC411AF7FEB6504EACC1A441FBC47293AB5F86B_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m8F3347D8126C5E6B6F8517F240C26037AF221A65(__this, L_1, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m64F9F4C32CDD01D323D17E7A61A97EB924206093_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = V_0;
		int32_t L_7 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_8);
		return;
	}

IL_0034:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ___0_item;
		List_1_AddWithResize_mC73ADA51A91004EB3319A9DB14B5DE13D642C90F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mC73ADA51A91004EB3319A9DB14B5DE13D642C90F_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m586101D579F5BF95379C6CD0D1FB07F8D78F25B1_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m64F9F4C32CDD01D323D17E7A61A97EB924206093_inline(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m927D241A08E11923EA2DFEBB74FFEB3BB4E9B51B_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m39C05FB9442FF9AE1BFF9D9BA6981EFEE4915275(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m4F37CEBAD8C743CA95E08E9B63BD651EBA702782_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m490F96EE94C1D248CDA59F81CFDB06FAD7E6DBE2_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m2D6A8C7E15FE18B78BB5FDD547AB92DE5C55B71A_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m490F96EE94C1D248CDA59F81CFDB06FAD7E6DBE2(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mAA95C19B7C65438F3ECD9F15CC3DA3B39174FEE9_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___0_array;
		List_1_CopyTo_mB915B2F3975D3AFDBD665B01865206DAD79286CB(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB957B6B02C38CE275BC4A35FA830D66D7F08D9BE_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mB915B2F3975D3AFDBD665B01865206DAD79286CB_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->____items;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mADC99C1FF0D43662CA011BF63EB54FBC50DCE929(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m87F782B80EA42D8EAC2F3C17CA5CA7C9FCA2C472_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mF5CE6664FAC83919E0A1A4061BEE38A5C2224D44(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mF5CE6664FAC83919E0A1A4061BEE38A5C2224D44_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m0B34C3FF8AA822F64ABBB4EBA1599B7A9F836851(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m0B34C3FF8AA822F64ABBB4EBA1599B7A9F836851_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_10 = ___2_match;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA List_1_GetEnumerator_m9B5BFC3D26CC636D4C315D21344635BDE8B59FD7_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m11FF44E94EC66D7385574292079D8C9B0F3AB8F1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB4A0F6B0F26FDF2E6F1D7063E7FF51189EB8C720_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m11FF44E94EC66D7385574292079D8C9B0F3AB8F1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mB7166592B9D82F211EEC4898AF5E2E5420F55394_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m11FF44E94EC66D7385574292079D8C9B0F3AB8F1((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t0708A10198D473CB0CD52EFC19C37A08B3CB89CA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->____items;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3A242FDE2C2E163ED17EC1A7D8E8A3989607DFBB(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m2015E298F651F315BFB0F0119D3E611A4E47408B_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m1CEB6D8F18FD9BB098E295A1F35F1FF3A4C93B85_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m2FFD670DBD175B86937B8B77A9B092CB96BF5624_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m1CEB6D8F18FD9BB098E295A1F35F1FF3A4C93B85(__this, L_1, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m39C05FB9442FF9AE1BFF9D9BA6981EFEE4915275_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_20 = __this->____items;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_45;
				L_45 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_m1CEB6D8F18FD9BB098E295A1F35F1FF3A4C93B85(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mAE2B0C87F768F4DFAA803D2E47567222B93B36C7(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mBBBA23C9534D57FAF0D64F2665DE0B3C38E721DC_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mB68AAD8879DD0A1FC05AF232CD379C523CE882BB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mA178AE64083A1AD3E08153E629F3119E54DA4F18(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m0C11C928924AB68C7E7FD32C9490DB0D65620E6C_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mB4D2292A52D35EA3AEEFC3C167DA47293A9356AD(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mBBBA23C9534D57FAF0D64F2665DE0B3C38E721DC(__this, ((*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mAB734648988B3E0CFD887FC6A2DF7ADADC477280_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_4 = ___0_match;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* L_16 = ___0_match;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA178AE64083A1AD3E08153E629F3119E54DA4F18_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m561F70F1BEE333B5719AC18BE36C2BF4BF0A24CF_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3C569EBB5FB476E63CE193B00BF845F9A94A0846_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mE2586031F4BF52DB1AC8D0E1E1D218913B399190(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mE2586031F4BF52DB1AC8D0E1E1D218913B399190_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF4C21EEA52149C3C7E8BF43D9D13B097922E3EF9(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mE8D4CE38C20C975E02F8DEA13370D9BE3AB2B2ED_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m6A1FB357C1BCE9953C61F766F92AEC8BBF2CF97E(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m6A1FB357C1BCE9953C61F766F92AEC8BBF2CF97E_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m431F56DDCE87CEC08626A72DE2169B70CEFADCAD(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3B14494A10BF5511292DDA12CA4259B9D6153E1A_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t4B1AB5052FF19F3AB21AC368E41C36B2716CAC3B* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_mCE7CC939434D0933B11E309F889C5C00B1C83F46(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* List_1_ToArray_m83B0C7AEEDAD95865403D58AA176244CB8887326_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = ((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_3 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = __this->____items;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mAE2B0C87F768F4DFAA803D2E47567222B93B36C7_gshared (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
				L_6 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m3A7D3915F231AEF8B9F8D990A167FF18288B3F46(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m6C2141D9DFA4A90CA98D663762DAEB58B4E4DD9C_gshared (const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m49DBCC449BC3304A3B6144768F836078C8280D8F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m6785B4B320F35B6D5C0D396DDA90168F4A720A80_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_mE9D45E28E97F7F221F6C407E048C8AFAA66E6647_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		RuntimeObject* L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mA16AEEE513931A1F6B7E2E879B5000186ADDF9CD_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		RuntimeObject* L_1;
		L_1 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m378A583B6ABD929C885A270D70D5CAEF2FC728A9_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		RuntimeObject* L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mFDD792FAEB50E998B498C5082CCE1203B51CD20D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mFF1DD68BFF34C5CD7693D70DBB3E36B44ED2AD76_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m7D6AA655BACB66B136908375A600DF5FB2C80B5F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mD826E33A9E5EBC19C714653217071790693E0B95(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mE124D5A8B431C8B9B4C77EA23AD8B4C543829643_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m9875FFE328FA833B2617915FF976DEDA4724EBC3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m2E36D7828A12EC36948A76FEFD20CF459D89467E(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m2E36D7828A12EC36948A76FEFD20CF459D89467E_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_10 = ___2_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A110D28B34507C23474622BC01CD205DD04684C_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mC65F2E69508537CAEE5F7297FF628592DF247196_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m540236388ED02DCFB606983FBE3A7C536408505E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m5714EFA2C05BD9FCE2C1B9F4D12B8B8E2ACEF9BC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		RuntimeObject* L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mD38B1EE6D7CF56FA397CF7CE0821CDEC6E0B3E78_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(__this, L_1, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m386ABA9B2C4950D31E787C87CDEF3D3E103F1B1A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				RuntimeObject* L_45;
				L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m74B10668D8142FF08C21D9EE75765AEB0E762A92_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m639E8AB2F97E9764343E7A58C0C7297E11FB1F37(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m1A8DE2A7640CC473609F3ADAC38FDB960520636D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_4 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_16 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (RuntimeObject*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (RuntimeObject*)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m3A8BEF4194B03E75859F94B4EE2F54045AF98708_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mA271B5B013C60CD038FA95C13BB2B5F09168D920_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisRuntimeObject_m06FF2E5011A594BEE1AF5EC3AEA51997A9812FE1(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4204C143D97E871DF2553329CFB0FBE3CD1A01F2_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC96F92ACF35F9B37F0A5E3338FF61E5229554338_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisRuntimeObject_mF8C07FB088390BE91CF3D4F9C8C4AC052B3FBCBA(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEB3B61CB86B1419919338B0668DC4E568C2FFF93_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m1D1E1B0D0C13AF3B0C1B76665039738BFFE3125A(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m76C85811BC9C905E7224C054AD480C3062FA7700_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m6511331DC6EE293A9C3CED45A7079E09128EFA2D(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				RuntimeObject* L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m4C197A153076A17E0758C854773B02793337637A_gshared (const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m8EB9351A6F68DD869C299DBF0C8C7A69CCF8C705_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC0218BA49E1744144236F75FC085D9599488BF05_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = ((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE9D9145FD48C51D805D2BA28D01FBC2B5B71A1E1_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m7FA36B88E4A9EF847A8949EBA76F584EB0E905D0(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mEA27395CC2723618924E0C7B35EF5DEF13BF96BD_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = __this->____items;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = ((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m7466EA45A7B2A956B97E1D5F47A093AE9017897C_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mB3F308289EE1BBDED55A28FC0E8C0349D9AD849F_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m4CE8070B26A92581D111FA2BC3F2570BD1EC01C6_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t List_1_get_Item_mC8F1627962201B31BACD3E44D76C96EBB42B5E34_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7EEC06994B2D7CB305230F338D6C644858890A9B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int8_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		int8_t L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int8_t)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
		int8_t L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mE96B7638A48235ADE06E83557D366019ED71108A_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int8_t L_1;
		L_1 = List_1_get_Item_mC8F1627962201B31BACD3E44D76C96EBB42B5E34(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		int8_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mFA4F72927C0612B030C64A6C1CE155A704FD697B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m7EEC06994B2D7CB305230F338D6C644858890A9B(__this, L_1, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = V_0;
		int32_t L_7 = V_1;
		int8_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int8_t)L_8);
		return;
	}

IL_0034:
	{
		int8_t L_9 = ___0_item;
		List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = __this->____items;
		int32_t L_4 = V_0;
		int8_t L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int8_t)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m5C742826588B0A1CC5807DF36D9F33D80137E811_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_inline(__this, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6C8D7B267C4A6B939A2F2D0EA195501C3A6A5F6E_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mDE5CF8A3237B218D5EE1187641F803A214A4AFF7(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mAFE35B921F7BB655F06880EC17D78B329D508A71_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4FA09CFD8E3D62EEC7585357B55EFD427AE18C43_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int8_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mD43611F56314B212804596311E6411A2E8970561_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m4FA09CFD8E3D62EEC7585357B55EFD427AE18C43(__this, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mA08C892AAB55C0ED8CAC94E532B74C1F0B78BF73_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, const RuntimeMethod* method) 
{
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = ___0_array;
		List_1_CopyTo_m07575FC4FF6BED54C910457FE0176D128A11A8D3(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m3ABA584EEF221D71F53B3586417D8F3DF6050B8D_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m07575FC4FF6BED54C910457FE0176D128A11A8D3_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->____items;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mEA27395CC2723618924E0C7B35EF5DEF13BF96BD(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m22C222575D35FF9968B8C1CCEA0979AE9617B0C3_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m44AF47C8B71DF4ECE9E2068C443807A680BEBF0B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m44AF47C8B71DF4ECE9E2068C443807A680BEBF0B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_m254686ACF02582C0B49821FAFE89244631686F0B(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m254686ACF02582C0B49821FAFE89244631686F0B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_10 = ___2_match;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 List_1_GetEnumerator_m40B4CD83842C217E03A6E099042BFD841F9AB57B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mED2678F591A6A2B23B4D21643B129B4A1D905977((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE256568F9FC4CB7B882992BA1CD24501C3C0D309_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mED2678F591A6A2B23B4D21643B129B4A1D905977((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mE5BDEA229FD56A395B6371237E85EBCE98D25234_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mED2678F591A6A2B23B4D21643B129B4A1D905977((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t181E254BE04BED1101D24144AFAA151ADE1C02C5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = __this->____items;
		int8_t L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD6356D6E3B1AF2CD83E6EA48E4440E0E44AA11E5(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mE10468EF4FADC3D04544D099E97B04379EF3ACE8_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E(__this, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m04A00FE56918CD2400EC56B9C4E6641FA9F1E5E9_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int8_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		int8_t L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (int8_t)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mB1A01D81D1AFEC5EF91631E01CFC3D276D121053_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m04A00FE56918CD2400EC56B9C4E6641FA9F1E5E9(__this, L_1, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mDE5CF8A3237B218D5EE1187641F803A214A4AFF7_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_20 = __this->____items;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				int8_t L_45;
				L_45 = InterfaceFuncInvoker0< int8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_m04A00FE56918CD2400EC56B9C4E6641FA9F1E5E9(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m7FA36B88E4A9EF847A8949EBA76F584EB0E905D0(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mCB6B303513E6FFD412CEE0B6991DCC33D71FA00E_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int8_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m8E6255447CEC43623E6B2EB2200813E9ECBEAB9E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m70F883569657823D114157579B983983E86962A0(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mEE0491793176B766A037E36C8968D22E45BFCAAB_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m2D142B0B8507E0FC935A48ECDD3EC78C2B57C99A(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mCB6B303513E6FFD412CEE0B6991DCC33D71FA00E(__this, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m5B5FB96B6951A2B9054D6231DEB22063033E3060_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_4 = ___0_match;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* L_16 = ___0_match;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		int8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		int8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int8_t)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m70F883569657823D114157579B983983E86962A0_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m211D6DCF5F176411148783EADDD86BCD6D656870_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m32070045B2CBDE08CDF8A28CA85078384AF91278_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m75EBD95C73368E3DDABD2F76A61B02592AFD5398(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m75EBD95C73368E3DDABD2F76A61B02592AFD5398_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m75AAFED2BB1872BF45B18BD54C867B8EA15B4BD9(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m460D8247DDC6C3CDD9D89FC845AF806019040D66_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_m04C25FEDEA89E45339617B284090C688AE4CD93B(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m04C25FEDEA89E45339617B284090C688AE4CD93B_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA704A3BB3ECE434AB3254E47B932C4551861A8CB(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m59FDC5426005022A4EEC8706FEB165761E215F84_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tDCADC9B1369BC18C2329F00AACA3F268F5DFBE96* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_mCEDAD9A8A7FF8E35C8F6A5698BEF68783457C60D(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* List_1_ToArray_mEF4322709776EDCAD8991E113A7B507FFD1B29A8_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = ((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = __this->____items;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m7FA36B88E4A9EF847A8949EBA76F584EB0E905D0_gshared (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				int8_t L_6;
				L_6 = InterfaceFuncInvoker0< int8_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m022B8AB5A594D9B81B129065C6AF0D3C35F38CCF(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				int8_t L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int8_t)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_m37A6103D93E1D9ACEADAA66A6282AB0E944CE5BA_gshared (const RuntimeMethod* method) 
{
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3F886C476FAC47C7E0B22BBEFA863E6E28CB6967_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m14CBA0E79745928530A7F91F920E3B29BF5977C2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m81521F85F116B00354BB0F726158451F3F1543F8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_4, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF063A5AC0A6B869965B78A300A210C77D7D85A9E_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m9468A95C180AB56C22EF37B808E722B82FA5DA1D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m0F05BC227468EA87CF5E5E2D0707EFEDD6DB1D48_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m16AFA75CCE3355CE51D428B0931951485666BF3D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)))));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_5 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_5, L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_8;
		L_8 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m20FD9B23AB202EAE6A3EBD3271A64B10BB21C5D9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m9632CAFAB9E06DBDE71886CC36E6C910F8350F9C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mAAA2256D3B50B6A712DFB270B01B470759AB4FE9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m5180D7A430072A21034A0692CDD1D565ADEE2ABB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m0116C3A6AF6FB7DCF2E909AD859A0ADC86A60C66_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)))(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mE810B96CFE4683761086D777FD5947FA66EA9255_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_1 = ___0_match;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m63AAB8CE007CDF25CF1952FBF0F1FF7234695BD0_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___2_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_10 = ___2_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_10);
		bool L_15;
		L_15 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_14: *(void**)L_14));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mF8AB18BC6656CC469BFB6E837C001C2DE0833859_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m83A6D1115899BF6BA842C33FE41FAD8D6EB43ED9_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29));
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_0 = alloca(SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
	{
		memset(L_0, 0, SizeOf_Enumerator_t4982EA6BF5A270D5544CF8876DE60B125EDF8FB9);
		Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m1FFA888B47CE3256B0AC301302FAD79AAAFC0818_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mF0601617A54C360278652B7AEE34E69F21B5ADDA_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB8862677E04375531A30F3EC07AC2372FCE61F55_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_item : &___1_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m3A5BCE3337DF64C89354C0CDF5DB4EE39A30BCA7_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m729639E2C8D1AA7579AC78D259085921E7DC72F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_45 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44, (Il2CppFullySharedGenericAny*)L_45);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), __this, L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_45: *(void**)L_45));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m69B0EB46209420A0DF794AE7598F8C3E02515509_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m64ACE8FD442E00A79160BB070C0133B43A8C4075_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_20 = L_8;
	const Il2CppFullySharedGenericAny L_31 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_4);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_16 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		il2cpp_codegen_memcpy(L_20, (L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_16);
		bool L_21;
		L_21 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_20: *(void**)L_20));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		il2cpp_codegen_memcpy(L_31, (L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_24);
		il2cpp_codegen_memcpy((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), L_31, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		bool L_34;
		L_34 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_34)
		{
			goto IL_00ad;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
	}

IL_00ad:
	{
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_0, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		bool L_11;
		L_11 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
	}

IL_0063:
	{
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		bool L_19;
		L_19 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = __this->____items;
		int32_t L_21 = __this->____size;
		int32_t L_22 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, L_21, L_22, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m31924FC6445F9A1633DA40A8930F89E271B477F2_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)))(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m4F224F8A44C29751CCF7ED914FC00BFE7F27CD01_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)))(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mCBEFEE4479438557E591F7AEF3BFDE2297DA269D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m851B4290E563560C0037434A52D469666ABDE79D_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mF939EF9300267AF108323ABAECB490A27894309B_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Comparison_1_tE94B5C4AE59DE10B7A54AD7C3291462A05D5CD49*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mFD4E2919839A27C7CEACADF62222C63701302D02_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_14 = L_6;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	memset(V_1, 0, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5, (Il2CppFullySharedGenericAny*)L_6);
				il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				int32_t L_7 = __this->____size;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				il2cpp_codegen_memcpy(L_14, V_1, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				NullCheck(L_10);
				il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mFBD61154F711CE4EF252AA0B8B504EFC3E7E5B37_gshared (const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF5CCF832B2A17822B9C64E78D9814190165C1D7B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3F4723F3305F67834CE85E425907F53C7AB30484_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m704785946C26F21A75CF1D70A2DF69E177349DEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mBED108A047B825499042EC8A2431574F954E5A1E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m6C1F6CE05082E4FB4A2F6D416FC3061FDDA22A58_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m220D863F6533A08A7363BF166DA7009AD0717998_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m1E70F596E00E1A551FAA8FBC581829AC9F9C5380_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1;
		L_1 = List_1_get_Item_mB65D799560ADD289EA08E717412A24EFADA7FB57(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m1DA92BD10C1F7E8C92A5ADDC41B5B59E38B45DEC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m7533012D6C4CE083D5CAF670259B97F6D5D506F4(__this, L_1, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = V_0;
		int32_t L_7 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_8);
		return;
	}

IL_0034:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_9 = ___0_item;
		List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		int32_t L_4 = V_0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mAC1736DC5831C59BD64FC09C14F03AF5B9802CBF_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_inline(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m4C28D7F5EE927CF1E9858BE460EA4DFB7F5D3AFA_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mFCE2A5F0F23BC41E5B1E6F8ABA41D99A8A5AABA9_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m04EF9F1B5EB5475A55429F987420A7AE443BE0BB_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m590D7926DA2B45C95850710F87644BCD235F1A70(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m901F0963BA82CF65FCD89C086C5D7B3ABA3765C2_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = ___0_array;
		List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mB2933E53E11C20CD8D22EF6328C1D9FB7595BA9E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96F4BF1E6FF691338A44AAB62506964ACAD70715_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mC49015D45A78A39909C4541BDB84DAA369E6A4C1(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m9910BF16382C28911B35AB614F364FD591C08867_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m8E32928E07448E4DE50B13A27ABDF776DE8F4DDD(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m8E32928E07448E4DE50B13A27ABDF776DE8F4DDD_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mA5DDCB0CBD1B539DB3213A4B3AE1C72E519C98A8(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mA5DDCB0CBD1B539DB3213A4B3AE1C72E519C98A8_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_10 = ___2_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 List_1_GetEnumerator_mBE57F88655594CAF946932CCDC95E8773FC4C4A6_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8956517C0AA90A843C73167BF6CF0156995ADB13_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m8D77CF72C1A81595B4557A40BD1877C3EC630AA3_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAD56839187542C3B25E2C1493BBD62861333E4E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 29), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = __this->____items;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m972A3CE5298A6193E512B34C64201444B051D8E9(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m3FAB7DEDF1376DCB40FF595ECE24A82D09D133E9_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m22B1E1E9ABC66027ABDF98D71BAC7AE153F67C15_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1(__this, L_1, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m9AA9E2C5627FB6CD9F3493CA8A99588EDA08125D_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_20 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_45;
				L_45 = InterfaceFuncInvoker0< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_44);
				List_1_Insert_mF138D66498A5DE06E21A7149C35FA14729F4F5E1(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mFA6A5CD427374237339591ED8A5218B6E7EA7F4C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m2E22ECF19C2591E73B083E2B26EED5B2E4B8B3BB_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mA2F95E82C59734A475035EF3B9DD4BCE9F8429DB(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m02DCEAFFE826B31F80767A9D191CB4587D82F7BC(__this, ((*(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 37));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m99F96CEBE01EC91E6838BFE939CF7B3C41D67CAE_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_4 = ___0_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* L_16 = ___0_match;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m30CC1D4CA1984DCAEDBCD2228B538A0503AF854A_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mC34416B52737986556034E2111A5817EDEE0C189_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFF087DD699EA7B98F8636ED593ED83D64ABE078F_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m5903E8D5CE5B92A29530763E182314BDFA781664_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mDCB49D07F30FD9D952124968159FDF346234BD04(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC839D031A5AAA84A68243F93E39544BA3A966203_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mEBED487B845A66E3298CA30654B7EC17F7481995_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m438D9EDDBF93A09C81E89458C2362F85487923EC(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m014D10ACC5ECFB795A9812357A6AD9FFF19F3C47_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tC8BBA462D5337723AC34773EEE343018753C7FF3* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		ArraySortHelper_1_Sort_m4A8362BBA870329F45001F17310B50E583BFF19F(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* List_1_ToArray_m5E0DDBEF3289BA470AD71416C050605CE275FF3B_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = ((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_3 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = __this->____items;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mA6E73354873BEAC5429A80AE43CB210589A7EC7E_gshared (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_6;
				L_6 = InterfaceFuncInvoker0< OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mB6EB012362AA419CAA8BF0C488F1010486273A69(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mBA1A334B4DB00D75CD4BF205DE68E28F92477FF0_gshared (const RuntimeMethod* method) 
{
	{
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_0 = (OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)(OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m81BBD1307381D9B08C53E3F710A62740F66B7F9C_gshared_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, int16_t ___0_item, const RuntimeMethod* method) 
{
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = V_0;
		int32_t L_7 = V_1;
		int16_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int16_t)L_8);
		return;
	}

IL_0034:
	{
		int16_t L_9 = ___0_item;
		List_1_AddWithResize_m6290E6289A474864D04F1A97C124B8AE3AC05C2F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6613E697D868C3B9CDFB324EDF372BD759E3B492_gshared_inline (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m35A69C8C7305E998E90AD20D3A046E9D6E7A3E53_gshared_inline (Predicate_1_tF5C5F9F2C3CFB2FA0A40089B46C80C8B21D9ADCB* __this, int16_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int16_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_m378B392086AAB6F400944FA9839516326B3F7BB8(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m809450298141D527D3A4FFAF77AE69D9B08CC17F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		List_1_AddWithResize_mAD159B09F28BD7914562E219CA52E2D4BDCF5530(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9080410FAF175EB3313FCE9515BA3A9D8E11718F_gshared_inline (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5B6D9B27ED3425725CEAEF21923F024DA9BB2880_gshared_inline (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_item, const RuntimeMethod* method) 
{
	ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ItemAutoU5BU5D_t26F23199F29409A4B00448979862E59D94A79649* L_6 = V_0;
		int32_t L_7 = V_1;
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97)L_8);
		return;
	}

IL_0034:
	{
		ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 L_9 = ___0_item;
		List_1_AddWithResize_mD354BFCE55D77CC25687AD1A52E4BDE1E8A1B34B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m71897C04D0CBCAA6C6996E6CB0E13A3949DD3E86_gshared_inline (List_1_t0E1EA0BF7D6245274C57F11AC807280758A5A410* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m9824913091D843421817A068B6E55E42D844014F_gshared_inline (Predicate_1_t14708D0F69653064D075FCCD0B61807D9D22A365* __this, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ItemAuto_tD46238D9F777A771974BF146F8E5EFB1A4838F97, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA942CDC549C207A9D6777348B426A207CC1C173A_gshared_inline (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_item, const RuntimeMethod* method) 
{
	ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ItemAutoFilterU5BU5D_tFD0BEF396311344B8C619B59021533C22878858F* L_6 = V_0;
		int32_t L_7 = V_1;
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB)L_8);
		return;
	}

IL_0034:
	{
		ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB L_9 = ___0_item;
		List_1_AddWithResize_m78E326D36965A9E9B65DA03CB5F4104717469B0E(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m649551FB3674AACE0EBD8AE0BC80001490D65CDB_gshared_inline (List_1_tE7173D00E71B8EF99FA4309558085D7C5A0C0456* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4453E9419CD2D8EA84FDD1D755AD0DFFFDB960CC_gshared_inline (Predicate_1_t0A0FB3B608CC773402EBDC5D1793290B188973B8* __this, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ItemAutoFilter_t701E3221BE18CBAE5A086A0B9103E11E91D101BB, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m92EF7CE180DADBE3123A86EDB1F4D04EF6A5FA62_gshared_inline (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_item, const RuntimeMethod* method) 
{
	MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MapNextU5BU5D_t3E7688510C3FD319541C9BA14F7ABC21771FFFA5* L_6 = V_0;
		int32_t L_7 = V_1;
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7)L_8);
		return;
	}

IL_0034:
	{
		MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 L_9 = ___0_item;
		List_1_AddWithResize_m16FFDD35B569CC4568B287BD759EE79013DCD570(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mDD43D985CB2D59EB0CE4D09F8AC4E1FAA56F1846_gshared_inline (List_1_tFE56BE6D368C129A73C1252F189A6FF45C9782AE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m96EDF636B9618FFAB50BBB10187069B261AA498D_gshared_inline (Predicate_1_t1E92DF8AA9A4DB5F516E92028E0703C1F5A11841* __this, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, MapNext_t8F01D921D8637DF25E405084F1D93AB4998F3EC7, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m64F9F4C32CDD01D323D17E7A61A97EB924206093_gshared_inline (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_item, const RuntimeMethod* method) 
{
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_6 = V_0;
		int32_t L_7 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_8);
		return;
	}

IL_0034:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = ___0_item;
		List_1_AddWithResize_mC73ADA51A91004EB3319A9DB14B5DE13D642C90F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB4630AF5172B995D13B8273D4D085E21586ADC27_gshared_inline (List_1_tCFA270E118B873F542F52B1DD58F21D0AF4D1452* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mBE8E1B5816099520B22E8AFAE2C62F912880C226_gshared_inline (Predicate_1_t4C407F62BAC454EA127AEFFEA4CB1B00FBC8E788* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m04F176EA8186E88FAFF51B4EF27D6C9C3F47F6BC_gshared_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, int8_t ___0_item, const RuntimeMethod* method) 
{
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = V_0;
		int32_t L_7 = V_1;
		int8_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int8_t)L_8);
		return;
	}

IL_0034:
	{
		int8_t L_9 = ___0_item;
		List_1_AddWithResize_mD40069B8E79AD08DC58EE9F92D1C045D1C86BCA6(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mB46B4B95008F625FCD0BB3780C337B356CBF1E4D_gshared_inline (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mB3777C36AD912F3D8FEADC4EBE119B8AEE850D28_gshared_inline (Predicate_1_t335E1C5FF683D1333BBF66A6381A618BD07EAC9B* __this, int8_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int8_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB308EE5BFFD89A7B8C251644D76CA547456F3012_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_item, const RuntimeMethod* method) 
{
	OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		OrderBlockU5BU5D_tD67C39FB212889AFAAB991BE1AE144ED8D35EE88* L_6 = V_0;
		int32_t L_7 = V_1;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837)L_8);
		return;
	}

IL_0034:
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 L_9 = ___0_item;
		List_1_AddWithResize_m8B3D79788ADC2B54C9B12CC9EC1158E6A04CDEBC(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m905EB6FD0B91CEE1CC0165F1EBB8C1309AEE4BEC_gshared_inline (List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m182E0ACAA85455151F5750CE87F942DA6E3DD3D6_gshared_inline (Predicate_1_t8194F57B81937B278B5EFEF0F5B667BBB054B0D0* __this, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
