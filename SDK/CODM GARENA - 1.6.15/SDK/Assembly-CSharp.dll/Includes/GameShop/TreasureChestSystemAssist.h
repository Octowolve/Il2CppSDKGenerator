#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class TreasureChestSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "TreasureChestSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqBoxShopGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShopGetRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShopBuyRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoxShopColorGroupProbRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ReqBoxShopGet() {
		return ((T (*)(TreasureChestSystemAssist*))(Il2CppBase() + 0x2D5F810))(this);
	}
	template <typename T = bool> T OnBoxShopGetRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(TreasureChestSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D5F8D8))(this, message, errStr);
	}
	template <typename T = bool> T OnBoxShopBuyRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(TreasureChestSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D5F9CC))(this, message, errStr);
	}
	template <typename T = bool> T OnBoxShopColorGroupProbRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(TreasureChestSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D5FAC0))(this, message, errStr);
	}

};

}
