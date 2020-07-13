#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutChipSaleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutChipSaleView"));
	}

	template <typename T = uintptr_t> T& UIItemView() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& SelectNumLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& PrizeLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& CurrentNumLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SaleBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& IncreaseBtn() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& DecreaseBtn() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& MaxBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelectNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurrentNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePrize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadoutChipSaleView*))(Il2CppBase() + 0x1A20CD4))(this);
	}
	template <typename T = void> T UpdateSelectNum(int32_t num) {
		return ((T (*)(LoadoutChipSaleView*, int32_t))(Il2CppBase() + 0x1A1FC2C))(this, num);
	}
	template <typename T = void> T UpdateCurrentNum(int32_t currentNum, int32_t needNum) {
		return ((T (*)(LoadoutChipSaleView*, int32_t, int32_t))(Il2CppBase() + 0x1A1FD20))(this, currentNum, needNum);
	}
	template <typename T = void> T UpdatePrize(int32_t prize) {
		return ((T (*)(LoadoutChipSaleView*, int32_t))(Il2CppBase() + 0x1A1FEC4))(this, prize);
	}
	template <typename T = void> T UpdateItemView(int32_t itemID) {
		return ((T (*)(LoadoutChipSaleView*, int32_t))(Il2CppBase() + 0x1A1FB30))(this, itemID);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutChipSaleView*))(Il2CppBase() + 0x1A20DBC))(this);
	}

};

}
