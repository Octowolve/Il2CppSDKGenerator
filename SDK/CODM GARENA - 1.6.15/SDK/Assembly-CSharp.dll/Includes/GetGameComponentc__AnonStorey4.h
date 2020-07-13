#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetGameComponentcAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetGameComponent>c__AnonStorey4"));
	}

	template <typename T = uintptr_t> T& inType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(GetGameComponentcAnonStorey4*, uintptr_t))(Il2CppBase() + 0x372ADD0))(this, e);
	}

};

}
