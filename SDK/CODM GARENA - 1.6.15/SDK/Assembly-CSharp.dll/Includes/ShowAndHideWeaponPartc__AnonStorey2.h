#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowAndHideWeaponPartcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowAndHideWeaponPart>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(int32_t s) {
		return ((T (*)(ShowAndHideWeaponPartcAnonStorey2*, int32_t))(Il2CppBase() + 0x2EB2DA8))(this, s);
	}
	template <typename T = bool> T m__1(int32_t s) {
		return ((T (*)(ShowAndHideWeaponPartcAnonStorey2*, int32_t))(Il2CppBase() + 0x2EB2DBC))(this, s);
	}

};

}
