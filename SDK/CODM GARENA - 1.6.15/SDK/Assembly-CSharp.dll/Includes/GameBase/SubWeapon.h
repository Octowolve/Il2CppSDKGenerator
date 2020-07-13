#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SubWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SubWeapon"));
	}

	template <typename T = bool> T& m_UseDynamicSkin() {
		return *(T*)((uintptr_t)this + 0x5EC);
	}
	template <typename T = uintptr_t> T& m_DynamicSkinBoneRefManager() {
		return *(T*)((uintptr_t)this + 0x5F0);
	}
	template <typename T = uintptr_t> T& m_GrappleGunMeshInSubWeapon() {
		return *(T*)((uintptr_t)this + 0x5F4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Activate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deactivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddDynamicSkinInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DettachFPAnimationSyncController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncDynamicSkinedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIdleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransplantBoneToPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReSkinToPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOtherSubWeaponChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEquipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUnequipAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGappleGunInSubWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddProjAssetToPreLoadList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T get_GrappleGunMeshInSubWeapon() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B05D4))(this);
	}
	template <typename T = void> T set_GrappleGunMeshInSubWeapon(uintptr_t value) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B05DC))(this, value);
	}
	template <typename T = float> T get_PullingInitSpeed() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B05E4))(this);
	}
	template <typename T = float> T get_PullingAccelSpeed() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B06AC))(this);
	}
	template <typename T = float> T get_PullingMaxSpeed() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B0774))(this);
	}
	template <typename T = void> T InitWeapon() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B083C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B08E4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B19C4))(this);
	}
	template <typename T = void> T PlayFireAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B1CD0))(this);
	}
	template <typename T = void> T AddDynamicSkinInfo(uintptr_t curMesh) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B1D68))(this, curMesh);
	}
	template <typename T = void> T LoadWeaponModel(Il2CppString* SocketName) {
		return ((T (*)(SubWeapon*, Il2CppString*))(Il2CppBase() + 0x30B1F40))(this, SocketName);
	}
	template <typename T = void> T DettachFPAnimationSyncController(uintptr_t mesh) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B28CC))(this, mesh);
	}
	template <typename T = bool> T SyncDynamicSkinedMesh(uintptr_t mainWeaponMesh) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B296C))(this, mainWeaponMesh);
	}
	template <typename T = void> T PlayIdleAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B30F4))(this);
	}
	template <typename T = void> T TransplantBoneToPawn() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B0BC0))(this);
	}
	template <typename T = void> T ReSkinToPawn() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B1038))(this);
	}
	template <typename T = void> T NotifyOtherSubWeaponChange() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B1414))(this);
	}
	template <typename T = void> T PlayEquipAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B319C))(this);
	}
	template <typename T = void> T PlayUnequipAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B32E8))(this);
	}
	template <typename T = void> T ShowGappleGunInSubWeapon(bool bShow) {
		return ((T (*)(SubWeapon*, bool))(Il2CppBase() + 0x30B15B8))(this, bShow);
	}
	template <typename T = void> T AddProjAssetToPreLoadList(uintptr_t projectileData) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B3430))(this, projectileData);
	}
	template <typename T = void> T xLuaBaseProxy_InitWeapon() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B34D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Activate() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B34D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Deactivate() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B34E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFireAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B34E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_LoadWeaponModel(Il2CppString* P0) {
		return ((T (*)(SubWeapon*, Il2CppString*))(Il2CppBase() + 0x30B34F0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DettachFPAnimationSyncController(uintptr_t P0) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B34F8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayIdleAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B3500))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayEquipAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B3508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayUnequipAnim() {
		return ((T (*)(SubWeapon*))(Il2CppBase() + 0x30B3510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddProjAssetToPreLoadList(uintptr_t P0) {
		return ((T (*)(SubWeapon*, uintptr_t))(Il2CppBase() + 0x30B3518))(this, P0);
	}

};

}
