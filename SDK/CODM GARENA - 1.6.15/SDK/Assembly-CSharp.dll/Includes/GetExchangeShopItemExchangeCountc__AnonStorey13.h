#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetExchangeShopItemExchangeCountcAnonStorey13
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetExchangeShopItemExchangeCount>c__AnonStorey13"));
	}

	template <typename T = int32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetExchangeShopItemExchangeCountcAnonStorey13*, uintptr_t))(Il2CppBase() + 0x236AD44))(this, x);
	}

};

}
