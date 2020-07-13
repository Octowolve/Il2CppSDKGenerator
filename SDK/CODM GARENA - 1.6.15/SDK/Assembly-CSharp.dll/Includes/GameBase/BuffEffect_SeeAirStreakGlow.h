#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSeeAirStreakGlow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SeeAirStreakGlow"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_PawnList() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSeeAirStreakGlow*))(Il2CppBase() + 0x375EDD8))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t imsg) {
		return ((T (*)(BuffEffectSeeAirStreakGlow*, uintptr_t))(Il2CppBase() + 0x375F7CC))(this, imsg);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSeeAirStreakGlow*))(Il2CppBase() + 0x375FB88))(this);
	}

};

}
