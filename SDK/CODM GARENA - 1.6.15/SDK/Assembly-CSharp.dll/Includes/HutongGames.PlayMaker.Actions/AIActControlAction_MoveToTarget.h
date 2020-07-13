#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionMoveToTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_MoveToTarget"));
	}

	template <typename T = uintptr_t> T& targetPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& raiseGun() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionMoveToTarget*))(Il2CppBase() + 0x4F283E0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(AIActControlActionMoveToTarget*))(Il2CppBase() + 0x4F286D0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AIActControlActionMoveToTarget*))(Il2CppBase() + 0x4F288EC))(this);
	}

};

}
