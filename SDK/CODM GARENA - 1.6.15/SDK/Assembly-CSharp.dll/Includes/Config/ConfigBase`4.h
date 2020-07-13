#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBase4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBase`4"));
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
		return ((T (*)(ConfigBase4*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSecondaryKeyValue() {
		return ((T (*)(ConfigBase4*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetTertiaryKeyValue() {
		return ((T (*)(ConfigBase4*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> static T Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x472F498))(0);
	}
	template <typename T = uintptr_t> static T GetData(uintptr_t key1, uintptr_t key2, uintptr_t key3) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x472F610))(0, key1, key2, key3);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x472F8C8))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindAll(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472FAA8))(0, match);
	}
	template <typename T = uintptr_t> static T Find(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472FCD4))(0, match);
	}

};

}
