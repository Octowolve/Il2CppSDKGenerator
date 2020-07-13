#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSequencePlayFinishedcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSequencePlayFinished>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& seq() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(OnSequencePlayFinishedcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x19C9728))(this, e);
	}

};

}
