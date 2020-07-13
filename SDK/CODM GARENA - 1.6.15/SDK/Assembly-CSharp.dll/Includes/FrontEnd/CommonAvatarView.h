#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CommonAvatarView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CommonAvatarView"));
	}

	template <typename T = uintptr_t> T& AvatarCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AvatarTargetRot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AdapterBox() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AvatarWeaponShowRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AvatarRoleShowRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& RoleAnimatorController() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RoleAnimatorController_FM() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SpecialRoleAnimatorController() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SpecialRoleAnimatorController_FM() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SceneEffect() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AvatarPosTweener() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& CameraSpringPosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AvatarPositionUtil() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mAvatarParameter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mAvatarComponentList() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& AvatarDynamicLoadingId() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& AvatarDynamicRoot() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& AvatarDynamicAnimator() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& AvatarDynamicManagedAsset() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& AvatarDynamicBox() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& AvatarDynamicFemale() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& AvatarDynamicActionName() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AvatarAudioComponent() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CurrentUIIndividuationPlayAnimationInstance() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& AvatarDynamicScale() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& AvatarDynamicActionTimer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& CameraDefaultPos() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector3> T& CameraAcccumulatePos() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& CameraAcccumulatePos2() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& CameraAcccumulatePos3() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& CameraLacquerPos() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& CameraShopSkinPos() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector3> T& CameraCompoundPos() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& CameraRankReward() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppVector3> T& CameraShopSkinPos_Role() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector3> T& CameraCompoundPos_Role() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppVector3> T& CameraFacepopup_Role() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppVector3> T& CameraBoxScenePos() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector3> T& CameraBoxScenePos_Role() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppVector3> T& CameraBoxScenePos_Vehicle() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppVector3> T& CameraLuckDraw() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppVector3> T& CameraLuckDraw2() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppVector3> T& CameraLuckDraw3() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassDisPlayPos_Role() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassDisPlayPos_Lacquer() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassDisPlayPos_Default() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppVector3> T& CameraShopDetailDisPlayPos_Role() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = Il2CppVector3> T& CameraShopDetailDisPlayPos_Default() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppVector3> T& CameraShopDetailDisPlayPos_Weapon() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& bPlayingEnterAni() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = Il2CppVector3> T& DEFAULT_WEAPON_ROTATION_EULERANGLE() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = Il2CppVector3> T& RightComponentScale() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& DisableRotTimer() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = float> T& yOffsetXS1Goliath() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& idXS1Goliath() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassPos() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassPos_New() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassPos_Lacquer() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassPos_Lacquer_New() {
		return *(T*)((uintptr_t)this + 0x20C);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassPos_Role() {
		return *(T*)((uintptr_t)this + 0x218);
	}
	template <typename T = Il2CppVector3> T& CameraBattlePassPos_Role_New() {
		return *(T*)((uintptr_t)this + 0x224);
	}
	template <typename T = float> static T& CameraBattlePassPosCommonOffsetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& CameraBattlePassPosCommonOffsetRatio_New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& CameraBattlePassPosRoleOffsetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& CameraBattlePassPosRoleOffsetRatio_New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& CameraBattlePassPosLacquerOffsetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& CameraBattlePassPosLacquerOffsetRatio_New() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessAdapterPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasEntranceAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToBeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopCameraShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAvatarTweenPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAvatarTweenPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothCameraToPosOneOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraLuckyDrawPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraLuckyValueDrawPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraShopDetailChestPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachObjToParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectComponentImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CollectComponentImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptAvatarWithBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectWeaponComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWeaponRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponComponentLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponFinalShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectRoleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_OnRoleLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessRoleAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadRoleComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleComponentLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopDisableRotTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatarEntranceAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoleFinalShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemLoadedFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemFinalShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpecialItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessXS1Goliath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraBattlePassPosCommonOffsetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonCameraBattlePassPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraBattlePassPosRoleOffsetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleCameraBattlePassPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraBattlePassPosLacquerOffsetRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLacquerCameraBattlePassPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCameraBattlePassPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarAnchorPosX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}

	template <typename T = Il2CppVector3> T GetCurrentCameraPosition(uintptr_t avatarParam) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x2928FAC))(this, avatarParam);
	}
	template <typename T = Il2CppVector3> T ProcessAdapterPosition(Il2CppVector3 originalPos) {
		return ((T (*)(CommonAvatarView*, Il2CppVector3))(Il2CppBase() + 0x29259D0))(this, originalPos);
	}
	template <typename T = void> T CheckCameraPos(uintptr_t avatarParam) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292B058))(this, avatarParam);
	}
	template <typename T = bool> T HasEntranceAni(uintptr_t param) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292B360))(this, param);
	}
	template <typename T = bool> T CheckToBeChanged(uintptr_t param) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292B584))(this, param);
	}
	template <typename T = void> T ClearAvatar() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292B99C))(this);
	}
	template <typename T = void> T ShowNone() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x2924020))(this);
	}
	template <typename T = void> T StopCameraShake() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292420C))(this);
	}
	template <typename T = void> T ShowWeapon(uintptr_t param) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x29231F4))(this, param);
	}
	template <typename T = void> T ShowRole(uintptr_t param) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x2923624))(this, param);
	}
	template <typename T = void> T ShowItem(uintptr_t param) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x2923C10))(this, param);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292CE94))(this);
	}
	template <typename T = void> T PlayAvatarTweenPosition(Il2CppVector3 from, Il2CppVector3 to, float duration, uintptr_t style, bool reset) {
		return ((T (*)(CommonAvatarView*, Il2CppVector3, Il2CppVector3, float, uintptr_t, bool))(Il2CppBase() + 0x2925178))(this, from, to, duration, style, reset);
	}
	template <typename T = void> T StopAvatarTweenPosition() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29243C4))(this);
	}
	template <typename T = void> T SmoothCameraToPosOneOff(Il2CppVector3 pos) {
		return ((T (*)(CommonAvatarView*, Il2CppVector3))(Il2CppBase() + 0x2925EA4))(this, pos);
	}
	template <typename T = void> T StopEffect() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29245AC))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraLuckyDrawPos(uintptr_t ctrl) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292AD0C))(this, ctrl);
	}
	template <typename T = Il2CppVector3> T GetCameraLuckyValueDrawPos(uintptr_t ctrl) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292A9C0))(this, ctrl);
	}
	template <typename T = Il2CppVector3> T GetCameraShopDetailChestPos(uintptr_t ctrl) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292A638))(this, ctrl);
	}
	template <typename T = uintptr_t> T FindSocket(Il2CppString* socketName, uintptr_t root) {
		return ((T (*)(CommonAvatarView*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x292D554))(this, socketName, root);
	}
	template <typename T = void> T AttachObjToParent(uintptr_t subObj, uintptr_t parentObj) {
		return ((T (*)(CommonAvatarView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x292D6E0))(this, subObj, parentObj);
	}
	template <typename T = uintptr_t> T CollectComponentImpl(Il2CppList<int32_t>* compAssetIds, Il2CppString* compSocket, uint32_t avatarId) {
		return ((T (*)(CommonAvatarView*, Il2CppList<int32_t>*, Il2CppString*, uint32_t))(Il2CppBase() + 0x292D914))(this, compAssetIds, compSocket, avatarId);
	}
	template <typename T = uintptr_t> T CollectComponentImpl_1(int32_t compAssetId, Il2CppString* compSocket, uint32_t avatarId) {
		return ((T (*)(CommonAvatarView*, int32_t, Il2CppString*, uint32_t))(Il2CppBase() + 0x292DC6C))(this, compAssetId, compSocket, avatarId);
	}
	template <typename T = void> T AdaptAvatarWithBox() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292DF00))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CollectWeaponComponent(uintptr_t weaponAssetId, uint32_t avatarId) {
		return ((T (*)(CommonAvatarView*, uintptr_t, uint32_t))(Il2CppBase() + 0x292BEB0))(this, weaponAssetId, avatarId);
	}
	template <typename T = void> T OnWeaponLoadedFinish(int32_t id, uintptr_t obj) {
		return ((T (*)(CommonAvatarView*, int32_t, uintptr_t))(Il2CppBase() + 0x292E574))(this, id, obj);
	}
	template <typename T = void> T ProcessWeaponRotation() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292ED68))(this);
	}
	template <typename T = void> T LoadWeaponComponents() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292EF44))(this);
	}
	template <typename T = void> T OnWeaponComponentLoadedFinish(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(CommonAvatarView*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x292F6A4))(this, id, obj);
	}
	template <typename T = void> T OnWeaponFinalShow() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292F380))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T CollectRoleComponent(uintptr_t roleParam) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x292C834))(this, roleParam);
	}
	template <typename T = void> T OnRoleLoadedFinish(Il2CppArray<uintptr_t>* ids, Il2CppArray<uintptr_t>* equips, uintptr_t obj) {
		return ((T (*)(CommonAvatarView*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2930034))(this, ids, equips, obj);
	}
	template <typename T = void> T OnRoleLoadedFinish_1(int32_t id, uintptr_t obj) {
		return ((T (*)(CommonAvatarView*, int32_t, uintptr_t))(Il2CppBase() + 0x2931030))(this, id, obj);
	}
	template <typename T = void> T ProcessRoleAnimator() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29304F0))(this);
	}
	template <typename T = void> T LoadRoleComponents() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x2930A50))(this);
	}
	template <typename T = void> T OnRoleComponentLoadedFinish(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(CommonAvatarView*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2931954))(this, ids, obj);
	}
	template <typename T = void> T SetRoleAction() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292D084))(this);
	}
	template <typename T = void> T StopDisableRotTimer() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29247EC))(this);
	}
	template <typename T = void> T ShowAvatarEntranceAnimation(uintptr_t conf) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x293204C))(this, conf);
	}
	template <typename T = void> T OnRoleFinalShow() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29314B4))(this);
	}
	template <typename T = void> T TickIndividuationAnimation(float deltaTime) {
		return ((T (*)(CommonAvatarView*, float))(Il2CppBase() + 0x292D434))(this, deltaTime);
	}
	template <typename T = void> T ClearIndividuationAnimation() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292BDC0))(this);
	}
	template <typename T = void> T PlayIndividuationAnimation(Il2CppString* stateName) {
		return ((T (*)(CommonAvatarView*, Il2CppString*))(Il2CppBase() + 0x2931C40))(this, stateName);
	}
	template <typename T = void> T OnItemLoadedFinish(int32_t id, uintptr_t obj) {
		return ((T (*)(CommonAvatarView*, int32_t, uintptr_t))(Il2CppBase() + 0x2932708))(this, id, obj);
	}
	template <typename T = void> T OnItemFinalShow() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x2932C08))(this);
	}
	template <typename T = void> T CheckSpecialItem() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x2932DF4))(this);
	}
	template <typename T = Il2CppVector3> T ProcessXS1Goliath(uintptr_t avatarParam, Il2CppVector3 CameraPos) {
		return ((T (*)(CommonAvatarView*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x2933BD4))(this, avatarParam, CameraPos);
	}
	template <typename T = bool> static T get_CheckBPUINewVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x2933E48))(0);
	}
	template <typename T = float> static T GetCameraBattlePassPosCommonOffsetRatio() {
		return ((T (*)(void *))(Il2CppBase() + 0x292A4B0))(0);
	}
	template <typename T = Il2CppVector3> T GetCommonCameraBattlePassPos() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292A31C))(this);
	}
	template <typename T = float> static T GetCameraBattlePassPosRoleOffsetRatio() {
		return ((T (*)(void *))(Il2CppBase() + 0x2929C94))(0);
	}
	template <typename T = Il2CppVector3> T GetRoleCameraBattlePassPos() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x2929B00))(this);
	}
	template <typename T = float> static T GetCameraBattlePassPosLacquerOffsetRatio() {
		return ((T (*)(void *))(Il2CppBase() + 0x292A194))(0);
	}
	template <typename T = Il2CppVector3> T GetLacquerCameraBattlePassPos() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x292A050))(this);
	}
	template <typename T = Il2CppVector3> T GetCameraBattlePassPos(uintptr_t ctrl, Il2CppVector3 original_pos, float ratio) {
		return ((T (*)(CommonAvatarView*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x2929E1C))(this, ctrl, original_pos, ratio);
	}
	template <typename T = float> T GetAvatarAnchorPosX(uintptr_t ctrl) {
		return ((T (*)(CommonAvatarView*, uintptr_t))(Il2CppBase() + 0x2933F14))(this, ctrl);
	}
	template <typename T = void> T OnWeaponLoadedFinishm__0() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29342D0))(this);
	}
	template <typename T = void> T OnWeaponLoadedFinishm__1() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x293447C))(this);
	}
	template <typename T = void> T ShowAvatarEntranceAnimationm__2() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29345D8))(this);
	}
	template <typename T = void> T ShowAvatarEntranceAnimationm__3() {
		return ((T (*)(CommonAvatarView*))(Il2CppBase() + 0x29346B4))(this);
	}

};

}
