#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPartAttachment"));
	}

	template <typename T = uintptr_t> T& m_WeaponPartNameType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_OwnerWeapon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_AttachSocket() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_UsingMeshAssetID3P() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_WeaponPartINIPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsHadUsed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsHideSelfInMiniMapWhenFiring() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_IsLoadModelOver() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& m_ConfigData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_InitTransformScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadWeaponPartModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponPartType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPropertyFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsyncLoadCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadWeaponAttachmentNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadMeshModeObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindSocketTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSilencerWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldNotReplaceWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSraWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_WeaponPartNameType() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420034))(this);
	}
	template <typename T = void> T set_WeaponPartNameType(uintptr_t value) {
		return ((T (*)(WeaponPartAttachment*, uintptr_t))(Il2CppBase() + 0x242003C))(this, value);
	}
	template <typename T = int32_t> T get_WeaponPartCategory() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420044))(this);
	}
	template <typename T = void> T set_OwnerWeapon(uintptr_t value) {
		return ((T (*)(WeaponPartAttachment*, uintptr_t))(Il2CppBase() + 0x24200E8))(this, value);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(WeaponPartAttachment*, int32_t))(Il2CppBase() + 0x24200F0))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x24200F8))(this);
	}
	template <typename T = void> T set_WeaponPartINIPath(Il2CppString* value) {
		return ((T (*)(WeaponPartAttachment*, Il2CppString*))(Il2CppBase() + 0x2420100))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponPartINIPath() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420108))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponPartName() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x24201CC))(this);
	}
	template <typename T = bool> T get_IsHadUsed() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420274))(this);
	}
	template <typename T = bool> T get_IsHideSelfInMiniMapWhenFiring() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x242027C))(this);
	}
	template <typename T = bool> T get_IsLoadModelOver() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420284))(this);
	}
	template <typename T = void> T LoadWeaponPartModel() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x242028C))(this);
	}
	template <typename T = void> T DespawnMesh() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420414))(this);
	}
	template <typename T = bool> T IsWeaponPartType(uintptr_t type) {
		return ((T (*)(WeaponPartAttachment*, uintptr_t))(Il2CppBase() + 0x2420A34))(this, type);
	}
	template <typename T = void> T LoadPropertyFromConfig() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420BD8))(this);
	}
	template <typename T = void> T ClearAsyncLoadCallback() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x24213EC))(this);
	}
	template <typename T = void> T OnLoadWeaponAttachmentNotify(int32_t assetId, uintptr_t obj) {
		return ((T (*)(WeaponPartAttachment*, int32_t, uintptr_t))(Il2CppBase() + 0x2421538))(this, assetId, obj);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x242167C))(this);
	}
	template <typename T = void> T SetupWeaponPart() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2421734))(this);
	}
	template <typename T = uintptr_t> T GetMesh() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x24226C0))(this);
	}
	template <typename T = void> T LoadMeshModeObject() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2421C44))(this);
	}
	template <typename T = uintptr_t> T FindSocketTransform(uintptr_t target, Il2CppString* socketName) {
		return ((T (*)(WeaponPartAttachment*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x24227D8))(this, target, socketName);
	}
	template <typename T = bool> T IsSilencerWeaponPart() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2422A98))(this);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponPartAttachment*, bool))(Il2CppBase() + 0x24223C8))(this, isHidden);
	}
	template <typename T = bool> T ShouldNotReplaceWeaponPart() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x2420770))(this);
	}
	template <typename T = bool> T IsSraWeaponPart() {
		return ((T (*)(WeaponPartAttachment*))(Il2CppBase() + 0x24229E8))(this);
	}

};

}
