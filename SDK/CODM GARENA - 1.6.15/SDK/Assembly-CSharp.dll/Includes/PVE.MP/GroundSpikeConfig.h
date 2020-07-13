#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class GroundSpikeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "GroundSpikeConfig"));
	}

	template <typename T = uintptr_t> T& prepareAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& startAttackTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& damageValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& damageWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& attackCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& attackInterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& damageGap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& initDamageRange() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareTime() {
		return ((T (*)(GroundSpikeConfig*))(Il2CppBase() + 0x45FFBD4))(this);
	}
	template <typename T = float> T get_attackAnimDuration() {
		return ((T (*)(GroundSpikeConfig*))(Il2CppBase() + 0x45FFBE4))(this);
	}

};

}
