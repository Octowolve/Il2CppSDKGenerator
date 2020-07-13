#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class HitWeakPointBehaviorCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "HitWeakPointBehaviorCfg"));
	}

	template <typename T = float> T& triggerProbDamageRatio() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& triggerMinInterval() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& triggerDamageRatio() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& hitAnim() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = float> T get_hitAnimDuration() {
		return ((T (*)(HitWeakPointBehaviorCfg*))(Il2CppBase() + 0x460044C))(this);
	}

};

}
