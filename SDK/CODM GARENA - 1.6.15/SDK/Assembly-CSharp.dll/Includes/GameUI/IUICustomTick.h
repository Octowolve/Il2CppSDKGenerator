#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUICustomTick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUICustomTick"));
	}


	template <typename T = bool> T get_IsDestroyed() {
		return ((T (*)(IUICustomTick*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_TickEnabled() {
		return ((T (*)(IUICustomTick*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(IUICustomTick*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(IUICustomTick*, float))(Il2CppBase() + 0x0))(this, dt);
	}

};

}
