#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class BRSpectatorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "BRSpectatorComponent"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SwitchRole(uintptr_t viewType) {
		return ((T (*)(BRSpectatorComponent*, uintptr_t))(Il2CppBase() + 0x418B2BC))(this, viewType);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchRole(uintptr_t P0) {
		return ((T (*)(BRSpectatorComponent*, uintptr_t))(Il2CppBase() + 0x418B3C4))(this, P0);
	}

};

}
