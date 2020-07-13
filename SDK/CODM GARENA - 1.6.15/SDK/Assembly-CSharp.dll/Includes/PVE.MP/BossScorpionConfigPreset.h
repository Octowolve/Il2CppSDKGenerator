#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class BossScorpionConfigPreset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "BossScorpionConfigPreset"));
	}

	template <typename T = float> T& Phase1AttackedCount() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& Phase2AttackedCount() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& Phase3AttackedCount() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = float> T& AngryMaxDuration() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& resistID() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& angryBodyEmissionColors() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& huntConfig() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& huntConfigSlow() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& mutateConfigStage2() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& mutateConfigStage3() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& summonGhostFireConfig() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& sweepTailAttackConfig() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& poisonAttackConfig() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& burrowAttackConfig() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& groundSpikeConfig() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& rageConfig() {
		return *(T*)((uintptr_t)this + 0x120);
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

	template <typename T = Il2CppVector3> T get_extent() {
		return ((T (*)(BossScorpionConfigPreset*))(Il2CppBase() + 0x45FC670))(this);
	}
	template <typename T = Il2CppVector3> T get_offset() {
		return ((T (*)(BossScorpionConfigPreset*))(Il2CppBase() + 0x45FC848))(this);
	}
	template <typename T = void> T GetRelevantPreset(uintptr_t relevantPresetList) {
		return ((T (*)(BossScorpionConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FC9F0))(this, relevantPresetList);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(BossScorpionConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FCB40))(this, assetsList);
	}
	template <typename T = void> T GetExceptPreloadAssets(uintptr_t exceptAssetsList) {
		return ((T (*)(BossScorpionConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FCC90))(this, exceptAssetsList);
	}
	template <typename T = void> T xLuaBaseProxy_GetRelevantPreset(uintptr_t P0) {
		return ((T (*)(BossScorpionConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FCE14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossScorpionConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FCE1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetExceptPreloadAssets(uintptr_t P0) {
		return ((T (*)(BossScorpionConfigPreset*, uintptr_t))(Il2CppBase() + 0x45FCE24))(this, P0);
	}

};

}
