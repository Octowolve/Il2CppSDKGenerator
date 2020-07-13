#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarControllerCharacter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarController_Character"));
	}

	template <typename T = uintptr_t> T& m_AvatarView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_ActionInterval_Max() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_ActionInterval_Min() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_GuideAssetID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> static T& IsGetAvatarScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_CacheCharacterChangeParam() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppVector3> T& mRankPosition() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& mOtherPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerPlayAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSquadMemberCharacterChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDSTestDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChangeWithAttach() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EequipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAvatarRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAvatarSceneTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInLeftCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_GetAvatarView() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D5550))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D5558))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D5628))(this);
	}
	template <typename T = void> T TimerPlayAction() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D58F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D5B20))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D5CC0))(this);
	}
	template <typename T = void> T OnSquadMemberCharacterChanged(uintptr_t msg) {
		return ((T (*)(AvatarControllerCharacter*, uintptr_t))(Il2CppBase() + 0x32D5DC0))(this, msg);
	}
	template <typename T = void> T OnDSTestDataChanged(uintptr_t msg) {
		return ((T (*)(AvatarControllerCharacter*, uintptr_t))(Il2CppBase() + 0x32D630C))(this, msg);
	}
	template <typename T = void> T OnWeaponChangeWithAttach() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D64DC))(this);
	}
	template <typename T = void> T EequipWeapon(uint32_t weaponId, uint32_t skinId, Il2CppList<uintptr_t>* attachList, uintptr_t ornamentItem) {
		return ((T (*)(AvatarControllerCharacter*, uint32_t, uint32_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x32D65FC))(this, weaponId, skinId, attachList, ornamentItem);
	}
	template <typename T = void> T ResetAvatarRotation() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D6218))(this);
	}
	template <typename T = void> T SetVisible(bool visible, bool bUseRankLight) {
		return ((T (*)(AvatarControllerCharacter*, bool, bool))(Il2CppBase() + 0x32D799C))(this, visible, bUseRankLight);
	}
	template <typename T = void> T CheckAvatarSceneTransform(uintptr_t sceneObj) {
		return ((T (*)(AvatarControllerCharacter*, uintptr_t))(Il2CppBase() + 0x32D7F38))(this, sceneObj);
	}
	template <typename T = uintptr_t> T GetAvatarAssetID(uint64_t roleID) {
		return ((T (*)(AvatarControllerCharacter*, uint64_t))(Il2CppBase() + 0x32D60A4))(this, roleID);
	}
	template <typename T = uintptr_t> T GetWeaponAssetID(uint64_t weaponID) {
		return ((T (*)(AvatarControllerCharacter*, uint64_t))(Il2CppBase() + 0x32D6D98))(this, weaponID);
	}
	template <typename T = void> T EquipWeaponPart(uintptr_t weapAssetID, uint32_t weaponID) {
		return ((T (*)(AvatarControllerCharacter*, uintptr_t, uint32_t))(Il2CppBase() + 0x32D6F00))(this, weapAssetID, weaponID);
	}
	template <typename T = void> T ShowInLeftCenter(bool bLeftCenter) {
		return ((T (*)(AvatarControllerCharacter*, bool))(Il2CppBase() + 0x32D83D4))(this, bLeftCenter);
	}
	template <typename T = void> T ShowInCenter(bool bCenter) {
		return ((T (*)(AvatarControllerCharacter*, bool))(Il2CppBase() + 0x32D8524))(this, bCenter);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D8678))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D8680))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D8688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AvatarControllerCharacter*))(Il2CppBase() + 0x32D8690))(this);
	}

};

}
