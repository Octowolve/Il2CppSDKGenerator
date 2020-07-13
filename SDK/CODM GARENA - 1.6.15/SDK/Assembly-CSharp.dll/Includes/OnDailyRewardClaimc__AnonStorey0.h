#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDailyRewardClaimcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDailyRewardClaim>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& seqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnDailyRewardClaimcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x41F6A60))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(OnDailyRewardClaimcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x41F6AAC))(this, it);
	}

};

}
