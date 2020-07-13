#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class GroundStabConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "GroundStabConfig"));
	}

	template <typename T = int32_t> T& minStabCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxStabCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& damageValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& stabEffectDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& warningEffectStartTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& warningEffectDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& groundStabAnim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& trunkWarningAssetID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& trunkAttackAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_animDuration() {
		return ((T (*)(GroundStabConfig*))(Il2CppBase() + 0x45FFCA0))(this);
	}

};

}
