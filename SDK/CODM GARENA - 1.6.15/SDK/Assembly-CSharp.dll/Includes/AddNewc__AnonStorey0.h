#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddNewcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddNew>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& attr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddNewcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2B398F8))(this, it);
	}

};

}
