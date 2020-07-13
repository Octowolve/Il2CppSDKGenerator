#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitViewcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitView>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& ds() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(InitViewcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3ABEA3C))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(InitViewcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3ABEA88))(this, s);
	}

};

}
