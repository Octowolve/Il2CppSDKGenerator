#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarItemBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarItemBase"));
	}

	template <typename T = int32_t> T& m_RoleId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_bDisplayWhenLoaded() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& avatarItemView() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_AvatarTrans() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_SocketDic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_AvatarManagedAsset() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CacheAnimatorController() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_AvatarAnimator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_SetCacheAnimator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_CharacterTrans() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_CharacterShower() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_LeftWeapTrans() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_LeftAttachmentShower() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_RightWeapTrans() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_RightAttachmentShower() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LoadAssetIds() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& HEAD_ID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& BAG_ID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& BALLPROF_ID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_CheckReadyInterval() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_LastCheckTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mAvatarAudioComponent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_DisableAvatarAudio() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_UseEntranceAnimation() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = uintptr_t> T& m_CurrentUIIndividuationPlayAnimationInstance() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_bAvatarAssetLoading() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_CurrentAvatarAssetID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSocketDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssetAsync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyCurrentCharacter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCharacterReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayIndividuationAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = int32_t> T get_RoleID() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE168))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetSocketDic() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE170))(this);
	}
	template <typename T = uintptr_t> T get_LeftWeapTrans() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE210))(this);
	}
	template <typename T = uintptr_t> T get_RightWeapTrans() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE218))(this);
	}
	template <typename T = void> T set_DisableAvatarAudio(bool value) {
		return ((T (*)(AvatarItemBase*, bool))(Il2CppBase() + 0x28DE220))(this, value);
	}
	template <typename T = uintptr_t> T get_AvatarAnimator() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28D9180))(this);
	}
	template <typename T = void> T set_AvatarAnimator(uintptr_t value) {
		return ((T (*)(AvatarItemBase*, uintptr_t))(Il2CppBase() + 0x28DE228))(this, value);
	}
	template <typename T = bool> T get_UseEntranceAnimation() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE260))(this);
	}
	template <typename T = bool> T get_NeedEquipAndAttachment() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE268))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DB2C0))(this);
	}
	template <typename T = void> T OnAttachmentReady(uintptr_t attachmentShow, Il2CppList<int32_t>* basicUselessIds, Il2CppList<uintptr_t>* excludeObjList) {
		return ((T (*)(AvatarItemBase*, uintptr_t, Il2CppList<int32_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x28D8A2C))(this, attachmentShow, basicUselessIds, excludeObjList);
	}
	template <typename T = void> T AddBox(uintptr_t box) {
		return ((T (*)(AvatarItemBase*, uintptr_t))(Il2CppBase() + 0x28CE904))(this, box);
	}
	template <typename T = void> T RemoveBox(uintptr_t box) {
		return ((T (*)(AvatarItemBase*, uintptr_t))(Il2CppBase() + 0x28CEA54))(this, box);
	}
	template <typename T = void> T LoadAssetAsync(uintptr_t assetID, uintptr_t CallBackData, uintptr_t TaskPriority) {
		return ((T (*)(AvatarItemBase*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x28D3A30))(this, assetID, CallBackData, TaskPriority);
	}
	template <typename T = bool> static T IsLowQualitySetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x28DE360))(0);
	}
	template <typename T = void> T SetupCloth(uintptr_t avatarGo) {
		return ((T (*)(AvatarItemBase*, uintptr_t))(Il2CppBase() + 0x28DE470))(this, avatarGo);
	}
	template <typename T = void> T DestroyCurrentCharacter() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE6C0))(this);
	}
	template <typename T = void> T OnCharacterReady(Il2CppArray<uintptr_t>* ids, Il2CppArray<uintptr_t>* equips, uintptr_t obj) {
		return ((T (*)(AvatarItemBase*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28D57D0))(this, ids, equips, obj);
	}
	template <typename T = void> T ClearEquipment() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DE86C))(this);
	}
	template <typename T = void> T SetAvatar(uintptr_t rootTrans, uintptr_t trans) {
		return ((T (*)(AvatarItemBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28D6374))(this, rootTrans, trans);
	}
	template <typename T = void> T ShowAvatar(bool show) {
		return ((T (*)(AvatarItemBase*, bool))(Il2CppBase() + 0x28D0784))(this, show);
	}
	template <typename T = void> T OnEquipReady(Il2CppArray<uintptr_t>* ids, uintptr_t obj) {
		return ((T (*)(AvatarItemBase*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28D428C))(this, ids, obj);
	}
	template <typename T = bool> T IsAllAttachmentReady() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28DEA04))(this);
	}
	template <typename T = void> T TickIndividuationAnimation(float deltaTime) {
		return ((T (*)(AvatarItemBase*, float))(Il2CppBase() + 0x28DDC84))(this, deltaTime);
	}
	template <typename T = void> T ClearIndividuationAnimation() {
		return ((T (*)(AvatarItemBase*))(Il2CppBase() + 0x28D9A48))(this);
	}
	template <typename T = void> T PlayIndividuationAnimation(Il2CppString* stateName, uintptr_t callback) {
		return ((T (*)(AvatarItemBase*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x28DECF8))(this, stateName, callback);
	}

};

}
