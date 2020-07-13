#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetGuildWeekPrizecAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetGuildWeekPrize>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& per() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetGuildWeekPrizecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3BB1194))(this, x);
	}
	template <typename T = bool> T m__1(uintptr_t x) {
		return ((T (*)(GetGuildWeekPrizecAnonStorey1*, uintptr_t))(Il2CppBase() + 0x3BB1250))(this, x);
	}

};

}
