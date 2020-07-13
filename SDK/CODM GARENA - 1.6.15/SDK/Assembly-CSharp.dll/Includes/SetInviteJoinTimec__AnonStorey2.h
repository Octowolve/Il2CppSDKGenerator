#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetInviteJoinTimecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetInviteJoinTime>c__AnonStorey2"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetInviteJoinTimecAnonStorey2*, uintptr_t))(Il2CppBase() + 0x3BD1FAC))(this, it);
	}

};

}
