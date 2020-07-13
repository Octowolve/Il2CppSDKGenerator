#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigCollections2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigCollections`2"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_Dic() {
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
		return ((T (*)(ConfigCollections2*))(Il2CppBase() + 0x4730750))(this);
	}
	template <typename T = uintptr_t> T GetData(uintptr_t key) {
		return ((T (*)(ConfigCollections2*, uintptr_t))(Il2CppBase() + 0x4730918))(this, key);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ConfigCollections2*))(Il2CppBase() + 0x4730C4C))(this);
	}

};

}
