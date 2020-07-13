#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetInviteJoinTimecAnonStorey18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetInviteJoinTime>c__AnonStorey18"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetInviteJoinTimecAnonStorey18*, uintptr_t))(Il2CppBase() + 0x329B760))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(SetInviteJoinTimecAnonStorey18*, uintptr_t))(Il2CppBase() + 0x329B7A4))(this, it);
	}

};

}
