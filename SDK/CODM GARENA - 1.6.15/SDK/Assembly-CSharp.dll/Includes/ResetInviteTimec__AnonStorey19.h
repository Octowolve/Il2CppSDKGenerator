#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResetInviteTimecAnonStorey19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ResetInviteTime>c__AnonStorey19"));
	}

	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ResetInviteTimecAnonStorey19*, uintptr_t))(Il2CppBase() + 0x329B508))(this, it);
	}

};

}
