#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetCurrentMaterialArraycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetCurrentMaterialArray>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t p) {
		return ((T (*)(GetCurrentMaterialArraycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4189C34))(this, p);
	}

};

}
