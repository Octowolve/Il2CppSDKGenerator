#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTeamPlayerListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetTeamPlayerList>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& localPlayerDS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& playerRestrict() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& playerInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetTeamPlayerListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3A13FB0))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetTeamPlayerListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3A14014))(this, it);
	}

};

}
