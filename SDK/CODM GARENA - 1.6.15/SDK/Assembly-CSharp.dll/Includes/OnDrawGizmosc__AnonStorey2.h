#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnDrawGizmoscAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnDrawGizmos>c__AnonStorey2"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& listAllLines() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t x) {
		return ((T (*)(OnDrawGizmoscAnonStorey2*, uintptr_t))(Il2CppBase() + 0x44EDC6C))(this, x);
	}
	template <typename T = void> T m__1(uintptr_t x) {
		return ((T (*)(OnDrawGizmoscAnonStorey2*, uintptr_t))(Il2CppBase() + 0x44EDD10))(this, x);
	}

};

}
