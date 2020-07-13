#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class LeaveCombatConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "LeaveCombatConfig"));
	}

	template <typename T = uintptr_t> T& LeaveCombatAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& fixedLeaveTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MinSleepTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& leaveCombatHideSpotName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_animLen() {
		return ((T (*)(LeaveCombatConfig*))(Il2CppBase() + 0x4600DF4))(this);
	}

};

}
