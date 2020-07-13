#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class DoublePlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "DoublePlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(DoublePlugin*, void*))(Il2CppBase() + 0x44B4A00))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(DoublePlugin*, void*, bool))(Il2CppBase() + 0x44B4A04))(this, t, isRelative);
	}
	template <typename T = double> T ConvertToStartValue(void* t, double value) {
		return ((T (*)(DoublePlugin*, void*, double))(Il2CppBase() + 0x44B4B04))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(DoublePlugin*, void*))(Il2CppBase() + 0x44B4B10))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(DoublePlugin*, void*))(Il2CppBase() + 0x44B4B3C))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, double changeValue) {
		return ((T (*)(DoublePlugin*, uintptr_t, float, double))(Il2CppBase() + 0x44B4B68))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, double startValue, double changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(DoublePlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, double, double, float, bool, uintptr_t))(Il2CppBase() + 0x44B4B8C))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
