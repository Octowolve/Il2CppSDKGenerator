#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewCharacter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarView_Character"));
	}

	template <typename T = int32_t> T& m_CharacterAssetID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID_Left() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID_Right() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint64_t> T& m_WeaponID_Left() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& m_WeaponID_Right() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_RoleId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& MaleAnim() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& FemaleAnim() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& GetAvatarScene() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ShowAvatarScene() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_CharacterTrans() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_CharacterShower() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LeftWeapTrans() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_LeftAttachmentShower() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_RightWeapTrans() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_RightAttachmentShower() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LoadAssetIds() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_CharacterAssetID_Pending() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& m_CharacterSocketName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& m_LeftWeapSocketName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& m_RightWeapSocketName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& m_SMRSWeaponSocketName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& m_FHJWeaponSocketName() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& OrangeARWeaponRoleAnimator() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& OrangeSRWeaponRoleAnimator() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& OrangeLMGWeaponRoleAnimator() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& OrangeSMGWeaponRoleAnimator() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& OrangeSGWeaponRoleAnimator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& HEAD_ID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& BAG_ID() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& BALLPROF_ID() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& WEASPON_ID() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelfWeaponAnimatorList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& DefaultAnimator() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& currentWeasponType() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NormalLobbyScene() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& HolidayLobbyScene() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& Default_Character_EulerAngle() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& Rank_Character_EulerAngle() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> static T& b_LeftArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& b_LeftForeArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& b_LeftHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Normaltarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Holdtarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeCharacter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLauncherSocketById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRightWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLeftWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponCommerialAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCharacterReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCharaterRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRankRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUseWeaponAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachmentSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIroDownAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInLeftCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUseSpecialWeaponAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFinishLoadAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedOffsetPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedIKInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsIKTransformValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E4E40))(this);
	}
	template <typename T = void> T ChangeCharacter(uintptr_t assetID, int32_t roleId, uint32_t hatID, uint32_t bagID, uint32_t clothID, uint32_t suitId, uintptr_t owner, uint32_t weasponId) {
		return ((T (*)(AvatarViewCharacter*, uintptr_t, int32_t, uint32_t, uint32_t, uint32_t, uint32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x28E50F0))(this, assetID, roleId, hatID, bagID, clothID, suitId, owner, weasponId);
	}
	template <typename T = Il2CppString*> T GetLauncherSocketById(uint64_t weaponId) {
		return ((T (*)(AvatarViewCharacter*, uint64_t))(Il2CppBase() + 0x28E5D70))(this, weaponId);
	}
	template <typename T = void> T ChangeRightWeapon(uint64_t id, uintptr_t weapAssetID) {
		return ((T (*)(AvatarViewCharacter*, uint64_t, uintptr_t))(Il2CppBase() + 0x28E5E5C))(this, id, weapAssetID);
	}
	template <typename T = void> T ChangeLeftWeapon(uint64_t id, uintptr_t weapAssetID) {
		return ((T (*)(AvatarViewCharacter*, uint64_t, uintptr_t))(Il2CppBase() + 0x28E5F90))(this, id, weapAssetID);
	}
	template <typename T = void> T ChangeSkin(uint32_t ID) {
		return ((T (*)(AvatarViewCharacter*, uint32_t))(Il2CppBase() + 0x28E60A4))(this, ID);
	}
	template <typename T = uintptr_t> T GetWeaponCommerialAnimator(uintptr_t type) {
		return ((T (*)(AvatarViewCharacter*, uintptr_t))(Il2CppBase() + 0x28E6190))(this, type);
	}
	template <typename T = void> T OnCharacterReady(Il2CppArray<uintptr_t>* ids, Il2CppArray<uintptr_t>* equips, uintptr_t inObj) {
		return ((T (*)(AvatarViewCharacter*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28E6284))(this, ids, equips, inObj);
	}
	template <typename T = void> T CheckCharaterRotation() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E77CC))(this);
	}
	template <typename T = Il2CppVector3> T GetDefaultRotation() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E79FC))(this);
	}
	template <typename T = Il2CppVector3> T GetRankRotation() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E7AB0))(this);
	}
	template <typename T = bool> T IsAllAttachmentReady() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E7B64))(this);
	}
	template <typename T = void> T OnAttachmentReady(uintptr_t attachmentShow, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* showExcludeObjList) {
		return ((T (*)(AvatarViewCharacter*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28E7C5C))(this, attachmentShow, basicUselessIds, showExcludeObjList);
	}
	template <typename T = void> T TryUseWeaponAnimator(uintptr_t weaponTrans) {
		return ((T (*)(AvatarViewCharacter*, uintptr_t))(Il2CppBase() + 0x28E814C))(this, weaponTrans);
	}
	template <typename T = void> T ClearAttachment() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E83E0))(this);
	}
	template <typename T = void> T ClearAttachmentSocket(Il2CppString* socketName) {
		return ((T (*)(AvatarViewCharacter*, Il2CppString*))(Il2CppBase() + 0x28E84B8))(this, socketName);
	}
	template <typename T = void> T BatchLoadAsset() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E8590))(this);
	}
	template <typename T = void> T SetWeaponPart(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarViewCharacter*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x28E8658))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment, needReplace);
	}
	template <typename T = void> T ClearUselessBasic() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E8870))(this);
	}
	template <typename T = void> T AddIroDownAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint32_t weaponId, bool isExtraAttachment) {
		return ((T (*)(AvatarViewCharacter*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint32_t, bool))(Il2CppBase() + 0x28E8928))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment);
	}
	template <typename T = void> T SetAttachment(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint32_t weaponId, bool isExtraAttachment) {
		return ((T (*)(AvatarViewCharacter*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint32_t, bool))(Il2CppBase() + 0x28E8AA8))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment);
	}
	template <typename T = void> T ClearSocket(uintptr_t Socket) {
		return ((T (*)(AvatarViewCharacter*, uintptr_t))(Il2CppBase() + 0x28E8CB8))(this, Socket);
	}
	template <typename T = void> T ShowInLeftCenter(bool bLeftCenter) {
		return ((T (*)(AvatarViewCharacter*, bool))(Il2CppBase() + 0x28E8E4C))(this, bLeftCenter);
	}
	template <typename T = void> T ShowInCenter(bool bCenter) {
		return ((T (*)(AvatarViewCharacter*, bool))(Il2CppBase() + 0x28E900C))(this, bCenter);
	}
	template <typename T = int32_t> T CheckUseSpecialWeaponAnimator(uint32_t weasponId, bool bUseFemaleAnim) {
		return ((T (*)(AvatarViewCharacter*, uint32_t, bool))(Il2CppBase() + 0x28E6D38))(this, weasponId, bUseFemaleAnim);
	}
	template <typename T = void> T OnFinishLoadAll() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E91C8))(this);
	}
	template <typename T = void> T CheckNeedOffsetPose() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E6F58))(this);
	}
	template <typename T = void> T CheckNeedIKInfo() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E7160))(this);
	}
	template <typename T = bool> T IsIKTransformValid(uintptr_t tranform, Il2CppString* name) {
		return ((T (*)(AvatarViewCharacter*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x28E9370))(this, tranform, name);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E9530))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsAllAttachmentReady() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E9534))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnFinishLoadAll() {
		return ((T (*)(AvatarViewCharacter*))(Il2CppBase() + 0x28E95D8))(this);
	}

};

}
