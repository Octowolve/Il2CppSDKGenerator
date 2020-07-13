#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDestructibleObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDestructibleObj"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_DesType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_Asset() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsWaitingAsset() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_EffectPlayed() {
		return *(T*)((uintptr_t)this + 0x81);
	}
	template <typename T = bool> T& m_IsBroken() {
		return *(T*)((uintptr_t)this + 0x82);
	}
	template <typename T = float> T& m_VehicleBreakMomentum() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& m_Layer() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& m_CurrAssetId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uint32_t> T& m_Status1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uint32_t> T& m_Status2() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNormalAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigActorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAssetBoxCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBrokenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = bool> T get_IsCanDirectAutoFire() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2516514))(this);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x251651C))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(BRDestructibleObj*, uintptr_t))(Il2CppBase() + 0x2516524))(this, pawn);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25165CC))(this);
	}
	template <typename T = int32_t> static T GetNormalAssetId(uintptr_t desType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x25165D4))(0, desType);
	}
	template <typename T = int32_t> T get_NormalAssetId() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25166A0))(this);
	}
	template <typename T = int32_t> T get_BrokenAssetId() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25166A8))(this);
	}
	template <typename T = int32_t> T get_BrokenEffectAssetId() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25166B0))(this);
	}
	template <typename T = bool> T get_IsBrokenDisappear() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x24B4400))(this);
	}
	template <typename T = int32_t> T GetCurrAssetId() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x251673C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25167F0))(this);
	}
	template <typename T = void> T ConfigActorRoot() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25168AC))(this);
	}
	template <typename T = void> T Init(uint32_t actorId, uintptr_t levelObj) {
		return ((T (*)(BRDestructibleObj*, uint32_t, uintptr_t))(Il2CppBase() + 0x24B3B2C))(this, actorId, levelObj);
	}
	template <typename T = void> T InitAsset() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x24B4588))(this);
	}
	template <typename T = void> T ClearAsset() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x25169D4))(this);
	}
	template <typename T = void> T OnLoadAssetEnd(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRDestructibleObj*, int32_t, uintptr_t))(Il2CppBase() + 0x2516B54))(this, assetId, arg);
	}
	template <typename T = void> T CheckAssetBoxCollider() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2516F34))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRDestructibleObj*, uintptr_t))(Il2CppBase() + 0x251719C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRDestructibleObj*, uintptr_t))(Il2CppBase() + 0x25175C8))(this, other);
	}
	template <typename T = void> T ChangeLayer(int32_t layer) {
		return ((T (*)(BRDestructibleObj*, int32_t))(Il2CppBase() + 0x2517464))(this, layer);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(BRDestructibleObj*, uintptr_t))(Il2CppBase() + 0x2517758))(this, damageInfo);
	}
	template <typename T = void> T SyncHealth(float hp) {
		return ((T (*)(BRDestructibleObj*, float))(Il2CppBase() + 0x24B4AC0))(this, hp);
	}
	template <typename T = void> T SyncStatus(uint32_t status1, uint32_t status2) {
		return ((T (*)(BRDestructibleObj*, uint32_t, uint32_t))(Il2CppBase() + 0x25178B0))(this, status1, status2);
	}
	template <typename T = void> T ShowBrokenEffect() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x24B3E44))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2517AE4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2517B94))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(BRDestructibleObj*, uintptr_t))(Il2CppBase() + 0x2517C44))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2517C4C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(BRDestructibleObj*, uintptr_t))(Il2CppBase() + 0x2517C54))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2517C5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRDestructibleObj*))(Il2CppBase() + 0x2517C64))(this);
	}

};

}
