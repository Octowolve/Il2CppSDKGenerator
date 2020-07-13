#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ComponentAction1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ComponentAction`1"));
	}

	template <typename T = uintptr_t> T& cachedGameObject() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B5795C))(this);
	}
	template <typename T = uintptr_t> T get_renderer() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B579E0))(this);
	}
	template <typename T = uintptr_t> T get_animation() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57A64))(this);
	}
	template <typename T = uintptr_t> T get_audio() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57AE8))(this);
	}
	template <typename T = uintptr_t> T get_camera() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57B6C))(this);
	}
	template <typename T = uintptr_t> T get_guiText() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57BF0))(this);
	}
	template <typename T = uintptr_t> T get_guiTexture() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57C74))(this);
	}
	template <typename T = uintptr_t> T get_light() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57CF8))(this);
	}
	template <typename T = uintptr_t> T get_networkView() {
		return ((T (*)(ComponentAction1*))(Il2CppBase() + 0x4B57D7C))(this);
	}
	template <typename T = bool> T UpdateCache(uintptr_t go) {
		return ((T (*)(ComponentAction1*, uintptr_t))(Il2CppBase() + 0x4B57E00))(this, go);
	}

};

}
