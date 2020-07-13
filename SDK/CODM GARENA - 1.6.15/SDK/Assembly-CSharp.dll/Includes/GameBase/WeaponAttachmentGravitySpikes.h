#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentGravitySpikes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachmentGravitySpikes"));
	}

	template <typename T = uintptr_t> T& LeftMesh() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnOldMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayWeaponSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T DespawnOldMesh(int32_t newAssetID) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, int32_t))(Il2CppBase() + 0x1C51B44))(this, newAssetID);
	}
	template <typename T = void> T ChangeWeapon() {
		return ((T (*)(WeaponAttachmentGravitySpikes*))(Il2CppBase() + 0x1C51DA4))(this);
	}
	template <typename T = void> T OnLoadReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, int32_t, uintptr_t))(Il2CppBase() + 0x1C5213C))(this, assetID, obj);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, float))(Il2CppBase() + 0x1C5259C))(this, deltaTime);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, uintptr_t, float, float))(Il2CppBase() + 0x1C52650))(this, animName, animLength, Param1);
	}
	template <typename T = void> T PlayWeaponSound(Il2CppString* eventID) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, Il2CppString*))(Il2CppBase() + 0x1C52968))(this, eventID);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, bool))(Il2CppBase() + 0x1C52B40))(this, isHidden);
	}
	template <typename T = void> T xLuaBaseProxy_DespawnOldMesh(int32_t P0) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, int32_t))(Il2CppBase() + 0x1C52CE8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeWeapon() {
		return ((T (*)(WeaponAttachmentGravitySpikes*))(Il2CppBase() + 0x1C52CF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, float))(Il2CppBase() + 0x1C52CF8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAnimation3P(uintptr_t P0, float P1, float P2) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, uintptr_t, float, float))(Il2CppBase() + 0x1C52D00))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponAttachmentGravitySpikes*, bool))(Il2CppBase() + 0x1C52D20))(this, P0);
	}

};

}
