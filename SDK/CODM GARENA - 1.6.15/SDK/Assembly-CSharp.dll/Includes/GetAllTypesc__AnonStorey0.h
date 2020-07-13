#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllTypescAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllTypes>c__AnonStorey0"));
	}

	template <typename T = bool> T& exclude_generic_definition() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t type) {
		return ((T (*)(GetAllTypescAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4DD5C34))(this, type);
	}

};

}
