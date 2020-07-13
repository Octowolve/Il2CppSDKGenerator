#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementMedalWindowControllerEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementMedalWindowControllerEN"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296A780))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296A88C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296A930))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296AAC0))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296ABE8))(this);
	}
	template <typename T = void> T OnBtnConfirmClick() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296B7E0))(this);
	}
	template <typename T = void> T OnReturnKeyClick(uintptr_t Msg) {
		return ((T (*)(SettlementMedalWindowControllerEN*, uintptr_t))(Il2CppBase() + 0x296B894))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296B950))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296B958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296B960))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296B968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnConfirmClick() {
		return ((T (*)(SettlementMedalWindowControllerEN*))(Il2CppBase() + 0x296B970))(this);
	}

};

}
