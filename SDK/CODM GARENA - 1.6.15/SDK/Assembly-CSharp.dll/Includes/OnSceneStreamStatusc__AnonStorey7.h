#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSceneStreamStatuscAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSceneStreamStatus>c__AnonStorey7"));
	}

	template <typename T = uintptr_t> T& streamParam() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(OnSceneStreamStatuscAnonStorey7*, uintptr_t))(Il2CppBase() + 0x4AA51DC))(this, e);
	}

};

}
