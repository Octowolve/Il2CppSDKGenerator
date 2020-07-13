#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AIActControlSystemFightEnemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AIActControlSystem_FightEnemy"));
	}

	template <typename T = uintptr_t> T& TargetID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& RandomChooseTarget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Accuracy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AttackTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(AIActControlSystemFightEnemy*))(Il2CppBase() + 0x4F293D0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(AIActControlSystemFightEnemy*))(Il2CppBase() + 0x4F296E4))(this);
	}

};

}
