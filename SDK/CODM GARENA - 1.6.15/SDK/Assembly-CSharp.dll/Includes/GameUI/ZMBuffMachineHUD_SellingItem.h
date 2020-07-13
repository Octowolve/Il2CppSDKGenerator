#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMBuffMachineHUDSellingItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMBuffMachineHUD_SellingItem"));
	}

	template <typename T = uintptr_t> T& BuffName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& EnoughRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& BuyBtn() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& BuyCost() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NotEnoughRoot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& NotEnoughCost() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SelectedObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& GamepadBuyButtonObj() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_BuffID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_LastBuyButtonClickTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckFullBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMBuffMachineHUDSellingItem*))(Il2CppBase() + 0x2A4D46C))(this);
	}
	template <typename T = void> T SetSelected(bool selected) {
		return ((T (*)(ZMBuffMachineHUDSellingItem*, bool))(Il2CppBase() + 0x2A4541C))(this, selected);
	}
	template <typename T = void> T SetContent(int32_t BuffId, uintptr_t owner) {
		return ((T (*)(ZMBuffMachineHUDSellingItem*, int32_t, uintptr_t))(Il2CppBase() + 0x2A4860C))(this, BuffId, owner);
	}
	template <typename T = void> T OnBuyButtonClick() {
		return ((T (*)(ZMBuffMachineHUDSellingItem*))(Il2CppBase() + 0x2A4D5A8))(this);
	}
	template <typename T = bool> T CheckFullBuff() {
		return ((T (*)(ZMBuffMachineHUDSellingItem*))(Il2CppBase() + 0x2A4DC1C))(this);
	}

};

}
