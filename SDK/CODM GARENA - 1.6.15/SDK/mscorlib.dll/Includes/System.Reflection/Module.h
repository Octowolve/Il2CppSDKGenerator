#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class Module
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "Module"));
	}

	template <typename T = uintptr_t> static T& defaultBindingFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& FilterTypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& FilterTypeNameIgnoreCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& _impl() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& assembly() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& fqname() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& scopename() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& is_resource() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& token() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD1428))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD25E8))(this);
	}
	template <typename T = Il2CppString*> T get_ScopeName() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD25F0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(Module*, bool))(Il2CppBase() + 0x4FD25F8))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(Module*, uintptr_t, bool))(Il2CppBase() + 0x4FD26A8))(this, attributeType, inherit);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Module*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD276C))(this, info, context);
	}
	template <typename T = uintptr_t> T GetType(Il2CppString* className) {
		return ((T (*)(Module*, Il2CppString*))(Il2CppBase() + 0x4FD2858))(this, className);
	}
	template <typename T = uintptr_t> T GetType_1(Il2CppString* className, bool throwOnError, bool ignoreCase) {
		return ((T (*)(Module*, Il2CppString*, bool, bool))(Il2CppBase() + 0x4FD2888))(this, className, throwOnError, ignoreCase);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T InternalGetTypes() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD2A38))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTypes() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD2A3C))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(Module*, uintptr_t, bool))(Il2CppBase() + 0x4FD2A40))(this, attributeType, inherit);
	}
	template <typename T = bool> T IsResource() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD2B04))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Module*))(Il2CppBase() + 0x4FD2B0C))(this);
	}
	template <typename T = bool> static T filter_by_type_name(uintptr_t m, uintptr_t filterCriteria) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD2B14))(0, m, filterCriteria);
	}
	template <typename T = bool> static T filter_by_type_name_ignore_case(uintptr_t m, uintptr_t filterCriteria) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FD2D60))(0, m, filterCriteria);
	}

};

}
