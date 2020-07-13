#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WNMidasGetLocalPriceCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WNMidasGetLocalPriceCallback"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MidasPay_MidasGetLocalPriceCallback_OnMidasGetProdcut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T MidasPay_MidasGetLocalPriceCallback_OnMidasGetProdcut(Il2CppDictionary<Il2CppString*, uintptr_t>* result) {
		return ((T (*)(WNMidasGetLocalPriceCallback*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x16D81C4))(this, result);
	}

};

}
