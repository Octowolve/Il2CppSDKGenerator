#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class LongPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "LongPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(LongPlugin*, void*))(Il2CppBase() + 0x44B5680))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(LongPlugin*, void*, bool))(Il2CppBase() + 0x44B5684))(this, t, isRelative);
	}
	template <typename T = int64_t> T ConvertToStartValue(void* t, int64_t value) {
		return ((T (*)(LongPlugin*, void*, int64_t))(Il2CppBase() + 0x44B5780))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(LongPlugin*, void*))(Il2CppBase() + 0x44B578C))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(LongPlugin*, void*))(Il2CppBase() + 0x44B57C8))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, int64_t changeValue) {
		return ((T (*)(LongPlugin*, uintptr_t, float, int64_t))(Il2CppBase() + 0x44B5804))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, int64_t startValue, int64_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(LongPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, int64_t, int64_t, float, bool, uintptr_t))(Il2CppBase() + 0x44B5840))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
