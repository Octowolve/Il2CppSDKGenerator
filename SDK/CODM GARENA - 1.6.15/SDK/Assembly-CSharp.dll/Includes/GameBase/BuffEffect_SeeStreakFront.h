#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSeeStreakFront
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SeeStreakFront"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_PawnList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& vehicleIdSet() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& projectileIdSet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& buildActorIdSet() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSeeStreakFront*))(Il2CppBase() + 0x3C39D94))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t imsg) {
		return ((T (*)(BuffEffectSeeStreakFront*, uintptr_t))(Il2CppBase() + 0x3C3B510))(this, imsg);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSeeStreakFront*))(Il2CppBase() + 0x3C3BF3C))(this);
	}

};

}
