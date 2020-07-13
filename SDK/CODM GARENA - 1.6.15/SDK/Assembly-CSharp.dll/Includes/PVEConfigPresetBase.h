#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEConfigPresetBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEConfigPresetBase"));
	}

	template <typename T = uintptr_t> T& ActorAssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ControllerType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& PerSkillPlayerSoundId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& BossBornPlayerSoundId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& OnTakeDamagePlayerSoundId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& OnKillPlayerSoundId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& OnApproachPlayerSoundId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& OnApproachAlertLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& OnApproachAlertHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RandMeshAssetIDs() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& AccelRate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& CorpseLifeTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& displayHealthBar() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& displayBossBloodHUD() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = Il2CppString*> T& displayName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& displayIcon() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& diaplayLayerCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& canPassOffMeshLink() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& KillScore() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& damageScore() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& TimingIntervalTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& Timing() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& Begin() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& End() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hitGroupDamageMultiplier() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Point() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& Power() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& healthHard() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& speedHard() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& damageHard() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& killScoreHard() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& healthHell() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& speedHell() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& damageHell() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& killScoreHell() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& SearchDist() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& SearchDistAfterInjured() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& SearchTimeAfterInjured() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& WanderRadius() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& AttackRadius() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& LostTargetRadius() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& BRDropSchemeId() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& preloadAssetIDList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& zombieType() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& armorAbsorbDamage() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetControllerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExceptPreloadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRelevantPreset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeRoleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimLen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetControllerType() {
		return ((T (*)(PVEConfigPresetBase*))(Il2CppBase() + 0x406A240))(this);
	}
	template <typename T = void> T GetPreloadAssets(uintptr_t assetsList) {
		return ((T (*)(PVEConfigPresetBase*, uintptr_t))(Il2CppBase() + 0x406A2E0))(this, assetsList);
	}
	template <typename T = void> T GetExceptPreloadAssets(uintptr_t exceptAssetsList) {
		return ((T (*)(PVEConfigPresetBase*, uintptr_t))(Il2CppBase() + 0x406A5A8))(this, exceptAssetsList);
	}
	template <typename T = void> T GetRelevantPreset(uintptr_t relevantPresetList) {
		return ((T (*)(PVEConfigPresetBase*, uintptr_t))(Il2CppBase() + 0x406A648))(this, relevantPresetList);
	}
	template <typename T = int32_t> T get_controllerType() {
		return ((T (*)(PVEConfigPresetBase*))(Il2CppBase() + 0x406A6E8))(this);
	}
	template <typename T = Il2CppString*> T get_exportName() {
		return ((T (*)(PVEConfigPresetBase*))(Il2CppBase() + 0x406A6F0))(this);
	}
	template <typename T = int32_t> static T GetAssetID(uint64_t roleID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x406A6F8))(0, roleID);
	}
	template <typename T = uintptr_t> T GetMeshAssetID() {
		return ((T (*)(PVEConfigPresetBase*))(Il2CppBase() + 0x406A7B0))(this);
	}
	template <typename T = uint64_t> static T MakeRoleID(uint32_t controllerType, int32_t assetID) {
		return ((T (*)(void *, uint32_t, int32_t))(Il2CppBase() + 0x406A968))(0, controllerType, assetID);
	}
	template <typename T = float> static T GetAnimLen(uintptr_t anim) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x406AA14))(0, anim);
	}
	template <typename T = uint64_t> T get_RoleID() {
		return ((T (*)(PVEConfigPresetBase*))(Il2CppBase() + 0x406AB2C))(this);
	}

};

}
