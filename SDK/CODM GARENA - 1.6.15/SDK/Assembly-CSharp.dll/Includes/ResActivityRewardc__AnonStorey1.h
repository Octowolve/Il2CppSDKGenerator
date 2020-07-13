#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResActivityRewardcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ResActivityReward>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(ResActivityRewardcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3531EC8))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(ResActivityRewardcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3531F2C))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(ResActivityRewardcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3531F78))(this, it);
	}

};

}
