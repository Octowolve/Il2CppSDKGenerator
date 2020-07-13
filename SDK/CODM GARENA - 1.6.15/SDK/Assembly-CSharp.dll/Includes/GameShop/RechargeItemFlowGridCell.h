#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class RechargeItemFlowGridCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "RechargeItemFlowGridCell"));
	}

	template <typename T = uintptr_t> T& m_GlobalDS() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Bg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& WidgetBtnBg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SpriteTitleBg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ItemBg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& PriceBg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& OffStoreBg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> static T& LENGTH1_BG_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LENGTH2_BG_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& _priceReal() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isFirstDoubleRecharge() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LabelDiamondNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& widgetDiscount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LabelPrice_PreDiscount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& LabelDiscount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SpriteBuyAdd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& LabelBuyAddDiamond() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& SpriteNoBuyAdd() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& LabelPrice_Real() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& BtnRecharge() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& BtnBg() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& WidgetOffStore() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_ItemState() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& m_LastRemainTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& firstRechargeWidget() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& firstRechargeLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& WidgetRechageDisable() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteMask() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBgIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPeriodTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRemainTimeFormatChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemStateNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRechargeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComfirmPopWindowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_GlobalDS() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235B634))(this);
	}
	template <typename T = void> T SetSize(int32_t width, Il2CppString* icon) {
		return ((T (*)(RechargeItemFlowGridCell*, int32_t, Il2CppString*))(Il2CppBase() + 0x235B6E4))(this, width, icon);
	}
	template <typename T = void> T SetBgIcon(int32_t gridLength) {
		return ((T (*)(RechargeItemFlowGridCell*, int32_t))(Il2CppBase() + 0x235BFD4))(this, gridLength);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235C1A0))(this);
	}
	template <typename T = void> T CheckItemStateChange() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235C244))(this);
	}
	template <typename T = void> T RefreshPeriodTime() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235C49C))(this);
	}
	template <typename T = bool> T CheckRemainTimeFormatChange(int32_t remainTime) {
		return ((T (*)(RechargeItemFlowGridCell*, int32_t))(Il2CppBase() + 0x235C768))(this, remainTime);
	}
	template <typename T = uintptr_t> T GetItemStateNow() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235C378))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(RechargeItemFlowGridCell*, uintptr_t))(Il2CppBase() + 0x235C86C))(this, data);
	}
	template <typename T = void> T OnBtnRechargeClick() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235D750))(this);
	}
	template <typename T = void> T DoRecharge() {
		return ((T (*)(RechargeItemFlowGridCell*))(Il2CppBase() + 0x235DEEC))(this);
	}
	template <typename T = void> T SetComfirmPopWindowInfo(uintptr_t ctr) {
		return ((T (*)(RechargeItemFlowGridCell*, uintptr_t))(Il2CppBase() + 0x235DC50))(this, ctr);
	}

};

}
