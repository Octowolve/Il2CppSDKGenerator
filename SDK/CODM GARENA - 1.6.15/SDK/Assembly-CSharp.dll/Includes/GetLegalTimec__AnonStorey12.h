#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetLegalTimecAnonStorey12
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetLegalTime>c__AnonStorey12"));
	}

	template <typename T = int32_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetLegalTimecAnonStorey12*, uintptr_t))(Il2CppBase() + 0x43187A4))(this, it);
	}

};

}
