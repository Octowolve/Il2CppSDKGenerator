#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossButcherConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossButcherConfigPreset"));
	}

	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& fixedSpawnTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& spawnAnimLandTime() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& huntConfig() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& clearverChargeConfig() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& jumpSmashConfig() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& hookAndSlashConfig() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& summonHellHoundConfig() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& deathSwingConfig() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& huntConfigFast() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& dashConfig() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& dashConfigX4() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& hookWhipConfig() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& endGameConfig() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& trampleCfg() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& jumpInCfg() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& jumpOutCfg() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& gotoCombatCfg() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& leaveCombatCfg() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(BossButcherConfigPreset*))(Il2CppBase() + 0x49C53D8))(this);
	}

};

}
