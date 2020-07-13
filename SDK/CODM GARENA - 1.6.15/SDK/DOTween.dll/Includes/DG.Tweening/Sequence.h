#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening {

class Sequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening", "Sequence"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sequencedTweens() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sequencedObjs() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& lastTweenInsertTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> static T DoPrepend(uintptr_t inSequence, uintptr_t t) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C0E7C))(0, inSequence, t);
	}
	template <typename T = uintptr_t> static T DoInsert(uintptr_t inSequence, uintptr_t t, float atPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44C0FE4))(0, inSequence, t, atPosition);
	}
	template <typename T = uintptr_t> static T DoAppendInterval(uintptr_t inSequence, float interval) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x44C117C))(0, inSequence, interval);
	}
	template <typename T = uintptr_t> static T DoPrependInterval(uintptr_t inSequence, float interval) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x44C11B0))(0, inSequence, interval);
	}
	template <typename T = uintptr_t> static T DoInsertCallback(uintptr_t inSequence, uintptr_t callback, float atPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x44C12DC))(0, inSequence, callback, atPosition);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Sequence*))(Il2CppBase() + 0x44C13F4))(this);
	}
	template <typename T = bool> T Validate() {
		return ((T (*)(Sequence*))(Il2CppBase() + 0x44C14CC))(this);
	}
	template <typename T = bool> T Startup() {
		return ((T (*)(Sequence*))(Il2CppBase() + 0x44C15E0))(this);
	}
	template <typename T = bool> T ApplyTween(float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, uintptr_t updateMode, uintptr_t updateNotice) {
		return ((T (*)(Sequence*, float, int32_t, int32_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C18B4))(this, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode, updateNotice);
	}
	template <typename T = void> static T Setup(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44AD150))(0, s);
	}
	template <typename T = bool> static T DoStartup(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44C15E8))(0, s);
	}
	template <typename T = bool> static T DoApplyTween(uintptr_t s, float prevPosition, int32_t prevCompletedLoops, int32_t newCompletedSteps, bool useInversePosition, uintptr_t updateMode) {
		return ((T (*)(void *, uintptr_t, float, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x44C18EC))(0, s, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode);
	}
	template <typename T = bool> static T ApplyInternalCycle(uintptr_t s, float fromPos, float toPos, uintptr_t updateMode, bool useInverse, bool prevPosIsInverse, bool multiCycleStep) {
		return ((T (*)(void *, uintptr_t, float, float, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x44C1BE8))(0, s, fromPos, toPos, updateMode, useInverse, prevPosIsInverse, multiCycleStep);
	}
	template <typename T = int32_t> static T SortSequencedObjs(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44C221C))(0, a, b);
	}

};

}
