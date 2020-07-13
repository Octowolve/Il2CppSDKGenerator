#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PartlyUpdateFriendGuildInfocAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PartlyUpdateFriendGuildInfo>c__AnonStorey6"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(PartlyUpdateFriendGuildInfocAnonStorey6*, uintptr_t))(Il2CppBase() + 0x329AA9C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(PartlyUpdateFriendGuildInfocAnonStorey6*, uintptr_t))(Il2CppBase() + 0x329AB28))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(PartlyUpdateFriendGuildInfocAnonStorey6*, uintptr_t))(Il2CppBase() + 0x329ABB4))(this, it);
	}

};

}
