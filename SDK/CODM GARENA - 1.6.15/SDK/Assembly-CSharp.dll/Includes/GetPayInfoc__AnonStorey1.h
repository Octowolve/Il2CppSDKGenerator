#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPayInfocAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPayInfo>c__AnonStorey1"));
	}

	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetPayInfocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x16D2CC4))(this, x);
	}

};

}
