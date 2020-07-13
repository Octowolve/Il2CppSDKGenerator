#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateShopItemPaymentListcAnonStoreyE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateShopItemPaymentList>c__AnonStoreyE"));
	}

	template <typename T = uint32_t> T& shopID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(UpdateShopItemPaymentListcAnonStoreyE*, uintptr_t))(Il2CppBase() + 0x236B570))(this, x);
	}

};

}
