#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationShakeCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationShakeCurve"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mCurves() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& mBefCurves() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mBlendTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mBefTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& mTimeTick() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mStart() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& FEvalPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FEvalRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_mRotCurveX() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B55D0C))(this);
	}
	template <typename T = uintptr_t> T get_mRotCurveY() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B55DF8))(this);
	}
	template <typename T = uintptr_t> T get_mRotCurveZ() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B55EE4))(this);
	}
	template <typename T = uintptr_t> T get_mRotCurveW() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B55FD0))(this);
	}
	template <typename T = uintptr_t> T get_mPositionCurveX() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B560BC))(this);
	}
	template <typename T = uintptr_t> T get_mPositionCurveY() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B561A8))(this);
	}
	template <typename T = uintptr_t> T get_mPositionCurveZ() {
		return ((T (*)(AnimationShakeCurve*))(Il2CppBase() + 0x2B56294))(this);
	}
	template <typename T = void> T SetCurves(uintptr_t clipData, float inBlendTime, float inBefTime, bool forceFinish) {
		return ((T (*)(AnimationShakeCurve*, uintptr_t, float, float, bool))(Il2CppBase() + 0x2B56380))(this, clipData, inBlendTime, inBefTime, forceFinish);
	}
	template <typename T = Il2CppVector3> T LerpEvalPosition(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion) {
		return ((T (*)(AnimationShakeCurve*, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float))(Il2CppBase() + 0x2B56920))(this, inCurve, elapsedTime, duartion);
	}
	template <typename T = Il2CppVector3> static T EvalPosition(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float))(Il2CppBase() + 0x2B56C80))(0, inCurve, elapsedTime, duartion);
	}
	template <typename T = Il2CppQuaternion> T LerpEvalRotation(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(AnimationShakeCurve*, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float, uintptr_t))(Il2CppBase() + 0x2B56E84))(this, inCurve, elapsedTime, duartion, type);
	}
	template <typename T = Il2CppQuaternion> static T EvalRotation(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float, uintptr_t))(Il2CppBase() + 0x2B571F8))(0, inCurve, elapsedTime, duartion, type);
	}
	template <typename T = Il2CppVector3> T EvalPosition_1(float elapsedTime, float duartion) {
		return ((T (*)(AnimationShakeCurve*, float, float))(Il2CppBase() + 0x2B57568))(this, elapsedTime, duartion);
	}
	template <typename T = Il2CppQuaternion> T EvalRotation_1(float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(AnimationShakeCurve*, float, float, uintptr_t))(Il2CppBase() + 0x2B576B4))(this, elapsedTime, duartion, type);
	}

};

}
