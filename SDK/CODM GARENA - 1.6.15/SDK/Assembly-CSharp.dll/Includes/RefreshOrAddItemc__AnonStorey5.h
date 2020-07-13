#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshOrAddItemcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshOrAddItem>c__AnonStorey5"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshOrAddItemcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x3DCE908))(this, it);
	}

};

}
