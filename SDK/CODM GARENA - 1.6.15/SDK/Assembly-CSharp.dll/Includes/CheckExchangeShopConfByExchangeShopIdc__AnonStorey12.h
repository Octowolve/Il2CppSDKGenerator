#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckExchangeShopConfByExchangeShopIdcAnonStorey12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckExchangeShopConfByExchangeShopId>c__AnonStorey12"));
	}

	template <typename T = int32_t> T& exchangeShopId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CheckExchangeShopConfByExchangeShopIdcAnonStorey12*, uintptr_t))(Il2CppBase() + 0x236A900))(this, x);
	}

};

}
