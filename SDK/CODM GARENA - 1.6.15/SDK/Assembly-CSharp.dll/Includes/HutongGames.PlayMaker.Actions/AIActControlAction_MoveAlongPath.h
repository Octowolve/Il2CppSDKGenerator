#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlActionMoveAlongPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlAction_MoveAlongPath"));
	}

	template <typename T = uintptr_t> T& Path() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& raiseGun() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_OriginalMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlActionMoveAlongPath*))(Il2CppBase() + 0x476D820))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AIActControlActionMoveAlongPath*))(Il2CppBase() + 0x476DAC4))(this);
	}

};

}
