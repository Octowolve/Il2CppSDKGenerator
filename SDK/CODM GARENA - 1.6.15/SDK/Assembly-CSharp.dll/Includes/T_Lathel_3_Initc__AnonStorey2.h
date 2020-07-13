#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TLathel3InitcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_Lathel_3_Init>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& t() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(TLathel3InitcAnonStorey2*))(Il2CppBase() + 0x1F6891C))(this);
	}

};

}
