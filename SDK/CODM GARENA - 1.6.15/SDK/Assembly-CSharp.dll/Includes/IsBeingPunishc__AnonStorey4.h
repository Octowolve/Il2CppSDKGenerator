#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsBeingPunishcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsBeingPunish>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t v) {
		return ((T (*)(IsBeingPunishcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x19AA2F8))(this, v);
	}

};

}
