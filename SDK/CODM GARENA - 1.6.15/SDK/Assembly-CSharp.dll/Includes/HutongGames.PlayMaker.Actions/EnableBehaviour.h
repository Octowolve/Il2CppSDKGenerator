#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnableBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnableBehaviour"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& behaviour() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& enable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& resetOnExit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& componentTarget() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EnableBehaviour*))(Il2CppBase() + 0x4FCB8DC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnableBehaviour*))(Il2CppBase() + 0x4FCB924))(this);
	}
	template <typename T = void> T DoEnableBehaviour(uintptr_t go) {
		return ((T (*)(EnableBehaviour*, uintptr_t))(Il2CppBase() + 0x4FCB974))(this, go);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EnableBehaviour*))(Il2CppBase() + 0x4FCBCC8))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(EnableBehaviour*))(Il2CppBase() + 0x4FCBDDC))(this);
	}

};

}
