#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementDetailWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementDetailWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C1F680))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C1F724))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C1F830))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C209B0))(this);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C20AEC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C20C2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C20C34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C20C3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(BRSettlementDetailWindowController*))(Il2CppBase() + 0x3C20C44))(this);
	}

};

}
