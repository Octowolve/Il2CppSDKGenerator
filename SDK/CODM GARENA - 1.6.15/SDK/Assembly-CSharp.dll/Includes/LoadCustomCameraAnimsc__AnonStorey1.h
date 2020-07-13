#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadCustomCameraAnimscAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadCustomCameraAnims>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(LoadCustomCameraAnimscAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2D6AC40))(this, it);
	}

};

}
