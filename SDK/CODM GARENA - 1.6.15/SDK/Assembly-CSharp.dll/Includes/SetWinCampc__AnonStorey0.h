#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetWinCampcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetWinCamp>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetWinCampcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2A3C9F4))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(SetWinCampcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2A3CA38))(this, s);
	}
	template <typename T = bool> T m__2(uintptr_t s) {
		return ((T (*)(SetWinCampcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x2A3CA94))(this, s);
	}

};

}
