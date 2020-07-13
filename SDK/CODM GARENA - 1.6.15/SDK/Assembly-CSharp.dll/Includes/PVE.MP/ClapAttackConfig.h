#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ClapAttackConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ClapAttackConfig"));
	}

	template <typename T = int32_t> T& minTrunkCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxTrunkCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& stabDamage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& stabDamageRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& trunkDamageWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& trunkDamageHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& trunkDamage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& prepareAnimLen() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& clapAnim() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& trunkDamageTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_trunkAttackAnimDuration() {
		return ((T (*)(ClapAttackConfig*))(Il2CppBase() + 0x45FDCC0))(this);
	}

};

}
