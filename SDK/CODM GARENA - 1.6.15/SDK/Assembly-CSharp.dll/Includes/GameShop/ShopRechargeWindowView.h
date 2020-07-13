#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopRechargeWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopRechargeWindowView"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FlowGrid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerScrollViewBg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WidgetBg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ContainerSome() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ContainerNone() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& PanelLimitOffer() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& scrollLimitOffer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BgLimitOffer() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BtnEnterLimitOffer() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& WidgetLimitOfferRect() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& WidgetLimitOfferRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& WidgetItemsLimitOffer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ShopScrollPlayView() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& popWindow() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ClosePopBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptaScrollItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSuccessPopWindowShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSuccessPopWinowInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPopWindowIconPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = int32_t> T AdaptaScrollItems() {
		return ((T (*)(ShopRechargeWindowView*))(Il2CppBase() + 0x23AABD8))(this);
	}
	template <typename T = void> T SetSuccessPopWindowShow(bool isShow) {
		return ((T (*)(ShopRechargeWindowView*, bool))(Il2CppBase() + 0x23A8FE4))(this, isShow);
	}
	template <typename T = void> T SetSuccessPopWinowInfo(Il2CppString* title, Il2CppString* icon, Il2CppString* tapToClose, Il2CppString* pointNum) {
		return ((T (*)(ShopRechargeWindowView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x23AA0F4))(this, title, icon, tapToClose, pointNum);
	}
	template <typename T = void> T SetViewAlpha(float alpha) {
		return ((T (*)(ShopRechargeWindowView*, float))(Il2CppBase() + 0x23AD728))(this, alpha);
	}
	template <typename T = Il2CppVector3> T GetPopWindowIconPos() {
		return ((T (*)(ShopRechargeWindowView*))(Il2CppBase() + 0x23AD27C))(this);
	}

};

}
