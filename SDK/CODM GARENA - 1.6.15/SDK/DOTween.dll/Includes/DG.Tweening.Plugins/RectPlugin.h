#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class RectPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "RectPlugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(RectPlugin*, void*))(Il2CppBase() + 0x44B98B4))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(RectPlugin*, void*, bool))(Il2CppBase() + 0x44B98B8))(this, t, isRelative);
	}
	template <typename T = Il2CppRect> T ConvertToStartValue(void* t, Il2CppRect value) {
		return ((T (*)(RectPlugin*, void*, Il2CppRect))(Il2CppBase() + 0x44B9DD8))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(RectPlugin*, void*))(Il2CppBase() + 0x44B9DF0))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(RectPlugin*, void*))(Il2CppBase() + 0x44B9EF4))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, Il2CppRect changeValue) {
		return ((T (*)(RectPlugin*, uintptr_t, float, Il2CppRect))(Il2CppBase() + 0x44BA008))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, Il2CppRect startValue, Il2CppRect changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(RectPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, Il2CppRect, Il2CppRect, float, bool, uintptr_t))(Il2CppBase() + 0x44BA09C))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
