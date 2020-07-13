#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class FloatPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "FloatPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(FloatPlugin*, void*))(Il2CppBase() + 0x44B4D9C))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(FloatPlugin*, void*, bool))(Il2CppBase() + 0x44B4DA0))(this, t, isRelative);
	}
	template <typename T = float> T ConvertToStartValue(void* t, float value) {
		return ((T (*)(FloatPlugin*, void*, float))(Il2CppBase() + 0x44B4F4C))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(FloatPlugin*, void*))(Il2CppBase() + 0x44B4F54))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(FloatPlugin*, void*))(Il2CppBase() + 0x44B4F80))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, float changeValue) {
		return ((T (*)(FloatPlugin*, uintptr_t, float, float))(Il2CppBase() + 0x44B4FAC))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, float startValue, float changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(FloatPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, float, float, float, bool, uintptr_t))(Il2CppBase() + 0x44B4FCC))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
