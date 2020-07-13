#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementDetailWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDropItemDetailWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2D260))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2D304))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2D410))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2D538))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2D5F4))(this);
	}
	template <typename T = void> T ShowDropItemDetailWindow(uintptr_t msg) {
		return ((T (*)(PVESettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x3B2E078))(this, msg);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2E2F8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2E414))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2E41C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2E424))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2E42C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(PVESettlementDetailWindowController*))(Il2CppBase() + 0x3B2E434))(this);
	}

};

}
