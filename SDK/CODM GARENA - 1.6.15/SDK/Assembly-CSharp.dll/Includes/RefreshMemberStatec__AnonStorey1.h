#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RefreshMemberStatecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RefreshMemberState>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RefreshMemberStatecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3BD1F1C))(this, it);
	}

};

}
