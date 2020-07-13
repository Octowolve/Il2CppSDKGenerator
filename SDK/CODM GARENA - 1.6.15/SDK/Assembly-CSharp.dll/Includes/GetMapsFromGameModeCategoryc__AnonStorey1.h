#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMapsFromGameModeCategorycAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMapsFromGameModeCategory>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& gameCategory() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMapsFromGameModeCategorycAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3779CE4))(this, e);
	}

};

}
