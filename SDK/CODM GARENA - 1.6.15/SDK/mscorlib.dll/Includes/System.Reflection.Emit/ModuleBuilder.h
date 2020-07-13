#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection.Emit {

class ModuleBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection.Emit", "ModuleBuilder"));
	}

	template <typename T = int32_t> T& num_types() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& types() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& guid() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& table_idx() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& assemblyb() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& global_type() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& name_cache() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& us_string_cache() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& table_indexes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& transient() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& token_gen() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& symbolWriter() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& type_modifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T basic_init(uintptr_t ab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45719BC))(0, ab);
	}
	template <typename T = void> static T set_wrappers_type(uintptr_t mb, uintptr_t ab) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4572760))(0, mb, ab);
	}
	template <typename T = bool> T IsTransient() {
		return ((T (*)(ModuleBuilder*))(Il2CppBase() + 0x4568608))(this);
	}
	template <typename T = uintptr_t> T DefineType(Il2CppString* name, uintptr_t attr, uintptr_t parent) {
		return ((T (*)(ModuleBuilder*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4572888))(this, name, attr, parent);
	}
	template <typename T = void> T AddType(uintptr_t tb) {
		return ((T (*)(ModuleBuilder*, uintptr_t))(Il2CppBase() + 0x45728D8))(this, tb);
	}
	template <typename T = uintptr_t> T DefineType_1(Il2CppString* name, uintptr_t attr, uintptr_t parent, Il2CppArray<uintptr_t>* interfaces, uintptr_t packingSize, int32_t typesize) {
		return ((T (*)(ModuleBuilder*, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x4572A5C))(this, name, attr, parent, interfaces, packingSize, typesize);
	}
	template <typename T = uintptr_t> T DefineType_2(Il2CppString* name, uintptr_t attr, uintptr_t parent, Il2CppArray<uintptr_t>* interfaces) {
		return ((T (*)(ModuleBuilder*, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45728B0))(this, name, attr, parent, interfaces);
	}
	template <typename T = uintptr_t> T GetType(Il2CppString* className) {
		return ((T (*)(ModuleBuilder*, Il2CppString*))(Il2CppBase() + 0x4572F30))(this, className);
	}
	template <typename T = uintptr_t> T search_in_array(Il2CppArray<uintptr_t>* arr, int32_t validElementsInArray, Il2CppString* className) {
		return ((T (*)(ModuleBuilder*, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0x4572F60))(this, arr, validElementsInArray, className);
	}
	template <typename T = uintptr_t> T search_nested_in_array(Il2CppArray<uintptr_t>* arr, int32_t validElementsInArray, Il2CppString* className) {
		return ((T (*)(ModuleBuilder*, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*))(Il2CppBase() + 0x45730F8))(this, arr, validElementsInArray, className);
	}
	template <typename T = uintptr_t> static T create_modified_type(uintptr_t tb, Il2CppString* modifiers) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4573290))(0, tb, modifiers);
	}
	template <typename T = uintptr_t> T GetMaybeNested(uintptr_t t, Il2CppString* className) {
		return ((T (*)(ModuleBuilder*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x457329C))(this, t, className);
	}
	template <typename T = uintptr_t> T GetType_1(Il2CppString* className, bool throwOnError, bool ignoreCase) {
		return ((T (*)(ModuleBuilder*, Il2CppString*, bool, bool))(Il2CppBase() + 0x4573370))(this, className, throwOnError, ignoreCase);
	}
	template <typename T = int32_t> T get_next_table_index(uintptr_t obj, int32_t table, bool inc) {
		return ((T (*)(ModuleBuilder*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x4571850))(this, obj, table, inc);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTypes() {
		return ((T (*)(ModuleBuilder*))(Il2CppBase() + 0x457377C))(this);
	}
	template <typename T = int32_t> static T getUSIndex(uintptr_t mb, Il2CppString* str) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x457397C))(0, mb, str);
	}
	template <typename T = int32_t> static T getToken(uintptr_t mb, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4573988))(0, mb, obj);
	}
	template <typename T = int32_t> static T getMethodToken(uintptr_t mb, uintptr_t method, Il2CppArray<uintptr_t>* opt_param_types) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4573994))(0, mb, method, opt_param_types);
	}
	template <typename T = int32_t> T GetToken(Il2CppString* str) {
		return ((T (*)(ModuleBuilder*, Il2CppString*))(Il2CppBase() + 0x45739A4))(this, str);
	}
	template <typename T = int32_t> T GetToken_1(uintptr_t member) {
		return ((T (*)(ModuleBuilder*, uintptr_t))(Il2CppBase() + 0x4573B24))(this, member);
	}
	template <typename T = int32_t> T GetToken_2(uintptr_t method, Il2CppArray<uintptr_t>* opt_param_types) {
		return ((T (*)(ModuleBuilder*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4573BCC))(this, method, opt_param_types);
	}
	template <typename T = void> T RegisterToken(uintptr_t obj, int32_t token) {
		return ((T (*)(ModuleBuilder*, uintptr_t, int32_t))(Il2CppBase() + 0x4568C18))(this, obj, token);
	}
	template <typename T = uintptr_t> T GetTokenGenerator() {
		return ((T (*)(ModuleBuilder*))(Il2CppBase() + 0x4569654))(this);
	}
	template <typename T = Il2CppString*> T get_FileName() {
		return ((T (*)(ModuleBuilder*))(Il2CppBase() + 0x4568610))(this);
	}
	template <typename T = void> T CreateGlobalType() {
		return ((T (*)(ModuleBuilder*))(Il2CppBase() + 0x45719C4))(this);
	}

};

}
