#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetHiddencAnonStorey8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetHidden>c__AnonStorey8"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(int32_t i) {
		return ((T (*)(GetHiddencAnonStorey8*, int32_t))(Il2CppBase() + 0x480A8A4))(this, i);
	}

};

}
