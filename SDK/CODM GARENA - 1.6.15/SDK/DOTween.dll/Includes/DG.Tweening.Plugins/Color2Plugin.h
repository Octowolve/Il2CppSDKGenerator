#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins {

class Color2Plugin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins", "Color2Plugin"));
	}


	template <typename T = void> T Reset(void* t) {
		return ((T (*)(Color2Plugin*, void*))(Il2CppBase() + 0x44B0060))(this, t);
	}
	template <typename T = void> T SetFrom(void* t, bool isRelative) {
		return ((T (*)(Color2Plugin*, void*, bool))(Il2CppBase() + 0x44B0064))(this, t, isRelative);
	}
	template <typename T = uintptr_t> T ConvertToStartValue(void* t, uintptr_t value) {
		return ((T (*)(Color2Plugin*, void*, uintptr_t))(Il2CppBase() + 0x44B030C))(this, t, value);
	}
	template <typename T = void> T SetRelativeEndValue(void* t) {
		return ((T (*)(Color2Plugin*, void*))(Il2CppBase() + 0x44B0344))(this, t);
	}
	template <typename T = void> T SetChangeValue(void* t) {
		return ((T (*)(Color2Plugin*, void*))(Il2CppBase() + 0x44B0428))(this, t);
	}
	template <typename T = float> T GetSpeedBasedDuration(uintptr_t options, float unitsXSecond, uintptr_t changeValue) {
		return ((T (*)(Color2Plugin*, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x44B0514))(this, options, unitsXSecond, changeValue);
	}
	template <typename T = void> T EvaluateAndApply(uintptr_t options, uintptr_t t, bool isRelative, void* getter, void* setter, float elapsed, uintptr_t startValue, uintptr_t changeValue, float duration, bool usingInversePosition, uintptr_t updateNotice) {
		return ((T (*)(Color2Plugin*, uintptr_t, uintptr_t, bool, void*, void*, float, uintptr_t, uintptr_t, float, bool, uintptr_t))(Il2CppBase() + 0x44B0528))(this, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
	}

};

}
