#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SPVPSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SPVPSettlementWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x298313C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x29831E0))(this);
	}
	template <typename T = void> T OnCloseDelegate(uintptr_t go) {
		return ((T (*)(SPVPSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x29833DC))(this, go);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x2983498))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x29836BC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x2983764))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SPVPSettlementWindowController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x29840D0))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SPVPSettlementWindowController*, uintptr_t, int32_t))(Il2CppBase() + 0x2984198))(this, list, userContext);
	}
	template <typename T = void> static T OnOpenm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x298424C))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x29842EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x29842F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x29842FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x2984304))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(SPVPSettlementWindowController*))(Il2CppBase() + 0x298430C))(this);
	}

};

}
