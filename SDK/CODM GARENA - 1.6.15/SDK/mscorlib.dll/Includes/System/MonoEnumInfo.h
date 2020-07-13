#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoEnumInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MonoEnumInfo"));
	}

	template <typename T = uintptr_t> T& utype() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& values() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& names() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& name_hash() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& global_cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& global_cache_monitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& sbyte_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& short_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& int_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& long_comparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T get_enum_info(uintptr_t enumType, uintptr_t* info) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4550E60))(0, enumType, info);
	}
	template <typename T = uintptr_t> static T get_Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x4550E6C))(0);
	}
	template <typename T = void> static T GetInfo(uintptr_t enumType, uintptr_t* info) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4550FE8))(0, enumType, info);
	}

};

}
