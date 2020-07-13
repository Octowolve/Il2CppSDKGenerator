#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SingleSettlementWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SingleSettlementWindowController"));
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
		return ((T (*)(SingleSettlementWindowController*))(Il2CppBase() + 0x2982A50))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SingleSettlementWindowController*))(Il2CppBase() + 0x2982AF4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SingleSettlementWindowController*))(Il2CppBase() + 0x2982C00))(this);
	}
	template <typename T = void> T PlaySettlementBGM(uintptr_t settlementDS) {
		return ((T (*)(SingleSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x2982D50))(this, settlementDS);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SingleSettlementWindowController*))(Il2CppBase() + 0x2983078))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SingleSettlementWindowController*))(Il2CppBase() + 0x2983080))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(SingleSettlementWindowController*))(Il2CppBase() + 0x2983088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlaySettlementBGM(uintptr_t P0) {
		return ((T (*)(SingleSettlementWindowController*, uintptr_t))(Il2CppBase() + 0x2983090))(this, P0);
	}

};

}
