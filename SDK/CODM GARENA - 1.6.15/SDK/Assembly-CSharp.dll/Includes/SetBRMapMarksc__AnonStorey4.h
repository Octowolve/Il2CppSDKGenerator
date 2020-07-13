#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBRMapMarkscAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBRMapMarks>c__AnonStorey4"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$3() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetBRMapMarkscAnonStorey4*, uintptr_t))(Il2CppBase() + 0x1926594))(this, it);
	}

};

}
