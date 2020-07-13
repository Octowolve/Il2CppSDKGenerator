#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetMatineeSequencecAnonStorey6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetMatineeSequence>c__AnonStorey6"));
	}

	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetMatineeSequencecAnonStorey6*, uintptr_t))(Il2CppBase() + 0x19C9630))(this, e);
	}

};

}
