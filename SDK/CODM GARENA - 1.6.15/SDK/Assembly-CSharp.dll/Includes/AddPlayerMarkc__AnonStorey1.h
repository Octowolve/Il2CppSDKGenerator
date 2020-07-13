#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddPlayerMarkcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AddPlayerMark>c__AnonStorey1"));
	}

	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(AddPlayerMarkcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x19264F0))(this, it);
	}

};

}
