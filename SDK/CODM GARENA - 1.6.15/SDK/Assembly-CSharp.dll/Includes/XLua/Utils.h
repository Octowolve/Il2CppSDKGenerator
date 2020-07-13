#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua {

class Utils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua", "Utils"));
	}

	template <typename T = int32_t> static T& OBJ_META_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& METHOD_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GETTER_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SETTER_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CLS_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CLS_META_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CLS_GETTER_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CLS_SETTER_IDX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LuaIndexsFieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LuaNewIndexsFieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LuaClassIndexsFieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LuaClassNewIndexsFieldName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& f__am$cache9() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& f__am$cacheA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& f__am$cacheB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__am$cacheC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& f__am$cacheD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> static T LoadField(uintptr_t L, int32_t idx, Il2CppString* field_name) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x4DCAFC0))(0, L, idx, field_name);
	}
	template <typename T = uintptr_t> static T GetMainState(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DCB038))(0, L);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAllTypes(bool exclude_generic_definition) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4DCB188))(0, exclude_generic_definition);
	}
	template <typename T = uintptr_t> static T genFieldGetter(uintptr_t type, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DCB4A4))(0, type, field);
	}
	template <typename T = uintptr_t> static T genFieldSetter(uintptr_t type, uintptr_t field) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DCB5D4))(0, type, field);
	}
	template <typename T = uintptr_t> static T genItemGetter(uintptr_t type, Il2CppArray<uintptr_t>* props) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DCB704))(0, type, props);
	}
	template <typename T = uintptr_t> static T genItemSetter(uintptr_t type, Il2CppArray<uintptr_t>* props) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DCBA3C))(0, type, props);
	}
	template <typename T = uintptr_t> static T genEnumCastFrom(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DCBD74))(0, type);
	}
	template <typename T = void*> static T GetExtensionMethodsOf(uintptr_t type_to_be_extend) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DCBE68))(0, type_to_be_extend);
	}
	template <typename T = void> static T makeReflectionWrap(uintptr_t L, uintptr_t type, int32_t cls_field, int32_t cls_getter, int32_t cls_setter, int32_t obj_field, int32_t obj_getter, int32_t obj_setter, int32_t obj_meta, uintptr_t* item_getter, uintptr_t* item_setter, uintptr_t access) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x4DCCE98))(0, L, type, cls_field, cls_getter, cls_setter, obj_field, obj_getter, obj_setter, obj_meta, item_getter, item_setter, access);
	}
	template <typename T = void> static T loadUpvalue(uintptr_t L, uintptr_t type, Il2CppString* metafunc, int32_t num) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4DCEFB8))(0, L, type, metafunc, num);
	}
	template <typename T = void> static T MakePrivateAccessible(uintptr_t L, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DCF140))(0, L, type);
	}
	template <typename T = int32_t> static T LazyReflectionCall(uintptr_t L) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DC9B60))(0, L);
	}
	template <typename T = void> static T ReflectionWrap(uintptr_t L, uintptr_t type, bool privateAccessible) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4DCF804))(0, L, type, privateAccessible);
	}
	template <typename T = void> static T BeginObjectRegister(uintptr_t type, uintptr_t L, uintptr_t translator, int32_t meta_count, int32_t method_count, int32_t getter_count, int32_t setter_count, int32_t type_id) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4DD0A94))(0, type, L, translator, meta_count, method_count, getter_count, setter_count, type_id);
	}
	template <typename T = int32_t> static T abs_idx(int32_t top, int32_t idx) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4DD0EB8))(0, top, idx);
	}
	template <typename T = void> static T EndObjectRegister(uintptr_t type, uintptr_t L, uintptr_t translator, uintptr_t csIndexer, uintptr_t csNewIndexer, uintptr_t base_type, uintptr_t arrayIndexer, uintptr_t arrayNewIndexer) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DD0ECC))(0, type, L, translator, csIndexer, csNewIndexer, base_type, arrayIndexer, arrayNewIndexer);
	}
	template <typename T = void> static T RegisterFunc(uintptr_t L, int32_t idx, Il2CppString* name, uintptr_t func) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DD136C))(0, L, idx, name, func);
	}
	template <typename T = void> static T RegisterLazyFunc(uintptr_t L, int32_t idx, Il2CppString* name, uintptr_t type, uintptr_t memberType, bool isStatic) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4DD13EC))(0, L, idx, name, type, memberType, isStatic);
	}
	template <typename T = void> static T RegisterObject(uintptr_t L, uintptr_t translator, int32_t idx, Il2CppString* name, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4DD1598))(0, L, translator, idx, name, obj);
	}
	template <typename T = void> static T BeginClassRegister(uintptr_t type, uintptr_t L, uintptr_t creator, int32_t class_field_count, int32_t static_getter_count, int32_t static_setter_count) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4DD1618))(0, type, L, creator, class_field_count, static_getter_count, static_setter_count);
	}
	template <typename T = void> static T EndClassRegister(uintptr_t type, uintptr_t L, uintptr_t translator) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DD1880))(0, type, L, translator);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T getPathOfType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD1BCC))(0, type);
	}
	template <typename T = void> static T LoadCSTable(uintptr_t L, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DCF5FC))(0, L, type);
	}
	template <typename T = void> static T SetCSTable(uintptr_t L, uintptr_t type, int32_t cls_table) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4DD03EC))(0, L, type, cls_table);
	}
	template <typename T = bool> static T IsParamsMatch(uintptr_t delegateMethod, uintptr_t bridgeMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DD1EAC))(0, delegateMethod, bridgeMethod);
	}
	template <typename T = bool> static T IsSupportedMethod(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD2058))(0, method);
	}
	template <typename T = uintptr_t> static T MakeGenericMethodWithConstraints(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD22E8))(0, method);
	}
	template <typename T = uintptr_t> static T getExtendedType(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD2568))(0, method);
	}
	template <typename T = bool> static T IsStaticPInvokeCSFunction(uintptr_t csFunction) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD26E4))(0, csFunction);
	}
	template <typename T = bool> static T IsPublic(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD280C))(0, type);
	}
	template <typename T = bool> static T genItemGetterm__0(uintptr_t prop) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD28F8))(0, prop);
	}
	template <typename T = bool> static T genItemSetterm__1(uintptr_t prop) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD2A44))(0, prop);
	}
	template <typename T = bool> static T GetExtensionMethodsOfm__2(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD2B90))(0, t);
	}
	template <typename T = bool> static T GetExtensionMethodsOfm__3(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD2C80))(0, t);
	}
	template <typename T = void*> static T GetExtensionMethodsOfm__4(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD2D70))(0, type);
	}
	template <typename T = void*> static T GetExtensionMethodsOfm__5(uintptr_t type, uintptr_t method) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DD2DA8))(0, type, method);
	}
	template <typename T = bool> static T GetExtensionMethodsOfm__6(void* <>__TranspIdent0) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DD2E54))(0, <>__TranspIdent0);
	}
	template <typename T = uintptr_t> static T GetExtensionMethodsOfm__7(void* <>__TranspIdent0) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DD2FA0))(0, <>__TranspIdent0);
	}
	template <typename T = uintptr_t> static T GetExtensionMethodsOfm__8(void* <>__TranspIdent0) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DD3040))(0, <>__TranspIdent0);
	}
	template <typename T = uintptr_t> static T GetExtensionMethodsOfm__9(void* g) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DD30D8))(0, g);
	}
	template <typename T = void*> static T GetExtensionMethodsOfm__A(void* g) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4DD31C8))(0, g);
	}
	template <typename T = Il2CppString*> static T makeReflectionWrapm__B(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD31D0))(0, p);
	}
	template <typename T = Il2CppString*> static T makeReflectionWrapm__C(uintptr_t q) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DD3208))(0, q);
	}
	template <typename T = uintptr_t> static T makeReflectionWrapm__D(uintptr_t p, uintptr_t q) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DD3240))(0, p, q);
	}

};

}
