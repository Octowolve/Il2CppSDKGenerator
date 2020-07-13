#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicallyModifyProductFirstLevelTabcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DynamicallyModifyProductFirstLevelTab>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& currentShopFirstLevelTab() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t item) {
		return ((T (*)(DynamicallyModifyProductFirstLevelTabcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x23C0DF0))(this, item);
	}
	template <typename T = void> T m__1(uintptr_t item) {
		return ((T (*)(DynamicallyModifyProductFirstLevelTabcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x23C0E24))(this, item);
	}

};

}
