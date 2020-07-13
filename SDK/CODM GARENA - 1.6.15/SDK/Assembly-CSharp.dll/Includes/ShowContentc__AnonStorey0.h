#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowContentcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ShowContent>c__AnonStorey0"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Hitters() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Teammates() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsBR() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsMP() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& IsFFA() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(ShowContentcAnonStorey0*))(Il2CppBase() + 0x3AC13F8))(this);
	}

};

}
