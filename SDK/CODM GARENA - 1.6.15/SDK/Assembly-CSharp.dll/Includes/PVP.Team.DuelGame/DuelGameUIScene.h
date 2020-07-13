#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameUIScene"));
	}

	template <typename T = uintptr_t> T& mOneRoundView() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& m_SelectWeaponTypeHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = bool> T& m_ShowServerBag() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChooseWeaponHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowMatchPrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalMapController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReconnectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x40121FC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x40122B8))(this);
	}
	template <typename T = bool> T IfNeedVoice() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x40124DC))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x401257C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DuelGameUIScene*, float))(Il2CppBase() + 0x401261C))(this, deltaTime);
	}
	template <typename T = void> T OnSyncInventoryBag(uintptr_t msg) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x40126D0))(this, msg);
	}
	template <typename T = bool> T get_ShowServerBag() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x40127DC))(this);
	}
	template <typename T = void> T set_ShowServerBag(bool value) {
		return ((T (*)(DuelGameUIScene*, bool))(Il2CppBase() + 0x40127E4))(this, value);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x40127EC))(this, msg);
	}
	template <typename T = void> T ShowChooseWeaponHUD(uintptr_t msg) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4012A38))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4012BEC))(this, msg);
	}
	template <typename T = void> T TryShowMatchPrepare() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x4012D94))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x401386C))(this, roundResult);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x401390C))(this, msg);
	}
	template <typename T = void> T CreateTacticalMapController(uintptr_t tacticalGPS) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4013FD0))(this, tacticalGPS);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x4014210))(this);
	}
	template <typename T = void> T OnReconnectComplete(uintptr_t msg) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4014424))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x4014560))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfNeedVoice() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x4014568))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x4014570))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DuelGameUIScene*, float))(Il2CppBase() + 0x4014578))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncInventoryBag(uintptr_t P0) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4014580))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4014588))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x4014590))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryShowMatchPrepare() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x4014598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x40145A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x40145A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalMapController(uintptr_t P0) {
		return ((T (*)(DuelGameUIScene*, uintptr_t))(Il2CppBase() + 0x40145B0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(DuelGameUIScene*))(Il2CppBase() + 0x40145B8))(this);
	}

};

}
