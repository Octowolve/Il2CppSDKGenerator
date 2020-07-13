#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColorWithStringcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ColorWithString>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& valid() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(char c) {
		return ((T (*)(ColorWithStringcAnonStorey0*, char))(Il2CppBase() + 0x4814BD8))(this, c);
	}

};

}
