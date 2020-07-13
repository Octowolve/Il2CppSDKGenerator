#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HasActioncAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<HasAction>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(HasActioncAnonStorey2*, uintptr_t))(Il2CppBase() + 0x33CF1C0))(this, e);
	}

};

}
