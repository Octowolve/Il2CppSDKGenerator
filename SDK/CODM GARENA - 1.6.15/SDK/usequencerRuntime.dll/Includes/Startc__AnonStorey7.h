#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<Start>c__AnonStorey7"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__2F() {
		return ((T (*)(StartcAnonStorey7*))(Il2CppBase() + 0x485C598))(this);
	}
	template <typename T = void> T m__30(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x485C5C0))(this, sequence);
	}
	template <typename T = void> T m__31(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x485C638))(this, sequence);
	}
	template <typename T = void> T m__32(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x485C668))(this, sequence);
	}
	template <typename T = void> T m__33(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x485C698))(this, sequence);
	}
	template <typename T = void> T m__34(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x485C6C8))(this, sequence);
	}

};

}
