#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetGoodByGoodIdcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetGoodByGoodId>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& goodId() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetGoodByGoodIdcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x236AD88))(this, it);
	}

};

}
