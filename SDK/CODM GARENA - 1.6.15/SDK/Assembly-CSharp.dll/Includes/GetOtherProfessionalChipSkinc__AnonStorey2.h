#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetOtherProfessionalChipSkincAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetOtherProfessionalChipSkin>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& weaponID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetOtherProfessionalChipSkincAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1A3E2A4))(this, it);
	}

};

}
