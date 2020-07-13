#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkBasePathGetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkBasePathGetter"));
	}


	template <typename T = Il2CppString*> static T GetPlatformName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2C2D0))(0);
	}
	template <typename T = Il2CppString*> static T GetPlatformBasePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2C3B8))(0);
	}
	template <typename T = Il2CppString*> static T GetFullSoundBankPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2C500))(0);
	}
	template <typename T = Il2CppString*> static T GetExternalSoundBankPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2C608))(0);
	}
	template <typename T = void> static T FixSlashes(uintptr_t path, char separatorChar, char badChar, bool addTrailingSlash) {
		return ((T (*)(void *, uintptr_t, char, char, bool))(Il2CppBase() + 0x4A2C744))(0, path, separatorChar, badChar, addTrailingSlash);
	}
	template <typename T = void> static T FixSlashes_1(uintptr_t path) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A2C530))(0, path);
	}
	template <typename T = Il2CppString*> static T GetSoundbankBasePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2BD44))(0);
	}
	template <typename T = Il2CppString*> static T GetExernalPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A2C95C))(0);
	}

};

}
