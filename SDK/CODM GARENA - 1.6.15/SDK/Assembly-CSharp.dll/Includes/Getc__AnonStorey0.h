#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Get>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& tutorialType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& tutorialEventType() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4645650))(this, x);
	}

};

}
