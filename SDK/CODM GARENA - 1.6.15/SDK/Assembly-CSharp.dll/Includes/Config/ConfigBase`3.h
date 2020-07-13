#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBase3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBase`3"));
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
		return ((T (*)(ConfigBase3*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetSecondaryKeyValue() {
		return ((T (*)(ConfigBase3*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> static T Cache() {
		return ((T (*)(void *))(Il2CppBase() + 0x472DD50))(0);
	}
	template <typename T = uintptr_t> static T GetData(uintptr_t key1, uintptr_t key2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x472DEC8))(0, key1, key2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x472E134))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T FindAll(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472E314))(0, match);
	}
	template <typename T = uintptr_t> static T Find(void* match) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x472E540))(0, match);
	}

};

}
