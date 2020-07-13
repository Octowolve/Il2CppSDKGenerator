#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LockPlayerInputAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LockPlayerInputAction"));
	}

	template <typename T = bool> T& IsLockFire() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& IsLockMovement() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& IsLockRotation() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = bool> T& IsLockCrouch() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsLockJump() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& IsLockAutoReammo() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = uintptr_t> T& AutoFinish() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(LockPlayerInputAction*))(Il2CppBase() + 0x4D779BC))(this);
	}

};

}
