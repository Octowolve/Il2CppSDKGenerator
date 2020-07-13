#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<Start>c__AnonStorey5"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__23() {
		return ((T (*)(StartcAnonStorey5*))(Il2CppBase() + 0x485A0A4))(this);
	}
	template <typename T = void> T m__24(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x485A0CC))(this, sequence);
	}
	template <typename T = void> T m__25(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x485A0FC))(this, sequence);
	}
	template <typename T = void> T m__26(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x485A12C))(this, sequence);
	}
	template <typename T = void> T m__27(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey5*, uintptr_t))(Il2CppBase() + 0x485A15C))(this, sequence);
	}

};

}
