#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVPCatSettlementDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVPCatSettlementDetailWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B38EE0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B38F84))(this);
	}
	template <typename T = void> T OnCloseDelegate(uintptr_t go) {
		return ((T (*)(PVPCatSettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x3B39180))(this, go);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B3923C))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B392E4))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(PVPCatSettlementDetailWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3B3998C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(PVPCatSettlementDetailWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x3B39A54))(this, list, userContext);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B39B08))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B39C5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B39C64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B39C6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(PVPCatSettlementDetailWindowController*))(Il2CppBase() + 0x3B39C74))(this);
	}

};

}
