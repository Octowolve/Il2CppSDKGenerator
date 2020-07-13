#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayAniProgress1cAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayAniProgress_1>c__AnonStorey2"));
	}

	template <typename T = float> T& offset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& progressWidth() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayAniProgress1cAnonStorey2*))(Il2CppBase() + 0x2C1E708))(this);
	}

};

}
