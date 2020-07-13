#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WNMidasQueryPromotionCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WNMidasQueryPromotionCallback"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPay_MidasQueryPromotionCallback_OnQueryPromotionCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T MidasPay_MidasQueryPromotionCallback_OnQueryPromotionCallback(Il2CppString* result) {
		return ((T (*)(WNMidasQueryPromotionCallback*, Il2CppString*))(Il2CppBase() + 0x16D935C))(this, result);
	}

};

}
