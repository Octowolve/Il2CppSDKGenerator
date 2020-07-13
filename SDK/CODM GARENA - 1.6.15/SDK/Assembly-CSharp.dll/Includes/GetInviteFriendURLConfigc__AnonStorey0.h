#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetInviteFriendURLConfigcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetInviteFriendURLConfig>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& situationType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetInviteFriendURLConfigcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3765AFC))(this, x);
	}

};

}
