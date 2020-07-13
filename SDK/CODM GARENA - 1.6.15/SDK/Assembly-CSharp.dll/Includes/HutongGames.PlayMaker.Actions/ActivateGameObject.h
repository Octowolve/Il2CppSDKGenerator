#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ActivateGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ActivateGameObject"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& activate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& recursive() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& resetOnExit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = uintptr_t> T& activatedGameObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ActivateGameObject*))(Il2CppBase() + 0x476B3D4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ActivateGameObject*))(Il2CppBase() + 0x476B418))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ActivateGameObject*))(Il2CppBase() + 0x476B58C))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(ActivateGameObject*))(Il2CppBase() + 0x476B590))(this);
	}
	template <typename T = void> T DoActivateGameObject() {
		return ((T (*)(ActivateGameObject*))(Il2CppBase() + 0x476B444))(this);
	}
	template <typename T = void> T SetActiveRecursively(uintptr_t go, bool state) {
		return ((T (*)(ActivateGameObject*, uintptr_t, bool))(Il2CppBase() + 0x476B6C8))(this, go, state);
	}

};

}
