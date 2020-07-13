#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DetectLinescAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DetectLines>c__AnonStorey1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AllColliders() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t x) {
		return ((T (*)(DetectLinescAnonStorey1*, uintptr_t))(Il2CppBase() + 0x44EDA4C))(this, x);
	}

};

}
