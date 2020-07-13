#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetNtfStateByFriendIDcAnonStorey1D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetNtfStateByFriendID>c__AnonStorey1D"));
	}

	template <typename T = uint64_t> T& friendID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetNtfStateByFriendIDcAnonStorey1D*, uintptr_t))(Il2CppBase() + 0x329A858))(this, it);
	}

};

}
