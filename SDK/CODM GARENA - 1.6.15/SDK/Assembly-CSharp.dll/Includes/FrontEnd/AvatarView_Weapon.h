#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarView_Weapon"));
	}

	template <typename T = uintptr_t> T& m_CurentUseType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& b_NeedResetPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& FocusRoot() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_WeaponAttachPointConfigPath() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_WeaponAssetID_Pending() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& m_WeaponSocketName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_AttachmentShower() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_LastAttachInfo() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_LastReplacedAttachInfo() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_CanRecover() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& m_SkinID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& FocusCamera() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ReceiveCamera() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& bNeedFocusCamMove() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& bNeedFocusCallback() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = Il2CppVector3> T& m_ResetCamPos() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_Normal_x() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_LoadoutWeapon_x() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_LoadoutPve() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_LoadoutPveWeapon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_CodmShop_x() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_MileStone_x() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_WeaponUpgrade_x() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_Wingsuit() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultPos_Parachute() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultRotation_LoadoutPveOffWall() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultRotation_LoadoutPveWeapon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& FocusCamDefaultRotation_Wingsuit() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector3> T& m_AvatarTransDefaultRot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& FocusCamTargetPos() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppVector3> T& m_AvatarTransTargetRot() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppVector3> T& DEFAULT_WEAPON_EULERANGLE() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ConfigHelper() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& SuperWeaponAvatarShowUtil() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& CameraSpringPosition() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpecialPosList() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& SelfController() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = bool> T& m_bPlayWeaponEffect() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppVector3> T& DEFAULT_WEAPON_ROTATION_EULERANGLE() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& mWeaponMaterialMap() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponSocketName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAvatarTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNavigationCanRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCommonWeaponEffet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReceiveSceneWeaponEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActiveCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetActiveCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishLoadAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeVehicleSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopWeaponEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCameraShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCameraDelayShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIroDownAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachmentSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLastReplacedAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAvatarTransMoveAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraPositionByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FocusAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFocusPosAndRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSetDefaultPosRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTargetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecialPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponTextureTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeaponMaterialTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverWeaponMaterialTemporary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AfterViewBoxAdapter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothCameraToPosOneOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28ED540))(this);
	}
	template <typename T = void> T SetWeaponSocketName(Il2CppString* socketName) {
		return ((T (*)(AvatarViewWeapon*, Il2CppString*))(Il2CppBase() + 0x28ED610))(this, socketName);
	}
	template <typename T = void> T ResetAvatarTrans() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28ED6B8))(this);
	}
	template <typename T = void> T CheckNavigationCanRotation() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28ED890))(this);
	}
	template <typename T = void> T ChangeWeapon(uintptr_t assetID, uint32_t weaponID) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t, uint32_t))(Il2CppBase() + 0x28EDA98))(this, assetID, weaponID);
	}
	template <typename T = void> T ChangeVehicle(uint32_t vehicleSkinId) {
		return ((T (*)(AvatarViewWeapon*, uint32_t))(Il2CppBase() + 0x28EDF40))(this, vehicleSkinId);
	}
	template <typename T = void> T LoadAsset(uintptr_t assetID) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28EDCA0))(this, assetID);
	}
	template <typename T = bool> T IsAllAttachmentReady() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28EE1A4))(this);
	}
	template <typename T = void> T set_bPlayWeaponEffect(bool value) {
		return ((T (*)(AvatarViewWeapon*, bool))(Il2CppBase() + 0x28EE26C))(this, value);
	}
	template <typename T = void> T PlayCommonWeaponEffet(uintptr_t weapon) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28EE274))(this, weapon);
	}
	template <typename T = void> T PlayReceiveSceneWeaponEffect(uintptr_t weapon, uint32_t weaponID) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t, uint32_t))(Il2CppBase() + 0x28EECC4))(this, weapon, weaponID);
	}
	template <typename T = void> T SetActiveCamera(uintptr_t camera) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28EF04C))(this, camera);
	}
	template <typename T = uintptr_t> T GetActiveCamera() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28EE770))(this);
	}
	template <typename T = void> T OnWeaponReady(int32_t id, uintptr_t obj) {
		return ((T (*)(AvatarViewWeapon*, int32_t, uintptr_t))(Il2CppBase() + 0x28EF1E0))(this, id, obj);
	}
	template <typename T = void> T OnFinishLoadAll() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F0C74))(this);
	}
	template <typename T = void> T PlayWeaponEffect() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F0878))(this);
	}
	template <typename T = void> T ChangeVehicleSkin() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F0424))(this);
	}
	template <typename T = void> T OnAttachmentReady(uintptr_t attachmentShow, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* ShowexcludeObjList) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28F0D68))(this, attachmentShow, basicUselessIds, ShowexcludeObjList);
	}
	template <typename T = void> T ClearAttachment() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28EE07C))(this);
	}
	template <typename T = void> T ChangeSkin(uint32_t ID) {
		return ((T (*)(AvatarViewWeapon*, uint32_t))(Il2CppBase() + 0x28F10D8))(this, ID);
	}
	template <typename T = void> T StopWeaponEffect() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F1198))(this);
	}
	template <typename T = void> T StopCameraShake() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F12D4))(this);
	}
	template <typename T = void> T StopCameraDelayShake() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F145C))(this);
	}
	template <typename T = void> T SetSkin(uint32_t ID) {
		return ((T (*)(AvatarViewWeapon*, uint32_t))(Il2CppBase() + 0x28F0364))(this, ID);
	}
	template <typename T = void> T BatchLoadAsset() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F15E4))(this);
	}
	template <typename T = void> T AddIroDownAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint32_t weaponId, bool isExtraAttachment) {
		return ((T (*)(AvatarViewWeapon*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint32_t, bool))(Il2CppBase() + 0x28F169C))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment);
	}
	template <typename T = void> T SetAttachment(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint32_t weaponId, bool isExtraAttachment, bool basic) {
		return ((T (*)(AvatarViewWeapon*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint32_t, bool, bool))(Il2CppBase() + 0x28F17B0))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment, basic);
	}
	template <typename T = void> T ReplaceAttachment(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment) {
		return ((T (*)(AvatarViewWeapon*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x28F1934))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment);
	}
	template <typename T = void> T RecoverAttachment() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F1A78))(this);
	}
	template <typename T = void> T ClearAttachmentSocket(Il2CppString* socketName) {
		return ((T (*)(AvatarViewWeapon*, Il2CppString*))(Il2CppBase() + 0x28F1B4C))(this, socketName);
	}
	template <typename T = void> T ClearLastReplacedAttachment() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F0FF4))(this);
	}
	template <typename T = void> T ClearUselessBasic() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F1C10))(this);
	}
	template <typename T = void> T SetWeaponPart(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint64_t weaponId, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarViewWeapon*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint64_t, bool, bool))(Il2CppBase() + 0x28F1CBC))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment, needReplace);
	}
	template <typename T = void> T PlayAvatarTransMoveAnim(Il2CppVector3 endPos, Il2CppVector3 endRot, bool needCallback) {
		return ((T (*)(AvatarViewWeapon*, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x28F1E48))(this, endPos, endRot, needCallback);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F1F4C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F1FF0))(this);
	}
	template <typename T = Il2CppVector3> T GetDefaultPosition(uintptr_t type) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28F25A8))(this, type);
	}
	template <typename T = Il2CppVector3> T GetDefaultRotation(uintptr_t type) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28F2758))(this, type);
	}
	template <typename T = void> T SetCameraPositionByType(uintptr_t type, Il2CppVector3 vec) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x28F28B0))(this, type, vec);
	}
	template <typename T = void> T FocusAttachment(uint64_t attachId) {
		return ((T (*)(AvatarViewWeapon*, uint64_t))(Il2CppBase() + 0x28F2B3C))(this, attachId);
	}
	template <typename T = bool> T GetFocusPosAndRot(uintptr_t type, uintptr_t* outPos, uintptr_t* outRot) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x28F2CFC))(this, type, outPos, outRot);
	}
	template <typename T = void> T CheckSetDefaultPosRot(uintptr_t pos, uintptr_t rot) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28F336C))(this, pos, rot);
	}
	template <typename T = void> T ResetTargetRotation(Il2CppQuaternion endRot) {
		return ((T (*)(AvatarViewWeapon*, Il2CppQuaternion))(Il2CppBase() + 0x28F34DC))(this, endRot);
	}
	template <typename T = void> T SwitchCamera(bool bOn) {
		return ((T (*)(AvatarViewWeapon*, bool))(Il2CppBase() + 0x28F35E8))(this, bOn);
	}
	template <typename T = uintptr_t> T GetSpecialPos(uintptr_t posType) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28F36B0))(this, posType);
	}
	template <typename T = Il2CppVector3> T GetWeaponRotation() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F3A14))(this);
	}
	template <typename T = uintptr_t> T GetWeaponTextureTemporary() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F3C24))(this);
	}
	template <typename T = uintptr_t> T ChangeWeaponMaterialTemporary(uintptr_t matAsset) {
		return ((T (*)(AvatarViewWeapon*, uintptr_t))(Il2CppBase() + 0x28F3F20))(this, matAsset);
	}
	template <typename T = void> T RecoverWeaponMaterialTemporary() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4304))(this);
	}
	template <typename T = void> T AfterViewBoxAdapter() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F45E4))(this);
	}
	template <typename T = void> T SmoothCameraToPosOneOff(Il2CppVector3 pos) {
		return ((T (*)(AvatarViewWeapon*, Il2CppVector3))(Il2CppBase() + 0x28F471C))(this, pos);
	}
	template <typename T = void> T PlayCommonWeaponEffetm__0() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4888))(this);
	}
	template <typename T = void> T PlayCommonWeaponEffetm__1() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4A34))(this);
	}
	template <typename T = void> T PlayReceiveSceneWeaponEffectm__2() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4B90))(this);
	}
	template <typename T = void> T PlayReceiveSceneWeaponEffectm__3() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4CB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4D94))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsAllAttachmentReady() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4D98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFinishLoadAll() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4D9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4DA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AfterViewBoxAdapter() {
		return ((T (*)(AvatarViewWeapon*))(Il2CppBase() + 0x28F4DA4))(this);
	}

};

}
