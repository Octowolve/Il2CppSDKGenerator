#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LuckyTreasureBoxUtilityTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LuckyTreasureBoxUtilityTool"));
	}

	template <typename T = uintptr_t> static T& m_currentLuckyBoxSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotiyUpdateLuckyBoxSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SecondPurchaseConfirmationByGoogID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SecondPurchaseConfirmationByShopID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SecondPurchaseConfirmation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenTreasureBoxNavigation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T NotiyUpdateLuckyBoxSource(uintptr_t luckyBoxSource) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41C4258))(0, luckyBoxSource);
	}
	template <typename T = uintptr_t> static T get_GetCurrentLuckyBoxSuource() {
		return ((T (*)(void *))(Il2CppBase() + 0x41C43A0))(0);
	}
	template <typename T = void> static T SecondPurchaseConfirmationByGoogID(int32_t index, int32_t goodId) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x41C4450))(0, index, goodId);
	}
	template <typename T = void> static T SecondPurchaseConfirmationByShopID(int32_t index, int32_t shopId) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x41C4AFC))(0, index, shopId);
	}
	template <typename T = void> static T SecondPurchaseConfirmation(int32_t index, uintptr_t CodmShopItem) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x41C45B8))(0, index, CodmShopItem);
	}
	template <typename T = void> static T OpenTreasureBoxNavigation(uintptr_t navData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41C4C64))(0, navData);
	}

};

}
