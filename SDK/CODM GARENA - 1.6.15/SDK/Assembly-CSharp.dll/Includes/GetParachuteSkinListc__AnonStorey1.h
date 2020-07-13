#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetParachuteSkinListcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetParachuteSkinList>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& csv() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetParachuteSkinListcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1A3E2F0))(this, it);
	}

};

}
