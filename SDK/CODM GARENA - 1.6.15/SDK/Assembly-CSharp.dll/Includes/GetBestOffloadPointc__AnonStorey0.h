#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBestOffloadPointcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBestOffloadPoint>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& pawn() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& seat() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t element) {
		return ((T (*)(GetBestOffloadPointcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2777A6C))(this, element);
	}
	template <typename T = float> T m__1(Il2CppVector3 point) {
		return ((T (*)(GetBestOffloadPointcAnonStorey0*, Il2CppVector3))(Il2CppBase() + 0x2777B38))(this, point);
	}

};

}
