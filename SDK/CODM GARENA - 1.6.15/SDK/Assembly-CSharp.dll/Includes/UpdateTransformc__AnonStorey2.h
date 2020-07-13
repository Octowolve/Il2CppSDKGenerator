#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateTransformcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateTransform>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& dc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& initRnd() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(UpdateTransformcAnonStorey2*))(Il2CppBase() + 0x3CCD088))(this);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(UpdateTransformcAnonStorey2*))(Il2CppBase() + 0x3CCD19C))(this);
	}

};

}
