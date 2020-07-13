#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarShowAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarShow_Attachment"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AttachmentInfoList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UselessAttachmentInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_OwnerAssetIdList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_OwnerTrans() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_AvatarView() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_BatchLoadVersion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_SocketDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_AssetType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& LoadingWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& m_SkinID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_ProfessionChipSkinID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsOwnerTransMainWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& AvatarDefaultFarPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& CheckAssetIDs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttachmentAssetType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProfessionChipSkinID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnerTrans() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToLoadAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetToLoadUselessBasicAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddIroDownAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUselessBasic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverAttachmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAttachmentReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAttachmentSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSocketBelongsTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocketInOwener() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = Il2CppList<int32_t>*> T get_OwnerAssetIdList() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28DE358))(this);
	}
	template <typename T = uintptr_t> T get_OwnersObject() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28DE278))(this);
	}
	template <typename T = uintptr_t> T get_AssetType() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28DE270))(this);
	}
	template <typename T = void> T SetAttachmentAssetType(uintptr_t assetType) {
		return ((T (*)(AvatarShowAttachment*, uintptr_t))(Il2CppBase() + 0x28CE264))(this, assetType);
	}
	template <typename T = void> T SetSkin(uint32_t ID) {
		return ((T (*)(AvatarShowAttachment*, uint32_t))(Il2CppBase() + 0x28D2484))(this, ID);
	}
	template <typename T = void> T SetProfessionChipSkinID(uint32_t ID) {
		return ((T (*)(AvatarShowAttachment*, uint32_t))(Il2CppBase() + 0x28D2780))(this, ID);
	}
	template <typename T = void> T SetOwnerTrans(Il2CppArray<uintptr_t>* ownerWeaponAssetIdList, uintptr_t ownerTrans, uintptr_t avatarView, bool isOwnerMainWeapon) {
		return ((T (*)(AvatarShowAttachment*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x28D35E4))(this, ownerWeaponAssetIdList, ownerTrans, avatarView, isOwnerMainWeapon);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetToLoadAssetIDs() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28E0298))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetToLoadUselessBasicAssetIDs() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28E0450))(this);
	}
	template <typename T = void> T BatchLoadAsset() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28DFE6C))(this);
	}
	template <typename T = uintptr_t> T GetAttachment(Il2CppString* socketName) {
		return ((T (*)(AvatarShowAttachment*, Il2CppString*))(Il2CppBase() + 0x28D8DA8))(this, socketName);
	}
	template <typename T = void> T ClearUselessBasic() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28D3008))(this);
	}
	template <typename T = void> T AddIroDownAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint64_t weaponId, bool isExtraAttachment) {
		return ((T (*)(AvatarShowAttachment*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint64_t, bool))(Il2CppBase() + 0x28D2DB8))(this, ID, assetID, socketName, showSocket, hideSocket, weaponId, isExtraAttachment);
	}
	template <typename T = uintptr_t> T AddAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uintptr_t replaceAttachInfo, uint64_t WeaponID, bool isExtraAttachment) {
		return ((T (*)(AvatarShowAttachment*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uint64_t, bool))(Il2CppBase() + 0x28E06AC))(this, ID, assetID, socketName, showSocket, hideSocket, replaceAttachInfo, WeaponID, isExtraAttachment);
	}
	template <typename T = void> T SetAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint64_t WeaponID, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarShowAttachment*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint64_t, bool, bool))(Il2CppBase() + 0x28D17B8))(this, ID, assetID, socketName, showSocket, hideSocket, WeaponID, isExtraAttachment, needReplace);
	}
	template <typename T = void> T SetUselessBasic(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint64_t WeaponID, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarShowAttachment*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint64_t, bool, bool))(Il2CppBase() + 0x28D1924))(this, ID, assetID, socketName, showSocket, hideSocket, WeaponID, isExtraAttachment, needReplace);
	}
	template <typename T = uintptr_t> T ReplaceAttachmentInfo(uint64_t ID, uintptr_t assetID, Il2CppString* socketName, Il2CppString* showSocket, Il2CppString* hideSocket, uint64_t WeaponID, uintptr_t replaceAttachInfo, bool isExtraAttachment, bool needReplace) {
		return ((T (*)(AvatarShowAttachment*, uint64_t, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uint64_t, uintptr_t, bool, bool))(Il2CppBase() + 0x28E0A74))(this, ID, assetID, socketName, showSocket, hideSocket, WeaponID, replaceAttachInfo, isExtraAttachment, needReplace);
	}
	template <typename T = void> T RecoverAttachmentInfo(uintptr_t attachInfo, uintptr_t replacedAttachInfo) {
		return ((T (*)(AvatarShowAttachment*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28E1194))(this, attachInfo, replacedAttachInfo);
	}
	template <typename T = void> T OnAttachmentReady(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(AvatarShowAttachment*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x28E13DC))(this, id, obj);
	}
	template <typename T = bool> T IsAttachmentReady() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28DEAFC))(this);
	}
	template <typename T = void> T ClearAttachmentSocket(Il2CppString* socketName) {
		return ((T (*)(AvatarShowAttachment*, Il2CppString*))(Il2CppBase() + 0x28D21B0))(this, socketName);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(AvatarShowAttachment*))(Il2CppBase() + 0x28D2914))(this);
	}
	template <typename T = uintptr_t> T AttachWith(uintptr_t info) {
		return ((T (*)(AvatarShowAttachment*, uintptr_t))(Il2CppBase() + 0x28E264C))(this, info);
	}
	template <typename T = void> T Deatch(uintptr_t info) {
		return ((T (*)(AvatarShowAttachment*, uintptr_t))(Il2CppBase() + 0x28DF584))(this, info);
	}
	template <typename T = void> T RemoveSocketBelongsTo(uintptr_t removeTrans) {
		return ((T (*)(AvatarShowAttachment*, uintptr_t))(Il2CppBase() + 0x28E34F0))(this, removeTrans);
	}
	template <typename T = uintptr_t> T FindSocket(Il2CppString* socketName, uintptr_t root) {
		return ((T (*)(AvatarShowAttachment*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x28D9B08))(this, socketName, root);
	}
	template <typename T = uintptr_t> T FindSocketInOwener(Il2CppString* socketName) {
		return ((T (*)(AvatarShowAttachment*, Il2CppString*))(Il2CppBase() + 0x28E39C0))(this, socketName);
	}

};

}
