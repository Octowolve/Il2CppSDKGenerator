#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsMapOpencAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsMapOpen>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& mapId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(IsMapOpencAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1AB1D3C))(this, it);
	}

};

}
