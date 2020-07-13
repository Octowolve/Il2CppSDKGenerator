#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class FFASettlementDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "FFASettlementDetailWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlaySettlementBGM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1DE4C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1DEF0))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1DFFC))(this);
	}
	template <typename T = void> T PlaySettlementBGM(uintptr_t settlementDS) {
		return ((T (*)(FFASettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x3B1E798))(this, settlementDS);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1EAE4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1EBEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1EBF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(FFASettlementDetailWindowController*))(Il2CppBase() + 0x3B1EBFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySettlementBGM(uintptr_t P0) {
		return ((T (*)(FFASettlementDetailWindowController*, uintptr_t))(Il2CppBase() + 0x3B1EC04))(this, P0);
	}

};

}
