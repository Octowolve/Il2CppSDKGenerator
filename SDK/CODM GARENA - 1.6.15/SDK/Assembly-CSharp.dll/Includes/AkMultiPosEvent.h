#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMultiPosEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMultiPosEvent"));
	}

	template <typename T = bool> T& eventIsPlaying() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& list() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T FinishedPlaying(uintptr_t in_cookie, uintptr_t in_type, uintptr_t in_info) {
		return ((T (*)(AkMultiPosEvent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x490F9F8))(this, in_cookie, in_type, in_info);
	}

};

}
