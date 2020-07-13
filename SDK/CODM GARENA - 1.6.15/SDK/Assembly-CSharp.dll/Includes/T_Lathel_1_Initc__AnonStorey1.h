#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLathel1InitcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_Lathel_1_Init>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLathel1InitcAnonStorey1*))(Il2CppBase() + 0x1A49284))(this);
	}

};

}
