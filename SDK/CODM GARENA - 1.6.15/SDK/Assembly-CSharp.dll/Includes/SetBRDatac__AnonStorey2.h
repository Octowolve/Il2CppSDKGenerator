#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetBRDatacAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetBRData>c__AnonStorey2"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetBRDatacAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1D0CDE0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(SetBRDatacAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1D0CE2C))(this, x);
	}

};

}
