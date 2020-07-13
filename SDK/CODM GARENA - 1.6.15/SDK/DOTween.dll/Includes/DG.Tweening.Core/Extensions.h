#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Core {

class Extensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Core", "Extensions"));
	}


	template <typename T = uintptr_t> static T SetSpecialStartupMode(uintptr_t t, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33491F8))(0, t, mode);
	}
	template <typename T = void*> static T NoFrom(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1B47084))(0, t);
	}
	template <typename T = void*> static T Blendable(void* t) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1B4700C))(0, t);
	}

};

}
