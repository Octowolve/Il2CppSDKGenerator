#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBase2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBase`2"));
	}

	template <typename T = void*> static T& Coll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T GetPrimaryKeyValue() {
		return ((T (*)(ConfigBase2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> static T Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x472A3C0))(0);
	}
	template <typename T = uintptr_t> static T GetData(uintptr_t key) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x472A538))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x472A764))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindAll(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472A944))(0, match);
	}
	template <typename T = uintptr_t> static T Find(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472AB70))(0, match);
	}

};

}
