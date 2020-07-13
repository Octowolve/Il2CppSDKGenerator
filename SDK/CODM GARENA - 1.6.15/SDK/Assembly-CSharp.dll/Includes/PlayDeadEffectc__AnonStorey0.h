#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayDeadEffectcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayDeadEffect>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& _DieEffect() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayDeadEffectcAnonStorey0*))(Il2CppBase() + 0x348FCFC))(this);
	}

};

}
