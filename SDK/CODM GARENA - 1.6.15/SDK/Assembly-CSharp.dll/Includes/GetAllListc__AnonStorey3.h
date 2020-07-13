#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetAllListcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetAllList>c__AnonStorey3"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(GetAllListcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x462EC48))(this, x);
	}

};

}
