#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGameUIScene"));
	}

	template <typename T = uintptr_t> T& mBloodScoreHUD() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& mGameLoadoutHUD() {
		return *(T*)((uintptr_t)this + 0x27C);
	}
	template <typename T = uintptr_t> T& m_SignboardHUD() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& mOneRoundView() {
		return *(T*)((uintptr_t)this + 0x284);
	}
	template <typename T = float> static T& m_ForbiddenThrowWpnTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUltSkillHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSwitchBagBtnController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalMapController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateTacticalRadarController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForbiddenThrowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScorePanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x4025958))(this);
	}
	template <typename T = void> T UpdateUltSkillHud(uint32_t playerID) {
		return ((T (*)(GunFightGameUIScene*, uint32_t))(Il2CppBase() + 0x4025B88))(this, playerID);
	}
	template <typename T = void> T ShowSwitchBagBtnController() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x4025C28))(this);
	}
	template <typename T = void> T CreateTacticalMapController(uintptr_t tacticalGPS) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4025CC0))(this, tacticalGPS);
	}
	template <typename T = void> T CreateTacticalRadarController(uintptr_t tacticalGPS) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4025D60))(this, tacticalGPS);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4025E00))(this, roundResult);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4025EA0))(this, msg);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x402678C))(this);
	}
	template <typename T = void> T OnSyncInventoryBag(uintptr_t msg) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x402682C))(this, msg);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t msg) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4026938))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4026B70))(this, msg);
	}
	template <typename T = void> T ForbiddenThrowWeapon(uintptr_t msg) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x40271B4))(this, msg);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(GunFightGameUIScene*, float))(Il2CppBase() + 0x4027350))(this, deltaTime);
	}
	template <typename T = void> T OpenScorePanel() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x4027404))(this);
	}
	template <typename T = void> T CreateScorePanelController() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x40276B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x4027774))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateUltSkillHud(uint32_t P0) {
		return ((T (*)(GunFightGameUIScene*, uint32_t))(Il2CppBase() + 0x402777C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowSwitchBagBtnController() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x4027784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalMapController(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x402778C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_CreateTacticalRadarController(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x4027794))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x402779C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x40277A4))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x40277AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncInventoryBag(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x40277B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x40277BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(GunFightGameUIScene*, uintptr_t))(Il2CppBase() + 0x40277C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(GunFightGameUIScene*, float))(Il2CppBase() + 0x40277CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OpenScorePanel() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x40277D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateScorePanelController() {
		return ((T (*)(GunFightGameUIScene*))(Il2CppBase() + 0x40277DC))(this);
	}

};

}
