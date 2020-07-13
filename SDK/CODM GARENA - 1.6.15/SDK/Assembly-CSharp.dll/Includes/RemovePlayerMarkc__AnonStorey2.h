#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemovePlayerMarkcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemovePlayerMark>c__AnonStorey2"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RemovePlayerMarkcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1926560))(this, it);
	}

};

}
