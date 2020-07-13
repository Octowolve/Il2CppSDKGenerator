#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetMenuBarModecAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetMenuBarMode>c__AnonStorey8"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetMenuBarModecAnonStorey8*, uintptr_t))(Il2CppBase() + 0x1D3D790))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetMenuBarModecAnonStorey8*, uintptr_t))(Il2CppBase() + 0x1D3D7DC))(this, it);
	}

};

}
