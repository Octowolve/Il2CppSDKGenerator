#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class OpenFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired.Shared", "OpenFactory"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_PlatformCanOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T PlatformCanOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A34AE0))(0);
	}
	template <typename T = uintptr_t> static T CreateOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A34B78))(0);
	}

};

}
