#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementMedalWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementMedalWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& CurrShowMedalIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
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
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPreviousMedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnNextMedal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x2968C58))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x2968D64))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x2968E08))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x29690B4))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x29692E8))(this);
	}
	template <typename T = void> T UpdateView_1(Il2CppList<uintptr_t>* data) {
		return ((T (*)(SettlementMedalWindowController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2969B64))(this, data);
	}
	template <typename T = void> T OnBtnShareClick() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x2969C2C))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x2969CC4))(this);
	}
	template <typename T = void> T OnBtnPreviousMedal() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x2969E44))(this);
	}
	template <typename T = void> T OnBtnNextMedal() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x296A24C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x296A6B4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x296A6BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x296A6C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x296A6CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(SettlementMedalWindowController*))(Il2CppBase() + 0x296A6D4))(this);
	}

};

}
