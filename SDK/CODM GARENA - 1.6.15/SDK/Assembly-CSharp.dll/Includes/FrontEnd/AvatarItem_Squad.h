#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarItemSquad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarItem_Squad"));
	}

	template <typename T = uintptr_t> T& mCacheAnimatorToShow() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_SquadView() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& m_DefaultAnimationName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppQuaternion> T& m_DefualtAvatarLocalRoattion() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_CharacterAssetID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID_Left() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID_Right() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& m_WeaponID_Left() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint64_t> T& m_WeaponID_Right() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& m_LeftHandSocketName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& m_ProfessionChipID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& m_ProfessionalChipSkinID() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_ProfessionChipType() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ToyBombSocket() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& ToyBombAsset() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ShieldSocket() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& ShieldAsset() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& DroneSocket() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& DroneAsset() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& AirborneSocket() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& AirborneAsset() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& HoligramSocket() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& HoligramPlatformTrans() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& HoligramCopySoldier() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& HoligramMaterial() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ChipAnimator() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& bInBrLobby() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppString*> T& OffsetPose() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> static T& OffsetPoseIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OffsetPoseName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& DisableRotTimer() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& initRightHandBool() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& initRightHandName() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = bool> T& initLeftHandBool() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& initLeftHandName() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& m_bPlayCommercialAni() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector3> T& Holigram_Position() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector3> T& Holigram_Scale() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> static T& InvisibleManHoldTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& InvisibleManNormalTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToShowOffsetPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProfessionChipInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedRebuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckHasCommerialEnterAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAnimationEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAvatarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomChangeAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisplayWhenLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCacheAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightHandBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftHandBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRightWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLeftWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOffsetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAnythingInHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCharacterSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLeftWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRightWeaponSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeProfessionalChipSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCharacterShower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAvatarAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIroDownAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckShowCharacterShower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCharacterReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatarEntranceAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSquadMemberData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoolAvatarAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoChangeProfessionChip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncAvatarAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSceneProfessionChipReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProcessHoligramSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearIndividuationAnimation_Squad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInvisibleManSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}

	template <typename T = int32_t> T GetIndex() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28CE30C))(this);
	}
	template <typename T = void> T CheckToShowOffsetPose() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28CE3AC))(this);
	}
	template <typename T = void> T AddBox(uintptr_t box) {
		return ((T (*)(AvatarItemSquad*, uintptr_t))(Il2CppBase() + 0x28CE854))(this, box);
	}
	template <typename T = void> T RemoveBox(uintptr_t box) {
		return ((T (*)(AvatarItemSquad*, uintptr_t))(Il2CppBase() + 0x28CE9A4))(this, box);
	}
	template <typename T = void> T SetProfessionChipInfo(uint32_t chipId, uint32_t ProfessionalChipSkinID) {
		return ((T (*)(AvatarItemSquad*, uint32_t, uint32_t))(Il2CppBase() + 0x28CEAF4))(this, chipId, ProfessionalChipSkinID);
	}
	template <typename T = bool> T CheckNeedRebuild(int32_t roleAssetId, int32_t headId, int32_t bagId, int32_t clothId, int32_t chipId, uint32_t chipSkinID) {
		return ((T (*)(AvatarItemSquad*, int32_t, int32_t, int32_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x28CEC20))(this, roleAssetId, headId, bagId, clothId, chipId, chipSkinID);
	}
	template <typename T = void> T ChangeAvatar(int32_t Pos, uintptr_t id, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset, int32_t roldId, uint32_t chipId, uintptr_t animatorController, Il2CppString* defaultAnimationName, Il2CppQuaternion defaultLocalRoattion) {
		return ((T (*)(AvatarItemSquad*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uint32_t, uintptr_t, Il2CppString*, Il2CppQuaternion))(Il2CppBase() + 0x28CED60))(this, Pos, id, hatAsset, bagAsset, clothAsset, roldId, chipId, animatorController, defaultAnimationName, defaultLocalRoattion);
	}
	template <typename T = bool> T CheckHasCommerialEnterAni(uint32_t RoleId) {
		return ((T (*)(AvatarItemSquad*, uint32_t))(Il2CppBase() + 0x28CF178))(this, RoleId);
	}
	template <typename T = void> T ClearAnimationEffect() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28CF4FC))(this);
	}
	template <typename T = void> T ClearAvatarEffect() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28CF594))(this);
	}
	template <typename T = void> T ChangeAvatar_1(int32_t Pos, uintptr_t id, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset, int32_t roldId, uint32_t chipId, uintptr_t animator, bool isInBr, bool bPlayEntranAni, bool forceRefresh) {
		return ((T (*)(AvatarItemSquad*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uint32_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x28CF734))(this, Pos, id, hatAsset, bagAsset, clothAsset, roldId, chipId, animator, isInBr, bPlayEntranAni, forceRefresh);
	}
	template <typename T = void> T RoomChangeAvatar(int32_t Pos, uintptr_t id, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset, int32_t roldId, uint32_t chipId, uint32_t chipSkinID, uintptr_t animator, bool bDisplay, bool isInBr, bool bPlayEntranAni, bool forceRefresh) {
		return ((T (*)(AvatarItemSquad*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uint32_t, uint32_t, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x28D01EC))(this, Pos, id, hatAsset, bagAsset, clothAsset, roldId, chipId, chipSkinID, animator, bDisplay, isInBr, bPlayEntranAni, forceRefresh);
	}
	template <typename T = void> T SetDisplayWhenLoaded(bool flag) {
		return ((T (*)(AvatarItemSquad*, bool))(Il2CppBase() + 0x28D0494))(this, flag);
	}
	template <typename T = void> T ResetSocket(int32_t idx, uintptr_t squadView) {
		return ((T (*)(AvatarItemSquad*, int32_t, uintptr_t))(Il2CppBase() + 0x28CE0BC))(this, idx, squadView);
	}
	template <typename T = void> T ShowAvatar(bool bShow) {
		return ((T (*)(AvatarItemSquad*, bool))(Il2CppBase() + 0x28D053C))(this, bShow);
	}
	template <typename T = void> T SetCacheAnimatorController(uintptr_t animator) {
		return ((T (*)(AvatarItemSquad*, uintptr_t))(Il2CppBase() + 0x28D08B4))(this, animator);
	}
	template <typename T = void> T SetRightHandBool(Il2CppString* name, bool isTrue) {
		return ((T (*)(AvatarItemSquad*, Il2CppString*, bool))(Il2CppBase() + 0x28D0A50))(this, name, isTrue);
	}
	template <typename T = void> T SetLeftHandBool(Il2CppString* name, bool isTrue) {
		return ((T (*)(AvatarItemSquad*, Il2CppString*, bool))(Il2CppBase() + 0x28D0B94))(this, name, isTrue);
	}
	template <typename T = void> T SetAvatarAnimator(uintptr_t animator, int32_t pos) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, int32_t))(Il2CppBase() + 0x28D0CD8))(this, animator, pos);
	}
	template <typename T = void> T SetAnimTrigger(Il2CppString* trigger) {
		return ((T (*)(AvatarItemSquad*, Il2CppString*))(Il2CppBase() + 0x28D10E4))(this, trigger);
	}
	template <typename T = void> T SetTrigger(Il2CppString* triggerName) {
		return ((T (*)(AvatarItemSquad*, Il2CppString*))(Il2CppBase() + 0x28D1368))(this, triggerName);
	}
	template <typename T = void> T PlayIndividuationAnimation(Il2CppString* stateName, float time) {
		return ((T (*)(AvatarItemSquad*, Il2CppString*, float))(Il2CppBase() + 0x28D1488))(this, stateName, time);
	}
	template <typename T = void> T ChangeRightWeapon(uint64_t id, uintptr_t weapAssetID, Il2CppString* sockName) {
		return ((T (*)(AvatarItemSquad*, uint64_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x28D1560))(this, id, weapAssetID, sockName);
	}
	template <typename T = void> T ChangeLeftWeapon(uint64_t id, uintptr_t weapAssetID, Il2CppString* leftSocketName) {
		return ((T (*)(AvatarItemSquad*, uint64_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x28D1BC4))(this, id, weapAssetID, leftSocketName);
	}
	template <typename T = void> T SetOffsetTransform(uintptr_t socketTrans, Il2CppVector3 pos, Il2CppQuaternion rot, Il2CppVector3 scale) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, Il2CppVector3, Il2CppQuaternion, Il2CppVector3))(Il2CppBase() + 0x28D1D3C))(this, socketTrans, pos, rot, scale);
	}
	template <typename T = void> T ClearAnythingInHand() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D1EE8))(this);
	}
	template <typename T = void> T ChangeCharacterSkin(uint32_t ID) {
		return ((T (*)(AvatarItemSquad*, uint32_t))(Il2CppBase() + 0x28D23C0))(this, ID);
	}
	template <typename T = void> T ChangeLeftWeaponSkin(uint32_t ID) {
		return ((T (*)(AvatarItemSquad*, uint32_t))(Il2CppBase() + 0x28D2534))(this, ID);
	}
	template <typename T = void> T ChangeRightWeaponSkin(uint32_t ID) {
		return ((T (*)(AvatarItemSquad*, uint32_t))(Il2CppBase() + 0x28D25F8))(this, ID);
	}
	template <typename T = void> T ChangeProfessionalChipSkin(uint32_t ID) {
		return ((T (*)(AvatarItemSquad*, uint32_t))(Il2CppBase() + 0x28D26BC))(this, ID);
	}
	template <typename T = void> T ClearCharacterShower() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D2830))(this);
	}
	template <typename T = void> T ClearAttachment() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D2A64))(this);
	}
	template <typename T = void> T StopAvatarAudio() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D2B2C))(this);
	}
	template <typename T = void> T AddIroDownAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint32_t weaponId) {
		return ((T (*)(AvatarItemSquad*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint32_t))(Il2CppBase() + 0x28D2C40))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId);
	}
	template <typename T = void> T ClearUselessBasic() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D2F1C))(this);
	}
	template <typename T = void> T SetWeaponPart(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarItemSquad*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x28D30D0))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment, needReplace);
	}
	template <typename T = void> T SetAttachment(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment) {
		return ((T (*)(AvatarItemSquad*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x28D32F8))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment);
	}
	template <typename T = void> T CheckShowCharacterShower(int32_t roldId) {
		return ((T (*)(AvatarItemSquad*, int32_t))(Il2CppBase() + 0x28D34F8))(this, roldId);
	}
	template <typename T = void> T ForceUpdateAnimator() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28CFFEC))(this);
	}
	template <typename T = void> T LoadAssetAsync(uintptr_t assetID, int32_t pos) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, int32_t))(Il2CppBase() + 0x28CEED4))(this, assetID, pos);
	}
	template <typename T = void> T LoadEquip(int32_t pos, Il2CppArray<uintptr_t>* inEquips) {
		return ((T (*)(AvatarItemSquad*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x28CF9D0))(this, pos, inEquips);
	}
	template <typename T = bool> T get_NeedEquipAndAttachment() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D419C))(this);
	}
	template <typename T = void> T OnEquipReady(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(AvatarItemSquad*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28D41B0))(this, ids, obj);
	}
	template <typename T = bool> T get_bPlayCommercialAni() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D4EF4))(this);
	}
	template <typename T = void> T OnCharacterReady(Il2CppArray<uintptr_t>* ids, Il2CppArray<uintptr_t>* equips, uintptr_t obj) {
		return ((T (*)(AvatarItemSquad*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28D4EFC))(this, ids, equips, obj);
	}
	template <typename T = void> T ShowAvatarEntranceAnimation(uintptr_t conf, int32_t pos) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, int32_t))(Il2CppBase() + 0x28D66EC))(this, conf, pos);
	}
	template <typename T = void> T SetClickBoxCollider(uintptr_t obj, int32_t pos) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, int32_t))(Il2CppBase() + 0x28D7310))(this, obj, pos);
	}
	template <typename T = void> T SetSquadMemberData(uintptr_t obj, int32_t pos) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, int32_t))(Il2CppBase() + 0x28D75D0))(this, obj, pos);
	}
	template <typename T = void> T OnAttachmentReady(uintptr_t attachmentShow, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* excludeObjList) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28D86E0))(this, attachmentShow, basicUselessIds, excludeObjList);
	}
	template <typename T = void> T SetBoolAvatarAnimator(Il2CppString* paramName, bool b) {
		return ((T (*)(AvatarItemSquad*, Il2CppString*, bool))(Il2CppBase() + 0x28CE6C8))(this, paramName, b);
	}
	template <typename T = void> T DoChangeProfessionChip() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D7740))(this);
	}
	template <typename T = void> T SyncAvatarAnimator(uintptr_t partAnimator) {
		return ((T (*)(AvatarItemSquad*, uintptr_t))(Il2CppBase() + 0x28D8F84))(this, partAnimator);
	}
	template <typename T = void> T OnSceneProfessionChipReady(int32_t id, uintptr_t obj) {
		return ((T (*)(AvatarItemSquad*, int32_t, uintptr_t))(Il2CppBase() + 0x28D9188))(this, id, obj);
	}
	template <typename T = void> T SetProcessHoligramSomething() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D44C0))(this);
	}
	template <typename T = void> T ClearIndividuationAnimation_Squad() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D99A4))(this);
	}
	template <typename T = void> T SetInvisibleManSomething() {
		return ((T (*)(AvatarItemSquad*))(Il2CppBase() + 0x28D4B08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddBox(uintptr_t P0) {
		return ((T (*)(AvatarItemSquad*, uintptr_t))(Il2CppBase() + 0x28D9D74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveBox(uintptr_t P0) {
		return ((T (*)(AvatarItemSquad*, uintptr_t))(Il2CppBase() + 0x28D9D78))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowAvatar(bool P0) {
		return ((T (*)(AvatarItemSquad*, bool))(Il2CppBase() + 0x28D9D7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEquipReady(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(AvatarItemSquad*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28D9D80))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnCharacterReady(Il2CppArray<uintptr_t>* P0, Il2CppArray<uintptr_t>* P1, uintptr_t P2) {
		return ((T (*)(AvatarItemSquad*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28D9D84))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnAttachmentReady(uintptr_t P0, Il2CppList<int32_t>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(AvatarItemSquad*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28D9D9C))(this, P0, P1, P2);
	}

};

}
