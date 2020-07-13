#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLathel1InitcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_Lathel_1_Init>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLathel1InitcAnonStorey2*))(Il2CppBase() + 0x1A493AC))(this);
	}

};

}
