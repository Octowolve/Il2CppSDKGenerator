#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementCardWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementCardWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> static T& lastDropsUpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listCardData() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_isTesting() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRevealAllButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllDropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFirstWinDropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDropList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTestFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x29462BC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2946390))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x29464CC))(this);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x294659C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x29467B4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2946934))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2946AB4))(this);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2946B8C))(this);
	}
	template <typename T = void> T OnRevealAllButtonClick() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2946D24))(this);
	}
	template <typename T = void> T OnExitButtonClick() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2946E60))(this);
	}
	template <typename T = void> T DirectClose(bool isQuitSuccessfully) {
		return ((T (*)(SettlementCardWindowController*, bool))(Il2CppBase() + 0x2946F40))(this, isQuitSuccessfully);
	}
	template <typename T = bool> T CheckAllDropList() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947164))(this);
	}
	template <typename T = void> T AddFirstWinDropList(Il2CppList<uintptr_t>* drops) {
		return ((T (*)(SettlementCardWindowController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2947278))(this, drops);
	}
	template <typename T = bool> T IsShowing() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x29474B0))(this);
	}
	template <typename T = void> T SetDropList(Il2CppList<uintptr_t>* drops) {
		return ((T (*)(SettlementCardWindowController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x29475FC))(this, drops);
	}
	template <typename T = void> T SetTestFlag() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x294795C))(this);
	}
	template <typename T = void> T UpdateView(bool isTurnToMail) {
		return ((T (*)(SettlementCardWindowController*, bool))(Il2CppBase() + 0x2947A30))(this, isTurnToMail);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SettlementCardWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2947C78))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SettlementCardWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x2947D70))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E60))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(SettlementCardWindowController*))(Il2CppBase() + 0x2947E90))(this);
	}

};

}
