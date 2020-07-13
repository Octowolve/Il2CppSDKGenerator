#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_TopInfoHUD() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_BulletInfoHUD() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& m_RoundOverHUD() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& m_SPModeTargetHud() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = int32_t> T& m_TotalProgress() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = int32_t> T& m_CurrentProgress() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_InIntervalSPModeTargetHud() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = bool> T& m_IsEndRound() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = bool> T& m_LoopSPModeTargetHud() {
		return *(T*)((uintptr_t)this + 0x189);
	}
	template <typename T = float> static T& LastShowSettlementTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoopSPModeTargetHudSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SP_Ammo_AddSPGameBulletInfoHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetGameResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayMusic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSyncTaskProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyUpdateTaskProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartShowModeTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndShowModeTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowModeTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetModeTargetFilledString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeDetailTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowCombatHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHideCombatHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSPRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x39181A0))(this);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391882C))(this, Msg);
	}
	template <typename T = bool> T GetLoopSPModeTargetHudSet() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x39189DC))(this);
	}
	template <typename T = void> T SP_Ammo_AddSPGameBulletInfoHUD() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x3918638))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x3918AAC))(this, msg);
	}
	template <typename T = void> T OnRoundStarted(uintptr_t msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x3918B90))(this, msg);
	}
	template <typename T = uintptr_t> static T TryGetGameResult(uintptr_t Msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3918C98))(0, Msg);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t Msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x3918F68))(this, Msg);
	}
	template <typename T = void> T OnSettlement(uintptr_t Msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391909C))(this, Msg);
	}
	template <typename T = void> T PlayMusic(Il2CppString* audioID, float delay) {
		return ((T (*)(SPGameUIScene*, Il2CppString*, float))(Il2CppBase() + 0x3919E7C))(this, audioID, delay);
	}
	template <typename T = void> T OnMapChange(uintptr_t msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391A0DC))(this, msg);
	}
	template <typename T = void> T OnRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391A288))(this, msg);
	}
	template <typename T = bool> T IsSyncTaskProgress() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391A438))(this);
	}
	template <typename T = void> T NotifyUpdateTaskProgress(uintptr_t Msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391A508))(this, Msg);
	}
	template <typename T = void> T StartShowModeTarget() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391A794))(this);
	}
	template <typename T = void> T EndShowModeTarget() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391A8F0))(this);
	}
	template <typename T = void> T ShowModeTarget() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391AA9C))(this);
	}
	template <typename T = bool> T TryGetModeTargetFilledString(uintptr_t* modeTargetInfo) {
		return ((T (*)(SPGameUIScene*, uintptr_t*))(Il2CppBase() + 0x3919800))(this, modeTargetInfo);
	}
	template <typename T = Il2CppString*> T GetModeTargetInfo() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391AE44))(this);
	}
	template <typename T = Il2CppString*> T GetModeDetailTargetInfo() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391B018))(this);
	}
	template <typename T = void> T OnNotifyShowCombatHud(uintptr_t msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391B1EC))(this, msg);
	}
	template <typename T = void> T OnNotifyHideCombatHud(uintptr_t msg) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391B2BC))(this, msg);
	}
	template <typename T = void> static T GetSPRewards(uintptr_t* gainedCP, uintptr_t* gainedXP, uintptr_t* gainedCard, uintptr_t* isFirstWin, uintptr_t* isExceedDailyCap_CP, uintptr_t* isExceedDailyCap_XP, uintptr_t* isExceedDailyCap_DropItems, uintptr_t* LiveOpsExp, uintptr_t* LiveOpsGold) {
		return ((T (*)(void *, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3919B54))(0, gainedCP, gainedXP, gainedCard, isFirstWin, isExceedDailyCap_CP, isExceedDailyCap_XP, isExceedDailyCap_DropItems, LiveOpsExp, LiveOpsGold);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391B390))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadGamePlayerInfo(uintptr_t P0) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391B398))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391B3A0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStarted(uintptr_t P0) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391B3A8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(SPGameUIScene*, uintptr_t))(Il2CppBase() + 0x391B3B0))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetModeTargetInfo() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391B3B8))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetModeDetailTargetInfo() {
		return ((T (*)(SPGameUIScene*))(Il2CppBase() + 0x391B3C0))(this);
	}

};

}
