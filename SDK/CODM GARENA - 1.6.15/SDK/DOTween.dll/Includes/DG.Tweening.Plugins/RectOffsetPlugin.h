#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class RectOffsetPlugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "RectOffsetPlugin"));
	}

	template <typename T = uintptr_t> static T& _r() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset(void* t) {
		return ((T (*)(RectOffsetPlugin*, void*))(Il2CppBase() + 0x44B8720))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(RectOffsetPlugin*, void*, bool))(Il2CppBase() + 0x44B8750))(this, t, isRelative);
	}
	template <typename T = uintptr_t> T ConvertToStartValue(void* t, uintptr_t value) {
		return ((T (*)(RectOffsetPlugin*, void*, uintptr_t))(Il2CppBase() + 0x44B8930))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(RectOffsetPlugin*, void*))(Il2CppBase() + 0x44B8A2C))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(RectOffsetPlugin*, void*))(Il2CppBase() + 0x44B8B4C))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uintptr_t changeValue) {
		return ((T (*)(RectOffsetPlugin*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44B8CF0))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uintptr_t startValue, uintptr_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(RectOffsetPlugin*, uintptr_t, uintptr_t, bool, void*, void*, float, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x44B8D8C))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
