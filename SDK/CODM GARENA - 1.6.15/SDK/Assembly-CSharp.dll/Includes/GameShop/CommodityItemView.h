#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class CommodityItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "CommodityItemView"));
	}

	template <typename T = uintptr_t> T& m_CommodityItemDuration() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_CommodityItemReducePercentage() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PaymenWayIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_CommodityItemOriginalPrice() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_CommodityItemDiscountPrice() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_DiscountLine() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& m_UnselectedColorA() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& m_SelectedColorA() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_bg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommodityItemIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectCommodityItemHeightLightIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectCommodityItemDefaultIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommodityItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(CommodityItemView*))(Il2CppBase() + 0x28CD310))(this);
	}
	template <typename T = void> T SetCommodityItemIcon(int32_t currentSelectCommodityIndex) {
		return ((T (*)(CommodityItemView*, int32_t))(Il2CppBase() + 0x28CD318))(this, currentSelectCommodityIndex);
	}
	template <typename T = void> T SetSelectCommodityItemHeightLightIcon() {
		return ((T (*)(CommodityItemView*))(Il2CppBase() + 0x28CD3DC))(this);
	}
	template <typename T = void> T SetSelectCommodityItemDefaultIcon() {
		return ((T (*)(CommodityItemView*))(Il2CppBase() + 0x28CD534))(this);
	}
	template <typename T = void> T SetCommodityItemView(uintptr_t paymentInfo) {
		return ((T (*)(CommodityItemView*, uintptr_t))(Il2CppBase() + 0x28CD68C))(this, paymentInfo);
	}

};

}
