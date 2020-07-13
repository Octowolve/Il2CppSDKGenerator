#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class GroundStabGroupConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "GroundStabGroupConfig"));
	}

	template <typename T = float> T& BossRunToCenterSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& MoveCenterSpotName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& minStabCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& maxStabCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& minStabPosDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& damageValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& damageTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& minStabDelay() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& maxStabDelay() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& attackAnim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& attackAnimDuration() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& endAttackAnim() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& stabCircleRadius() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& trunkWarningAssetID() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& trunkAttackAssetID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& stabEffectDuration() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& warningEffectDuration() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& warningEffectStartTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_MoveCenterSpotLocation() {
		return ((T (*)(GroundStabGroupConfig*))(Il2CppBase() + 0x45FFD68))(this);
	}
	template <typename T = float> T get_PrepAnimDuration() {
		return ((T (*)(GroundStabGroupConfig*))(Il2CppBase() + 0x45FFEFC))(this);
	}
	template <typename T = float> T get_EndAttackAnimLen() {
		return ((T (*)(GroundStabGroupConfig*))(Il2CppBase() + 0x45FFF0C))(this);
	}

};

}
