#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigCollections1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigCollections`1"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Cache() {
		return ((T (*)(ConfigCollections1*))(Il2CppBase() + 0x4730038))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ConfigCollections1*))(Il2CppBase() + 0x473014C))(this);
	}

};

}
