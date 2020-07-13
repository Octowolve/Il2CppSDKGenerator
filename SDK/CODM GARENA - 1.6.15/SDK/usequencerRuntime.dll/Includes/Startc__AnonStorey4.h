#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("usequencerRuntime.dll", "", "<Start>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__1D() {
		return ((T (*)(StartcAnonStorey4*))(Il2CppBase() + 0x4858B50))(this);
	}
	template <typename T = void> T m__1E(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x4858B78))(this, sequence);
	}
	template <typename T = void> T m__1F(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x4858BB0))(this, sequence);
	}
	template <typename T = void> T m__20(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x4858BE0))(this, sequence);
	}
	template <typename T = void> T m__21(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x4858C10))(this, sequence);
	}
	template <typename T = void> T m__22(uintptr_t sequence) {
		return ((T (*)(StartcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x4858C40))(this, sequence);
	}

};

}
