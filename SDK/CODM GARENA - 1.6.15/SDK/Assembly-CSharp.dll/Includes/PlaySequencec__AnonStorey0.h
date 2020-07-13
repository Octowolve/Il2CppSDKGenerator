#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaySequencecAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlaySequence>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& seq() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlaySequencecAnonStorey0*))(Il2CppBase() + 0x19C9750))(this);
	}

};

}
