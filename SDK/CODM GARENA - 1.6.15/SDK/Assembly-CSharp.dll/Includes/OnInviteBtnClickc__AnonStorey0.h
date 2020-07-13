#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnInviteBtnClickcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnInviteBtnClick>c__AnonStorey0"));
	}

	template <typename T = uint64_t> T& mPlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(OnInviteBtnClickcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x1D5A424))(this, it);
	}

};

}
