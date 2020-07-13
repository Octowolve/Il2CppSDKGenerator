#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossCerberusConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossCerberusConfigPreset"));
	}

	template <typename T = Il2CppString*> T& secondDisplayName() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& secondDisplayIcon() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& headFaintDamageAmount() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& spawnAnimStartTime() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& huntConfig() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& huntConfigFast() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& MagmaSplashCfg() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& SpinAttackCfg() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& CircleWaitCfg() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& DashCfg() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& DashCfgX4() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& lavaPoolCfg() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& lavaPoolTripleCfg() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& rotateFireBallCfg() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& mutateCfg() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& fireBallTripleCfg() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& rageCfg() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& gotoCombatCfg() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& leaveCombatCfg() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& magmaTargetSprayCfg() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mMagmaSpraySpotGroup() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppVector3> T get_extent() {
		return ((T (*)(BossCerberusConfigPreset*))(Il2CppBase() + 0x49C55D0))(this);
	}
	template <typename T = float> T get_spawnAnimLength() {
		return ((T (*)(BossCerberusConfigPreset*))(Il2CppBase() + 0x49C57A8))(this);
	}
	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(BossCerberusConfigPreset*))(Il2CppBase() + 0x49C57B8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MagmaSpraySpotGroup() {
		return ((T (*)(BossCerberusConfigPreset*))(Il2CppBase() + 0x49C57E8))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(BossCerberusConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C5B20))(this, assetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossCerberusConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6098))(this, P0);
	}

};

}
