#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshPlayerListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshPlayerList>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshPlayerListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2CF6A68))(this, it);
	}

};

}
