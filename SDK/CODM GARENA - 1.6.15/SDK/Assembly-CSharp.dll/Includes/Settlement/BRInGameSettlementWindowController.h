#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRInGameSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRInGameSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& settlementDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& OrgX() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isTurning() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectateEnemyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowWinnerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCaptureShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShareWindowClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisableAnimatorWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareBtnVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShareReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C167AC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C167B4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C168AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C16A80))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C16F20))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C17378))(this);
	}
	template <typename T = void> T OnSpectateEnemyClick() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C175D8))(this);
	}
	template <typename T = void> T OnShowWinnerList() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C17AC8))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C17E5C))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C19668))(this);
	}
	template <typename T = void> T OnCaptureShareBtnClicked() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C197B4))(this);
	}
	template <typename T = void> T OnNotifyOnScreenCapture(uintptr_t msg) {
		return ((T (*)(BRInGameSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3C19BC0))(this, msg);
	}
	template <typename T = void> T OnNotifyShareWindowClose(uintptr_t msg) {
		return ((T (*)(BRInGameSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x3C19DF0))(this, msg);
	}
	template <typename T = void> T OnDisableAnimatorWhenClose() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C17428))(this);
	}
	template <typename T = void> T ResetShareBtnVisible() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C19474))(this);
	}
	template <typename T = uintptr_t> T GetShareData() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C19AA8))(this);
	}
	template <typename T = uintptr_t> T GetShareReportData() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C19F0C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C1A06C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C1A074))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C1A07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C1A084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BRInGameSettlementWindowController*))(Il2CppBase() + 0x3C1A08C))(this);
	}

};

}
