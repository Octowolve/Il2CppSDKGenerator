#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDatacAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetData>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& seasonNoClient() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetDatacAnonStorey2*, uintptr_t))(Il2CppBase() + 0x49274F8))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetDatacAnonStorey2*, uintptr_t))(Il2CppBase() + 0x4927570))(this, it);
	}

};

}
