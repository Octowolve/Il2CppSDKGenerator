#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetMatchInfocAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetMatchInfo>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t s) {
		return ((T (*)(SetMatchInfocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2A3C954))(this, s);
	}
	template <typename T = bool> T m__1(uintptr_t s) {
		return ((T (*)(SetMatchInfocAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2A3C9B0))(this, s);
	}

};

}
