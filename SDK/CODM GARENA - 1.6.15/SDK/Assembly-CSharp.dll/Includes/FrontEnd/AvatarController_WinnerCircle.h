#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarControllerWinnerCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarController_WinnerCircle"));
	}

	template <typename T = uintptr_t> T& m_AvatarView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CacheWinnerCircleShowDataList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isDelayAnimByRank() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& curShowAvatarCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& loadCompleteCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isShowAnim() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& animTimerList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_GuideAssetID() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimTypeByWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftHandAnimTypeByWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRightHandAnimTypeByWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIdleAnimIndexs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimIdleTypeByWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSquadMembers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMembers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCharacterReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomDelayTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarViewActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAnimTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadSoundBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E7680))(this);
	}
	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E7720))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E77BC))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E79A0))(this);
	}
	template <typename T = uintptr_t> T GetAnimTypeByWeaponID(uint32_t weaponID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint32_t))(Il2CppBase() + 0x32E7C54))(this, weaponID);
	}
	template <typename T = Il2CppString*> T GetLeftHandAnimTypeByWeaponID(uint32_t weaponID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint32_t))(Il2CppBase() + 0x32E7F40))(this, weaponID);
	}
	template <typename T = Il2CppString*> T GetRightHandAnimTypeByWeaponID(uint32_t weaponID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint32_t))(Il2CppBase() + 0x32E80AC))(this, weaponID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetIdleAnimIndexs(uint32_t weaponID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint32_t))(Il2CppBase() + 0x32E8218))(this, weaponID);
	}
	template <typename T = uintptr_t> T GetAnimIdleTypeByWeaponID(uint32_t weaponID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint32_t))(Il2CppBase() + 0x32E82CC))(this, weaponID);
	}
	template <typename T = void> T ShowSquadMembers(Il2CppList<uintptr_t>* list, bool isDelayAnimByRank, uintptr_t posMode, bool isShowAnim) {
		return ((T (*)(AvatarControllerWinnerCircle*, Il2CppList<uintptr_t>*, bool, uintptr_t, bool))(Il2CppBase() + 0x32E85B8))(this, list, isDelayAnimByRank, posMode, isShowAnim);
	}
	template <typename T = void> T SetCameraPos(bool isWinnerCircle) {
		return ((T (*)(AvatarControllerWinnerCircle*, bool))(Il2CppBase() + 0x32E9630))(this, isWinnerCircle);
	}
	template <typename T = void> T ShowBlackScreen(bool bShow) {
		return ((T (*)(AvatarControllerWinnerCircle*, bool))(Il2CppBase() + 0x32E96F8))(this, bShow);
	}
	template <typename T = void> T HideAllMembers() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E8E80))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(AvatarControllerWinnerCircle*, bool))(Il2CppBase() + 0x32E97C8))(this, visible);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E9988))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E9AB0))(this);
	}
	template <typename T = void> T OnCharacterReady(uintptr_t msg) {
		return ((T (*)(AvatarControllerWinnerCircle*, uintptr_t))(Il2CppBase() + 0x32E9B6C))(this, msg);
	}
	template <typename T = float> T GetRandomDelayTime(float seedTime, int32_t seed, int32_t index, int32_t sum) {
		return ((T (*)(AvatarControllerWinnerCircle*, float, int32_t, int32_t, int32_t))(Il2CppBase() + 0x32E9FB8))(this, seedTime, seed, index, sum);
	}
	template <typename T = void> T EquipWeapon(uint64_t weaponID, int32_t Pos, Il2CppList<uint32_t>* AttachmentIDs, uint32_t skinID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint64_t, int32_t, Il2CppList<uint32_t>*, uint32_t))(Il2CppBase() + 0x32E908C))(this, weaponID, Pos, AttachmentIDs, skinID);
	}
	template <typename T = void> T OnAttachmentChange(uintptr_t msg) {
		return ((T (*)(AvatarControllerWinnerCircle*, uintptr_t))(Il2CppBase() + 0x32EAA68))(this, msg);
	}
	template <typename T = void> T SetAvatarViewActive(bool IsActive) {
		return ((T (*)(AvatarControllerWinnerCircle*, bool))(Il2CppBase() + 0x32EAD50))(this, IsActive);
	}
	template <typename T = uintptr_t> T GetAvatarAssetID(uint64_t roleID, uintptr_t camp) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint64_t, uintptr_t))(Il2CppBase() + 0x32E8F44))(this, roleID, camp);
	}
	template <typename T = uintptr_t> T GetWeaponAssetID(uint64_t weaponID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uint64_t))(Il2CppBase() + 0x32EA1E8))(this, weaponID);
	}
	template <typename T = void> T ClearAnimTimer() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32E7AC8))(this);
	}
	template <typename T = void> T EquipWeaponPart(uintptr_t avatarItem, uintptr_t weapAssetID) {
		return ((T (*)(AvatarControllerWinnerCircle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32EA320))(this, avatarItem, weapAssetID);
	}
	template <typename T = void> T PreloadSoundBank() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32EAE80))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32EAF18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32EAF20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32EAF28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32EAF30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AvatarControllerWinnerCircle*))(Il2CppBase() + 0x32EAF38))(this);
	}

};

}
