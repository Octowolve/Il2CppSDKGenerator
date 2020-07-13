#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class EaseFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "EaseFactory"));
	}


	template <typename T = uintptr_t> static T StopMotion(int32_t motionFps, void* ease) {
		return ((T (*)(void *, int32_t, void*))(Il2CppBase() + 0x44AFB6C))(0, motionFps, ease);
	}
	template <typename T = uintptr_t> static T StopMotion_1(int32_t motionFps, uintptr_t animCurve) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x44AFD90))(0, motionFps, animCurve);
	}
	template <typename T = uintptr_t> static T StopMotion_2(int32_t motionFps, uintptr_t customEase) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x44AFC94))(0, motionFps, customEase);
	}

};

}
