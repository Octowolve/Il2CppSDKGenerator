#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP.MPGame {

class MPGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP.MPGame", "MPGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_RoundModifierHUD() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& m_BRChatController() {
		return *(T*)((uintptr_t)this + 0x1EC);
	}
	template <typename T = bool> T& m_DuringUIFadeIn() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = bool> T& m_EnteredBattleScene() {
		return *(T*)((uintptr_t)this + 0x1F1);
	}
	template <typename T = float> static T& FADE_IN_BLACK_SCREEN_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FADE_IN_TIME_UI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& lastUpdateDSTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_ZMMPGameEndLoseHUD() {
		return *(T*)((uintptr_t)this + 0x1F4);
	}
	template <typename T = uintptr_t> T& m_ZmMpCardCtr() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}
	template <typename T = uintptr_t> T& m_ZMMPPassTaskCtr() {
		return *(T*)((uintptr_t)this + 0x1FC);
	}
	template <typename T = uintptr_t> T& m_PVEEndGameHud() {
		return *(T*)((uintptr_t)this + 0x200);
	}
	template <typename T = uintptr_t> T& m_CardTimer() {
		return *(T*)((uintptr_t)this + 0x204);
	}
	template <typename T = uintptr_t> T& m_CardRes() {
		return *(T*)((uintptr_t)this + 0x208);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyEnterBattleScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpeningUIProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadInBlackScreen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeInUI_Tween() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceFinishFadeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitModifiersHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSpectatingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowMatchPrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInjuredScreenEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegate_Settlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowSettlementCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSettlementCardWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPVEMPSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEndlessSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncPvePassTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = bool> T get_DuringUIFadeIn() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4601AD0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4601AD8))(this);
	}
	template <typename T = uintptr_t> T GetChatController() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4601F98))(this);
	}
	template <typename T = void> T OnNotifyEnterBattleScene(uintptr_t msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4602068))(this, msg);
	}
	template <typename T = void> T OpeningUIProcess() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4602244))(this);
	}
	template <typename T = void> T FadeInBlackScreen() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x46026C4))(this);
	}
	template <typename T = void> T FadInBlackScreen() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4602878))(this);
	}
	template <typename T = void> T FadeInUI(float delay) {
		return ((T (*)(MPGameUIScene*, float))(Il2CppBase() + 0x4602950))(this, delay);
	}
	template <typename T = void> T FadeInUI_Tween() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4602AB8))(this);
	}
	template <typename T = void> T ForceFinishFadeIn() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4602E0C))(this);
	}
	template <typename T = uintptr_t> T GetUIRoot() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x46024D0))(this);
	}
	template <typename T = void> T OnNotifyModifiers(uintptr_t Msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x46030BC))(this, Msg);
	}
	template <typename T = void> T InitModifiersHUD() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x46031A8))(this);
	}
	template <typename T = void> T OnPlayerLoginOrLogoutNotify(uintptr_t msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x46032EC))(this, msg);
	}
	template <typename T = void> T OnShowSpectatingHUD(uintptr_t Msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x46035EC))(this, Msg);
	}
	template <typename T = void> T TryShowMatchPrepare() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x46036E4))(this);
	}
	template <typename T = int32_t> T GetInjuredScreenEffectAssetID() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x46039A4))(this);
	}
	template <typename T = void> T RegisterDelegate_Settlement() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4601DC0))(this);
	}
	template <typename T = void> T OnShowSettlementCard(uintptr_t Msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4603A78))(this, Msg);
	}
	template <typename T = void> T ShowSettlementCardWindow() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4603DEC))(this);
	}
	template <typename T = void> T OnPVEMPSettlement(uintptr_t Msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4603FDC))(this, Msg);
	}
	template <typename T = void> T OnEndlessSettlement(uintptr_t Msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604370))(this, Msg);
	}
	template <typename T = void> T OnNotifyQuitGame(uintptr_t Msg) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604AAC))(this, Msg);
	}
	template <typename T = void> T OnSyncPvePassTask(uintptr_t recData) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604BC8))(this, recData);
	}
	template <typename T = void> T OnSyncPvePassTaskm__0() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4604F58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4604FB4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetChatController() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4604FBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyEnterBattleScene(uintptr_t P0) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604FC4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ForceFinishFadeIn() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4604FCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyModifiers(uintptr_t P0) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604FD4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPlayerLoginOrLogoutNotify(uintptr_t P0) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604FDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnShowSpectatingHUD(uintptr_t P0) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604FE4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TryShowMatchPrepare() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4604FEC))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetInjuredScreenEffectAssetID() {
		return ((T (*)(MPGameUIScene*))(Il2CppBase() + 0x4604FF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyQuitGame(uintptr_t P0) {
		return ((T (*)(MPGameUIScene*, uintptr_t))(Il2CppBase() + 0x4604FFC))(this, P0);
	}

};

}
