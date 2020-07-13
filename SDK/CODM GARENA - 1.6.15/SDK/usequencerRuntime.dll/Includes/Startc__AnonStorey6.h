#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<Start>c__AnonStorey6"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__29() {
		return ((T (*)(StartcAnonStorey6*))(Il2CppBase() + 0x485AEA4))(this);
	}
	template <typename T = void> T m__2A(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x485AECC))(this, sequence);
	}
	template <typename T = void> T m__2B(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x485AF4C))(this, sequence);
	}
	template <typename T = void> T m__2C(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x485AF7C))(this, sequence);
	}
	template <typename T = void> T m__2D(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x485AFAC))(this, sequence);
	}
	template <typename T = void> T m__2E(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey6*, uintptr_t))(Il2CppBase() + 0x485AFDC))(this, sequence);
	}

};

}
