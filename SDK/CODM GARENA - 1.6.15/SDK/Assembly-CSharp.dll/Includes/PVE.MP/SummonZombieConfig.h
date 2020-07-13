#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class SummonZombieConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "SummonZombieConfig"));
	}

	template <typename T = uintptr_t> T& prepareAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& finishAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(SummonZombieConfig*))(Il2CppBase() + 0x435BA60))(this);
	}
	template <typename T = float> T get_finishAnimDuration() {
		return ((T (*)(SummonZombieConfig*))(Il2CppBase() + 0x435BA70))(this);
	}

};

}
