#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLathel2InitcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_Lathel_2_Init>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLathel2InitcAnonStorey0*))(Il2CppBase() + 0x1A2BB5C))(this);
	}

};

}
