#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllExchangeShopItemscAnonStorey14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllExchangeShopItems>c__AnonStorey14"));
	}

	template <typename T = int32_t> T& exchangeShopId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetAllExchangeShopItemscAnonStorey14*, uintptr_t))(Il2CppBase() + 0x236ACBC))(this, x);
	}

};

}
