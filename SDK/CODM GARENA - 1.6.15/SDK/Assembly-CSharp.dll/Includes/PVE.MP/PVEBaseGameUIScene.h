#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class PVEBaseGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "PVEBaseGameUIScene"));
	}

	template <typename T = uintptr_t> T& m_MissionHUD() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& m_NetwrokAIDebugHUD() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& m_TaskProgressHUD() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& m_PerkCoinHUD() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& m_PowerupInfoHUD() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& m_LeftTimeHUD() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& m_MissionItemHUD() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& m_SignHUD() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& m_ModifierHUD() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& m_WaitForReviveHUD() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = uintptr_t> T& m_BossBloodHUD() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> T& m_PVEScorePanel() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}
	template <typename T = uintptr_t> T& m_BRSwitchSprintingHUD() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& m_TutorialTipsHUD() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& m_BossCommingHUD() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& m_InjureNumberContainer() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ScreenEffectDic() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = int32_t> T& m_CurrentActiveAssetID() {
		return *(T*)((uintptr_t)this + 0x1DC);
	}
	template <typename T = bool> T& m_CurrentActiveShowState() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = int32_t> T& pendingScreenEffectId() {
		return *(T*)((uintptr_t)this + 0x1E4);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLevelObjectInteractiveHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnterGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSwitchSprintingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTaskHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenSettingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseSettingPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReconnect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadGamePlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundTimeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDebugHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInjureNumberHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSwitchBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyQuitGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInjuredScreenEffectAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnTopNameHudRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadScreenEffectComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBossBloodShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCommonTipsCtrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPickUpPowerUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowScorePanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchSprintingHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoyStickPanelType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPawnDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLocalPawnDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleDamageDebugHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncInventoryBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}

	template <typename T = bool> T get_ScoreHUDEnabled() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC3E38))(this);
	}
	template <typename T = bool> T get_EnableUIFadeIn() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC3E40))(this);
	}
	template <typename T = uintptr_t> T get_missionHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC3F10))(this);
	}
	template <typename T = uintptr_t> T get_taskProgressHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC3F18))(this);
	}
	template <typename T = uintptr_t> T get_tutorialTipsHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC4068))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC41B4))(this);
	}
	template <typename T = void> T CreateLevelObjectInteractiveHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC50F8))(this);
	}
	template <typename T = void> T OnEnterGame(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC5224))(this, msg);
	}
	template <typename T = void> T CreateSwitchSprintingHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC57B4))(this);
	}
	template <typename T = bool> T ShowTaskHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC58C8))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC5968))(this);
	}
	template <typename T = void> T OpenSettingPanel() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC5A08))(this);
	}
	template <typename T = void> T CloseSettingPanel() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC5B2C))(this);
	}
	template <typename T = void> T CheckReconnect() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC5C50))(this);
	}
	template <typename T = void> T OnLoadGamePlayerInfo(uintptr_t Msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC5D70))(this, Msg);
	}
	template <typename T = void> T OnLocalPlayerStateChanged(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC5E6C))(this, msg);
	}
	template <typename T = void> T OnRoundTimeChanged(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC6078))(this, msg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC6250))(this, msg);
	}
	template <typename T = void> T SelectBag(int32_t bagId) {
		return ((T (*)(PVEBaseGameUIScene*, int32_t))(Il2CppBase() + 0x3EC6518))(this, bagId);
	}
	template <typename T = void> T ShowDebugHUD(bool on) {
		return ((T (*)(PVEBaseGameUIScene*, bool))(Il2CppBase() + 0x3EC667C))(this, on);
	}
	template <typename T = void> T ShowInjureNumberHUD(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC68AC))(this, msg);
	}
	template <typename T = bool> T CanSwitchBag() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC6B38))(this);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC6DAC))(this, msg);
	}
	template <typename T = void> T OnNotifyQuitGame(uintptr_t Msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC6F20))(this, Msg);
	}
	template <typename T = int32_t> T GetInjuredScreenEffectAssetID() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC7064))(this);
	}
	template <typename T = void> T OnPawnTopNameHudAdd(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC7108))(this, msg);
	}
	template <typename T = void> T OnPawnTopNameHudRemove(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC735C))(this, msg);
	}
	template <typename T = void> T OnShowScreenEffect(uintptr_t Msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC75B0))(this, Msg);
	}
	template <typename T = void> static T SetEffectActive(bool show, uintptr_t effect) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x3EC7968))(0, show, effect);
	}
	template <typename T = void> T CreateScreenEffect(int32_t assetId) {
		return ((T (*)(PVEBaseGameUIScene*, int32_t))(Il2CppBase() + 0x3EC77E8))(this, assetId);
	}
	template <typename T = void> T OnLoadScreenEffectComplete(uintptr_t effect) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC7A84))(this, effect);
	}
	template <typename T = void> T OnBossBloodShow(uintptr_t Msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC7CA8))(this, Msg);
	}
	template <typename T = uintptr_t> T CreateCommonTipsCtrl(Il2CppVector3 pos) {
		return ((T (*)(PVEBaseGameUIScene*, Il2CppVector3))(Il2CppBase() + 0x3EC7E18))(this, pos);
	}
	template <typename T = void> T OnNotifyModifiers(uintptr_t Msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC7F2C))(this, Msg);
	}
	template <typename T = void> T OnNotifyPickUpPowerUp(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC7FF0))(this, msg);
	}
	template <typename T = void> T ShowScorePanel() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC86D8))(this);
	}
	template <typename T = void> T OnSwitchSprintingHUD(uintptr_t Msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC8794))(this, Msg);
	}
	template <typename T = uintptr_t> T GetJoyStickPanelType() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC8940))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC89E0))(this);
	}
	template <typename T = void> T OnNotifyLocalPawnDying(uintptr_t MSG) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC8A94))(this, MSG);
	}
	template <typename T = void> T OnNotifyLocalPawnDie(uintptr_t MSG) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC8C2C))(this, MSG);
	}
	template <typename T = void> T ToggleDamageDebugHUD(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC8DAC))(this, msg);
	}
	template <typename T = void> T OnSyncInventoryBag(uintptr_t msg) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC8E4C))(this, msg);
	}
	template <typename T = void> static T OnNotifyPickUpPowerUpm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EC979C))(0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC9974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CreateLevelObjectInteractiveHUD() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC997C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnterGame(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC9984))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC998C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OpenSettingPanel() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC9994))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseSettingPanel() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC999C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLoadGamePlayerInfo(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerStateChanged(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SelectBag(int32_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, int32_t))(Il2CppBase() + 0x3EC99B4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ShowInjureNumberHUD(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99BC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_CanSwitchBag() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC99C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyQuitGame(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99D4))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetInjuredScreenEffectAssetID() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC99DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnTopNameHudAdd(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnPawnTopNameHudRemove(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC99EC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateCommonTipsCtrl(Il2CppVector3 P0) {
		return ((T (*)(PVEBaseGameUIScene*, Il2CppVector3))(Il2CppBase() + 0x3EC99F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyModifiers(uintptr_t P0) {
		return ((T (*)(PVEBaseGameUIScene*, uintptr_t))(Il2CppBase() + 0x3EC9A14))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetJoyStickPanelType() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC9A1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(PVEBaseGameUIScene*))(Il2CppBase() + 0x3EC9A24))(this);
	}

};

}
