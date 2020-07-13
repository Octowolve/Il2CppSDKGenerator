#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCutSceneStartedcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnCutSceneStarted>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& seq() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(OnCutSceneStartedcAnonStorey4*))(Il2CppBase() + 0x19C96F4))(this);
	}

};

}
