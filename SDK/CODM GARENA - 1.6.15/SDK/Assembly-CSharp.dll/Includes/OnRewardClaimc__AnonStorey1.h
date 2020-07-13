#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnRewardClaimcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnRewardClaim>c__AnonStorey1"));
	}

	template <typename T = uint64_t> T& missionSeqId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnRewardClaimcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x41F6AF8))(this, it);
	}

};

}
