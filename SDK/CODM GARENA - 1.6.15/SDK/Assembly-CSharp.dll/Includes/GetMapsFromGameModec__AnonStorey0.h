#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMapsFromGameModecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMapsFromGameMode>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMapsFromGameModecAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3779C0C))(this, e);
	}

};

}
