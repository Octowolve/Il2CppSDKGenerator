#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetInviteLoginFlagcAnonStorey17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetInviteLoginFlag>c__AnonStorey17"));
	}

	template <typename T = uint64_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetInviteLoginFlagcAnonStorey17*, uintptr_t))(Il2CppBase() + 0x329B7F0))(this, it);
	}

};

}
