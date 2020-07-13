#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRFence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRFence"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_FenceAssetId() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_BrokenEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Asset() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_TriggerCollider() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_VehicleBreakMomentum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& m_Layer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& EffectPlayed() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_IsWaitingAsset() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadBrokenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateBreakFence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeLayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init(uint32_t uid, uint32_t actorId, float maxHealth, int32_t fenceAssetId, int32_t brokenEffectAssetId) {
		return ((T (*)(BRFence*, uint32_t, uint32_t, float, int32_t, int32_t))(Il2CppBase() + 0x18F5098))(this, uid, actorId, maxHealth, fenceAssetId, brokenEffectAssetId);
	}
	template <typename T = uintptr_t> T get_ServerType() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F53D4))(this);
	}
	template <typename T = void> T InitAsset() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F51CC))(this);
	}
	template <typename T = void> T ClearAsset() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F5B40))(this);
	}
	template <typename T = void> T OnLoadAsset(int32_t assetId, uintptr_t param) {
		return ((T (*)(BRFence*, int32_t, uintptr_t))(Il2CppBase() + 0x18F53DC))(this, assetId, param);
	}
	template <typename T = void> T PreloadBrokenEffect() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F59B0))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(BRFence*, uintptr_t))(Il2CppBase() + 0x18F5D58))(this, pawn);
	}
	template <typename T = bool> T get_DisplayImpactEffect() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F5E00))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(BRFence*, uintptr_t))(Il2CppBase() + 0x18F5E08))(this, damageInfo);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(BRFence*, bool))(Il2CppBase() + 0x18F5EC0))(this, visible);
	}
	template <typename T = void> T SimulateBreakFence() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F5FF4))(this);
	}
	template <typename T = void> T SyncHealth(float hp) {
		return ((T (*)(BRFence*, float))(Il2CppBase() + 0x18F63B8))(this, hp);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F6474))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F6524))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRFence*, uintptr_t))(Il2CppBase() + 0x18F65D4))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRFence*, uintptr_t))(Il2CppBase() + 0x18F6B64))(this, other);
	}
	template <typename T = void> T ChangeLayer(int32_t layer) {
		return ((T (*)(BRFence*, int32_t))(Il2CppBase() + 0x18F6900))(this, layer);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(BRFence*, uintptr_t))(Il2CppBase() + 0x18F6CF4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(BRFence*, uintptr_t))(Il2CppBase() + 0x18F6CFC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F6D04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRFence*))(Il2CppBase() + 0x18F6D0C))(this);
	}

};

}
