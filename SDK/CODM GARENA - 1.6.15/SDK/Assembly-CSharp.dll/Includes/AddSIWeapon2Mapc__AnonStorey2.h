#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddSIWeapon2MapcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddSIWeapon2Map>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddSIWeapon2MapcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x392F5C4))(this, it);
	}

};

}
