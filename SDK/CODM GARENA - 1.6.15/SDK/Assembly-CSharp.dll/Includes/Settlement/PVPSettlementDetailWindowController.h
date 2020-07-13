#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPSettlementDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPSettlementDetailWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRefreshDetailTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B41C08))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B41CAC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B41EA8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B41FD0))(this);
	}
	template <typename T = void> T OnCloseDelegate(uintptr_t go) {
		return ((T (*)(PVPSettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x3B420F8))(this, go);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B421B4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B4225C))(this);
	}
	template <typename T = void> T OnRefreshDetailTips(uintptr_t msg) {
		return ((T (*)(PVPSettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x3B426D4))(this, msg);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PVPSettlementDetailWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B42A5C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PVPSettlementDetailWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x3B42B24))(this, list, userContext);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42BD8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42EEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42EF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42EFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42F04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42F0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(PVPSettlementDetailWindowController*))(Il2CppBase() + 0x3B42F14))(this);
	}

};

}
