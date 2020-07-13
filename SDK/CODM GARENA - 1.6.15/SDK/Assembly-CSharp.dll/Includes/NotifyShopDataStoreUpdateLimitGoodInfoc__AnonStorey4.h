#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotifyShopDataStoreUpdateLimitGoodInfocAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<NotifyShopDataStoreUpdateLimitGoodInfo>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& LimitationGoodsClient() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t item) {
		return ((T (*)(NotifyShopDataStoreUpdateLimitGoodInfocAnonStorey4*, uintptr_t))(Il2CppBase() + 0x236B420))(this, item);
	}

};

}
