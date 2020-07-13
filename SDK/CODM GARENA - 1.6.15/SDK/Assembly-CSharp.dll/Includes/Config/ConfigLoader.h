#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigLoader"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> static T LoadBytes(Il2CppString* address, Il2CppArray<uintptr_t>** data, uintptr_t* count) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>**, uintptr_t*))(Il2CppBase() + 0x4638C58))(0, address, data, count);
	}
	template <typename T = Il2CppString*> static T LoadText(Il2CppString* address, Il2CppString* ext) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4638D34))(0, address, ext);
	}

};

}
