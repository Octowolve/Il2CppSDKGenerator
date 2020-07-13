#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponAttachmentSparrow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponAttachmentSparrow"));
	}

	template <typename T = uintptr_t> T& ArrowMesh() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& ArrowMeshHiddenTime() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& m_State() {
		return *(T*)((uintptr_t)this + 0x19C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnSparrowArrowReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAnimation3P() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDrawSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSpectateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFireSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T DespawnOldMesh(int32_t newAssetID) {
		return ((T (*)(WeaponAttachmentSparrow*, int32_t))(Il2CppBase() + 0x1C54718))(this, newAssetID);
	}
	template <typename T = void> T ChangeWeapon() {
		return ((T (*)(WeaponAttachmentSparrow*))(Il2CppBase() + 0x1C5492C))(this);
	}
	template <typename T = void> T OnSparrowArrowReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponAttachmentSparrow*, int32_t, uintptr_t))(Il2CppBase() + 0x1C54B6C))(this, assetID, obj);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(WeaponAttachmentSparrow*, float))(Il2CppBase() + 0x1C54EB0))(this, deltaTime);
	}
	template <typename T = void> T OnSyncAnimation3P(uintptr_t animName, float animLength, float Param1) {
		return ((T (*)(WeaponAttachmentSparrow*, uintptr_t, float, float))(Il2CppBase() + 0x1C55094))(this, animName, animLength, Param1);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(WeaponAttachmentSparrow*, bool))(Il2CppBase() + 0x1C559A4))(this, isHidden);
	}
	template <typename T = void> T CancelDrawSound() {
		return ((T (*)(WeaponAttachmentSparrow*))(Il2CppBase() + 0x1C5485C))(this);
	}
	template <typename T = void> T RecordSpectateInfo(bool record) {
		return ((T (*)(WeaponAttachmentSparrow*, bool))(Il2CppBase() + 0x1C55648))(this, record);
	}
	template <typename T = void> T PlayAudio(Il2CppString* audio, Il2CppString* brAudio) {
		return ((T (*)(WeaponAttachmentSparrow*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1C55740))(this, audio, brAudio);
	}
	template <typename T = void> T PlayAnimation(int32_t id) {
		return ((T (*)(WeaponAttachmentSparrow*, int32_t))(Il2CppBase() + 0x1C554AC))(this, id);
	}
	template <typename T = void> T PlayFireSound() {
		return ((T (*)(WeaponAttachmentSparrow*))(Il2CppBase() + 0x1C55AA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DespawnOldMesh(int32_t P0) {
		return ((T (*)(WeaponAttachmentSparrow*, int32_t))(Il2CppBase() + 0x1C55B3C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeWeapon() {
		return ((T (*)(WeaponAttachmentSparrow*))(Il2CppBase() + 0x1C55B44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponAttachmentSparrow*, float))(Il2CppBase() + 0x1C55B4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAnimation3P(uintptr_t P0, float P1, float P2) {
		return ((T (*)(WeaponAttachmentSparrow*, uintptr_t, float, float))(Il2CppBase() + 0x1C55B54))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_SetHidden(bool P0) {
		return ((T (*)(WeaponAttachmentSparrow*, bool))(Il2CppBase() + 0x1C55B74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFireSound() {
		return ((T (*)(WeaponAttachmentSparrow*))(Il2CppBase() + 0x1C55B7C))(this);
	}

};

}
