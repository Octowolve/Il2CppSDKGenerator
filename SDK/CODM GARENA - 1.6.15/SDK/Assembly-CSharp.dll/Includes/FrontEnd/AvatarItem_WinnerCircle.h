#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarItemWinnerCircle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarItem_WinnerCircle"));
	}

	template <typename T = Il2CppString*> T& ANIMATOR_PARAM_GESTUREINDEX() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& ANIMATOR_GETWEAPON_TRIGGER() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& ANIMATOR_GETWEAPON_STATE_NAME() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& ANIMATOR_PUTDOWNWEAPON_M_STATE_NAME() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& IndividuationAniName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& LeftHandAnimName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& RightHandAnimName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& IdleAnimIndexs() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& isCanSendReadyNotify() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_WinnerCircleViewView() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BoxList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CharacterAssetID() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID_Left() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_WeaponAssetID_Right() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uint64_t> T& m_WeaponID_Left() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint64_t> T& m_WeaponID_Right() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& putDownWeaponLenth() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& putDownWeaponPlayTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& isPutDownWeaponPlaying() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& mCacheAnimType() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatarAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginGestureAnimImmediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRightWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLeftWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUseWeaponAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearWeaponInHand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIroDownAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCharacterReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndividuationAnimIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPutDownWeaponAnimLenth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IndividuationFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = void> T ChangeAvatar(int32_t roleId, int32_t posIndex, int32_t bagAsset, int32_t hatAsset, int32_t clothAsset, uintptr_t animType, Il2CppString* gestureAnim, Il2CppString* leftHandAnimName, Il2CppString* rightHandAnimName, Il2CppArray<uintptr_t>* idleAnimIndexs, uintptr_t id, bool syncLoad) {
		return ((T (*)(AvatarItemWinnerCircle*, int32_t, int32_t, int32_t, int32_t, int32_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x28DA190))(this, roleId, posIndex, bagAsset, hatAsset, clothAsset, animType, gestureAnim, leftHandAnimName, rightHandAnimName, idleAnimIndexs, id, syncLoad);
	}
	template <typename T = int32_t> T GetIndex() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DA608))(this);
	}
	template <typename T = void> T HideAvatar() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DA6A8))(this);
	}
	template <typename T = void> T SetAvatarAnimator(uintptr_t animator, uintptr_t animType) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28DA770))(this, animator, animType);
	}
	template <typename T = void> T BeginGestureAnimImmediately() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DACD8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DB0F8))(this);
	}
	template <typename T = uintptr_t> T FindSocket(Il2CppString* socketName, uintptr_t root) {
		return ((T (*)(AvatarItemWinnerCircle*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x28DB404))(this, socketName, root);
	}
	template <typename T = void> T ChangeRightWeapon(uint64_t id, uintptr_t weapAssetID) {
		return ((T (*)(AvatarItemWinnerCircle*, uint64_t, uintptr_t))(Il2CppBase() + 0x28DB60C))(this, id, weapAssetID);
	}
	template <typename T = void> T ChangeLeftWeapon(uint64_t id, uintptr_t weapAssetID) {
		return ((T (*)(AvatarItemWinnerCircle*, uint64_t, uintptr_t))(Il2CppBase() + 0x28DB788))(this, id, weapAssetID);
	}
	template <typename T = void> T ChangeSkin(uint32_t ID) {
		return ((T (*)(AvatarItemWinnerCircle*, uint32_t))(Il2CppBase() + 0x28DB904))(this, ID);
	}
	template <typename T = void> T TryUseWeaponAnimator(uintptr_t weaponTrans) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t))(Il2CppBase() + 0x28DB9F0))(this, weaponTrans);
	}
	template <typename T = void> T ClearAttachment() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DBC7C))(this);
	}
	template <typename T = void> T ClearWeaponInHand() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DBD44))(this);
	}
	template <typename T = void> T ClearUselessBasic() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DBFE8))(this);
	}
	template <typename T = void> T SetWeaponPart(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment) {
		return ((T (*)(AvatarItemWinnerCircle*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x28DC0A0))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment);
	}
	template <typename T = void> T AddIroDownAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint64_t weaponId) {
		return ((T (*)(AvatarItemWinnerCircle*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint64_t))(Il2CppBase() + 0x28DC2B8))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId);
	}
	template <typename T = void> T SetAttachment(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, bool isExtraAttachment) {
		return ((T (*)(AvatarItemWinnerCircle*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x28DC438))(this, ID, assetID, socketName, showSocket, hideSocket, isExtraAttachment);
	}
	template <typename T = void> T LoadAssetAsync(uintptr_t assetID, int32_t posIndex, uintptr_t animType) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x28DA2C8))(this, assetID, posIndex, animType);
	}
	template <typename T = void> T ShowAvatar(bool show) {
		return ((T (*)(AvatarItemWinnerCircle*, bool))(Il2CppBase() + 0x28DC64C))(this, show);
	}
	template <typename T = void> T OnCharacterReady(Il2CppArray<uintptr_t>* ids, Il2CppArray<uintptr_t>* equips, uintptr_t obj) {
		return ((T (*)(AvatarItemWinnerCircle*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28DC6FC))(this, ids, equips, obj);
	}
	template <typename T = void> T SetClickBoxCollider(uintptr_t obj, int32_t pos) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t, int32_t))(Il2CppBase() + 0x28DCB38))(this, obj, pos);
	}
	template <typename T = void> T AddBox(uintptr_t box) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t))(Il2CppBase() + 0x28DD630))(this, box);
	}
	template <typename T = void> T RemoveBox(uintptr_t box) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t))(Il2CppBase() + 0x28DD7AC))(this, box);
	}
	template <typename T = void> T OnAttachmentReady(uintptr_t attachmentShow, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* excludeObjList) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28DD928))(this, attachmentShow, basicUselessIds, excludeObjList);
	}
	template <typename T = int32_t> T GetIndividuationAnimIndex() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DAB6C))(this);
	}
	template <typename T = void> T TickIndividuationAnimation(float deltaTime) {
		return ((T (*)(AvatarItemWinnerCircle*, float))(Il2CppBase() + 0x28DDABC))(this, deltaTime);
	}
	template <typename T = float> T GetPutDownWeaponAnimLenth() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DAF60))(this);
	}
	template <typename T = void> T IndividuationFinish() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DDD74))(this);
	}
	template <typename T = void> T ResetAnimator() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DDEE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(AvatarItemWinnerCircle*))(Il2CppBase() + 0x28DDF7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowAvatar(bool P0) {
		return ((T (*)(AvatarItemWinnerCircle*, bool))(Il2CppBase() + 0x28DDF80))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnCharacterReady(Il2CppArray<uintptr_t>* P0, Il2CppArray<uintptr_t>* P1, uintptr_t P2) {
		return ((T (*)(AvatarItemWinnerCircle*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28DDF84))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_AddBox(uintptr_t P0) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t))(Il2CppBase() + 0x28DDF9C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RemoveBox(uintptr_t P0) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t))(Il2CppBase() + 0x28DDFA0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnAttachmentReady(uintptr_t P0, Il2CppList<int32_t>* P1, Il2CppList<uintptr_t>* P2) {
		return ((T (*)(AvatarItemWinnerCircle*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28DDFA4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_TickIndividuationAnimation(float P0) {
		return ((T (*)(AvatarItemWinnerCircle*, float))(Il2CppBase() + 0x28DDFBC))(this, P0);
	}

};

}
