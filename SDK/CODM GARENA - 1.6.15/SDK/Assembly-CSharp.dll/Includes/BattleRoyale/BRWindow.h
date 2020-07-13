#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRWindow"));
	}

	template <typename T = uint32_t> T& m_UID() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_WindowAssetId() {
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
	template <typename T = uintptr_t> T& m_WindowMgr() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x8C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadBrokenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanBeDamagedBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TakeDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BreakWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatedWindowBroken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(BRWindow*))(Il2CppBase() + 0x2662CE0))(this);
	}
	template <typename T = uint32_t> T get_UID() {
		return ((T (*)(BRWindow*))(Il2CppBase() + 0x2662CF0))(this);
	}
	template <typename T = void> T Init(uint32_t uid, int32_t windowAssetId, int32_t brokenEffectAssetId) {
		return ((T (*)(BRWindow*, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x2662CF8))(this, uid, windowAssetId, brokenEffectAssetId);
	}
	template <typename T = void> T InitAsset() {
		return ((T (*)(BRWindow*))(Il2CppBase() + 0x2662DE4))(this);
	}
	template <typename T = void> T OnLoadAsset(int32_t assetId, uintptr_t param) {
		return ((T (*)(BRWindow*, int32_t, uintptr_t))(Il2CppBase() + 0x2662FE4))(this, assetId, param);
	}
	template <typename T = void> T PreloadBrokenEffect() {
		return ((T (*)(BRWindow*))(Il2CppBase() + 0x2663510))(this);
	}
	template <typename T = bool> T CanBeDamagedBy(uintptr_t pawn) {
		return ((T (*)(BRWindow*, uintptr_t))(Il2CppBase() + 0x26636A0))(this, pawn);
	}
	template <typename T = void> T TakeDamage(uintptr_t damageInfo) {
		return ((T (*)(BRWindow*, uintptr_t))(Il2CppBase() + 0x2663748))(this, damageInfo);
	}
	template <typename T = void> T BreakWindow(uint32_t instigatorPlayerID, Il2CppVector3 breakPosition, Il2CppVector3 breakNormal) {
		return ((T (*)(BRWindow*, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x266384C))(this, instigatorPlayerID, breakPosition, breakNormal);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(BRWindow*, bool))(Il2CppBase() + 0x2663B3C))(this, visible);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BRWindow*))(Il2CppBase() + 0x2663C70))(this);
	}
	template <typename T = void> T SimulatedWindowBroken(uint32_t InstigatorID, Il2CppVector3 hitPosition, Il2CppVector3 hitNormal) {
		return ((T (*)(BRWindow*, uint32_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2663E80))(this, InstigatorID, hitPosition, hitNormal);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRWindow*, uintptr_t))(Il2CppBase() + 0x2664514))(this, other);
	}
	template <typename T = bool> T xLuaBaseProxy_CanBeDamagedBy(uintptr_t P0) {
		return ((T (*)(BRWindow*, uintptr_t))(Il2CppBase() + 0x26648BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TakeDamage(uintptr_t P0) {
		return ((T (*)(BRWindow*, uintptr_t))(Il2CppBase() + 0x26648C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BRWindow*))(Il2CppBase() + 0x26648CC))(this);
	}

};

}
