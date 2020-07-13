#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<Start>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__16() {
		return ((T (*)(StartcAnonStorey3*))(Il2CppBase() + 0x4857774))(this);
	}
	template <typename T = void> T m__17(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x485779C))(this, sequence);
	}
	template <typename T = void> T m__18(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x4857828))(this, sequence);
	}
	template <typename T = void> T m__19(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x4857858))(this, sequence);
	}
	template <typename T = void> T m__1A(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x4857888))(this, sequence);
	}
	template <typename T = void> T m__1B(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x48578B8))(this, sequence);
	}

};

}
