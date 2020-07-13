#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetInheritedcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetInherited>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t i) {
		return ((T (*)(GetInheritedcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x480A8B8))(this, i);
	}

};

}
