#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntAttackableItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntAttackableItem"));
	}

	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& m_ServerPos() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_InLoading() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CurrentGo() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& AssetId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActivePartMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_AssetId() {
		return ((T (*)(PropHuntAttackableItem*))(Il2CppBase() + 0x348FEE4))(this);
	}
	template <typename T = void> T set_AssetId(int32_t value) {
		return ((T (*)(PropHuntAttackableItem*, int32_t))(Il2CppBase() + 0x348FEEC))(this, value);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(PropHuntAttackableItem*))(Il2CppBase() + 0x348FEF4))(this);
	}
	template <typename T = void> T Init(int32_t ItemAssetID, Il2CppVector3 pos, Il2CppQuaternion rot, int32_t itemID) {
		return ((T (*)(PropHuntAttackableItem*, int32_t, Il2CppVector3, Il2CppQuaternion, int32_t))(Il2CppBase() + 0x348FEFC))(this, ItemAssetID, pos, rot, itemID);
	}
	template <typename T = void> T Destroy(bool timeout) {
		return ((T (*)(PropHuntAttackableItem*, bool))(Il2CppBase() + 0x34901E0))(this, timeout);
	}
	template <typename T = void> T LoadAsset() {
		return ((T (*)(PropHuntAttackableItem*))(Il2CppBase() + 0x349007C))(this);
	}
	template <typename T = void> T ClearLoad() {
		return ((T (*)(PropHuntAttackableItem*))(Il2CppBase() + 0x3490320))(this);
	}
	template <typename T = void> T OnAssetReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(PropHuntAttackableItem*, int32_t, uintptr_t))(Il2CppBase() + 0x3490468))(this, assetID, obj);
	}
	template <typename T = void> T SetActorInfo(uint32_t playerID, uint32_t itemID, uint32_t actorID) {
		return ((T (*)(PropHuntAttackableItem*, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x3490794))(this, playerID, itemID, actorID);
	}
	template <typename T = void> T SetHealth(float health, float healthMax) {
		return ((T (*)(PropHuntAttackableItem*, float, float))(Il2CppBase() + 0x3490874))(this, health, healthMax);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* animName) {
		return ((T (*)(PropHuntAttackableItem*, Il2CppString*))(Il2CppBase() + 0x3490960))(this, animName);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(PropHuntAttackableItem*, uintptr_t))(Il2CppBase() + 0x3490A00))(this, damageInfo);
	}
	template <typename T = void> T SetActivePartMask(unsigned char mask, bool isInPlacingProgress) {
		return ((T (*)(PropHuntAttackableItem*, unsigned char, bool))(Il2CppBase() + 0x3490AC8))(this, mask, isInPlacingProgress);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(PropHuntAttackableItem*, uintptr_t))(Il2CppBase() + 0x3490B7C))(this, P0);
	}

};

}
