#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadMuzzleFlashcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadMuzzleFlash>c__AnonStorey3"));
	}

	template <typename T = Il2CppString*> T& socketName() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(LoadMuzzleFlashcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x2EB2CD0))(this, x);
	}

};

}
