#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMusiccAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayMusic>c__AnonStorey0"));
	}

	template <typename T = Il2CppString*> T& audioID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayMusiccAnonStorey0*))(Il2CppBase() + 0x4A52D10))(this);
	}

};

}
