#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class HeavyDamagedBehaviorCfg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "HeavyDamagedBehaviorCfg"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& triggerCondition() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& hitAnim() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_hitAnimDuration() {
		return ((T (*)(HeavyDamagedBehaviorCfg*))(Il2CppBase() + 0x45FFFC0))(this);
	}

};

}
