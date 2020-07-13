#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopPaymentInfoWithIndex
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopPaymentInfoWithIndex"));
	}

	template <typename T = uintptr_t> T& m_shopPaymentInfo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_GetShopPaymentInfo() {
		return ((T (*)(ShopPaymentInfoWithIndex*))(Il2CppBase() + 0x239A198))(this);
	}
	template <typename T = int32_t> T get_GetIndex() {
		return ((T (*)(ShopPaymentInfoWithIndex*))(Il2CppBase() + 0x239A1A0))(this);
	}

};

}
