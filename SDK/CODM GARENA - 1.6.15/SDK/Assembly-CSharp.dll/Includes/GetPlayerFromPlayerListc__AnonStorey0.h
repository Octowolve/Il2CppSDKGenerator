#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetPlayerFromPlayerListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetPlayerFromPlayerList>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& seatIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetPlayerFromPlayerListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2D23B04))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetPlayerFromPlayerListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2D23B48))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(GetPlayerFromPlayerListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2D23B8C))(this, it);
	}

};

}
