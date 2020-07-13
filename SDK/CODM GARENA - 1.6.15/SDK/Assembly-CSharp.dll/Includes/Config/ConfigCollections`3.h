#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigCollections3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigCollections`3"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*>*> T& m_Dic() {
		return *(T*)((uintptr_t)this + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Cache() {
		return ((T (*)(ConfigCollections3*))(Il2CppBase() + 0x47322D0))(this);
	}
	template <typename T = uintptr_t> T GetData(uintptr_t key1, uintptr_t key2) {
		return ((T (*)(ConfigCollections3*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4732498))(this, key1, key2);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ConfigCollections3*))(Il2CppBase() + 0x4732824))(this);
	}

};

}
