#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewSquad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarView_Squad"));
	}

	template <typename T = uintptr_t> T& MobileCamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AvatarCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CacheAnimators() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& PvpAvatarData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PvpLadderAvatarData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PveAvatarData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BrAvatarData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& AvatarRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& WeaponShowObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RoleShowObjAry() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChipShowObjAry() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& AvatarWeaponCtrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& avatarViewType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& avatarItemlist() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& cacheAvatarData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& roleTargetRotList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& memberCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& LeftWeapSocketName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& LeftForeArmSocketName() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& RightWeapSocketName() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& LeftArmSocketName() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& LeftHandSocketName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& Spine2SocketName() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& SMRSWeaponSocketName() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& FHJWeaponSocketName() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetVirtualData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNamesTransformList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEncourageTransformList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMembers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMembersExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomHideMembersExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCharacterInPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCharacterInFirstPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomChangeCharacterInPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimatorByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimatorIndexByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAvatarAnimatorWhenChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMainAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigWeaponAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseSpecialWeaponAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWenponStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAnimatorWithWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMyAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarCanRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreAvatarRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopAvatarAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLauncherSocketById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28E9790))(this);
	}
	template <typename T = void> T ResetVirtualData(uintptr_t eType) {
		return ((T (*)(AvatarViewSquad*, uintptr_t))(Il2CppBase() + 0x28E9A44))(this, eType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNamesTransformList() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28EA230))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEncourageTransformList() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28EA2DC))(this);
	}
	template <typename T = uintptr_t> T GetAvatarItem(int32_t pos) {
		return ((T (*)(AvatarViewSquad*, int32_t))(Il2CppBase() + 0x28EA388))(this, pos);
	}
	template <typename T = void> T HideAllMembers() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28EA4F8))(this);
	}
	template <typename T = void> T HideAllMembersExcept(int32_t pos) {
		return ((T (*)(AvatarViewSquad*, int32_t))(Il2CppBase() + 0x28EA634))(this, pos);
	}
	template <typename T = void> T RoomHideMembersExcept(Il2CppList<int32_t>* exceptList) {
		return ((T (*)(AvatarViewSquad*, Il2CppList<int32_t>*))(Il2CppBase() + 0x28EA780))(this, exceptList);
	}
	template <typename T = void> T ChangeCharacterInPos(int32_t RoleId, uintptr_t assetID, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset, int32_t pos, uintptr_t weaponAnimator, uint32_t chipId, bool isInBr, bool bPlayEntranAni, bool bResetRotation, bool forceRefresh) {
		return ((T (*)(AvatarViewSquad*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uint32_t, bool, bool, bool, bool))(Il2CppBase() + 0x28EA940))(this, RoleId, assetID, hatAsset, bagAsset, clothAsset, pos, weaponAnimator, chipId, isInBr, bPlayEntranAni, bResetRotation, forceRefresh);
	}
	template <typename T = void> T SetCharacterInFirstPos(int32_t RoleId, uintptr_t assetID, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset, uintptr_t animatorController, Il2CppString* defaultAnimationName, Il2CppQuaternion defaultLocalRoattion) {
		return ((T (*)(AvatarViewSquad*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, Il2CppQuaternion))(Il2CppBase() + 0x28EAC5C))(this, RoleId, assetID, hatAsset, bagAsset, clothAsset, animatorController, defaultAnimationName, defaultLocalRoattion);
	}
	template <typename T = void> T RoomChangeCharacterInPos(uintptr_t assetID, uintptr_t hatAsset, uintptr_t bagAsset, uintptr_t clothAsset, int32_t pos, int32_t RoleId, uint32_t chipId, uint32_t chipSkinID, uintptr_t weaponAnimator, bool bDisplay, bool isInBr, bool bPlayEntranAni, bool bResetRotation, bool forceRefresh) {
		return ((T (*)(AvatarViewSquad*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, int32_t, uint32_t, uint32_t, uintptr_t, bool, bool, bool, bool, bool))(Il2CppBase() + 0x28EADD8))(this, assetID, hatAsset, bagAsset, clothAsset, pos, RoleId, chipId, chipSkinID, weaponAnimator, bDisplay, isInBr, bPlayEntranAni, bResetRotation, forceRefresh);
	}
	template <typename T = uintptr_t> T GetAnimatorByIndex(int32_t index) {
		return ((T (*)(AvatarViewSquad*, int32_t))(Il2CppBase() + 0x28CF428))(this, index);
	}
	template <typename T = int32_t> T GetAnimatorIndexByName(Il2CppString* aniName) {
		return ((T (*)(AvatarViewSquad*, Il2CppString*))(Il2CppBase() + 0x28EB114))(this, aniName);
	}
	template <typename T = void> T CheckAvatarAnimatorWhenChangeWeapon(int32_t pos, uint64_t weaponId, uint32_t professionChip, bool bUseFemaleAnim) {
		return ((T (*)(AvatarViewSquad*, int32_t, uint64_t, uint32_t, bool))(Il2CppBase() + 0x28EB358))(this, pos, weaponId, professionChip, bUseFemaleAnim);
	}
	template <typename T = uintptr_t> T GetMainAnimator(uint64_t weaponID, uint32_t professionChip, bool bUseFemaleAnim, int32_t pos) {
		return ((T (*)(AvatarViewSquad*, uint64_t, uint32_t, bool, int32_t))(Il2CppBase() + 0x28EB4C0))(this, weaponID, professionChip, bUseFemaleAnim, pos);
	}
	template <typename T = int32_t> T GetConfigWeaponAnimator(int32_t originalIndex, uint64_t weaponID, bool bUseFemaleAnim, int32_t pos) {
		return ((T (*)(AvatarViewSquad*, int32_t, uint64_t, bool, int32_t))(Il2CppBase() + 0x28EB92C))(this, originalIndex, weaponID, bUseFemaleAnim, pos);
	}
	template <typename T = int32_t> T CheckUseSpecialWeaponAnimator(uint64_t weaponID, uint32_t professionChip, bool bUseFemaleAnim) {
		return ((T (*)(AvatarViewSquad*, uint64_t, uint32_t, bool))(Il2CppBase() + 0x28EB608))(this, weaponID, professionChip, bUseFemaleAnim);
	}
	template <typename T = bool> T CalcWenponStyle(uintptr_t weaponType, bool bUseFemaleAnim, uintptr_t* ret) {
		return ((T (*)(AvatarViewSquad*, uintptr_t, bool, uintptr_t*))(Il2CppBase() + 0x28EBDB8))(this, weaponType, bUseFemaleAnim, ret);
	}
	template <typename T = void> T SwitchAnimatorWithWeapon(int32_t pos, uintptr_t animator) {
		return ((T (*)(AvatarViewSquad*, int32_t, uintptr_t))(Il2CppBase() + 0x28D70A0))(this, pos, animator);
	}
	template <typename T = void> T PlayMyAction(int32_t pos, Il2CppString* triName) {
		return ((T (*)(AvatarViewSquad*, int32_t, Il2CppString*))(Il2CppBase() + 0x28EBEBC))(this, pos, triName);
	}
	template <typename T = void> T SetAvatarCanRot(int32_t pos) {
		return ((T (*)(AvatarViewSquad*, int32_t))(Il2CppBase() + 0x28EBFFC))(this, pos);
	}
	template <typename T = void> T RestoreAvatarRot() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28EC1B8))(this);
	}
	template <typename T = uintptr_t> T GetTargetRot(int32_t pos) {
		return ((T (*)(AvatarViewSquad*, int32_t))(Il2CppBase() + 0x28D85B8))(this, pos);
	}
	template <typename T = void> T StopAvatarAudio() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28EC348))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28EC474))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AvatarViewSquad*))(Il2CppBase() + 0x28ECC10))(this);
	}
	template <typename T = Il2CppString*> T GetLauncherSocketById(uint64_t weaponId) {
		return ((T (*)(AvatarViewSquad*, uint64_t))(Il2CppBase() + 0x28D206C))(this, weaponId);
	}

};

}
