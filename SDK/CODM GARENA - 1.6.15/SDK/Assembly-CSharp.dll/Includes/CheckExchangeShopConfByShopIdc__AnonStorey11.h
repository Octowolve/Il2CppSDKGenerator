#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckExchangeShopConfByShopIdcAnonStorey11
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CheckExchangeShopConfByShopId>c__AnonStorey11"));
	}

	template <typename T = int32_t> T& ShopId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(CheckExchangeShopConfByShopIdcAnonStorey11*, uintptr_t))(Il2CppBase() + 0x236A944))(this, x);
	}

};

}
