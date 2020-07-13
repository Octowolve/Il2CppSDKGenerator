#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVendingMachineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVendingMachineHUD"));
	}

	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PreviousBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& NextBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_IsShowing() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_Machine() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMachineInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPreviousBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNextBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2656FDC))(this);
	}
	template <typename T = bool> T get_IsShowing() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x26569AC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2656FE8))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x26572A8))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657358))(this);
	}
	template <typename T = void> T SetShowState(bool isShow, uintptr_t machine) {
		return ((T (*)(BRVendingMachineHUD*, bool, uintptr_t))(Il2CppBase() + 0x26569B4))(this, isShow, machine);
	}
	template <typename T = void> T UpdateMachineInfo() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x26574C4))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657804))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x26578BC))(this);
	}
	template <typename T = void> T OnPreviousBtnClick() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657A14))(this);
	}
	template <typename T = void> T OnNextBtnClick() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657B68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657CC4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(BRVendingMachineHUD*))(Il2CppBase() + 0x2657CCC))(this);
	}

};

}
