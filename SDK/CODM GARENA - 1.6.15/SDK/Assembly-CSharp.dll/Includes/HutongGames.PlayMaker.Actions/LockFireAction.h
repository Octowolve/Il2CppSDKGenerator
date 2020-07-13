#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LockFireAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LockFireAction"));
	}

	template <typename T = bool> T& IsLockFire() {
		return *(T*)((uintptr_t)this + 0x25);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(LockFireAction*))(Il2CppBase() + 0x4D778B8))(this);
	}

};

}
