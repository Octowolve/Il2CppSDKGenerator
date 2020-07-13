#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmOTOReChargeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmOTOReChargeView"));
	}

	template <typename T = uintptr_t> T& Time() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Discount() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& Price() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Content() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RewardContent() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& BuyContent() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& GoTo() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Close() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& RewardShow() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& tip() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BackTexture() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& RewardTexture() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& DiscountWidget() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& NoDiscountPrice() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& Clock() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& DescBg() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& popWindow() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& ContentRoot() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CodmOTOReChargeView*))(Il2CppBase() + 0x3DEABF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmOTOReChargeView*))(Il2CppBase() + 0x3DEACA0))(this);
	}

};

}
