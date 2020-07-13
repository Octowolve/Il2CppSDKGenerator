#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateLuckyDrawItemInfocAnonStoreyC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateLuckyDrawItemInfo>c__AnonStoreyC"));
	}

	template <typename T = uintptr_t> T& buyRes() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(UpdateLuckyDrawItemInfocAnonStoreyC*, uintptr_t))(Il2CppBase() + 0x236B500))(this, x);
	}

};

}
