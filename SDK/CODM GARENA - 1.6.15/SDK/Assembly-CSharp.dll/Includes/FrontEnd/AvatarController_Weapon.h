#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarControllerWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarController_Weapon"));
	}

	template <typename T = uintptr_t> T& m_AvatarView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_SubAvatarView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_WeapAsset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& m_WeapID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& vectorDes() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_Visible_NavigationChanging() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_Visible_NavigationType() {
		return *(T*)((uintptr_t)this + 0x61);
	}
	template <typename T = uintptr_t> T& m_GuideAssetID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_HaveSightAttachment() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& CameraScreenCenterPos() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& CameraScreenCenterPos_WingsuitParachute() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& CameraScreenCenterPos_Vehicle() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& CameraScreenCenterPos_KillStreak() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& mInitPosition() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uint32_t> T& CacheShowAttachmentItemId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRestoreCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarViewWeaponCameraSmooth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothCameraToCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothRecoverCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckWeaponCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSTestDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAvatarWeaponStopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyStopCameraShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponChangeImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRVehicleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTryAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToEquipAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarViewActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarViewByShowType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSuperStar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableTargetRoatation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponDefaultRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeaponMaterialTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverWeaponMaterialTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponTextureTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E1C00))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E1CA0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E2144))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E24AC))(this);
	}
	template <typename T = void> T OnRestoreCamera(uintptr_t msg) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E2608))(this, msg);
	}
	template <typename T = void> T OnNotifyAvatarViewWeaponCameraSmooth(uintptr_t message) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E2840))(this, message);
	}
	template <typename T = void> T SmoothCameraToCenter() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E2980))(this);
	}
	template <typename T = void> T SmoothRecoverCameraPosition() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E2DC4))(this);
	}
	template <typename T = void> T CheckWeaponCamera() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E26B4))(this);
	}
	template <typename T = void> T OnDSTestDataChanged(uintptr_t msg) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E36DC))(this, msg);
	}
	template <typename T = void> T ChangeSkin(uint32_t skinID) {
		return ((T (*)(AvatarControllerWeapon*, uint32_t))(Il2CppBase() + 0x32E38DC))(this, skinID);
	}
	template <typename T = void> T OnNotifyAvatarWeaponStopEffect(uintptr_t message) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E3A64))(this, message);
	}
	template <typename T = void> T OnNotifyStopCameraShake(uintptr_t message) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E3B94))(this, message);
	}
	template <typename T = void> T WeaponChange(uint32_t weaponId, uint32_t skinId, Il2CppList<uintptr_t>* attachList, uintptr_t ornamentItem, bool bShowInInventory, uint32_t subWeaponId) {
		return ((T (*)(AvatarControllerWeapon*, uint32_t, uint32_t, Il2CppList<uintptr_t>*, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x32E3CB0))(this, weaponId, skinId, attachList, ornamentItem, bShowInInventory, subWeaponId);
	}
	template <typename T = void> T WeaponChangeImpl(uint32_t weaponId, uint32_t skinId, Il2CppList<uintptr_t>* attachList, uintptr_t ornamentItem, bool bShowInInventory, uint32_t subWeaponId) {
		return ((T (*)(AvatarControllerWeapon*, uint32_t, uint32_t, Il2CppList<uintptr_t>*, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x32E3DE0))(this, weaponId, skinId, attachList, ornamentItem, bShowInInventory, subWeaponId);
	}
	template <typename T = void> T OnWeaponChange(uintptr_t msg) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E509C))(this, msg);
	}
	template <typename T = void> T OnBRVehicleChanged(uintptr_t msg) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E5830))(this, msg);
	}
	template <typename T = void> T OnWeaponLoadedFinish(uintptr_t message) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E59FC))(this, message);
	}
	template <typename T = void> T OnTryAttachment(uintptr_t Msg) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E607C))(this, Msg);
	}
	template <typename T = void> T TryToEquipAttachment() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E5ABC))(this);
	}
	template <typename T = void> T SetAvatarViewActive(bool IsActive, bool bSpecialShowScene, bool bNeedSwitchSceneRoot, uintptr_t weaponConf) {
		return ((T (*)(AvatarControllerWeapon*, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x32E040C))(this, IsActive, bSpecialShowScene, bNeedSwitchSceneRoot, weaponConf);
	}
	template <typename T = uintptr_t> T GetShowType() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E2FF0))(this);
	}
	template <typename T = void> T SetAvatarViewByShowType(uintptr_t type) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E6538))(this, type);
	}
	template <typename T = void> T SetCameraPosition(Il2CppVector3 vec) {
		return ((T (*)(AvatarControllerWeapon*, Il2CppVector3))(Il2CppBase() + 0x32E56D8))(this, vec);
	}
	template <typename T = uintptr_t> T GetWeaponAssetID(uint32_t weaponID, uint32_t skinID, bool useInventoryAsset) {
		return ((T (*)(AvatarControllerWeapon*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x32E1F5C))(this, weaponID, skinID, useInventoryAsset);
	}
	template <typename T = void> T ReplaceAttachment(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment) {
		return ((T (*)(AvatarControllerWeapon*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x32E6324))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment);
	}
	template <typename T = void> T RecoverAttachment() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E61AC))(this);
	}
	template <typename T = void> T ClearUselessBasic() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E6794))(this);
	}
	template <typename T = void> T SetWeaponPart(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint32_t weaponId, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarControllerWeapon*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint32_t, bool, bool))(Il2CppBase() + 0x32E4E58))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment, needReplace);
	}
	template <typename T = void> T EquipWeaponPart(int32_t weapAssetID, uint32_t weaponId) {
		return ((T (*)(AvatarControllerWeapon*, int32_t, uint32_t))(Il2CppBase() + 0x32E4584))(this, weapAssetID, weaponId);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(AvatarControllerWeapon*, bool))(Il2CppBase() + 0x32E690C))(this, visible);
	}
	template <typename T = void> T ShowWeaponModel(bool bShow) {
		return ((T (*)(AvatarControllerWeapon*, bool))(Il2CppBase() + 0x32E69D4))(this, bShow);
	}
	template <typename T = void> T ShowSuperStar(int32_t showGroup, Il2CppList<uint32_t>* customCameraAnims) {
		return ((T (*)(AvatarControllerWeapon*, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x32E6B0C))(this, showGroup, customCameraAnims);
	}
	template <typename T = void> T EnableTargetRoatation(bool enable) {
		return ((T (*)(AvatarControllerWeapon*, bool))(Il2CppBase() + 0x32E6E34))(this, enable);
	}
	template <typename T = uintptr_t> T GetAvatarView() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E01F8))(this);
	}
	template <typename T = uintptr_t> T GetSubAvatarView() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E6F68))(this);
	}
	template <typename T = void> T ResetWeaponRotation() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E10E0))(this);
	}
	template <typename T = void> T ResetWeaponDefaultRotation() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E7008))(this);
	}
	template <typename T = uintptr_t> T ChangeWeaponMaterialTemporary(uintptr_t matAsset) {
		return ((T (*)(AvatarControllerWeapon*, uintptr_t))(Il2CppBase() + 0x32E71F0))(this, matAsset);
	}
	template <typename T = void> T RecoverWeaponMaterialTemporary() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E7318))(this);
	}
	template <typename T = uintptr_t> T GetWeaponTextureTemporary() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E742C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E7548))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E7550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E7558))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AvatarControllerWeapon*))(Il2CppBase() + 0x32E7560))(this);
	}

};

}
