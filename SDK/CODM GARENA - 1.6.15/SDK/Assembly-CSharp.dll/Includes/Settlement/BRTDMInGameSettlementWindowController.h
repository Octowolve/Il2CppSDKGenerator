#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRTDMInGameSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRTDMInGameSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& settlementDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_PlayerScoreEasyListController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& scoreHelper() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isTurning() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerScoreScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfoEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherScrollViewDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C382F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C3839C))(this);
	}
	template <typename T = void> T InitPlayerScoreScrollView() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C38580))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C38B04))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C38C38))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C38D54))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C39164))(this);
	}
	template <typename T = void> T SetPlayerInfoEasyListData(bool bForceScrollToTop, bool resetScroll) {
		return ((T (*)(BRTDMInGameSettlementWindowController*, bool, bool))(Il2CppBase() + 0x3C38838))(this, bForceScrollToTop, resetScroll);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C38988))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(BRTDMInGameSettlementWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x3C392A0))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(BRTDMInGameSettlementWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3C39354))(this, list, controller, index);
	}
	template <typename T = void> T OnSelfScrollViewDragEnd() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C3941C))(this);
	}
	template <typename T = void> T OnOtherScrollViewDragEnd() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C394B4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C3954C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C39554))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C3955C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTDMInGameSettlementWindowController*))(Il2CppBase() + 0x3C39564))(this);
	}

};

}
