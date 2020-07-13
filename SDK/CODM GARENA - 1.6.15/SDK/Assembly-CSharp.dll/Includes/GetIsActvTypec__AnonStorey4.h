#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetIsActvTypecAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetIsActvType>c__AnonStorey4"));
	}

	template <typename T = double> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetIsActvTypecAnonStorey4*, uintptr_t))(Il2CppBase() + 0x434457C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetIsActvTypecAnonStorey4*, uintptr_t))(Il2CppBase() + 0x43445B4))(this, it);
	}

};

}
