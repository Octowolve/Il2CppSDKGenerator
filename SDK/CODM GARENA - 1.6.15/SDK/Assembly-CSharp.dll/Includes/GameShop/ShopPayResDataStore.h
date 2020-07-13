#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopPayResDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopPayResDataStore"));
	}

	template <typename T = uintptr_t> T& m_PaymentRes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_PaymentResult() {
		return ((T (*)(ShopPayResDataStore*))(Il2CppBase() + 0x2358F14))(this);
	}
	template <typename T = void> T SetRes(uintptr_t res) {
		return ((T (*)(ShopPayResDataStore*, uintptr_t))(Il2CppBase() + 0x23A0FF4))(this, res);
	}

};

}
