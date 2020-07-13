#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLathel3InitcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_Lathel_3_Init>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLathel3InitcAnonStorey3*))(Il2CppBase() + 0x1F68A10))(this);
	}

};

}
