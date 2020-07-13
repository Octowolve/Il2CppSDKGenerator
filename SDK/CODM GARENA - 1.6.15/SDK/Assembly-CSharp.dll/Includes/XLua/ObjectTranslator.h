#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class ObjectTranslator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "ObjectTranslator"));
	}

	template <typename T = uintptr_t> static T& s_IniterAdderUnityEngineVector2_dumb_obj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& UnityEngineVector2_TypeID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& UnityEngineVector3_TypeID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& UnityEngineVector4_TypeID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& UnityEngineColor_TypeID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UnityEngineQuaternion_TypeID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& UnityEngineRay_TypeID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& UnityEngineBounds_TypeID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& UnityEngineRay2D_TypeID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& s_gen_reg_dumb_obj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& methodWrapsCache() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& objectCheckers() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& objectCasters() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& objects() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& reverseMap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& luaEnv() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& metaFunctions() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& assemblies() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& importTypeFunction() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& loadAssemblyFunction() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& castFunction() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& delayWrap() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& interfaceBridgeCreators() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& aliasCfg() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& loaded_types() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& cacheRef() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& genericAction() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& genericFunc() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& genericDelegateCreatorCache() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& delegate_bridges() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& common_array_meta() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& common_delegate_meta() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& enumerable_pairs_func() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& typeIdMap() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& typeMap() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& privateAccessibleFlags() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& enumMap() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& fix_cs_functions() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& custom_push_funcs() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& custom_get_funcs() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& custom_update_funcs() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& push_func_with_type() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& get_func_with_type() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& decimal_type_id() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& f__mg$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& f__mg$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> static T get_IniterAdderUnityEngineVector2_dumb_obj() {
		return ((T (*)(void *))(Il2CppBase() + 0xF543A0))(0);
	}
	template <typename T = void> T PushUnityEngineVector2(uintptr_t L, Il2CppVector2 val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0xC460C8))(this, L, val);
	}
	template <typename T = void> T Get(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1FB30))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineVector2(uintptr_t L, int32_t index, Il2CppVector2 val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, Il2CppVector2))(Il2CppBase() + 0xF549FC))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineVector3(uintptr_t L, Il2CppVector3 val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0xC25CF0))(this, L, val);
	}
	template <typename T = void> T Get_1(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC1F054))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineVector3(uintptr_t L, int32_t index, Il2CppVector3 val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0xF54C48))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineVector4(uintptr_t L, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC5EBB4))(this, L, val);
	}
	template <typename T = void> T Get_2(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC8A298))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineVector4(uintptr_t L, int32_t index, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF54E9C))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineColor(uintptr_t L, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC4F92C))(this, L, val);
	}
	template <typename T = void> T Get_3(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC4FC98))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineColor(uintptr_t L, int32_t index, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF550FC))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineQuaternion(uintptr_t L, Il2CppQuaternion val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, Il2CppQuaternion))(Il2CppBase() + 0xC521A0))(this, L, val);
	}
	template <typename T = void> T Get_4(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC523A0))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineQuaternion(uintptr_t L, int32_t index, Il2CppQuaternion val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, Il2CppQuaternion))(Il2CppBase() + 0xF5535C))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineRay(uintptr_t L, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF555BC))(this, L, val);
	}
	template <typename T = void> T Get_5(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xF557E0))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineRay(uintptr_t L, int32_t index, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF55A14))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineBounds(uintptr_t L, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC4EEC8))(this, L, val);
	}
	template <typename T = void> T Get_6(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xC50B70))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineBounds(uintptr_t L, int32_t index, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF55C90))(this, L, index, val);
	}
	template <typename T = void> T PushUnityEngineRay2D(uintptr_t L, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF55F0C))(this, L, val);
	}
	template <typename T = void> T Get_7(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xF56118))(this, L, index, val);
	}
	template <typename T = void> T UpdateUnityEngineRay2D(uintptr_t L, int32_t index, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF56344))(this, L, index, val);
	}
	template <typename T = uintptr_t> static T get_gen_reg_dumb_obj() {
		return ((T (*)(void *))(Il2CppBase() + 0xF565A4))(0);
	}
	template <typename T = void> T DelayWrapLoader(uintptr_t type, void* loader) {
		return ((T (*)(ObjectTranslator*, uintptr_t, void*))(Il2CppBase() + 0xC24438))(this, type, loader);
	}
	template <typename T = void> T AddInterfaceBridgeCreator(uintptr_t type, void* creator) {
		return ((T (*)(ObjectTranslator*, uintptr_t, void*))(Il2CppBase() + 0xC246FC))(this, type, creator);
	}
	template <typename T = bool> T TryDelayWrapLoader(uintptr_t L, uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF56654))(this, L, type);
	}
	template <typename T = void> T Alias(uintptr_t type, Il2CppString* alias) {
		return ((T (*)(ObjectTranslator*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF441EC))(this, type, alias);
	}
	template <typename T = void> T addAssemblieByName(void* assemblies_usorted, Il2CppString* name) {
		return ((T (*)(ObjectTranslator*, void*, Il2CppString*))(Il2CppBase() + 0xF53E14))(this, assemblies_usorted, name);
	}
	template <typename T = void> T initCSharpCallLua() {
		return ((T (*)(ObjectTranslator*))(Il2CppBase() + 0xF5439C))(this);
	}
	template <typename T = uintptr_t> T getDelegateUsingGeneric(uintptr_t bridge, uintptr_t delegateType, uintptr_t delegateMethod) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF57064))(this, bridge, delegateType, delegateMethod);
	}
	template <typename T = uintptr_t> T getDelegate(uintptr_t bridge, uintptr_t delegateType) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF580AC))(this, bridge, delegateType);
	}
	template <typename T = uintptr_t> T CreateDelegateBridge(uintptr_t L, uintptr_t delegateType, int32_t idx) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF4BF60))(this, L, delegateType, idx);
	}
	template <typename T = bool> T AllDelegateBridgeReleased() {
		return ((T (*)(ObjectTranslator*))(Il2CppBase() + 0xF45C14))(this);
	}
	template <typename T = void> T ReleaseLuaBase(uintptr_t L, int32_t reference, bool is_delegate) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, bool))(Il2CppBase() + 0xF3C098))(this, L, reference, is_delegate);
	}
	template <typename T = uintptr_t> T CreateInterfaceBridge(uintptr_t L, uintptr_t interfaceType, int32_t idx) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF4F49C))(this, L, interfaceType, idx);
	}
	template <typename T = void> T CreateArrayMetatable(uintptr_t L) {
		return ((T (*)(ObjectTranslator*, uintptr_t))(Il2CppBase() + 0xF44348))(this, L);
	}
	template <typename T = void> T CreateDelegateMetatable(uintptr_t L) {
		return ((T (*)(ObjectTranslator*, uintptr_t))(Il2CppBase() + 0xF447B8))(this, L);
	}
	template <typename T = void> T CreateEnumerablePairs(uintptr_t L) {
		return ((T (*)(ObjectTranslator*, uintptr_t))(Il2CppBase() + 0xF44C90))(this, L);
	}
	template <typename T = void> T OpenLib(uintptr_t L) {
		return ((T (*)(ObjectTranslator*, uintptr_t))(Il2CppBase() + 0xF43228))(this, L);
	}
	template <typename T = void> T createFunctionMetatable(uintptr_t L) {
		return ((T (*)(ObjectTranslator*, uintptr_t))(Il2CppBase() + 0xF43038))(this, L);
	}
	template <typename T = uintptr_t> T FindType(Il2CppString* className, bool isQualifiedName) {
		return ((T (*)(ObjectTranslator*, Il2CppString*, bool))(Il2CppBase() + 0xF56B7C))(this, className, isQualifiedName);
	}
	template <typename T = bool> T hasMethod(uintptr_t type, Il2CppString* methodName) {
		return ((T (*)(ObjectTranslator*, uintptr_t, Il2CppString*))(Il2CppBase() + 0xF585A4))(this, type, methodName);
	}
	template <typename T = void> T collectObject(int32_t obj_index_to_collect) {
		return ((T (*)(ObjectTranslator*, int32_t))(Il2CppBase() + 0xF586F0))(this, obj_index_to_collect);
	}
	template <typename T = int32_t> T addObject(uintptr_t obj, bool is_valuetype, bool is_enum) {
		return ((T (*)(ObjectTranslator*, uintptr_t, bool, bool))(Il2CppBase() + 0xF58898))(this, obj, is_valuetype, is_enum);
	}
	template <typename T = uintptr_t> T GetObject(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF4601C))(this, L, index);
	}
	template <typename T = uintptr_t> T GetTypeOf(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF53290))(this, L, idx);
	}
	template <typename T = bool> T Assignable(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0x45F1C98))(this, L, index);
	}
	template <typename T = bool> T Assignable_1(uintptr_t L, int32_t index, uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF51310))(this, L, index, type);
	}
	template <typename T = uintptr_t> T GetObject_1(uintptr_t L, int32_t index, uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xC22708))(this, L, index, type);
	}
	template <typename T = void> T Get_8(uintptr_t L, int32_t index, uintptr_t* v) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x3337358))(this, L, index, v);
	}
	template <typename T = void> T PushByType(uintptr_t L, uintptr_t v) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3344E94))(this, L, v);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetParams(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0x4E44330))(this, L, index);
	}
	template <typename T = uintptr_t> T GetParams_1(uintptr_t L, int32_t index, uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF58A24))(this, L, index, type);
	}
	template <typename T = uintptr_t> T GetDelegate(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0x4E41B84))(this, L, index);
	}
	template <typename T = int32_t> T GetTypeId(uintptr_t L, uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF58AD8))(this, L, type);
	}
	template <typename T = void> T PrivateAccessible(uintptr_t L, uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF58AFC))(this, L, type);
	}
	template <typename T = int32_t> T getTypeId(uintptr_t L, uintptr_t type, uintptr_t* is_first, uintptr_t log_level) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0xF54450))(this, L, type, is_first, log_level);
	}
	template <typename T = void> T pushPrimitive(uintptr_t L, uintptr_t o) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF58C28))(this, L, o);
	}
	template <typename T = void> T PushAny(uintptr_t L, uintptr_t o) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC25720))(this, L, o);
	}
	template <typename T = int32_t> T TranslateToEnumToTop(uintptr_t L, uintptr_t type, int32_t idx) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF593CC))(this, L, type, idx);
	}
	template <typename T = void> T Push(uintptr_t L, uintptr_t o) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF592B8))(this, L, o);
	}
	template <typename T = void> T Push_1(uintptr_t L, uintptr_t o) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF59554))(this, L, o);
	}
	template <typename T = void> T Push_2(uintptr_t L, uintptr_t o) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xC229EC))(this, L, o);
	}
	template <typename T = void> T PushObject(uintptr_t L, uintptr_t o, int32_t type_id) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xF59578))(this, L, o, type_id);
	}
	template <typename T = void> T Update(uintptr_t L, int32_t index, uintptr_t obj) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0xF596AC))(this, L, index, obj);
	}
	template <typename T = uintptr_t> T getCsObj(uintptr_t L, int32_t index, int32_t udata) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0xF59938))(this, L, index, udata);
	}
	template <typename T = uintptr_t> T SafeGetCSObj(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF4E0E0))(this, L, index);
	}
	template <typename T = uintptr_t> T FastGetCSObj(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF59B44))(this, L, index);
	}
	template <typename T = void> T ReleaseCSObj(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF59B7C))(this, L, index);
	}
	template <typename T = uintptr_t> T GetFixCSFunction(int32_t index) {
		return ((T (*)(ObjectTranslator*, int32_t))(Il2CppBase() + 0xF59C94))(this, index);
	}
	template <typename T = void> T PushFixCSFunction(uintptr_t L, uintptr_t func) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF59D34))(this, L, func);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T popValues(uintptr_t L, int32_t oldTop) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF45048))(this, L, oldTop);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T popValues_1(uintptr_t L, int32_t oldTop, Il2CppArray<uintptr_t>* popTypes) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF46B88))(this, L, oldTop, popTypes);
	}
	template <typename T = void> T registerCustomOp(uintptr_t type, uintptr_t push, uintptr_t get, uintptr_t update) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xF59E4C))(this, type, push, get, update);
	}
	template <typename T = bool> T HasCustomOp(uintptr_t type) {
		return ((T (*)(ObjectTranslator*, uintptr_t))(Il2CppBase() + 0xF59F7C))(this, type);
	}
	template <typename T = bool> T tryGetPushFuncByType(uintptr_t type, uintptr_t* func) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x45F272C))(this, type, func);
	}
	template <typename T = bool> T tryGetGetFuncByType(uintptr_t type, uintptr_t* func) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x45F1D88))(this, type, func);
	}
	template <typename T = void> T RegisterPushAndGetAndUpdate(void* push, void* get, void* update) {
		return ((T (*)(ObjectTranslator*, void*, void*, void*))(Il2CppBase() + 0x3346A78))(this, push, get, update);
	}
	template <typename T = void> T RegisterCaster(void* get) {
		return ((T (*)(ObjectTranslator*, void*))(Il2CppBase() + 0x334691C))(this, get);
	}
	template <typename T = void> T PushDecimal(uintptr_t L, uintptr_t val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, uintptr_t))(Il2CppBase() + 0xF590B4))(this, L, val);
	}
	template <typename T = bool> T IsDecimal(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF52894))(this, L, index);
	}
	template <typename T = uintptr_t> T GetDecimal(uintptr_t L, int32_t index) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0xF5A01C))(this, L, index);
	}
	template <typename T = void> T Get_9(uintptr_t L, int32_t index, uintptr_t* val) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0xD7E8B0))(this, L, index, val);
	}
	template <typename T = bool> static T getDelegateUsingGenericm__0(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A130))(0, m);
	}
	template <typename T = int32_t> static T getDelegateUsingGenericm__1(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A220))(0, m);
	}
	template <typename T = bool> static T getDelegateUsingGenericm__2(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A260))(0, m);
	}
	template <typename T = int32_t> static T getDelegateUsingGenericm__3(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A350))(0, m);
	}
	template <typename T = uintptr_t> static T getDelegateUsingGenericm__4(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A390))(0, x);
	}
	template <typename T = uintptr_t> static T getDelegateUsingGenericm__5(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A398))(0, x);
	}
	template <typename T = uintptr_t> static T getDelegateUsingGenericm__6(uintptr_t pinfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A3A0))(0, pinfo);
	}
	template <typename T = bool> static T getDelegatem__7(uintptr_t m) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF5A3D8))(0, m);
	}
	template <typename T = void> static T tryGetPushFuncByType_1m__8(uintptr_t L, unsigned char v) {
		return ((T (*)(void *, uintptr_t, unsigned char))(Il2CppBase() + 0x2842A7C))(0, L, v);
	}
	template <typename T = void> static T tryGetPushFuncByType_1m__9(uintptr_t L, signed char v) {
		return ((T (*)(void *, uintptr_t, signed char))(Il2CppBase() + 0x2842A88))(0, L, v);
	}
	template <typename T = void> static T tryGetPushFuncByType_1m__A(uintptr_t L, char v) {
		return ((T (*)(void *, uintptr_t, char))(Il2CppBase() + 0x2842A94))(0, L, v);
	}
	template <typename T = void> static T tryGetPushFuncByType_1m__B(uintptr_t L, int16_t v) {
		return ((T (*)(void *, uintptr_t, int16_t))(Il2CppBase() + 0x2842AA0))(0, L, v);
	}
	template <typename T = void> static T tryGetPushFuncByType_1m__C(uintptr_t L, uint16_t v) {
		return ((T (*)(void *, uintptr_t, uint16_t))(Il2CppBase() + 0x2842AAC))(0, L, v);
	}
	template <typename T = void> static T tryGetPushFuncByType_1m__D(uintptr_t L, float v) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x2842AB8))(0, L, v);
	}
	template <typename T = uintptr_t> T tryGetGetFuncByType_1m__E(uintptr_t L, int32_t idx) {
		return ((T (*)(ObjectTranslator*, uintptr_t, int32_t))(Il2CppBase() + 0x21DDA90))(this, L, idx);
	}
	template <typename T = unsigned char> static T tryGetGetFuncByType_1m__F(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x45F30D8))(0, L, idx);
	}
	template <typename T = signed char> static T tryGetGetFuncByType_1m__10(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1E75BE0))(0, L, idx);
	}
	template <typename T = char> static T tryGetGetFuncByType_1m__11(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x45F30F4))(0, L, idx);
	}
	template <typename T = int16_t> static T tryGetGetFuncByType_1m__12(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x21DF08C))(0, L, idx);
	}
	template <typename T = uint16_t> static T tryGetGetFuncByType_1m__13(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1E7A8D8))(0, L, idx);
	}
	template <typename T = float> static T tryGetGetFuncByType_1m__14(uintptr_t L, int32_t idx) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1E76A8C))(0, L, idx);
	}

};

}
