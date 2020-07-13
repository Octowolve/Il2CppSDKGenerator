#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetUselessBasiccAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetUselessBasic>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetUselessBasiccAnonStorey0*, uintptr_t))(Il2CppBase() + 0x28E3D50))(this, it);
	}

};

}
