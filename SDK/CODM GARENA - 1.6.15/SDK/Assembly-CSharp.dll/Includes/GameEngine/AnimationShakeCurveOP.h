#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationShakeCurveOP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationShakeCurveOP"));
	}


	template <typename T = uintptr_t> static T mRotCurveX(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E57B98))(0, mCurves);
	}
	template <typename T = uintptr_t> static T mRotCurveY(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E57C7C))(0, mCurves);
	}
	template <typename T = uintptr_t> static T mRotCurveZ(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E57D60))(0, mCurves);
	}
	template <typename T = uintptr_t> static T mRotCurveW(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E57AB4))(0, mCurves);
	}
	template <typename T = uintptr_t> static T mPositionCurveX(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E57808))(0, mCurves);
	}
	template <typename T = uintptr_t> static T mPositionCurveY(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E578EC))(0, mCurves);
	}
	template <typename T = uintptr_t> static T mPositionCurveZ(uintptr_t mCurves) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E579D0))(0, mCurves);
	}

};

}
