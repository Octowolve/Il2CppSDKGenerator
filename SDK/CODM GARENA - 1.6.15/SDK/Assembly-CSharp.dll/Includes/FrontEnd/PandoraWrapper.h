#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class PandoraWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "PandoraWrapper"));
	}

	template <typename T = int32_t> static T& PANDORA_WEBVIEW_MEM_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PANDORA_WEBVIEW_OS_THRESHOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& WebViewMemoryMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LowWebViewMemoryMin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& IsPublishEnv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_PandoraRoot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> static T& kPandoraRootName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& eventChannel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& CurrentPandoraUserOpenID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> static T& DIAMOND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GOLD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& JUMP_GAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& JUMP_URL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& JUMP_PANDORA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PandoraSetGameBackgroundSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePandoraRootScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Logout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUserLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAccountTokensDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAccountCurrencyDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemTipScript() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPopNews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowPopNews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLucky() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeStage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAllPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPandoraPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPandoraPanelB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePandoraPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePandoraPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPandoraBattlePass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPandoraGameEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPandoraShareResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = bool> T get_IsPandoraEnable() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x383F9A8))(this);
	}
	template <typename T = void> static T PandoraSetGameBackgroundSwitch(bool play) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x383F9B0))(0, play);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x383FBC4))(this);
	}
	template <typename T = void> T UpdatePandoraRootScale(Il2CppVector3 scale) {
		return ((T (*)(PandoraWrapper*, Il2CppVector3))(Il2CppBase() + 0x383FD24))(this, scale);
	}
	template <typename T = void> T Logout() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x383FEAC))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x383FF74))(this);
	}
	template <typename T = void> T OnUserLogin() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3840054))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetAccountTokensDelegate() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x384011C))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetAccountCurrencyDelegate() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3840228))(this);
	}
	template <typename T = void> T SetItemIcon(uintptr_t spriteIcon, uint32_t itemId) {
		return ((T (*)(PandoraWrapper*, uintptr_t, uint32_t))(Il2CppBase() + 0x3840334))(this, spriteIcon, itemId);
	}
	template <typename T = void> T SetShowItem(uintptr_t obj, uint32_t itemId, uint32_t Count) {
		return ((T (*)(PandoraWrapper*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x3840418))(this, obj, itemId, Count);
	}
	template <typename T = void> T SwitchToView(Il2CppString* switchType, Il2CppString* switchTarget) {
		return ((T (*)(PandoraWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3840504))(this, switchType, switchTarget);
	}
	template <typename T = void> T SetItemTipScript(uintptr_t obj, uint32_t itemId, uint32_t tipSide) {
		return ((T (*)(PandoraWrapper*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x38405E8))(this, obj, itemId, tipSide);
	}
	template <typename T = void> T SetPlayerSound(Il2CppString* soundName) {
		return ((T (*)(PandoraWrapper*, Il2CppString*))(Il2CppBase() + 0x38409A4))(this, soundName);
	}
	template <typename T = uintptr_t> T GetFont() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3840AC4))(this);
	}
	template <typename T = void> T InitUIRoot() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3840B94))(this);
	}
	template <typename T = void> T ShowPopNews(bool isFirstLogin) {
		return ((T (*)(PandoraWrapper*, bool))(Il2CppBase() + 0x3840C5C))(this, isFirstLogin);
	}
	template <typename T = void> T ShowPopNews_1(uintptr_t scene, int32_t mapid, int32_t result) {
		return ((T (*)(PandoraWrapper*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3840D2C))(this, scene, mapid, result);
	}
	template <typename T = void> T ShowLucky() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3840E18))(this);
	}
	template <typename T = void> T ChangeStage(uintptr_t stage) {
		return ((T (*)(PandoraWrapper*, uintptr_t))(Il2CppBase() + 0x3840EE0))(this, stage);
	}
	template <typename T = void> T CloseAllPanel() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3840FB0))(this);
	}
	template <typename T = void> T OpenPandoraPanel(Il2CppString* content) {
		return ((T (*)(PandoraWrapper*, Il2CppString*))(Il2CppBase() + 0x383F5A0))(this, content);
	}
	template <typename T = void> T OpenPandoraPanelB(Il2CppString* module, Il2CppString* tab, Il2CppString* parentPath) {
		return ((T (*)(PandoraWrapper*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3841078))(this, module, tab, parentPath);
	}
	template <typename T = void> T ClosePandoraPanel() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3841164))(this);
	}
	template <typename T = void> T HidePandoraPanel() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x384122C))(this);
	}
	template <typename T = void> T NotifyPandoraBattlePass() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x38412F4))(this);
	}
	template <typename T = void> T NotifyPandoraGameEvent(Il2CppString* GameEvent, Il2CppString* extend) {
		return ((T (*)(PandoraWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x38413BC))(this, GameEvent, extend);
	}
	template <typename T = void> T NotifyPandoraShareResult(Il2CppString* Result, Il2CppString* Type) {
		return ((T (*)(PandoraWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x38414A0))(this, Result, Type);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3841608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(PandoraWrapper*))(Il2CppBase() + 0x3841610))(this);
	}

};

}
