#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossHauntedWoodConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossHauntedWoodConfigPreset"));
	}

	template <typename T = uintptr_t> T& spawnAnim() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& spawnAnimLandTime() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& AngryMaxDuration() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffIDList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& huntConfig() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& earthquakeConfig() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& summonGhostFireConfig() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& summonGhostExplodeConfig() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& clapAttackConfig() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& groundStabConfig() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& groundStabGroupConfig() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& cageConfig() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& summonDemonSeedConfig() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& weakConfig() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& rightHandLongRangeAttackConfig() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& pursueAttackConfig() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& treadConfig() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& rageConfig() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelevantPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExceptPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = float> T get_spawnAnimDuration() {
		return ((T (*)(BossHauntedWoodConfigPreset*))(Il2CppBase() + 0x49C64EC))(this);
	}
	template <typename T = void> T GetRelevantPreset(uintptr_t relevantPresetList) {
		return ((T (*)(BossHauntedWoodConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C64FC))(this, relevantPresetList);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(BossHauntedWoodConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6874))(this, assetsList);
	}
	template <typename T = void> T GetExceptPreloadAssets(uintptr_t exceptAssetsList) {
		return ((T (*)(BossHauntedWoodConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C69C0))(this, exceptAssetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetRelevantPreset(uintptr_t P0) {
		return ((T (*)(BossHauntedWoodConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6B44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossHauntedWoodConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6B4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetExceptPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossHauntedWoodConfigPreset*, uintptr_t))(Il2CppBase() + 0x49C6B50))(this, P0);
	}

};

}
