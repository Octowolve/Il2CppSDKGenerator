#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPlayerLoginOrLogoutcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnPlayerLoginOrLogout>c__AnonStorey4"));
	}

	template <typename T = uint32_t> T& pId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnPlayerLoginOrLogoutcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x3DCE86C))(this, it);
	}

};

}
