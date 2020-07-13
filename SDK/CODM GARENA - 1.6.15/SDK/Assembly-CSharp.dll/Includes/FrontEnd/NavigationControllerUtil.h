#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class NavigationControllerUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "NavigationControllerUtil"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_IsRootNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushRootNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T IsRootNavigation() {
		return ((T (*)(void *))(Il2CppBase() + 0x383B1A8))(0);
	}
	template <typename T = void> static T PushRootNavigation() {
		return ((T (*)(void *))(Il2CppBase() + 0x383A190))(0);
	}

};

}
